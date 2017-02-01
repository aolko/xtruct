// Main.h
// Definitions and classes for the object workings

// Only include once
#ifndef MAIN_H
#define MAIN_H

#define MINIMUM_VERSION	1

// IDE FLAGS
// Can be a combination of:
//OF_NOSIZE	- Extension cannot be resized at edittime
//OF_NODRAW - Extension does not display anything
//OF_ALLOWANGLES - Can be rotated at edittime
//OF_PRIVATEVARIABLES - Uses private variables
//OF_MOVEMENTPLUGIN - Is a movement plugin
//OF_MOVEMENTS - Allow movement plugins to be added
//OF_EFFECTS - Allow display effects
//OF_NOCOMMONDEBUG - Don't show 'Common' field (X/Y/W/H/Angle/Opacity) in debugger
//OF_NODEBUG - Don't show at all in debugger
//OF_UNDEFINEDEXPRESSIONS - Allow ReturnUndefinedExpression to be called
#define IDE_FLAGS OF_MOVEMENTPLUGIN

#include "..\..\Common\ExpReturn.hpp"

#define OBJECTRECT CRect(editObject->objectX, editObject->objectY, editObject->objectX + editObject->objectWidth, editObject->objectY + editObject->objectHeight)

//////////// RUNTIME OBJECT ////////////
// Add any member functions or data you want to this class.
// Your extension inherits CRunObject.  See the definition
// for the default member values you have access to.
class ExtObject : public CRunObject
{
public:
	// Constructor (called when Construct creates the object)
	ExtObject(initialObject* editObject, VRuntime* pVRuntime);
	// Destructor (called when Construct destroys the object)
	~ExtObject();

	//////////////////////////
	// OnFrame: called once per frame just before Draw() (after the events list)
	// OnFrame2: called once per frame just after Draw() (before the events list)
	BOOL		OnFrame();
	BOOL		OnFrame2();
	// Draw: called when Construct wants you to render your object.
	void		Draw();
	// WindowProc is called if your extension creates a window and calls RegisterWindow().
	LRESULT		WindowProc(HWND hWnd, UINT uMessage, WPARAM wParam, LPARAM lParam);
	BOOL		PreTranslateMessage(MSG* msg);
	// Return default expression editor value and undefined expressions when enabled.
	long		ReturnDefaultValue(LPVAL params, ExpReturn& ret);
	long		ReturnUndefinedExpression(CString& expName, LPVAL params, ExpReturn& ret);
	// Called just after the constructor when your object has been prepared.
	void		OnCreate();
	// Called when a frame changes and your object is global
	void		OnFrameChange(int oldFrame, int newFrame);
	// Called when your object should save/load itself at runtime
	void		Serialize(bin& ar);
	// Data functions
	long		GetData(int id, void* param);
	long		CallFunction(int id, void* param);
	// Debugging
	void		DebuggerUpdateDisplay(ExpStore*& pPrivateVars);
	void		OnDebuggerValueChanged(const char* name, const char* value);

	////////////////////////////////////////////////////
	// ACTIONS, CONDITIONS AND EXPRESSIONS DEFINITIONS
#include "..\..\Common\CommonAceDecl.hpp"

	long cIsMoving		(LPVAL theParams);
	long cOnBounce		(LPVAL theParams);
	long cCompareGravity(LPVAL params);
	long cIsWalking (LPVAL theParams);
	long cIsJumping (LPVAL theParams);
	long cIsFalling (LPVAL theParams);
	long cIsOnGround (LPVAL theParams);
	long cWallLeft(LPVAL theParams);
	long cWallRight(LPVAL theParams);
	long cCeilingAbove(LPVAL theParams);
	long cOnInsideObstacle (LPVAL theParams);

	long aBounce		(LPVAL theParams);
	long aStop			(LPVAL theParams);
	long aSetXSpeed		(LPVAL theParams);
	long aSetYSpeed		(LPVAL theParams);
	long aSetLocalXSpeed(LPVAL theParams);
	long aSetLocalYSpeed(LPVAL theParams);

	long aSetMaxXFloorSpeed	(LPVAL theParams);
	long aSetMaxXAirSpeed	(LPVAL theParams);
	long aSetMaxYSpeed	(LPVAL theParams);
	long aSetFloorAcc	(LPVAL theParams);
	long aSetAirAcc		(LPVAL theParams);
	long aSetFloorDec	(LPVAL theParams);
	long aSetAirDec		(LPVAL theParams);
	long aJump			(LPVAL theParams);
	long aSetInvertControl	(LPVAL theParams);
	long aSetIgnoreInput(LPVAL theParams);
	long aSetActivated(LPVAL theParams);
	long aSetJumpStrength(LPVAL theParams);
	long aSetJumpSustain(LPVAL theParams);
	long aSetGravity	(LPVAL theParams);
	long aSetJumpGravity	(LPVAL theParams);
	long aSetJumpSustainGravity	(LPVAL theParams);
	long aSetGravDir	(LPVAL theParams);
	long aSetFallThroughPlatforms(LPVAL theParams);
	long aSetAdditionalXSpeed(LPVAL theParams);
	long aSetAdditionalYSpeed(LPVAL theParams);
	long aAddToIgnoreList(LPVAL theParams);
	long aRemoveFromIgnoreList(LPVAL theParams);
	long aClearIgnoreList(LPVAL theParams);

