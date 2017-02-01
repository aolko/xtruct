// Runtime.cpp - Runtime implementation of object
//

// Include StdAfx
#include "StdAfx.h"

//////////////////////////////////////////////////////////////////////////////////
// Runtime functions
//////////////////////////////////////////////////////////////////////////////////
#ifdef RUN_ONLY

// ExtObject constructor:
// Only use for class initializer list.  Object initialisation must be done in OnCreate.
ExtObject::ExtObject(initialObject* editObject, VRuntime* pVRuntime)
: renderer(pVRuntime->pRenderer)
{
	pRuntime = pVRuntime;
	info.editObject = editObject;
}

// This is called just after the constructor.  You should perform all loading here.
void ExtObject::OnCreate()
{
	bin ar;
	ar.attach(info.editObject->eData, info.editObject->eSize);

	int Version = 0;
	ar >> Version;

	ImageHandleInfo* imgTexture;
	
	ar >> info.angle;

	if (Version <= 2) {
		D3DCOLOR old;
		ar >> old;
		info.pInfo->filter = cr::color_from_D3DCOLOR<float>(old);
	}
	else
		info.pInfo->filter = info.editObject->eColor;

	imgTexture = pRuntime->LoadSerializedImageHandle(ar);

	if (Version == 1) {
		bool oldSetting;
		ar >> oldSetting;
		grabbingFrame = oldSetting ? 1 : 0;
	}
	else
		ar >> grabbingFrame;

	ar.detach();

	info.w = info.editObject->eWidth;
	info.h = info.editObject->eHeight;
	info.HotSpotX = info.w / 2;
	info.HotSpotY = info.h / 2;
	info.HotSpotAngle = atan(float(info.HotSpotY) / float(info.HotSpotX));
	info.HotSpotDist = sqrt(float(info.HotSpotX * info.HotSpotX + info.HotSpotY * info.HotSpotY));

	info.imgHandle = (ImageHandleInfo*)imgTexture;

	info.x = info.editObject->eX + info.HotSpotX;
	info.y = info.editObject->eY + info.HotSpotY;
	oldRect.SetRect(info.x, info.y, info.x + info.w, info.y + info.h);

	flashTime = 0;
	flashCounter = 0;
	flashInterval = 0;

	textureChanged = false;
	generateMask = false;

	// Use the texture and collision mask of this image handle
	startTexture = renderer->CreateTextureFromHandle(imgTexture);
	info.curTexture = renderer->CreateRenderTargetTexture(info.w, info.h);
	firstFrame = 1;

	// Copy post render
	if (grabbingFrame == 1)
		pRuntime->SetCopyFrameContent(this, info.curTexture, true);

	// Copy pre render
	if (grabbingFrame == 2)
		pRuntime->SetCopyFrameContent(this, info.curTexture, false);

	// Update bounding box
	pRuntime->UpdateBoundingBox(this);

	pfdebug = false;

	SetupPrivateVariableVector(pRuntime, this, privateVars);
}

// Destructor: called when an instance of your object is destroyed.
ExtObject::~ExtObject()
{
	if (grabbingFrame == 1)
		pRuntime->SetCopyFrameContent(this, info.curTexture, true, false);

	if (grabbingFrame == 2)
		pRuntime->SetCopyFrameContent(this, info.curTexture, false, false);

	renderer->ReleaseTexture(info.curTexture);
	renderer->ReleaseTexture(startTexture);
}

// Called every frame for you to update your object if necessary
// Return values: 1 (do not call RTOnFrame again), 0 (continue calling)
// The frame call order goes like this:
// run events -> OnFrame -> Draw -> OnFrame2 -> run events -> ...
BOOL ExtObject::OnFrame()
{
	if (flashTime > 0) {
		flashTime--;
		flashCounter++;
		if (flashCounter >= flashInterval) {
			info.visible = !info.visible;
			flashCounter = 0;			
		}
		if (flashTime == 0)
			info.visible = true;
	}

	// When flashTime reaches zero, 1 returns which removes us from OnFrame callees
	return flashTime == 0;
}

BOOL ExtObject::OnFrame2()
{
	return 1;
}