	long eSpeed(LPVAL theParams, ExpReturn& ret);
	long eMaxXFloorSpeed(LPVAL theParams, ExpReturn& ret);
	long eMaxXAirSpeed(LPVAL theParams, ExpReturn& ret);
	long eMaxYSpeed(LPVAL theParams, ExpReturn& ret);
	long eAccFloorRate(LPVAL theParams, ExpReturn& ret);
	long eAccAirRate(LPVAL theParams, ExpReturn& ret);
	long eDecFloorRate(LPVAL theParams, ExpReturn& ret);
	long eDecAirRate(LPVAL theParams, ExpReturn& ret);
	long eMovAngle(LPVAL theParams, ExpReturn& ret);
	long eVectorX(LPVAL theParams, ExpReturn& ret);
	long eVectorY(LPVAL theParams, ExpReturn& ret);
	long eLocalVectorX(LPVAL theParams, ExpReturn& ret);
	long eLocalVectorY(LPVAL theParams, ExpReturn& ret);
	long eGrav(LPVAL theParams, ExpReturn& ret);
	long eJumpGrav(LPVAL theParams, ExpReturn &ret);
	long eJumpSustainGrav(LPVAL theParams, ExpReturn &ret);

	long eGravAngle(LPVAL theParams, ExpReturn& ret);
	long eJumpStrength(LPVAL theParams, ExpReturn& ret);
	long eJumpSustain(LPVAL theParams, ExpReturn& ret);
	long eAdditionalXSpeed(LPVAL theParams, ExpReturn& ret);
	long eAdditionalYSpeed(LPVAL theParams, ExpReturn& ret);

	bool IsOnFloor( bool use_p_stand_on_moving_too);
	bool IsOnCeiling();
	bool CanMoveLeft();
	bool CanMoveRight();

	bool IsOverlapping(bool solids_only);
	bool OverlapTest(CRunObject* pObj);

	void SetAnimation(CRunAnimation* pAnim);

	void CheckForPlatformsInside(); // Finds all the platforms that are overlapping our player (and therefore we are inside)
	float round_x_up(float x);
	float round_y_up(float y);
	void PushOutOfPlatformsUpwards();
	void PushOutOfSolids();
	void MovePlayerVertically();
	bool IsJumpingDown();
	bool IsOnPlatformFloor();
	void MoveWithMovingPlatform();
	void LookForMovingPlatformBelow();
	void MovePlayerHorizontally();

	void StopFalling();
	void LimitFallSpeed();
	void ApplyMovingPlatformSpeed();

	bool IsMovingUpwards();

	// At some point the rest of the code should just use these functions
	cr::point WorldToLocal(cr::point v);
	cr::point LocalToWorld(cr::point v);

	cr::point GetWorldSpeed();
	cr::point GetLocalSpeed();

	void SetWorldSpeed(cr::point v);
	void SetLocalSpeed(cr::point v);


	////////////////////////////////////////////////////
	// Data members

	// Key states
	float vk_left, vk_right, vk_jump, vk_down;
	bool ignoringInput;
	bool activated;

	bool action_gothroughplatform;

	CRunObjType* pObstacles;
	CRunObjType* pPlatforms;
	CRunObject* pStandOnMoving;
	bool standing_on_platform;
	float moving_oldx;
	float moving_oldy;
	float moving_olda;

	bool bMove_with_platform;

	float floor_acc;
	float floor_dec;
	float air_acc;
	float air_dec;
	float max_floor_speed;
	float max_air_speed;
	float max_fall;
	float jump_strength;
	float jump_sustain;

	float grav_fall;
	float grav_jump;
	float grav_jump_sustain;

	int grav_dir;
	float inv;
	bool bunnyhop;

	CRunAnimation* stopped;
	CRunAnimation* walking;
	CRunAnimation* jumping;
	CRunAnimation* falling;

	clock_t lastjump;
	bool oldjump;

	bool CanPressDown;

	// Motion vector
	float dx;
	float dy;

	map<CRunObject*, CRunObject*> platforms_inside;

	int player;

	bool autochangeangle;

	float vertical_pixels_moved; // this stores how many pixels we have moved downwards due to slopes or moving platforms to prevent the 'hop' bug

	float additionalSpeedX;
	float additionalSpeedY;

	vector<CRunObjType*> ignorelist; // to store objecttypes to ignore
	bool IsIgnoring(CRunObjType* objtype);   //checks if objecttype is on ignorelist

};

//////////// EDITTIME INFO ////////////
class EditExt
{
public:

	///////////////////////////
	// Class data
	EditExt(class VEditTime* pVEditTime, class editInfo* pEInfo);
	~EditExt();

	void Draw();
	int  GetMenuIcons(int ACEMenu);
	void Initialize();
	void OnPut();
	void OnRemoved();
	int  OnShowACEMenu(TABLE ACEType);
	BOOL OnSizeObject();
	void Serialize(bin& ar);
	void OnPropertiesUpdate();
	void GetAnimationHandle(int& handle);

	class VEditTime* pEditTime;	// Pointer to Virtual Edittime
	class editInfo*  pInfo;		// Pointer to object edittime info

	///////////////////////////
	// Your edittime extension data goes here
	float floor_acc;
	float floor_dec;
	float air_acc;
	float air_dec;
	float max_floor_speed;
	float max_air_speed;
	float max_fall;
	float jump_strength;
	float jump_sustain;
	float grav_fall;
	float grav_jump;
	float grav_jump_sustain;
	int grav_dir;
	float inv;
	bool bunnyhop;

	int player;

	bool autochangeangle;

	bool CanPressDown;
};

// Internal stuff include
#include "..\..\Common\Internal.hpp"
#include "..\..\Common\Properties.h"

// Only include once
#endif