// Draw: Construct calls this when it wants you to draw your object.  You can
// leave it blank if your extension doesn't draw anything.
void ExtObject::Draw()
{
	CRect curRect;
	curRect.SetRect(info.x, info.y, info.x + info.w, info.y + info.h);
	if (curRect != oldRect) {
		oldRect = curRect;

		if (grabbingFrame == 1) {
			pRuntime->SetCopyFrameContent(this, info.curTexture, true, false);
			renderer->ReleaseTexture(info.curTexture);
			info.curTexture = renderer->CreateRenderTargetTexture(info.w, info.h);
			pRuntime->SetCopyFrameContent(this, info.curTexture, true, true);
			firstFrame = true;
			pRuntime->UpdateBoundingBox(this);
		}
		else if (grabbingFrame == 2) {
			pRuntime->SetCopyFrameContent(this, info.curTexture, false, false);
			renderer->ReleaseTexture(info.curTexture);
			info.curTexture = renderer->CreateRenderTargetTexture(info.w, info.h);
			pRuntime->SetCopyFrameContent(this, info.curTexture, false, true);
			firstFrame = true;
			pRuntime->UpdateBoundingBox(this);
		}
	}




	/*
	if (pfdebug) {
		renderer->SetRenderTarget(info.curTexture);
		renderer->ClearRenderTarget();

		int numCellsH = pLayout->width / pfcellW + 1;
		int numCellsV = pLayout->height / pfcellH + 1;

		// For each pf cell
		for (int x = 0; x < numCellsH; x++) {
			for (int y = 0; y < numCellsV; y++) {
				RECTF rc;
				rc.left = x * pfcellW;
				rc.top = y * pfcellH;
				rc.right = rc.left + pfcellW;
				rc.bottom = rc.top + pfcellH;

				pRuntime->Box(rc, 0x40808080);

				int v = pfMap[y * numCellsH + x];

				if (v == 0)
					pRuntime->Fill(rc, 0x20FFFFFF);
				else {
					pRuntime->Fill(rc, 0x20FF0000);

	//virtual DXFont	CreateFont(const char* fontface, unsigned int pxSize, bool italics, bool bold) = 0;
	//virtual void	DrawText(DXFont iFont, const char* text, RECTF& rc, D3DCOLOR color, DWORD format) = 0;
					static int iFont = pRuntime->CreateFont("Verdana", 10, false, false);
					CString str;
					str.Format("%d", v);
					pRuntime->DrawText(iFont, str, rc, 0xFF000000, DT_LEFT);
				}
			}
		}

		// Render waypoints
		list<CPoint>::iterator i = pWaypoints->begin();
		list<CPoint>::iterator end = pWaypoints->end();

		for ( ; i != end; i++) {
			RECTF rc;
			rc.left = i->x;
			rc.top = i->y;
			rc.right = i->x + 3;
			rc.bottom = i->y + 3;
			pRuntime->Fill(rc, 0xFF0000FF);
		}

		pRuntime->RestoreRenderTarget();
	}
	*/

	// Render the draw queue if anything waiting

	PerformDrawingQueue();
	GenerateCollision();


	renderer->SetTexture(info.curTexture);

	point hotspot(info.HotSpotX, info.HotSpotY);
if (distort.empty()) 
	renderer->Quad_xywh(info.x, info.y, info.w, info.h, info.angle, hotspot, info.pInfo->filter);
else 
		RenderDistorted();
}
float lerp(float a, float b, float x)
{
	return a + x * (b - a);
}

point lerp2D(point a, point b, point i)
{
	return point(lerp(a.x, b.x, i.x), lerp(a.y, b.y, i.y));
}
void ExtObject::RenderDistorted()
{
	// Enable tiling for distort maps.
	cr::samplerstate_value old_addressu = renderer->GetSamplerState(cr::ss_addressu);
	cr::samplerstate_value old_addressv = renderer->GetSamplerState(cr::ss_addressv);

	renderer->SetSamplerState(cr::ss_addressu, cr::ssv_wrap);
	renderer->SetSamplerState(cr::ss_addressv, cr::ssv_wrap);

	const point hotspot(info.HotSpotX, info.HotSpotY);

	rect rc(cr::rect_xywh(info.x, info.y, info.w, info.h));
	quad q;

	if (info.angle == 0.0)
		q = quad(rc - hotspot);
	else
		q = (rc - hotspot).rotate_to_quad(cr::to_radians(info.angle), hotspot);

	rect unrotated_box(rc - hotspot);

	int cx = distort.size();
	int cy = distort.front().size();

	UINT vertex_count = cx * cy;
	UINT index_count = (cx - 1) * (cy - 1) * 6;
	renderer->BeginBatchQuads(vertex_count, index_count);

	for (int y = 0; y < cy - 1; y++) {
		for (int x = 0; x < cx - 1; x++) {
			// Add six indices for this quad
			renderer->AddIndex(x + y * cx);
			renderer->AddIndex((x+1) + y * cx);
			renderer->AddIndex(x + (y+1) * cx);
			renderer->AddIndex(x + (y+1) * cx);
			renderer->AddIndex((x+1) + y * cx);
			renderer->AddIndex((x+1) + (y+1) * cx);
		}
	}

	float xsize = cx;
	float ysize = cy;

	point tex_scale(info.curTexture->xf, info.curTexture->yf);
	//point object_scale_factor(info.w / info.curTexture->image_widthf, info.h / info.curTexture->image_heightf);
	point object_scale_factor(1,1);

	float average_scale_factor = (object_scale_factor.x + object_scale_factor.y) / 2.0f;

	for (int y = 0; y < cy; y++) {
		for (int x = 0; x < cx; x++) {

			const DistortInfo& di = distort[x][y];

			point current_ratio((float)x / (xsize - 1.0f), (float)y / (ysize - 1.0f));
			point p(lerp2D(unrotated_box.topleft(), unrotated_box.bottomright(), current_ratio));
			p += point(di.x * info.w, di.y * info.h) * object_scale_factor;		// xy offset

			if (info.angle != 0.0)
				p.rotate(cr::to_radians(info.angle), info.x, info.y);

			cr::point3d final_pt(p.x, p.y, (di.z + info.pInfo->z_elevation) * average_scale_factor);
			
			point uv_offset(di.u, di.v);
			point uv(current_ratio + uv_offset);

			renderer->AddVertex(final_pt, uv * tex_scale, di.filter * info.pInfo->filter);
		}
	}

	// Restore previous wrap mode
	renderer->SetSamplerState(cr::ss_addressu, old_addressu);
	renderer->SetSamplerState(cr::ss_addressv, old_addressv);
}

// WindowProc:  called when a window message, or WM_COMMAND specifying your window,
// is sent to Construct.  You must call RegisterWindow() before Construct will send
// you messages for the given window.
LRESULT ExtObject::WindowProc(HWND hWnd, UINT uMessage, WPARAM wParam, LPARAM lParam)
{
	return DefWindowProc(hWnd, uMessage, wParam, lParam);
}

BOOL ExtObject::PreTranslateMessage(MSG* msg)
{
	return 0;
}

// For global objects
void ExtObject::OnFrameChange(int oldFrame, int newFrame)
{
	// Do anything your global object needs when the frame changes
	// oldFrame is -1 on start of app, newFrame is -1 on end of app
}

void ExtObject::DebuggerUpdateDisplay(ExpStore*& pPrivateVars)
{
	if (!privateVars.empty())
		pPrivateVars = &(privateVars[0]); 
}

void ExtObject::OnDebuggerValueChanged(const char* name, const char* value)
{
	if (CheckDebugVariableChange(name, value, privateVars, this, pRuntime))
		return;
}

void ExtObject::Serialize(bin& ar)
{
	int Version = 1;
	SerializeVersion(ar, Version);
	// Implement saving/loading of your object
}

long ExtObject::GetData(int id, void* param)
{
	switch (id) {
	// If your extension uses a window, you can return it here
	case GET_WINDOW:
		break;
	}

	return 0;
}

long ExtObject::CallFunction(int id, void* param)
{
	return 0;
}

// Return the Default Value.  This is the value to be returned if your object name
// is used without an expression name, eg. in "Counter + 1".
// Parameters can be passed, eg. MyArray(3,7).
long ExtObject::ReturnDefaultValue(LPVAL theParams, ExpReturn& ret)
{
	if (theParams[0].Type() == EXPTYPE_VARIABLENAME) {
		return ret.ReturnCustom(pRuntime, privateVars[theParams[0].GetVariableIndex(pRuntime, pType)]);
	}
	else return ret = 0;
}

// Called for undefined expression names, if your extension allows it.
// Eg: MyObject.UndefinedExpression(3,4,5) calls this routine with
// "UndefinedExpression" as the expression name.
long ExtObject::ReturnUndefinedExpression(CString& expName, LPVAL theParams, ExpReturn& ret)
{
	return ret = 0;
}

#else //ifdef RUN_ONLY

CRunObject* WINAPI RTCreateObject(bin& ar, VRuntime* pRuntime) 
{
	return NULL;
}

void WINAPI RTDestroyObject(ExtObject* object)
{
}

#endif