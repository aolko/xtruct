// This is part of the Professional User Interface Suite library.
// Copyright (C) 2001-2008 FOSS Software, Inc.
// All rights reserved.
//
// http://www.prof-uis.com
// mailto:support@prof-uis.com
//
// This source code can be used, modified and redistributed
// under the terms of the license agreement that is included
// in the Professional User Interface Suite package.
//
// Warranties and Disclaimers:
// THIS SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND
// INCLUDING, BUT NOT LIMITED TO, WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
// IN NO EVENT WILL FOSS SOFTWARE INC. BE LIABLE FOR ANY DIRECT,
// INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY OR CONSEQUENTIAL DAMAGES,
// INCLUDING DAMAGES FOR LOSS OF PROFITS, LOSS OR INACCURACY OF DATA,
// INCURRED BY ANY PERSON FROM SUCH PERSON'S USAGE OF THIS SOFTWARE
// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

#if (!defined __EXT_PAINT_MANAGER_H)
#define __EXT_PAINT_MANAGER_H

#if (!defined __EXT_MFC_DEF_H)
	#include <ExtMfcDef.h>
#endif // __EXT_MFC_DEF_H

#if (!defined __EXT_CMD_ICON_H)
	#include <ExtCmdIcon.h>
#endif // __EXT_CMD_ICON_H

#if (!defined __AFXTEMPL_H__)
	#include <AfxTempl.h>
#endif

#if (!defined __EXT_MFC_NO_TAB_CTRL)
	#if (!defined __EXT_TABWND_H)
		#include <ExtTabWnd.h>
	#endif
#endif // (!defined __EXT_MFC_NO_TAB_CTRL)

#if (!defined __EXT_PMSYNCHRONIZESINK_H)
	#include "../Src/ExtPmSynchronizeSink.h"
#endif

#define __ExtMfc_CXTEXTMARGIN (-1) // 1
#define __ExtMfc_CYTEXTMARGIN (0)  // 1

#define __EXT_PM_BACK_COMPATIBILITY_COLOR_API
#define __EXT_PM_BACK_COMPATIBILITY_BITMAP_API

class CExtScrollBar;
class CExtBitmap;
class CExtCmdIcon;
class CExtBarButton;
class CExtBarNcAreaButton;
class CExtMiniDockFrameWnd;
class CExtControlBar;
class CExtToolControlBar;
class CExtBarContentExpandButton;
class CExtPopupMenuWnd;
class CExtAnimationParameters;
class CExtAnimationClient;

#ifndef __EXT_MFC_NO_GRIDWND
	class CExtGridCell;
#endif // #ifndef __EXT_MFC_NO_GRIDWND

#ifndef __EXT_MFC_NO_STATUSBAR
	class CExtStatusControlBar;
#endif

#if (!defined __EXT_MFC_NO_DOCK_MARKERS)
	class CExtDynDockMarkerWnd;
#endif

#if (!defined __EXT_MFC_NO_RIBBON_BAR)
	class CExtRibbonButton;
	class CExtRibbonButtonGroup;
	class CExtRibbonButtonToolGroup;
	class CExtRibbonButtonFile;
	class CExtRibbonPage;
	class CExtNcFrameImpl;
	class CExtRibbonButtonQuickAccessContentExpand;
	class CExtRibbonBar;
	class CExtRibbonButtonDialogLauncher;
	class CExtRibbonGalleryInplaceScrollBar;
	class CExtRibbonGalleryWnd;
	class CExtRibbonGalleryPopupMenuWnd;
	class CExtRibbonNodeGallery;
	class CExtRibbonButtonGallery;
#endif

#if (!defined __EXT_MFC_NO_CUSTOMIZE)
	class CExtCustomizeCmdScreenTip;
#endif // (!defined __EXT_MFC_NO_CUSTOMIZE)

#if (!defined __DEFAULT_PAINT_MANAGER_CLASS)
	#define __DEFAULT_PAINT_MANAGER_CLASS CExtPaintManagerXP
#endif

#if (!defined __EXT_MFC_NO_PAGECONTAINER_CTRL)
	class CExtPageContainerWnd;
#endif // (!defined __EXT_MFC_NO_PAGECONTAINER_CTRL)

#define __ExtMfc_WM_THEMECHANGED 0x031A

// AnimateWindow() Flags

#define __EXT_AW_HOR_POSITIVE    0x00000001
#define __EXT_AW_HOR_NEGATIVE    0x00000002
#define __EXT_AW_VER_POSITIVE    0x00000004
#define __EXT_AW_VER_NEGATIVE    0x00000008
#define __EXT_AW_CENTER          0x00000010
#define __EXT_AW_HIDE            0x00010000
#define __EXT_AW_ACTIVATE        0x00020000
#define __EXT_AW_SLIDE           0x00040000
#define __EXT_AW_BLEND           0x00080000

// for layered API

#define __EXT_MFC_LWA_COLORKEY  0x00000001
#define __EXT_MFC_LWA_ALPHA     0x00000002

#define __EXT_MFC_WS_EX_LAYERED 0x00080000

#define __EXT_MFC_ULW_COLORKEY  0x00000001
#define __EXT_MFC_ULW_ALPHA     0x00000002
#define __EXT_MFC_ULW_OPAQUE    0x00000004

#define __EXT_MFC_AC_SRC_OVER   0x00
#define __EXT_MFC_AC_SRC_ALPHA  0x01

// Prof-UIS impl defines

#define __ExtMfc_MIN_SYS_COLOR_VAL	0L
#define __ExtMfc_MAX_SYS_COLOR_VAL	49L

#define __ExtMfc_COLOR_MAP_BASE				1000L
#define __ExtMfc_XP_COLOR_SHIFT				(__ExtMfc_COLOR_MAP_BASE + 1000L)
#define __ExtMfc_2003_COLOR_SHIFT			(__ExtMfc_XP_COLOR_SHIFT + 1000L)
#define __ExtMfc_STUDIO_2005_COLOR_SHIFT	(__ExtMfc_2003_COLOR_SHIFT + 1000L)
#define __ExtMfc_STUDIO_2008_COLOR_SHIFT	(__ExtMfc_STUDIO_2005_COLOR_SHIFT + 1000L)

//#define __ExtMfc_MENU_GAP__ 4

#define __EXT_MENU_ICON_CX 16
#define __EXT_MENU_ICON_CY 16
#define __EXT_MENU_GAP 3
#define __EXT_MENU_MIN_HEIGHT (__EXT_MENU_ICON_CY+__EXT_MENU_GAP*2)
#define __EXT_MENU_POPUP_ARROW_AREA_DX 16
#define __EXT_MENU_IMG_RECT_OUT_GAP 2
#define __EXT_MENU_TOOLBTN_GAP 2

#define __EXT_VERT_FONT_ESCAPEMENT_X__ (900)
#define __EXT_VERT_FONT_ESCAPEMENT__ (2700)

#define __DROPDOWN_ARROW_GAP 3

// PrintWindow() API flags
#define __EXT_MFC_PW_CLIENTONLY 0x00000001

//////////////////////////////////////////////////////////////////////////
// UXTHEME defines
//////////////////////////////////////////////////////////////////////////

// Define API decoration for direct importing of DLL references.
#define __EXT_UX_THEMEAPI(_name_)			HRESULT ( STDAPICALLTYPE * _name_ )
#define __EXT_UX_THEMEAPI_(_type_,_name_)	_type_ ( STDAPICALLTYPE * _name_ )

#define __EXT_UX_DTT_GRAYED                 0x1
#define __EXT_UX_DTT_FLAGS2VALIDBITS        (__EXT_UX_DTT_GRAYED)

#define __EXT_UX_HTTB_BACKGROUNDSEG         0x0000  
#define __EXT_UX_HTTB_FIXEDBORDER           0x0002
#define __EXT_UX_HTTB_CAPTION               0x0004  
#define __EXT_UX_HTTB_RESIZINGBORDER_LEFT   0x0010
#define __EXT_UX_HTTB_RESIZINGBORDER_TOP    0x0020
#define __EXT_UX_HTTB_RESIZINGBORDER_RIGHT  0x0040
#define __EXT_UX_HTTB_RESIZINGBORDER_BOTTOM 0x0080
#define __EXT_UX_HTTB_RESIZINGBORDER \
	(	__EXT_UX_HTTB_RESIZINGBORDER_LEFT \
	|	__EXT_UX_HTTB_RESIZINGBORDER_TOP \
	|	__EXT_UX_HTTB_RESIZINGBORDER_RIGHT \
	|	__EXT_UX_HTTB_RESIZINGBORDER_BOTTOM \
	)
#define __EXT_UX_HTTB_SIZINGTEMPLATE        0x0100
#define __EXT_UX_HTTB_SYSTEMSIZINGMARGINS   0x0200
#define __EXT_UX_MAX_INTLIST_COUNT          10
#define __EXT_UX_ETDT_DISABLE               0x00000001
#define __EXT_UX_ETDT_ENABLE                0x00000002
#define __EXT_UX_ETDT_USETABTEXTURE         0x00000004
#define __EXT_UX_ETDT_ENABLETAB \
	(	__EXT_UX_ETDT_ENABLE \
	|	__EXT_UX_ETDT_USETABTEXTURE \
	)
#define __EXT_UX_STAP_ALLOW_NONCLIENT       (1 << 0)
#define __EXT_UX_STAP_ALLOW_CONTROLS        (1 << 1)
#define __EXT_UX_STAP_ALLOW_WEBCONTENT      (1 << 2)
#define __EXT_UX_SZ_THDOCPROP_DISPLAYNAME   L"DisplayName"
#define __EXT_UX_SZ_THDOCPROP_CANONICALNAME L"ThemeName"
#define __EXT_UX_SZ_THDOCPROP_TOOLTIP       L"ToolTip"
#define __EXT_UX_SZ_THDOCPROP_AUTHOR        L"author"
#define __EXT_UX_DTBG_CLIPRECT              0x00000001
#define __EXT_UX_DTBG_DRAWSOLID             0x00000002
#define __EXT_UX_DTBG_OMITBORDER            0x00000004
#define __EXT_UX_DTBG_OMITCONTENT           0x00000008
#define __EXT_UX_DTBG_COMPUTINGREGION       0x00000010
#define __EXT_UX_DTBG_MIRRORDC              0x00000020

#define __EXT_UX_OTD_FORCE_RECT_SIZING      0x00000001 // make all parts size to rect
#define __EXT_UX_OTD_NONCLIENT              0x00000002 // set if hTheme to be used for nonclient area
#define __EXT_UX_OTD_VALIDBITS              (__EXT_UX_OTD_FORCE_RECT_SIZING|__EXT_UX_OTD_NONCLIENT)

// bits used in dwFlags of DTBGOPTS ----
#define __EXT_UX_DTBG_CLIPRECT              0x00000001  // rcClip has been specified
#define __EXT_UX_DTBG_DRAWSOLID             0x00000002  // DEPRECATED: draw transparent/alpha images as solid
#define __EXT_UX_DTBG_OMITBORDER            0x00000004  // don't draw border of part
#define __EXT_UX_DTBG_OMITCONTENT           0x00000008  // don't draw content area of part
#define __EXT_UX_DTBG_COMPUTINGREGION       0x00000010  // TRUE if calling to compute region
#define __EXT_UX_DTBG_MIRRORDC              0x00000020  // assume the hdc is mirrorred and
														// flip images as appropriate (currently 
			                                            // only supported for bgtype=imagefile)
#define __EXT_UX_DTBG_NOMIRROR              0x00000040  // don't mirror the output, overrides everything else 
#define __EXT_UX_DTBG_VALIDBITS             (__EXT_UX_DTBG_CLIPRECT|__EXT_UX_DTBG_DRAWSOLID      | \
											__EXT_UX_DTBG_OMITBORDER|__EXT_UX_DTBG_OMITCONTENT   | \
											__EXT_UX_DTBG_COMPUTINGREGION|__EXT_UX_DTBG_MIRRORDC | \
											__EXT_UX_DTBG_NOMIRROR)

#define __EXT_UX_DTT_TEXTCOLOR       (1UL << 0)      // crText has been specified
#define __EXT_UX_DTT_BORDERCOLOR     (1UL << 1)      // crBorder has been specified
#define __EXT_UX_DTT_SHADOWCOLOR     (1UL << 2)      // crShadow has been specified
#define __EXT_UX_DTT_SHADOWTYPE      (1UL << 3)      // iTextShadowType has been specified
#define __EXT_UX_DTT_SHADOWOFFSET    (1UL << 4)      // ptShadowOffset has been specified
#define __EXT_UX_DTT_BORDERSIZE      (1UL << 5)      // iBorderSize has been specified
#define __EXT_UX_DTT_FONTPROP        (1UL << 6)      // iFontPropId has been specified
#define __EXT_UX_DTT_COLORPROP       (1UL << 7)      // iColorPropId has been specified
#define __EXT_UX_DTT_STATEID         (1UL << 8)      // IStateId has been specified
#define __EXT_UX_DTT_CALCRECT        (1UL << 9)      // Use pRect as and in/out parameter
#define __EXT_UX_DTT_APPLYOVERLAY    (1UL << 10)     // fApplyOverlay has been specified
#define __EXT_UX_DTT_GLOWSIZE        (1UL << 11)     // iGlowSize has been specified
#define __EXT_UX_DTT_CALLBACK        (1UL << 12)     // pfnDrawTextCallback has been specified
#define __EXT_UX_DTT_COMPOSITED      (1UL << 13)     // Draws text with antialiased alpha (needs a DIB section)
#define __EXT_UX_DTT_VALIDBITS       (__EXT_UX_DTT_TEXTCOLOR    | \
                                      __EXT_UX_DTT_BORDERCOLOR  | \
                                      __EXT_UX_DTT_SHADOWCOLOR  | \
                                      __EXT_UX_DTT_SHADOWTYPE   | \
                                      __EXT_UX_DTT_SHADOWOFFSET | \
                                      __EXT_UX_DTT_BORDERSIZE   | \
                                      __EXT_UX_DTT_FONTPROP     | \
                                      __EXT_UX_DTT_COLORPROP    | \
                                      __EXT_UX_DTT_STATEID      | \
                                      __EXT_UX_DTT_CALCRECT     | \
                                      __EXT_UX_DTT_APPLYOVERLAY | \
                                      __EXT_UX_DTT_GLOWSIZE     | \
                                      __EXT_UX_DTT_COMPOSITED)
#if (defined __EXT_MFC_TEMPLATED_CHARS_IMPLEMENTED)
	#if (defined __EXT_MFC_COMPILED_WITH_NATIVE_WCHAR_T )
		typedef wchar_t * __EXT_UX_LPWSTR;
		typedef const wchar_t * __EXT_UX_LPCWSTR;
	#else
		typedef unsigned short * __EXT_UX_LPWSTR;
		typedef const unsigned short * __EXT_UX_LPCWSTR;
	#endif
#else
		typedef LPWSTR __EXT_UX_LPWSTR;
		typedef LPCWSTR __EXT_UX_LPCWSTR;
#endif

//////////////////////////////////////////////////////////////////////////
// CExtUxTheme class
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtUxTheme
{
public:

	typedef enum __EXT_UX_THEMESIZE
	{
		__EXT_UX_TS_MIN,             // minimum size
		__EXT_UX_TS_TRUE,            // size without stretching
		__EXT_UX_TS_DRAW,            // size that theme mgr will use to draw part
	};

	typedef struct __PROF_UIS_API __EXT_UX__MARGINS
	{
		int cxLeftWidth;             // width of left border that retains its size
		int cxRightWidth;            // width of right border that retains its size
		int cyTopHeight;             // height of top border that retains its size
		int cyBottomHeight;          // height of bottom border that retains its size
	} __EXT_UX_MARGINS, *__EXT_UX_PMARGINS;

	typedef struct __PROF_UIS_API __EXT_UX__INTLIST
	{
		int iValueCount;      // number of values in iValues
		int iValues[__EXT_UX_MAX_INTLIST_COUNT];
	} __EXT_UX_INTLIST, *__EXT_UX_PINTLIST;

	typedef enum __EXT_UX_PROPERTYORIGIN
	{
		__EXT_UX_PO_STATE,           // property was found in the state section
		__EXT_UX_PO_PART,            // property was found in the part section
		__EXT_UX_PO_CLASS,           // property was found in the class section
		__EXT_UX_PO_GLOBAL,          // property was found in [globals] section
		__EXT_UX_PO_NOTFOUND         // property was not found
	};

	typedef struct __PROF_UIS_API __EXT_UX__DTBGOPTS
	{
		DWORD dwSize;                // size of the struct
		DWORD dwFlags;               // which options have been specified
		RECT rcClip;                 // clipping rectangle
	}
	__EXT_UX_DTBGOPTS, *__EXT_UX_PDTBGOPTS;

// Callback function used by DrawTextWithGlow instead of DrawTextW
	typedef int ( WINAPI * __EXT_UX_DTT_CALLBACK_PROC ) (
		HDC hdc,
		__EXT_UX_LPWSTR pszText,
		int cchText,
		LPRECT prc,
		UINT dwFlags,
		LPARAM lParam
		);
	typedef struct __EXT_UX__DTTOPTS
	{
		DWORD             dwSize;              // size of the struct
		DWORD             dwFlags;             // which options have been specified
		COLORREF          crText;              // color to use for text fill
		COLORREF          crBorder;            // color to use for text outline
		COLORREF          crShadow;            // color to use for text shadow
		int               iTextShadowType;     // TST_SINGLE or TST_CONTINUOUS
		POINT             ptShadowOffset;      // where shadow is drawn (relative to text)
		int               iBorderSize;         // Border radius around text
		int               iFontPropId;         // Font property to use for the text instead of TMT_FONT
		int               iColorPropId;        // Color property to use for the text instead of TMT_TEXTCOLOR
		int               iStateId;            // Alternate state id
		BOOL              fApplyOverlay;       // Overlay text on top of any text effect?
		int               iGlowSize;           // Glow radious around text
		__EXT_UX_DTT_CALLBACK_PROC
		                  pfnDrawTextCallback; // Callback for DrawText
		LPARAM            lParam;              // Parameter for callback
	} __EXT_UX_DTTOPTS, *__EXT_UX_PDTTOPTS;

	typedef HANDLE __EXT_UX_HTHEME;            // handle to a section of theme data for class

	CExtUxTheme();
	virtual ~CExtUxTheme();

	bool IsControlsThemed( 
		bool bCheckComCtlVersion = true 
		);
	bool IsNonClientThemed( 
		bool bCheckComCtlVersion = true 
		);
	bool IsWebContentThemed( 
		bool bCheckComCtlVersion = true 
		);

	//---------------------------------------------------------------------------
	//  OpenThemeData()     - Open the theme data for the specified HWND and 
	//                        semi-colon separated list of class names. 
	// 
	//                        OpenThemeData() will try each class name, one at 
	//                        a time, and use the first matching theme info
	//                        found.  If a match is found, a theme handle
	//                        to the data is returned.  If no match is found,
	//                        a "NULL" handle is returned. 
	//
	//                        When the window is destroyed or a WM_THEMECHANGED
	//                        msg is received, "CloseThemeData()" should be 
	//                        called to close the theme handle.
	//
	//  hWnd                - window handle of the control/window to be themed
	//  pszClassList        - class name (or list of names) to match to theme data
	//                        section.  if the list contains more than one name, 
	//                        the names are tested one at a time for a match.  
	//                        If a match is found, OpenThemeData() returns a 
	//                        theme handle associated with the matching class. 
	//                        This param is a list (instead of just a single 
	//                        class name) to provide the class an opportunity 
	//                        to get the "best" match between the class and 
	//                        the current theme.  For example, a button might
	//                        pass L"OkButton, Button" if its ID=ID_OK.  If 
	//                        the current theme has an entry for OkButton, 
	//                        that will be used.  Otherwise, we fall back on 
	//                        the normal Button entry.
	//---------------------------------------------------------------------------
	__EXT_UX_HTHEME OpenThemeData(
		HWND hWnd, 
		__EXT_UX_LPCWSTR pszClassList
		);

	//---------------------------------------------------------------------------
	//  OpenThemeDataEx     - Open the theme data for the specified HWND and 
	//                        semi-colon separated list of class names. 
	// 
	//                        OpenThemeData() will try each class name, one at 
	//                        a time, and use the first matching theme info
	//                        found.  If a match is found, a theme handle
	//                        to the data is returned.  If no match is found,
	//                        a "NULL" handle is returned. 
	//
	//                        When the window is destroyed or a WM_THEMECHANGED
	//                        msg is received, "CloseThemeData()" should be 
	//                        called to close the theme handle.
	//
	//  hwnd                - window handle of the control/window to be themed
	//
	//  pszClassList        - class name (or list of names) to match to theme data
	//                        section.  if the list contains more than one name, 
	//                        the names are tested one at a time for a match.  
	//                        If a match is found, OpenThemeData() returns a 
	//                        theme handle associated with the matching class. 
	//                        This param is a list (instead of just a single 
	//                        class name) to provide the class an opportunity 
	//                        to get the "best" match between the class and 
	//                        the current theme.  For example, a button might
	//                        pass L"OkButton, Button" if its ID=ID_OK.  If 
	//                        the current theme has an entry for OkButton, 
	//                        that will be used.  Otherwise, we fall back on 
	//                        the normal Button entry.
	//
	//  dwFlags             - allows certain overrides of std features
	//                        (see OTD_XXX defines above)
	//---------------------------------------------------------------------------
	__EXT_UX_HTHEME OpenThemeDataEx(
		HWND hwnd,
		__EXT_UX_LPCWSTR pszClassList,
		DWORD dwFlags
		);

	//---------------------------------------------------------------------------
	//  CloseTHemeData()    - closes the theme data handle.  This should be done 
	//                        when the window being themed is destroyed or
	//                        whenever a WM_THEMECHANGED msg is received 
	//                        (followed by an attempt to create a new Theme data 
	//                        handle).
	//---------------------------------------------------------------------------
	HRESULT CloseThemeData( 
		bool bAllowCaching = false
		);

	//---------------------------------------------------------------------------
	//    functions for basic drawing support 
	//---------------------------------------------------------------------------
	// The following methods are the theme-aware drawing services.
	// Controls/Windows are defined in drawable "parts" by their author: a 
	// parent part and 0 or more child parts.  Each of the parts can be 
	// described in "states" (ex: disabled, hot, pressed).  
	//---------------------------------------------------------------------------
	// For the list of all themed classes and the definition of all
	// parts and states, see the file "tmschmea.h".
	//---------------------------------------------------------------------------
	// Each of the below methods takes a "iPartId" param to specify the 
	// part and a "iStateId" to specify the state of the part.  
	// "iStateId=0" refers to the root part.  "iPartId" = "0" refers to 
	// the root class.  
	//-----------------------------------------------------------------------
	// Note: draw operations are always scaled to fit (and not to exceed)  
	// the specified "Rect".
	//-----------------------------------------------------------------------

	//------------------------------------------------------------------------
	//  DrawThemeBackground()   
	//                      - draws the theme-specified border and fill for 
	//                        the "iPartId" and "iStateId".  This could be 
	//                        based on a bitmap file, a border and fill, or 
	//                        other image description.  
	//
	//  hdc                 - HDC to draw into
	//  iPartId             - part number to draw
	//  iStateId            - state number (of the part) to draw
	//  pRect               - defines the size/location of the part
	//  pClipRect           - optional clipping rect (don't draw outside it)
	//------------------------------------------------------------------------
	HRESULT DrawThemeBackground(
		HDC hdc, 
		int iPartId, 
		int iStateId, 
		const RECT * pRect, 
		OPTIONAL const RECT * pClipRect
		);

	HRESULT DrawBackground(
		HWND hWnd,
		HDC hdc, 
		int iPartId, 
		int iStateId, 
		const RECT * pRect, 
		OPTIONAL const RECT * pClipRect
		);

	//-------------------------------------------------------------------------
	//  DrawThemeText()     - draws the text using the theme-specified 
	//                        color and font for the "iPartId" and 
	//                        "iStateId".  
	//
	//  hdc                 - HDC to draw into
	//  iPartId             - part number to draw
	//  iStateId            - state number (of the part) to draw
	//  pszText             - actual text to draw
	//  dwCharCount         - number of chars to draw (-1 for all)
	//  dwTextFlags         - same as DrawText() "uFormat" param
	//  dwTextFlags2        - additional drawing options 
	//  pRect               - defines the size/location of the part
	//-------------------------------------------------------------------------
	HRESULT DrawThemeText(
		HDC hdc, 
		int iPartId, 
		int iStateId, 
		__EXT_UX_LPCWSTR pszText, 
		int iCharCount, 
		DWORD dwTextFlags, 
		DWORD dwTextFlags2, 
		const RECT * pRect
		);
	HRESULT DrawThemeText(
		HDC hdc, 
		int iPartId, 
		int iStateId, 
		const CExtSafeString & sText, 
		int iCharCount, 
		DWORD dwTextFlags, 
		DWORD dwTextFlags2, 
		const RECT * pRect
		);

	HRESULT DrawThemeTextEx(
		HDC hdc,
		int iPartId,
		int iStateId,
		__EXT_UX_LPCWSTR pszText,
		int iCharCount,
		DWORD dwFlags,
		LPRECT pRect,
		const __EXT_UX_DTTOPTS * pOptions
		);
	HRESULT DrawThemeTextEx(
		HDC hdc,
		int iPartId,
		int iStateId,
		const CExtSafeString & sText, 
		int iCharCount,
		DWORD dwFlags,
		LPRECT pRect,
		const __EXT_UX_DTTOPTS * pOptions
		);

	//-------------------------------------------------------------------------
	//  GetThemeBackgroundContentRect()
	//                      - gets the size of the content for the theme-defined 
	//                        background.  This is usually the area inside
	//                        the borders or Margins.  
	//
	//      hdc             - (optional) device content to be used for drawing
	//      iPartId         - part number to draw
	//      iStateId        - state number (of the part) to draw
	//      pBoundingRect   - the outer RECT of the part being drawn
	//      pContentRect    - RECT to receive the content area
	//-------------------------------------------------------------------------
	HRESULT GetThemeBackgroundContentRect(
		OPTIONAL HDC hdc, 
		int iPartId, 
		int iStateId,  
		const RECT * pBoundingRect, 
		OUT RECT * pContentRect
		);

	//-------------------------------------------------------------------------
	//  GetThemeBackgroundExtent() - calculates the size/location of the theme-
	//                               specified background based on the 
	//                               "pContentRect".
	//
	//      hdc             - (optional) device content to be used for drawing
	//      iPartId         - part number to draw
	//      iStateId        - state number (of the part) to draw
	//      pContentRect    - RECT that defines the content area
	//      pBoundingRect   - RECT to receive the overall size/location of part
	//-------------------------------------------------------------------------
	HRESULT GetThemeBackgroundExtent(
		OPTIONAL HDC hdc,
		int iPartId, 
		int iStateId, 
		const RECT * pContentRect, 
		OUT RECT * pExtentRect
		);

	//-------------------------------------------------------------------------
	//  GetThemePartSize() - returns the specified size of the theme part
	//
	//  hdc                 - HDC to select font into & measure against
	//  iPartId             - part number to retrieve size for
	//  iStateId            - state number (of the part) 
	//  prc                 - (optional) rect for part drawing destination
	//  eSize               - the type of size to be retreived
	//  psz                 - receives the specified size of the part 
	//-------------------------------------------------------------------------
	HRESULT GetThemePartSize(
		HDC hdc, 
		int iPartId, 
		int iStateId, 
		OPTIONAL RECT * prc, 
		enum __EXT_UX_THEMESIZE eSize, 
		OUT SIZE * psz
		);

	//-------------------------------------------------------------------------
	//  GetThemeTextExtent() - calculates the size/location of the specified 
	//                         text when rendered in the Theme Font. 
	//
	//  hdc                 - HDC to select font & measure into
	//  iPartId             - part number to draw
	//  iStateId            - state number (of the part) 
	//  pszText             - the text to be measured
	//  dwCharCount         - number of chars to draw (-1 for all)
	//  dwTextFlags         - same as DrawText() "uFormat" param
	//  pszBoundingRect     - optional: to control layout of text
	//  pszExtentRect       - receives the RECT for text size/location
	//-------------------------------------------------------------------------
	HRESULT GetThemeTextExtent(
		HDC hdc, 
		int iPartId, 
		int iStateId, 
		__EXT_UX_LPCWSTR pszText, 
		int iCharCount, 
		DWORD dwTextFlags, 
		OPTIONAL const RECT * pBoundingRect, 
		OUT RECT * pExtentRect
		);
	HRESULT GetThemeTextExtent(
		HDC hdc, 
		int iPartId, 
		int iStateId, 
		const CExtSafeString & sText, 
		int iCharCount, 
		DWORD dwTextFlags, 
		OPTIONAL const RECT * pBoundingRect, 
		OUT RECT * pExtentRect
		);

	//-------------------------------------------------------------------------
	//  GetThemeTextMetrics()
	//                      - returns info about the theme-specified font
	//                        for the part/state passed in.
	//
	//  hdc                 - optional: HDC for screen context
	//  iPartId             - part number to draw
	//  iStateId            - state number (of the part) 
	//  ptm                 - receives the font info
	//-------------------------------------------------------------------------
	HRESULT GetThemeTextMetrics(
		OPTIONAL HDC hdc, 
		int iPartId, 
		int iStateId, 
		OUT TEXTMETRIC * ptm
		);

	//-------------------------------------------------------------------------
	//  GetThemeBackgroundRegion()
	//                      - computes the region for a regular or partially 
	//                        transparent theme-specified background that is 
	//                        bound by the specified "pRect".
	//                        If the rectangle is empty, sets the HRGN to NULL 
	//                        and return S_FALSE.
	//
	//  hdc                 - optional HDC to draw into (DPI scaling)
	//  iPartId             - part number to draw
	//  iStateId            - state number (of the part) 
	//  pRect               - the RECT used to draw the part
	//  pRegion             - receives handle to calculated region
	//-------------------------------------------------------------------------
	HRESULT GetThemeBackgroundRegion(
		OPTIONAL HDC hdc,  
		int iPartId, 
		int iStateId, 
		const RECT * pRect, 
		OUT HRGN * pRegion
		);

	//-------------------------------------------------------------------------
	//  HitTestThemeBackground()
	//                      - returns a HitTestCode (a subset of the values 
	//                        returned by WM_NCHITTEST) for the point "ptTest" 
	//                        within the theme-specified background
	//                        (bound by pRect).  "pRect" and "ptTest" should 
	//                        both be in the same coordinate system 
	//                        (client, screen, etc).
	//
	//      hdc             - HDC to draw into
	//      iPartId         - part number to test against
	//      iStateId        - state number (of the part) 
	//      pRect           - the RECT used to draw the part
	//      hrgn            - optional region to use; must be in same coordinates as
	//                      -    pRect and pTest.
	//      ptTest          - the hit point to be tested
	//      dwOptions       - HTTB_xxx constants
	//      pwHitTestCode   - receives the returned hit test code - one of:
	//                        HTNOWHERE, HTLEFT, HTTOPLEFT, HTBOTTOMLEFT,
	//                        HTRIGHT, HTTOPRIGHT, HTBOTTOMRIGHT,
	//                        HTTOP, HTBOTTOM, HTCLIENT
	//-------------------------------------------------------------------------
	HRESULT HitTestThemeBackground(
		OPTIONAL HDC hdc, 
		int iPartId, 
		int iStateId, 
		DWORD dwOptions, 
		const RECT * pRect, 
		OPTIONAL HRGN hrgn, 
		POINT ptTest, 
		OUT WORD * pwHitTestCode
		);

	//------------------------------------------------------------------------
	//  DrawThemeEdge()     - Similar to the DrawEdge() API, but uses part colors
	//                        and is high-DPI aware
	//  hdc                 - HDC to draw into
	//  iPartId             - part number to draw
	//  iStateId            - state number of part
	//  pDestRect           - the RECT used to draw the line(s)
	//  uEdge               - Same as DrawEdge() API
	//  uFlags              - Same as DrawEdge() API
	//  pContentRect        - Receives the interior rect if (uFlags & BF_ADJUST)
	//------------------------------------------------------------------------
	HRESULT DrawThemeEdge(
		HDC hdc, 
		int iPartId, 
		int iStateId, 
		const RECT * pDestRect, 
		UINT uEdge, UINT uFlags, 
		OPTIONAL OUT RECT * pContentRect
		);

	//------------------------------------------------------------------------
	//  DrawThemeIcon()     - draws an image within an imagelist based on 
	//                        a (possible) theme-defined effect. 
	//
	//  hdc                 - HDC to draw into
	//  iPartId             - part number to draw
	//  iStateId            - state number of part
	//  pRect               - the RECT to draw the image within
	//  himl                - handle to IMAGELIST 
	//  iImageIndex         - index into IMAGELIST (which icon to draw)
	//------------------------------------------------------------------------
	HRESULT DrawThemeIcon(
		HDC hdc, 
		int iPartId, 
		int iStateId, 
		const RECT * pRect, 
		HIMAGELIST himl, 
		int iImageIndex
		);

	//---------------------------------------------------------------------------
	//  IsThemePartDefined() - returns TRUE if the theme has defined parameters
	//                         for the specified "iPartId" and "iStateId".
	//
	//  iPartId             - part number to find definition for
	//  iStateId            - state number of part
	//---------------------------------------------------------------------------
	BOOL IsThemePartDefined(
		int iPartId, 
		int iStateId
		);

	//---------------------------------------------------------------------------
	//  IsThemeBackgroundPartiallyTransparent()
	//                      - returns TRUE if the theme specified background for 
	//                        the part/state has transparent pieces or 
	//                        alpha-blended pieces.
	//
	//  iPartId             - part number 
	//  iStateId            - state number of part
	//---------------------------------------------------------------------------
	BOOL IsThemeBackgroundPartiallyTransparent(
		int iPartId, 
		int iStateId
		);

	//---------------------------------------------------------------------------
	//    lower-level theme information services
	//---------------------------------------------------------------------------
	// The following methods are getter routines for each of the Theme Data types.
	// Controls/Windows are defined in drawable "parts" by their author: a 
	// parent part and 0 or more child parts.  Each of the parts can be 
	// described in "states" (ex: disabled, hot, pressed).  
	//---------------------------------------------------------------------------
	// Each of the below methods takes a "iPartId" param to specify the 
	// part and a "iStateId" to specify the state of the part.  
	// "iStateId=0" refers to the root part.  "iPartId" = "0" refers to 
	// the root class.  
	//-----------------------------------------------------------------------
	// Each method also take a "iPropId" param because multiple instances of 
	// the same primitive type can be defined in the theme schema.
	//-----------------------------------------------------------------------

	//-----------------------------------------------------------------------
	//  GetThemeColor()     - Get the value for the specified COLOR property
	//
	//  iPartId             - part number 
	//  iStateId            - state number of part
	//  iPropId             - the property number to get the value for
	//  pColor              - receives the value of the property
	//-----------------------------------------------------------------------
	HRESULT GetThemeColor(
		int iPartId, 
		int iStateId, 
		int iPropId, 
		OUT COLORREF * pColor
		);

	//-----------------------------------------------------------------------
	//  GetThemeMetric()    - Get the value for the specified metric/size
	//                        property
	//
	//  hdc                 - (optional) hdc to be drawn into (DPI scaling)
	//  iPartId             - part number 
	//  iStateId            - state number of part
	//  iPropId             - the property number to get the value for
	//  piVal               - receives the value of the property
	//-----------------------------------------------------------------------
	HRESULT GetThemeMetric(
		OPTIONAL HDC hdc, 
		int iPartId, 
		int iStateId, 
		int iPropId, 
		OUT int * piVal
		);

	//-----------------------------------------------------------------------
	//  GetThemeString()    - Get the value for the specified string property
	//
	//  iPartId             - part number 
	//  iStateId            - state number of part
	//  iPropId             - the property number to get the value for
	//  pszBuff             - receives the string property value
	//  cchMaxBuffChars     - max. number of chars allowed in pszBuff
	//-----------------------------------------------------------------------
	HRESULT GetThemeString(
		int iPartId, 
		int iStateId, 
		int iPropId, 
		OUT __EXT_UX_LPWSTR pszBuff, 
		int cchMaxBuffChars
		);

	//-----------------------------------------------------------------------
	//  GetThemeBool()      - Get the value for the specified BOOL property
	//
	//  iPartId             - part number 
	//  iStateId            - state number of part
	//  iPropId             - the property number to get the value for
	//  pfVal               - receives the value of the property
	//-----------------------------------------------------------------------
	HRESULT GetThemeBool(
		int iPartId, 
		int iStateId, 
		int iPropId, 
		OUT BOOL * pfVal
		);

	//-----------------------------------------------------------------------
	//  GetThemeInt()       - Get the value for the specified int property
	//
	//  iPartId             - part number 
	//  iStateId            - state number of part
	//  iPropId             - the property number to get the value for
	//  piVal               - receives the value of the property
	//-----------------------------------------------------------------------
	HRESULT GetThemeInt(
		int iPartId, 
		int iStateId, 
		int iPropId, 
		OUT int * piVal
		);

	//-----------------------------------------------------------------------
	//  GetThemeEnumValue() - Get the value for the specified ENUM property
	//
	//  iPartId             - part number 
	//  iStateId            - state number of part
	//  iPropId             - the property number to get the value for
	//  piVal               - receives the value of the enum (cast to int*)
	//-----------------------------------------------------------------------
	HRESULT GetThemeEnumValue(
		int iPartId, 
		int iStateId, 
		int iPropId, 
		OUT int * piVal
		);

	//-----------------------------------------------------------------------
	//  GetThemePosition()  - Get the value for the specified position
	//                        property
	//
	//  iPartId             - part number 
	//  iStateId            - state number of part
	//  iPropId             - the property number to get the value for
	//  pPoint              - receives the value of the position property
	//-----------------------------------------------------------------------
	HRESULT GetThemePosition(
		int iPartId, 
		int iStateId, 
		int iPropId, 
		OUT POINT * pPoint
		);

	//-----------------------------------------------------------------------
	//  GetThemeFont()      - Get the value for the specified font property
	//
	//  hdc                 - (optional) hdc to be drawn to (DPI scaling)
	//  iPartId             - part number 
	//  iStateId            - state number of part
	//  iPropId             - the property number to get the value for
	//  pFont               - receives the value of the LOGFONT property
	//                        (scaled for the current logical screen dpi) 
	//-----------------------------------------------------------------------
	HRESULT GetThemeFont(
		OPTIONAL HDC hdc, 
		int iPartId, 
		int iStateId, 
		int iPropId, 
		OUT LOGFONT * pFont
		);

	//-----------------------------------------------------------------------
	//  GetThemeRect()      - Get the value for the specified RECT property
	//
	//  iPartId             - part number 
	//  iStateId            - state number of part
	//  iPropId             - the property number to get the value for
	//  pRect               - receives the value of the RECT property
	//-----------------------------------------------------------------------
	HRESULT GetThemeRect(
		int iPartId, 
		int iStateId, 
		int iPropId, 
		OUT RECT * pRect
		);

	//-----------------------------------------------------------------------
	//  GetThemeMargins()   - Get the value for the specified __EXT_UX_MARGINS property
	//
	//      hdc             - (optional) hdc to be used for drawing
	//      iPartId         - part number 
	//      iStateId        - state number of part
	//      iPropId         - the property number to get the value for
	//      prc             - RECT for area to be drawn into
	//      pMargins        - receives the value of the __EXT_UX_MARGINS property
	//-----------------------------------------------------------------------
	HRESULT GetThemeMargins(
		OPTIONAL HDC hdc, 
		int iPartId, 
		int iStateId, 
		int iPropId, 
		OPTIONAL RECT * prc, 
		OUT __EXT_UX_MARGINS * pMargins
		);

	//-----------------------------------------------------------------------
	//  GetThemeIntList()   - Get the value for the specified __EXT_UX_INTLIST struct
	//
	//      iPartId         - part number 
	//      iStateId        - state number of part
	//      iPropId         - the property number to get the value for
	//      pIntList        - receives the value of the __EXT_UX_INTLIST property
	//-----------------------------------------------------------------------
	HRESULT GetThemeIntList(
		int iPartId, 
		int iStateId, 
		int iPropId, 
		OUT __EXT_UX_INTLIST * pIntList
		);

	//-----------------------------------------------------------------------
	//  GetThemePropertyOrigin()
	//                      - searches for the specified theme property
	//                        and sets "pOrigin" to indicate where it was 
	//                        found (or not found)
	//
	//  iPartId             - part number 
	//  iStateId            - state number of part
	//  iPropId             - the property number to search for
	//  pOrigin             - receives the value of the property origin
	//-----------------------------------------------------------------------
	HRESULT GetThemePropertyOrigin(
		int iPartId, 
		int iStateId, 
		int iPropId, 
		OUT enum __EXT_UX_PROPERTYORIGIN * pOrigin
		);

	//---------------------------------------------------------------------------
	//  SetWindowTheme()
	//                      - redirects an existing Window to use a different 
	//                        section of the current theme information than its 
	//                        class normally asks for.
	//
	//  hwnd                - the handle of the window (cannot be NULL)
	//
	//  pszSubAppName       - app (group) name to use in place of the calling
	//                        app's name.  If NULL, the actual calling app 
	//                        name will be used.
	//
	//  pszSubIdList        - semicolon separated list of class Id names to 
	//                        use in place of actual list passed by the 
	//                        window's class.  if NULL, the id list from the 
	//                        calling class is used.
	//---------------------------------------------------------------------------
	// The Theme Manager will remember the "pszSubAppName" and the
	// "pszSubIdList" associations thru the lifetime of the window (even 
	// if themes are subsequently changed).  The window is sent a 
	// "WM_THEMECHANGED" msg at the end of this call, so that the new
	// theme can be found and applied.
	//---------------------------------------------------------------------------
	// When "pszSubAppName" or "pszSubIdList" are NULL, the Theme Manager 
	// removes the previously remember association.  To turn off theme-ing for 
	// the specified window, you can pass an empty string (L"") so it 
	// won't match any section entries.
	//---------------------------------------------------------------------------
	HRESULT SetWindowTheme(
		HWND hwnd, 
		__EXT_UX_LPCWSTR pszSubAppName, 
		__EXT_UX_LPCWSTR pszSubIdList
		);

	//---------------------------------------------------------------------------
	//  GetThemeFilename()  - Get the value for the specified FILENAME property.
	//
	//  iPartId             - part number 
	//  iStateId            - state number of part
	//  iPropId             - the property number to search for
	//  pszThemeFileName    - output buffer to receive the filename
	//  cchMaxBuffChars     - the size of the return buffer, in chars
	//---------------------------------------------------------------------------
	HRESULT GetThemeFilename(
		int iPartId, 
		int iStateId, 
		int iPropId, 
		OUT __EXT_UX_LPWSTR pszThemeFileName, 
		int cchMaxBuffChars
		);

	//---------------------------------------------------------------------------
	//  GetThemeSysColor()  - Get the value of the specified System color. 
	//
	//  bThemeSysColor      - if TRUE, will return color from [SysMetrics] 
	//						  section of theme.
	//                        if FALSE, will return the global system color.
	//  iColorId            - the system color index defined in winuser.h
	//---------------------------------------------------------------------------
	COLORREF GetThemeSysColor( 
		BOOL bThemeSysColor,
		int iColorId 
		);

	//---------------------------------------------------------------------------
	//  GetThemeSysColorBrush() 
	//                      - Get the brush for the specified System color. 
	//
	//  bThemeSysColor      - if TRUE, will return
	//                        brush matching color from [SysMetrics] section of 
	//                        theme.  if FALSE, will return the brush matching
	//                        global system color.
	//  iColorId            - the system color index defined in winuser.h
	//---------------------------------------------------------------------------
	HBRUSH GetThemeSysColorBrush( 
		BOOL bThemeSysColor, 
		int iColorId 
		);

	//---------------------------------------------------------------------------
	//  GetThemeSysBool()   - Get the boolean value of specified System metric. 
	//
	//  bThemeSysColor      - if TRUE, will return
	//                        BOOL from [SysMetrics] section of theme.
	//                        if FALSE, will return the specified system boolean.
	//  iBoolId             - the TMT_XXX BOOL number (first BOOL
	//                        is TMT_FLATMENUS)
	//---------------------------------------------------------------------------
	BOOL GetThemeSysBool(
		BOOL bThemeSysColor,
		int iBoolId
		);

	//---------------------------------------------------------------------------
	//  GetThemeSysSize()   - Get the value of the specified System size metric. 
	//                        (scaled for the current logical screen dpi) 
	//
	//  bThemeSysColor      - if TRUE, will return
	//                        size from [SysMetrics] section of theme.
	//                        if FALSE, will return the global system metric.
	//  iSizeId             - the following values are supported when 
	//                        hTheme is non-NULL:
	//                          SM_CXBORDER   (border width)
	//                          SM_CXVSCROLL  (scrollbar width)
	//                          SM_CYHSCROLL  (scrollbar height)
	//                          SM_CXSIZE     (caption width)
	//                          SM_CYSIZE     (caption height)
	//                          SM_CXSMSIZE   (small caption width)
	//                          SM_CYSMSIZE   (small caption height)
	//                          SM_CXMENUSIZE (menubar width)
	//                          SM_CYMENUSIZE (menubar height)
	//                        when hTheme is NULL, iSizeId is passed directly
	//                        to the GetSystemMetrics() function
	//---------------------------------------------------------------------------
	int GetThemeSysSize(
		BOOL bThemeSysColor,
		int iSizeId
		);

	//---------------------------------------------------------------------------
	//  GetThemeSysFont()   - Get the LOGFONT for the specified System font. 
	//
	//  bThemeSysColor      - if TRUE, will return
	//                        font from [SysMetrics] section of theme.
	//                        if FALSE, will return the specified system font.
	//  iFontId             - the TMT_XXX font number (first font
	//                        is TMT_CAPTIONFONT)
	//  plf                 - ptr to LOGFONT to receive the font value.
	//                        (scaled for the current logical screen dpi) 
	//---------------------------------------------------------------------------
	HRESULT GetThemeSysFont(
		BOOL bThemeSysColor,
		int iFontId, 
		OUT LOGFONT * plf
		);

	//---------------------------------------------------------------------------
	//  GetThemeSysString() - Get the value of specified System string metric. 
	//
	//  iStringId           - must be one of the following values:
	//                          TMT_CSSNAME
	//                          TMT_XMLNAME
	//  pszStringBuff       - the buffer to receive the string value
	//  cchMaxStringChars   - max. number of chars that pszStringBuff can hold
	//---------------------------------------------------------------------------
	HRESULT GetThemeSysString(
		int iStringId, 
		OUT __EXT_UX_LPWSTR pszStringBuff, 
		int cchMaxStringChars
		);

	//---------------------------------------------------------------------------
	//  GetThemeSysInt() - Get the value of specified System int.
	//
	//  iIntId              - must be one of the following values:
	//                          TMT_DPIX
	//                          TMT_DPIY
	//                          TMT_MINCOLORDEPTH
	//  piValue             - ptr to int to receive value
	//---------------------------------------------------------------------------
	HRESULT GetThemeSysInt(
		int iIntId, 
		int * piValue
		);

	//---------------------------------------------------------------------------
	//  IsThemeActive()     - can be used to test if a system theme is active
	//                        for the current user session.  
	//
	//                        use the API "IsAppThemed()" to test if a theme is
	//                        active for the calling process.
	//---------------------------------------------------------------------------
	BOOL IsThemeActive();

	//---------------------------------------------------------------------------
	//  IsAppThemed()       - returns TRUE if a theme is active and available to
	//                        the current process
	//---------------------------------------------------------------------------
	BOOL IsAppThemed();


	//---------------------------------------------------------------------------
	//  GetWindowTheme()    - if window is themed, returns its most recent
	//                        __EXT_UX_HTHEME from OpenThemeData() - otherwise, returns
	//                        NULL.
	//
	//      hwnd            - the window to get the __EXT_UX_HTHEME of
	//---------------------------------------------------------------------------
	__EXT_UX_HTHEME GetWindowTheme( HWND hwnd );


	//---------------------------------------------------------------------------
	//  EnableThemeDialogTexture() 
	//
	//  - Enables/disables dialog background theme.  This method can be used to 
	//    tailor dialog compatibility with child windows and controls that 
	//    may or may not coordinate the rendering of their client area backgrounds 
	//    with that of their parent dialog in a manner that supports seamless 
	//    background texturing.
	//
	//      hwnd         - the window handle of the target dialog
	//      dwFlags      - ETDT_ENABLE to enable the theme-defined dialog background texturing,
	//                     ETDT_DISABLE to disable background texturing,
	//                     ETDT_ENABLETAB to enable the theme-defined background 
	//                          texturing using the Tab texture
	//---------------------------------------------------------------------------
	HRESULT EnableThemeDialogTexture(
		HWND hwnd, 
		DWORD dwFlags
		);

	//---------------------------------------------------------------------------
	//  IsThemeDialogTextureEnabled() 
	//
	//  - Reports whether the dialog supports background texturing.
	//
	//      hdlg         - the window handle of the target dialog
	//---------------------------------------------------------------------------
	BOOL IsThemeDialogTextureEnabled( HWND hwnd );

	//---------------------------------------------------------------------------
	//  GetThemeAppProperties()
	//                      - returns the app property flags that control theming
	//---------------------------------------------------------------------------
	DWORD GetThemeAppProperties();

	//---------------------------------------------------------------------------
	//  SetThemeAppProperties()
	//                      - sets the flags that control theming within the app
	//
	//      dwFlags         - the flag values to be set
	//---------------------------------------------------------------------------
	void SetThemeAppProperties( DWORD dwFlags );

	//---------------------------------------------------------------------------
	//  GetCurrentThemeName()
	//                      - Get the name of the current theme in-use.  
	//                        Optionally, return the ColorScheme name and the 
	//                        Size name of the theme.
	//
	//  pszThemeFileName    - receives the theme path & filename
	//  cchMaxNameChars     - max chars allowed in pszNameBuff
	//  pszColorBuff        - (optional) receives the canonical color scheme name
	//  cchMaxColorChars    - max chars allowed in pszColorBuff
	//  pszSizeBuff         - (optional) receives the canonical size name 
	//  cchMaxSizeChars     - max chars allowed in pszSizeBuff
	//---------------------------------------------------------------------------
	HRESULT GetCurrentThemeName(
		OUT __EXT_UX_LPWSTR pszThemeFileName, 
		int cchMaxNameChars, 
		OUT OPTIONAL __EXT_UX_LPWSTR pszColorBuff, 
		int cchMaxColorChars,
		OUT OPTIONAL __EXT_UX_LPWSTR pszSizeBuff, 
		int cchMaxSizeChars
		);

	//---------------------------------------------------------------------------
	//  GetThemeDocumentationProperty()
	//                      - Get the value for the specified property name from 
	//                        the [documentation] section of the themes.ini file 
	//                        for the specified theme.  If the property has been 
	//                        localized in the theme files string table, the 
	//                        localized version of the property value is returned. 
	//
	//  pszThemeFileName    - filename of the theme file to query
	//  pszPropertyName     - name of the string property to retreive a value for
	//  pszValueBuff        - receives the property string value
	//  cchMaxValChars      - max chars allowed in pszValueBuff
	//---------------------------------------------------------------------------
	HRESULT GetThemeDocumentationProperty(
		__EXT_UX_LPCWSTR pszThemeName,
		__EXT_UX_LPCWSTR pszPropertyName, 
		OUT __EXT_UX_LPWSTR pszValueBuff, 
		int cchMaxValChars
		);

	//---------------------------------------------------------------------------
	// DrawThemeParentBackground()
	//                      - used by partially-transparent or alpha-blended
	//                        child controls to draw the part of their parent
	//                        that they appear in front of.
	//
	//  hwnd                - handle of the child control
	//  hdc                 - hdc of the child control
	//  prc                 - (optional) rect that defines the area to be 
	//                        drawn (CHILD coordinates)
	//---------------------------------------------------------------------------
	HRESULT DrawThemeParentBackground(
		HWND hwnd, 
		HDC hdc, 
		OPTIONAL RECT * prc
		);

	//---------------------------------------------------------------------------
	//  EnableTheming()     - enables or disables themeing for the current user
	//                        in the current and future sessions.
	//
	//  fEnable             - if FALSE, disable theming & turn themes off.
	//                      - if TRUE, enable themeing and, if user previously
	//                        had a theme active, make it active now.
	//---------------------------------------------------------------------------
	HRESULT EnableTheming( BOOL fEnable );

	//------------------------------------------------------------------------
	//  DrawThemeBackgroundEx()   
	//                      - draws the theme-specified border and fill for 
	//                        the "iPartId" and "iStateId".  This could be 
	//                        based on a bitmap file, a border and fill, or 
	//                        other image description.  NOTE: This will be
	//                        merged back into DrawThemeBackground() after 
	//                        BETA 2.
	//
	//  hdc                 - HDC to draw into
	//  iPartId             - part number to draw
	//  iStateId            - state number (of the part) to draw
	//  pRect               - defines the size/location of the part
	//  pOptions            - ptr to optional params
	//------------------------------------------------------------------------
	HRESULT DrawThemeBackgroundEx(
		HDC hdc, 
		int iPartId, 
		int iStateId, 
		const RECT * pRect, 
		OPTIONAL const __EXT_UX_DTBGOPTS * pOptions
		);

protected:
	__EXT_UX_HTHEME m_hUxTheme;
	HINSTANCE m_hUxThemeDll;
	bool m_bNeedToFreeDll:1;
	DWORD m_dwComCtlVersion;
	
	WCHAR m_szClassListCached[ MAX_PATH ];
	HWND m_hWndCached;
	HRESULT _CloseThemeData( __EXT_UX_HTHEME hUxTheme );

	__EXT_UX_THEMEAPI_( __EXT_UX_HTHEME, m_pfnOpenThemeData )( HWND hwnd, __EXT_UX_LPCWSTR pszClassList );
	__EXT_UX_THEMEAPI_( __EXT_UX_HTHEME, m_pfnOpenThemeDataEx )( HWND hwnd, __EXT_UX_LPCWSTR pszClassList, DWORD dwFlags );
	__EXT_UX_THEMEAPI(  m_pfnCloseThemeData )( __EXT_UX_HTHEME hTheme );
	__EXT_UX_THEMEAPI(  m_pfnDrawThemeBackground )( __EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, const RECT *pRect, const RECT *pClipRect);
	__EXT_UX_THEMEAPI(  m_pfnDrawThemeText )( __EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, __EXT_UX_LPCWSTR pszText, int iCharCount, DWORD dwTextFlags, DWORD dwTextFlags2, const RECT *pRect);
	__EXT_UX_THEMEAPI(  m_pfnDrawThemeTextEx )( __EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, __EXT_UX_LPCWSTR pszText, int iCharCount, DWORD dwFlags, LPRECT pRect, const __EXT_UX_DTTOPTS * pOptions );
	__EXT_UX_THEMEAPI(  m_pfnGetThemeBackgroundContentRect )( __EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId,  const RECT *pBoundingRect, RECT *pContentRect );
	__EXT_UX_THEMEAPI(  m_pfnGetThemeBackgroundExtent )( __EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, const RECT *pContentRect, RECT *pExtentRect );
	__EXT_UX_THEMEAPI(  m_pfnGetThemePartSize )( __EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, RECT *prc, enum __EXT_UX_THEMESIZE eSize, SIZE *psz );
	__EXT_UX_THEMEAPI(  m_pfnGetThemeTextExtent )( __EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, __EXT_UX_LPCWSTR pszText, int iCharCount, DWORD dwTextFlags, const RECT *pBoundingRect, RECT *pExtentRect );
	__EXT_UX_THEMEAPI(  m_pfnGetThemeTextMetrics )( __EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, TEXTMETRIC* ptm );
	__EXT_UX_THEMEAPI(  m_pfnGetThemeBackgroundRegion )( __EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, const RECT *pRect, HRGN *pRegion );
	__EXT_UX_THEMEAPI(  m_pfnHitTestThemeBackground)(__EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, DWORD dwOptions, const RECT *pRect, HRGN hrgn, POINT ptTest, WORD *pwHitTestCode);
	__EXT_UX_THEMEAPI(  m_pfnDrawThemeEdge)(__EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, const RECT *pDestRect, UINT uEdge, UINT uFlags, RECT *pContentRect);
	__EXT_UX_THEMEAPI(  m_pfnDrawThemeIcon)(__EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, const RECT *pRect, HIMAGELIST himl, int iImageIndex);
	__EXT_UX_THEMEAPI_( BOOL, m_pfnIsThemePartDefined)(__EXT_UX_HTHEME hTheme, int iPartId, int iStateId);
	__EXT_UX_THEMEAPI_( BOOL, m_pfnIsThemeBackgroundPartiallyTransparent)(__EXT_UX_HTHEME hTheme, int iPartId, int iStateId);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeColor)(__EXT_UX_HTHEME hTheme, int iPartId, int iStateId, int iPropId, COLORREF *pColor);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeMetric)(__EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, int iPropId, int *piVal);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeString)(__EXT_UX_HTHEME hTheme, int iPartId, int iStateId, int iPropId, __EXT_UX_LPWSTR pszBuff, int cchMaxBuffChars);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeBool)(__EXT_UX_HTHEME hTheme, int iPartId, int iStateId, int iPropId, BOOL *pfVal);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeInt)(__EXT_UX_HTHEME hTheme, int iPartId, int iStateId, int iPropId, int *piVal);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeEnumValue)(__EXT_UX_HTHEME hTheme, int iPartId, int iStateId, int iPropId,int *piVal);
	__EXT_UX_THEMEAPI(  m_pfnGetThemePosition)(__EXT_UX_HTHEME hTheme, int iPartId, int iStateId, int iPropId,POINT *pPoint);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeFont)(__EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, int iPropId,LOGFONT *pFont);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeRect)(__EXT_UX_HTHEME hTheme, int iPartId, int iStateId, int iPropId,RECT *pRect);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeMargins)(__EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, int iPropId, RECT *prc,__EXT_UX_MARGINS *pMargins);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeIntList)(__EXT_UX_HTHEME hTheme, int iPartId, int iStateId, int iPropId,__EXT_UX_INTLIST *pIntList);
	__EXT_UX_THEMEAPI(  m_pfnGetThemePropertyOrigin)(__EXT_UX_HTHEME hTheme, int iPartId, int iStateId, int iPropId,enum __EXT_UX_PROPERTYORIGIN *pOrigin);
	__EXT_UX_THEMEAPI(  m_pfnSetWindowTheme)(HWND hwnd, __EXT_UX_LPCWSTR pszSubAppName, __EXT_UX_LPCWSTR pszSubIdList);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeFilename)(__EXT_UX_HTHEME hTheme, int iPartId, int iStateId, int iPropId,__EXT_UX_LPWSTR pszThemeFileName, int cchMaxBuffChars);
	__EXT_UX_THEMEAPI_( COLORREF, m_pfnGetThemeSysColor)(__EXT_UX_HTHEME hTheme, int iColorId);
	__EXT_UX_THEMEAPI_( HBRUSH, m_pfnGetThemeSysColorBrush)(__EXT_UX_HTHEME hTheme, int iColorId);
	__EXT_UX_THEMEAPI_( BOOL, m_pfnGetThemeSysBool)(__EXT_UX_HTHEME hTheme, int iBoolId);
	__EXT_UX_THEMEAPI_( int, m_pfnGetThemeSysSize)(__EXT_UX_HTHEME hTheme, int iSizeId);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeSysFont)(__EXT_UX_HTHEME hTheme, int iFontId,LOGFONT *plf);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeSysString)(__EXT_UX_HTHEME hTheme, int iStringId, __EXT_UX_LPWSTR pszStringBuff, int cchMaxStringChars);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeSysInt)(__EXT_UX_HTHEME hTheme, int iIntId, int *piValue);
	__EXT_UX_THEMEAPI_( BOOL, m_pfnIsThemeActive)();
	__EXT_UX_THEMEAPI_( BOOL, m_pfnIsAppThemed)();
	__EXT_UX_THEMEAPI_( __EXT_UX_HTHEME, m_pfnGetWindowTheme)(HWND hwnd);
	__EXT_UX_THEMEAPI(  m_pfnEnableThemeDialogTexture)(HWND hwnd, DWORD dwFlags);
	__EXT_UX_THEMEAPI_( BOOL, m_pfnIsThemeDialogTextureEnabled)(HWND hwnd);
	__EXT_UX_THEMEAPI_( DWORD, m_pfnGetThemeAppProperties)();
	__EXT_UX_THEMEAPI_( void, m_pfnSetThemeAppProperties)(DWORD dwFlags);
	__EXT_UX_THEMEAPI(  m_pfnGetCurrentThemeName)(__EXT_UX_LPWSTR pszThemeFileName, int cchMaxNameChars, __EXT_UX_LPWSTR pszColorBuff, int cchMaxColorChars, __EXT_UX_LPWSTR pszSizeBuff, int cchMaxSizeChars);
	__EXT_UX_THEMEAPI(  m_pfnGetThemeDocumentationProperty)(__EXT_UX_LPCWSTR pszThemeName, __EXT_UX_LPCWSTR pszPropertyName,__EXT_UX_LPWSTR pszValueBuff, int cchMaxValChars);
	__EXT_UX_THEMEAPI(  m_pfnDrawThemeParentBackground)(HWND hwnd, HDC hdc, RECT* prc);
	__EXT_UX_THEMEAPI(  m_pfnEnableTheming)(BOOL fEnable);
	__EXT_UX_THEMEAPI(  m_pfnDrawThemeBackgroundEx)(__EXT_UX_HTHEME hTheme, HDC hdc, int iPartId, int iStateId, const RECT *pRect, const __EXT_UX_DTBGOPTS *pOptions);

}; // CExtUxTheme

//////////////////////////////////////////////////////////////////////////
// DWMAPI defines
//////////////////////////////////////////////////////////////////////////

// Define API decoration for direct importing of DLL references.
#define __EXT_DWMAPI(_name_)			HRESULT ( STDAPICALLTYPE * _name_ )
#define __EXT_DWMAPI_(_type_,_name_)	_type_ ( STDAPICALLTYPE * _name_ )

#define __EXT_DWM_COMPOSED_EVENT_NAME_MAX_LENGTH	64
#define __EXT_DWM_COMPOSED_EVENT_BASE_NAME			L"DwmComposedEvent_"
#define __EXT_DWM_COMPOSED_EVENT_NAME_FORMAT		L"%s%d"

// Blur behind data structures
#define __EXT_DWM_BB_ENABLE					0x00000001  // fEnable has been specified
#define __EXT_DWM_BB_BLURREGION				0x00000002  // hRgnBlur has been specified
#define __EXT_DWM_BB_TRANSITIONONMAXIMIZED	0x00000004  // fTransitionOnMaximized has been specified

// Thumbnails
typedef HANDLE __EXT_HTHUMBNAIL;
typedef __EXT_HTHUMBNAIL * __EXT_PHTHUMBNAIL;

#define __EXT_DWM_TNP_RECTDESTINATION       0x00000001
#define __EXT_DWM_TNP_RECTSOURCE            0x00000002
#define __EXT_DWM_TNP_OPACITY               0x00000004
#define __EXT_DWM_TNP_VISIBLE               0x00000008
#define __EXT_DWM_TNP_SOURCECLIENTAREAONLY  0x00000010

// Video enabling api
typedef ULONGLONG __EXT_DWM_FRAME_COUNT;
typedef ULONGLONG __EXT_QPC_TIME;

#define __EXT_DWM_FRAME_DURATION_DEFAULT	-1

//////////////////////////////////////////////////////////////////////////
// CExtDWM class
//////////////////////////////////////////////////////////////////////////

#include <pshpack1.h>

class __PROF_UIS_API CExtDWM
{
public:
	typedef struct __PROF_UIS_API __EXT__DWM_BLURBEHIND
	{
		DWORD dwFlags;
		BOOL fEnable;
		HRGN hRgnBlur;
		BOOL fTransitionOnMaximized;
	} __EXT_DWM_BLURBEHIND, *__EXT_PDWM_BLURBEHIND;
	
	// Window attributes
	typedef enum __EXT_DWMWINDOWATTRIBUTE
	{
		__EXT_DWMWA_NCRENDERING_ENABLED = 1,   // [get] Is non-client rendering enabled/disabled
		__EXT_DWMWA_NCRENDERING_POLICY,        // [set] Non-client rendering policy
		__EXT_DWMWA_TRANSITIONS_FORCEDISABLED, // [set] Potentially enable/forcibly disable transitions
		__EXT_DWMWA_ALLOW_NCPAINT,             // [set] Allow contents rendered in the non-client area to be visible on the DWM-drawn frame.
		__EXT_DWMWA_CAPTION_BUTTON_BOUNDS,
		__EXT_DWMWA_NONCLIENT_RTL_LAYOUT,
		__EXT_DWMWA_FORCE_ICONIC_REPRESENTATION,
		__EXT_DWMWA_FLIP3D_POLICY,
		__EXT_DWMWA_LAST
	};
	
	// Non-client rendering policy attribute values
	typedef enum __EXT_DWMNCRENDERINGPOLICY
	{
		__EXT_DWMNCRP_USEWINDOWSTYLE, // Enable/disable non-client rendering based on window style
		__EXT_DWMNCRP_DISABLED,       // Disabled non-client rendering; window style is ignored
		__EXT_DWMNCRP_ENABLED         // Enabled non-client rendering; window style is ignored
	};

	// Thumbnails
	typedef struct __PROF_UIS_API __EXT__DWM_THUMBNAIL_PROPERTIES
	{
		DWORD dwFlags;
		RECT rcDestination;
		RECT rcSource;
		BYTE opacity;
		BOOL fVisible;
		BOOL fSourceClientAreaOnly;
	} __EXT_DWM_THUMBNAIL_PROPERTIES, *__EXT_PDWM_THUMBNAIL_PROPERTIES;

	// Video enabling api
	typedef struct __PROF_UIS_API __EXT__UNSIGNED_RATIO
	{
		UINT32 uiNumerator;
		UINT32 uiDenominator;
	} __EXT_UNSIGNED_RATIO;

	typedef struct __EXT__DWM_TIMING_INFO
	{
		UINT32					cbSize;
		__EXT_UNSIGNED_RATIO	rateRefresh;        // Monitor refresh rate
		__EXT_UNSIGNED_RATIO	rateCompose;        // composition rate     
		__EXT_QPC_TIME			qpcVBlank;          // QPC time at VBlank
		__EXT_DWM_FRAME_COUNT	cRefresh;           // DWM refresh counter
		__EXT_QPC_TIME			qpcCompose;         // QPC time at a compose time
		__EXT_DWM_FRAME_COUNT	cFrame;             // Frame number that was composed at qpcCompose
		__EXT_DWM_FRAME_COUNT	cRefreshFrame;      // Refresh count of the frame that was composed at qpcCompose
		__EXT_DWM_FRAME_COUNT	cRefreshConfirmed;  // The target refresh count of the last frame confirmed completed by the GPU
		UINT32					cFlipsOutstanding;  // the number of outstanding flips
		
		// Feedback on previous performance only valid on 2nd and subsequent calls
		__EXT_DWM_FRAME_COUNT	cFrameCurrent;		// Last frame displayed
		__EXT_DWM_FRAME_COUNT	cFramesAvailable;	// number of frames available but not displayed, used or dropped
		__EXT_DWM_FRAME_COUNT	cFrameCleared;		// Source frame number when the following statistics where last cleared
		__EXT_DWM_FRAME_COUNT	cFramesReceived;	// number of new frames received
		__EXT_DWM_FRAME_COUNT	cFramesDisplayed;	// number of unique frames displayed
		__EXT_DWM_FRAME_COUNT	cFramesDropped;		// number of rendered frames that were never displayed 
													// because composition occurred too late
		__EXT_DWM_FRAME_COUNT	cFramesMissed;		// number of times an old frame was composed 
													// when a new frame should have been used but was not available
	} __EXT_DWM_TIMING_INFO;

	typedef enum 
	{
		__EXT_DWM_SOURCE_FRAME_SAMPLING_POINT,		// Use the first source frame that 
													// includes the first refresh of the output frame
		__EXT_DWM_SOURCE_FRAME_SAMPLING_COVERAGE,	// use the source frame that includes the most 
													// refreshes of out the output frame
													// in case of multiple source frames with the 
													// same coverage the last will be used
		__EXT_DWM_SOURCE_FRAME_SAMPLING_LAST		// Sentinel value
	} __EXT_DWM_SOURCE_FRAME_SAMPLING;

	const UINT m_nDwmMaxQueuedBuffers;
	const UINT m_nDwmMaxMonitors;
	const UINT m_nDwmMaxAdapters;

	#pragma warning(push)
	#pragma warning(disable:4201)
	typedef struct __EXT__DWM_PRESENT_PARAMETERS
	{
		UINT32 cbSize;
		BOOL fQueue;
		__EXT_DWM_FRAME_COUNT cRefreshStart;
		UINT cBuffer;
		BOOL fUseSourceRate;
		union
		{
			__EXT_UNSIGNED_RATIO rateSource;
			struct 
			{
				UINT cRefreshesPerFrame;
				__EXT_DWM_SOURCE_FRAME_SAMPLING eSampling;
			};
		};
	} __EXT_DWM_PRESENT_PARAMETERS;
	#pragma warning(pop)

	CExtDWM();
	virtual ~CExtDWM();

	BOOL IsCompositionEnabled();

	BOOL DwmDefWindowProc(
		IN HWND hWnd,
		IN UINT msg,
		IN WPARAM wParam,
		IN LPARAM lParam,
		OUT LRESULT * plResult
		);
	
	HRESULT DwmEnableBlurBehindWindow(
		HWND hWnd, 
		const __EXT_DWM_BLURBEHIND * pBlurBehind
		);
	
	HRESULT DwmEnableComposition(
		BOOL fEnable
		);
	
	HRESULT DwmEnableMMCSS(
		BOOL fEnableMMCSS
		);
	
	HRESULT DwmExtendFrameIntoClientArea(
		HWND hWnd,
		const CExtUxTheme::__EXT_UX__MARGINS * pMarInset
		);
    
	HRESULT DwmGetColorizationColor(
		DWORD * pcrColorization,
		BOOL * pfOpaqueBlend
		);
	
	HRESULT DwmGetCompositionTimingInfo(
		HWND hwnd,
		__EXT_DWM_TIMING_INFO * pTimingInfo
		);
	
	HRESULT DwmGetWindowAttribute(
		HWND hwnd,
		DWORD dwAttribute,
		PVOID pvAttribute, 
		DWORD cbAttribute
		);
	
	HRESULT DwmIsCompositionEnabled(
		BOOL * pfEnabled
		);
	
	HRESULT DwmModifyPreviousDxFrameDuration(
		HWND hwnd, 
		INT cRefreshes,
		BOOL fRelative
		);
	
	HRESULT DwmQueryThumbnailSourceSize(
		__EXT_HTHUMBNAIL hThumbnail, 
		OUT PSIZE pSize
		);
	
	HRESULT DwmRegisterThumbnail(
		HWND hwndDestination, 
		HWND hwndSource, 
		const SIZE * pMinimizedSize,
		__EXT_PHTHUMBNAIL phThumbnailId
		);

	HRESULT DwmSetDxFrameDuration(
		HWND hwnd, 
		INT cRefreshes
		);
	
	HRESULT DwmSetPresentParameters(
		HWND hwnd,
		__EXT_DWM_PRESENT_PARAMETERS * pPresentParams
		);
	
	HRESULT DwmSetWindowAttribute(
		HWND hwnd,
		DWORD dwAttribute,
		LPCVOID pvAttribute, 
		DWORD cbAttribute
		);
	
	HRESULT DwmUnregisterThumbnail(
		__EXT_HTHUMBNAIL hThumbnailId
		);
	
	HRESULT DwmUpdateThumbnailProperties(
		__EXT_HTHUMBNAIL hThumbnailId, 
		const __EXT_DWM_THUMBNAIL_PROPERTIES * ptnProperties
		);

protected:
	HINSTANCE m_hDWMDll;
	bool m_bNeedToFreeDll:1;

	__EXT_DWMAPI_(BOOL, m_pfnDwmDefWindowProc)( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, LRESULT * plResult );
	__EXT_DWMAPI(m_pfnDwmEnableBlurBehindWindow)( HWND hWnd, const __EXT_DWM_BLURBEHIND * pBlurBehind );
	__EXT_DWMAPI(m_pfnDwmEnableComposition)( BOOL fEnable );
	__EXT_DWMAPI(m_pfnDwmEnableMMCSS)( BOOL fEnableMMCSS );
	__EXT_DWMAPI(m_pfnDwmExtendFrameIntoClientArea)( HWND hWnd, const CExtUxTheme::__EXT_UX__MARGINS * pMarInset );
	__EXT_DWMAPI(m_pfnDwmGetColorizationColor)( DWORD * pcrColorization, BOOL * pfOpaqueBlend );
	__EXT_DWMAPI(m_pfnDwmGetCompositionTimingInfo)( HWND hwnd, __EXT_DWM_TIMING_INFO * pTimingInfo );
	__EXT_DWMAPI(m_pfnDwmGetWindowAttribute)( HWND hwnd, DWORD dwAttribute, PVOID pvAttribute, DWORD cbAttribute );
	__EXT_DWMAPI(m_pfnDwmIsCompositionEnabled)( BOOL * pfEnabled );
	__EXT_DWMAPI(m_pfnDwmModifyPreviousDxFrameDuration)( HWND hwnd, INT cRefreshes, BOOL fRelative );
	__EXT_DWMAPI(m_pfnDwmQueryThumbnailSourceSize)( __EXT_HTHUMBNAIL hThumbnail, PSIZE pSize );
	__EXT_DWMAPI(m_pfnDwmRegisterThumbnail)( HWND hwndDestination, HWND hwndSource, const SIZE * pMinimizedSize, __EXT_PHTHUMBNAIL phThumbnailId );
	__EXT_DWMAPI(m_pfnDwmSetDxFrameDuration)( HWND hwnd, INT cRefreshes );
	__EXT_DWMAPI(m_pfnDwmSetPresentParameters)( HWND hwnd, __EXT_DWM_PRESENT_PARAMETERS * pPresentParams );
	__EXT_DWMAPI(m_pfnDwmSetWindowAttribute)( HWND hwnd, DWORD dwAttribute, LPCVOID pvAttribute, DWORD cbAttribute );
	__EXT_DWMAPI(m_pfnDwmUnregisterThumbnail)( __EXT_HTHUMBNAIL hThumbnailId );
	__EXT_DWMAPI(m_pfnDwmUpdateThumbnailProperties)( __EXT_HTHUMBNAIL hThumbnailId, const __EXT_DWM_THUMBNAIL_PROPERTIES * ptnProperties );

}; // CExtDWM

#include <poppack.h>

// paint managers

class __PROF_UIS_API CExtImageList : public CImageList
{
public:
	CExtImageList()
	{
	}
	CExtImageList(
		UINT nResourceID,
		COLORREF clrTransparencyMask = RGB(255,0,255),
		int nButtonWidth = 16,
		HINSTANCE hInstResource = AfxGetInstanceHandle(),
		UINT nColorFlag = ILC_COLOR24,
		UINT nColorAddionalFlag = ILC_MASK
		)
	{
		VERIFY(
			Load(
				nResourceID,
				clrTransparencyMask,
				nButtonWidth,
				hInstResource,
				nColorFlag,
				nColorAddionalFlag
				)
			);
	}
	BOOL Load(
		UINT nResourceID,
		COLORREF clrTransparencyMask = RGB(255,0,255),
		int nButtonWidth = 16,
		HINSTANCE hInstResource = AfxGetInstanceHandle(),
		UINT nColorFlag = ILC_COLOR24,
		UINT nColorAddionalFlag = ILC_MASK
		)
	{
		ASSERT(
				nColorFlag == ILC_COLOR4
			||	nColorFlag == ILC_COLOR8
			||	nColorFlag == ILC_COLOR16
			||	nColorFlag == ILC_COLOR24
			||	nColorFlag == ILC_COLOR32
			);
		if( hInstResource == NULL )
		{
			hInstResource = ::AfxGetInstanceHandle();
			if( hInstResource == NULL )
			{
				ASSERT( FALSE );
				return FALSE;
			}
		}
		CBitmap objBitmap;
		if( !objBitmap.Attach(
				LoadImage(
					hInstResource,
					MAKEINTRESOURCE( nResourceID ),
					IMAGE_BITMAP,
					0,
					0,
					LR_DEFAULTSIZE|LR_CREATEDIBSECTION
					)
				)
			)
		{
			ASSERT( FALSE );
			return FALSE;
		}
		BITMAP infoBitmap;
		if( !objBitmap.GetBitmap( &infoBitmap ) )
		{
			ASSERT( FALSE );
			return FALSE;
		}
		CSize sizeBitmap(
			infoBitmap.bmWidth,
			infoBitmap.bmHeight
			); 
		int nCountOfButtons = sizeBitmap.cx / nButtonWidth;
		if( !Create(
				nButtonWidth,
				sizeBitmap.cy,
				nColorFlag|nColorAddionalFlag,
				nCountOfButtons,
				0
				)
			)
		{
			ASSERT( FALSE );
			return FALSE;
		}
		if( Add( &objBitmap, clrTransparencyMask ) == -1 )
		{
			ASSERT( FALSE );
			return FALSE;
		}
		return TRUE;
	}
}; // class CExtImageList

//	class __PROF_UIS_API CExtSWMR
//	{
//	protected:
//		static __EXT_MFC_SAFE_LPCTSTR stat_GenerateObjectName(
//			__EXT_MFC_SAFE_LPCTSTR strPrefix,
//			__EXT_MFC_SAFE_LPCTSTR strSuffix,
//			__EXT_MFC_SAFE_LPTSTR strOutNameBuffer,
//			size_t nBufferSize,
//			bool & bConstructed
//			);
//		mutable bool m_bConstructed;
//		HANDLE m_hProtectWriter, m_hProtectReaders, m_hEnumReaders;
//	public:
//		class __PROF_UIS_API LockSection
//		{
//			CExtSWMR & m_SWMR;
//			bool m_bRead:1, m_bLocked:1;
//		public:
//			LockSection(
//				CExtSWMR & _SWMR,
//				bool bRead,
//				DWORD dwTimeout = INFINITE
//				);
//			~LockSection();
//			bool IsLocked() const;
//		}; // class LockSection
//		CExtSWMR(
//			__EXT_MFC_SAFE_LPCTSTR strName = NULL
//			);
//		virtual ~CExtSWMR();
//		bool Create(
//			__EXT_MFC_SAFE_LPCTSTR strName = NULL
//			);
//		void Destroy();
//		bool IsConstructed() const;
//		DWORD WaitToWrite(
//			DWORD dwTimeout = INFINITE
//			);
//		DWORD WaitToRead(
//			DWORD dwTimeout = INFINITE
//			);
//		void DoneReading();
//		void DoneWriting();
//	}; // class CExtSWMR

class __PROF_UIS_API CExtPaintManager : public CObject
{
public:
	DECLARE_SERIAL( CExtPaintManager );
	enum e_ui_scaling_type_t
	{
		__EUIST_X           = 0,
		__EUIST_Y           = 1,
		__EUIST_Z           = 2,
		__EUIST_MIN_VALUE   = 0,
		__EUIST_MAX_VALUE   = 2,
	};
	virtual bool UiScalingIsEnabled(
		e_ui_scaling_type_t eUIST
		) const;
	virtual INT UiScalingDo(
		INT nValue,
		e_ui_scaling_type_t eUIST
		) const;

protected:

#if ( defined __EXT_PROFUIS_EVALUATION_BUILD && ((!defined _DEBUG) || (defined NDEBUG) ) )
	static const BYTE g_arrEvaluationLabelPatternBytes[];
	CExtBitmapCache m_bmpEvaluationLabelPattern;
#endif // #if ( defined __EXT_PROFUIS_EVALUATION_BUILD && ((!defined _DEBUG) || (defined NDEBUG) ) )

	// color values container
	typedef CArray < COLORREF, COLORREF & >
		sys_colors_container;
	sys_colors_container m_colors;

	// system brushes container
	typedef CArray < HBRUSH, HBRUSH & >
		sys_brashes_container;

	sys_brashes_container m_brushes;

	// translated colors map
	typedef
		CMap < int, int, int, int >
		translate_color_map;

	translate_color_map m_mapColorTranslate;

public:
	CPalette m_PaletteWide;
	COLORREF m_clrForceSplitterBk;

	CBrush m_brushLightDefault, m_brushLightSystem,
		m_brushDarkDefault, m_brushDarkSystem,
		m_brushLighterDefault, m_brushLighterSystem,
		m_brushDarkerDefault, m_brushDarkerSystem,
		m_brushLightestDefault, m_brushLightestSystem,
		m_brushDarkestDefault, m_brushDarkestSystem;

#if (!defined __EXT_MFC_NO_RIBBON_BAR)
	// ribbon
	CFont m_FontRibbonNormal,
		m_FontRibbonGroupCaption,
		m_FontRibbonTabItem;
	virtual void Ribbon_SyncFonts();
#endif // (!defined __EXT_MFC_NO_RIBBON_BAR)
	// normal
	CFont m_FontNormal, m_FontNormalVert, m_FontNormalVertX;
	CFont m_FontBold, m_FontBoldVert, m_FontBoldVertX;
	// generic caption
	CFont m_FontCaption, m_FontCaptionVert, m_FontCaptionVertX;
	CFont m_FontCaptionBold, m_FontCaptionBoldVert, m_FontCaptionBoldVertX;
	// bar caption
	CFont m_FontNormalBC, m_FontNormalVertBC, m_FontNormalVertXBC;
	CFont m_FontBoldBC, m_FontBoldVertBC, m_FontBoldVertXBC;
	// marlett symbols
	CFont m_FontMarlett;

	int m_DSS_DISABLED_style;

	enum e_paint_manager_name_t
	{
		Office2000				= 29901,
		OfficeXP				= 29902,
		Office2003				= 29903,
		Office2003NoThemes		= 29904,
		Studio2005				= 29905,
		Studio2008				= 29906,
		NativeXP				= 29907,
		Office2007_R1			= 29908,
		Office2007_R2_LunaBlue	= 29909,
		Office2007_R2_Obsidian	= 29910,
		Office2007_R2_Silver	= 29911,
		Office2007_R3_LunaBlue	= 29912,
		Office2007_R3_Obsidian	= 29913,
		Office2007_R3_Silver	= 29914,
		ProfSkinPainter			= 29915,
	};

	enum e_system_theme_t
	{
		ThemeUnknown			= 0,
		ThemeLunaBlue			= 1,
		ThemeLunaOlive			= 2,
		ThemeLunaSilver			= 3,
		ThemeLunaRoyale			= 4,
	};

	virtual e_paint_manager_name_t OnQueryPaintManagerName()
	{
		ASSERT_VALID( this );
		return Office2000;
	}

	virtual INT GetSeparatorHeight()
	{
		ASSERT_VALID( this );
		return 6;
	}

#ifndef __EXT_MFC_NO_TAB_ONENOTE_CTRL
	virtual void TabOneNoteWnd_DrawClientArea(
		CDC & dc,
		CRect & rcClient,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	virtual void GetTabOneNoteItemColors(
		bool bSelected,
		bool bHover,
		bool bEnabled,
		COLORREF &clrBorderLight,
		COLORREF &clrBorderDark,
		COLORREF &clrBkLight,
		COLORREF &clrBkDark,
		COLORREF &clrText
		);
#endif // __EXT_MFC_NO_TAB_ONENOTE_CTRL

#ifndef __EXT_MFC_NO_TAB_WHIDBEY_CTRL
	virtual void GetTabWhidbeyItemColors(
		bool bSelected,
		bool bHover,
		bool bEnabled,
		COLORREF &clrBorder,
		COLORREF &clrBkLight,
		COLORREF &clrBkDark,
		COLORREF &clrText
		);
#endif // __EXT_MFC_NO_TAB_WHIDBEY_CTRL

	virtual bool OnQueryUseThemeColors() const;

	virtual e_system_theme_t OnQuerySystemTheme() const;

	virtual bool IsHighContrast() const;

	// global auto-pointer class for CExtPaintManager
	class __PROF_UIS_API CExtPaintManagerAutoPtr
		: public CExtPmSynchronizeSink
	{
		CExtPaintManager * m_pPaintManager;

		CTypedPtrList
			< CPtrList, CExtPmBridge * >
			m_listBridges;
		
		bool m_bHaveScrollLines:1;
		UINT m_uCachedScrollLines;
		bool InitPaintManagerInstance();
	
	public:

		CExtSafeString m_strOsVer;
		OSVERSIONINFO m_osVerData;
		// quick boolean helpers
		bool
			  m_bIsWin32s:1			// old Win32s
			, m_bIsWin9x:1			// any Windows 9x
			, m_bIsWin95:1			// exactly Windows 95
			, m_bIsWin98:1			// exactly Windows 98
			, m_bIsWin98orLater:1	// Windows 98 or later
			, m_bIsWinNT:1			// any NT
			, m_bIsWinNT4:1			// exactly Windows NT 4
			, m_bIsWin2000:1		// exactly Windows 2000
			, m_bIsWinXP:1			// exactly Windows XP
			, m_bIsWinNT4orLater:1	// Windows NT 4 or later
			, m_bIsWin2000orLater:1	// Windows 2000 or later
			, m_bIsWinXPorLater:1	// Windows XP or later
			, m_bIsWinVista:1		// Windows Vista
			, m_bIsWinVistaOrLater:1// Windows Vista or later
			;
		INT m_nLPX, m_nLPY, m_nLPZ;
		bool
			  m_bEnableUiScalingX:1
			, m_bEnableUiScalingY:1
			, m_bEnableUiScalingZ:1
			;
		bool m_bAutoSkinScrollBars:1;

		CExtPaintManagerAutoPtr();
		virtual ~CExtPaintManagerAutoPtr();

		void Advise(
			CExtPmBridge * pPmBridge,
			bool bAddTail = true
			);
		void Unadvise( CExtPmBridge * pPmBridge );
		void UnadviseAll();

		CExtPaintManager * GetPM();
		CExtPaintManager * operator -> ();

		INT m_nInsallPaintManagerCounter;
		const UINT m_nMsgPaintManagerChanged;
		bool InstallPaintManager(
			CExtPaintManager * pPaintManager
			);
		bool InstallPaintManager(
			CRuntimeClass * pRtcPaintManager
			);

		e_paint_manager_name_t GetPaintManagerName()
		{
			ASSERT_VALID( m_pPaintManager );
			return m_pPaintManager->OnQueryPaintManagerName();
		}

		bool PaintManagerStateLoad(
			__EXT_MFC_SAFE_LPCTSTR sSectionNameCompany, // under HKEY_CURRENT_USER\Software
			__EXT_MFC_SAFE_LPCTSTR sSectionNameProduct, // under HKEY_CURRENT_USER\Software\%sSectionNameCompany%
			__EXT_MFC_SAFE_LPCTSTR sSectionNameProfile, // under HKEY_CURRENT_USER\Software\%sSectionNameCompany%\%sSectionNameProfile%
			HKEY hKeyRoot = HKEY_CURRENT_USER,
			bool bEnableThrowExceptions = false
			);
		bool PaintManagerStateSave(
			__EXT_MFC_SAFE_LPCTSTR sSectionNameCompany, // under HKEY_CURRENT_USER\Software
			__EXT_MFC_SAFE_LPCTSTR sSectionNameProduct, // under HKEY_CURRENT_USER\Software\%sSectionNameCompany%
			__EXT_MFC_SAFE_LPCTSTR sSectionNameProfile, // under HKEY_CURRENT_USER\Software\%sSectionNameCompany%\%sSectionNameProfile%\%sSectionNameProfile%
			HKEY hKeyRoot = HKEY_CURRENT_USER,
			bool bEnableThrowExceptions = false
			);
		virtual bool PaintManagerStateSerialize(
			CArchive & ar,
			bool bEnableThrowExceptions = false
			);

		UINT GetMouseWheelScrollLines();

		void InitUserExApi();
		bool m_bUxValidColorsExtracted:1;
		COLORREF
			m_clrUxTaskBandEdgeLightColor,
			m_clrUxTaskBandEdgeHighLightColor,
			m_clrUxTaskBandEdgeShadowColor,
			m_clrUxTaskBandEdgeDkShadowColor,
			m_clrUxTaskBandEdgeFillColor,
			m_clrUxTaskBandFillColorHint,
			m_clrUxTaskBandAccentColorHint;

		CExtUxTheme m_UxTheme;
		CExtDWM m_DWM;

		e_system_theme_t m_eCurrentTheme;

		bool m_bAllowWndUpdateSourceDetection:1;
		bool IsWndUpdateSource(
			CWnd * pWndNotifySrc
			);
	
		void OnSysColorChange(
			CWnd * pWndNotifySrc
			);
		void OnSettingChange(
			CWnd * pWndNotifySrc,
			UINT uFlags,
			__EXT_MFC_SAFE_LPCTSTR lpszSection
			);
		void OnDisplayChange(
			CWnd * pWndNotifySrc,
			INT nDepthBPP,
			CPoint ptSizes
			);
		void OnThemeChanged(
			CWnd * pWndNotifySrc,
			WPARAM wParam,
			LPARAM lParam
			);

		// layered API
		struct __EXT_MFC_BLENDFUNCTION
		{
			BYTE BlendOp;
			BYTE BlendFlags;
			BYTE SourceConstantAlpha;
			BYTE AlphaFormat;
		};

		typedef BOOL (WINAPI *PFNGRADIENTFILL)(HDC,PTRIVERTEX,ULONG,PVOID,ULONG,ULONG);
		typedef BOOL (WINAPI *PFNALPHABLEND)(HDC,INT,INT,INT,INT,HDC,INT,INT,INT,INT,__EXT_MFC_BLENDFUNCTION);
		typedef BOOL (WINAPI *PFNALPHADIBBLEND)(HDC,INT,INT,INT,INT,CONST VOID *,CONST BITMAPINFO *,UINT,INT,INT,INT,INT,__EXT_MFC_BLENDFUNCTION);
		typedef BOOL (WINAPI *PFNTRANSPARENTBLT)(HDC,INT,INT,INT,INT,HDC,INT,INT,INT,INT,UINT);
		typedef BOOL (WINAPI *PFNTRANSPARENTDIBITS)(HDC,INT,INT,INT,INT,CONST VOID *,CONST BITMAPINFO *,UINT,INT,INT,INT,INT,UINT);

		HMODULE m_hDllMsImg;
		PFNGRADIENTFILL			m_pfnMsImgGradientFill;
		PFNALPHABLEND			m_pfnMsImgAlphaBlend;
		PFNALPHADIBBLEND		m_pfnMsImgAlphaDIBBlend;
		PFNTRANSPARENTBLT		m_pfnMsImgTransparentBlt;
		PFNTRANSPARENTDIBITS	m_pfnMsImgTransparentDIBits;

		typedef BOOL (WINAPI *PFNANIMATEWINDOW)( HWND,DWORD,DWORD );

		HMODULE m_hDllUser32;
		PFNANIMATEWINDOW		m_pfnAnimateWindow;

		typedef
			BOOL ( __stdcall * PFNSETLAYEREDWINDOWATTRIBUTES)(
				HWND             hwnd,    // handle to the layered window
				COLORREF         crKey,   // specifies the color key
				BYTE             bAlpha,  // value for the blend function
				DWORD            dwFlags  // action
				);
		typedef
			BOOL ( __stdcall * PFNUPDATELAYEREDWINDOW )(
				HWND             hwnd,    // handle to layered window
				HDC              hdcDst,  // handle to screen DC
				POINT          * pptDst,  // new screen position
				SIZE           * psize,   // new size of the layered window
				HDC              hdcSrc,  // handle to surface DC
				POINT          * pptSrc,  // layer position
				COLORREF         crKey,   // color key
				__EXT_MFC_BLENDFUNCTION  * pblend,  // blend function
				DWORD            dwFlags  // options
				);
		PFNSETLAYEREDWINDOWATTRIBUTES m_pfnSetLayeredWindowAttributes;
		PFNUPDATELAYEREDWINDOW m_pfnUpdateLayeredWindow;

		typedef
			BOOL ( __stdcall * PFNPRINTWINDOW )(
				HWND hwnd,               // Window to copy
				HDC  hdcBlt,             // HDC to print into
				UINT nFlags              // Optional flags
				);
		PFNPRINTWINDOW m_pfnPrintWindow;

		
	public:
		// CExtPmSynchronizeSink methods
		virtual bool PmSynchronizeSink_PerformSynchronizationWith(
			CExtPmSynchronizeSink * pPmSynchronizeSink,
			bool bRegister = true,
			bool bSynchronizeItNow = true
			);
		virtual LPSTREAM PmSynchronizeSink_GetData(
			HGLOBAL hGlobal = NULL
			);
		virtual void PmSynchronizeSink_SynchronizeFrom(
			LPSTREAM pStream
			);

		bool m_bLayeredHighlighting2005:1;
	}; // class CExtPaintManagerAutoPtr

	// construction/destruction
	CExtPaintManager();
	virtual ~CExtPaintManager();

	virtual void SerializeSynchronizationData( CArchive & ar );

	static CExtAnimationParameters g_DefAnimationParametersEmpty;
	static CExtAnimationParameters g_DefAnimationParametersNormal;
	static CExtAnimationParameters g_DefAnimationParametersSlow;
	static CExtAnimationParameters g_DefAnimationParametersVerySlow;
	static CExtAnimationParameters g_DefAnimationParametersVerySlowAndSmooth;
	virtual const CExtAnimationParameters *
		Animation_GetParameters(
			INT eAPT, // __EAPT_*** animation type
			CObject * pHelperSrc,
			const CExtAnimationClient * pAC,
			LPARAM lParam = 0L
			) const;

	// paint session complete event - free all cached objects
	virtual void OnPaintSessionComplete(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	virtual bool NcFrame_IsSupported(
		const CWnd * pWnd,
		LPARAM lParam = 0L
		) const;
	virtual HRGN NcFrame_GenerateSkinFrameRGN(
		const RECT & rcWnd,
		const CWnd * pWnd,
		LPARAM lParam = 0L
		) const;
	virtual INT NcFrame_GetCaptionHeight(
		bool bActive,
		const CWnd * pWnd,
		LPARAM lParam = 0L
		) const;
	virtual void NcFrame_GetMetrics(
		RECT & rcNcBorders,
		RECT & rcThemePadding,
		const CWnd * pWnd,
		LPARAM lParam = 0L
		) const;
	enum e_nc_button_state_t
	{
		__ENCBS_DISABLED = 0,
		__ENCBS_NORMAL = 1,
		__ENCBS_HOVER = 2,
		__ENCBS_PRESSED = 3,
	};
	virtual void NcFrame_Paint(
		CDC & dc,
		const CExtCmdIcon * pIcon,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		UINT nDrawTextAlignFlags,
		const RECT & rcFrame,
		const RECT & rcClient,
		const RECT & rcIcon,
		const RECT & rcText,
		const RECT & rcHelp,
		const RECT & rcMinimize,
		const RECT & rcMaximizeRestore,
		const RECT & rcClose,
		bool bFrameActive,
		bool bFrameEnabled,
		bool bFrameMaximized,
		e_nc_button_state_t eStateButtonHelp,
		e_nc_button_state_t eStateButtonMinimize,
		e_nc_button_state_t eStateButtonMaximizeRestore,
		e_nc_button_state_t eStateButtonClose,
		const CWnd * pWnd,
		LPARAM lParam = 0L
		) const;
	virtual CRect NcFrame_GetHtRect(
		UINT nHT,
		bool bScreenMapping,
		bool bLayoutBordersH,
		bool bLayoutBordersV,
		const CExtCmdIcon * pIcon,
		const CWnd * pWnd,
		LPMINMAXINFO pMinMaxInfo = NULL,
		LPARAM lParam = 0L
		) const;
	virtual void NcFrame_GetRects(
		CExtCmdIcon * pIcon,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		UINT nDrawTextAlignFlags,
		RECT & rcIcon,
		RECT & rcText,
		RECT & rcHelp,
		RECT & rcMinimize,
		RECT & rcMaximizeRestore,
		RECT & rcClose,
		const CWnd * pWnd,
		LPMINMAXINFO pMinMaxInfo = NULL,
		LPARAM lParam = 0L
		) const;

	virtual bool Bar_MiniDockFrameGetNcMetrics(
		INT & nResizingFrameDX,
		INT & nResizingFrameDY,
		INT & nCaptionDY,
		CExtMiniDockFrameWnd * pMiniFrameWnd,
		CExtControlBar * pBar,
		LPARAM lParam = 0
		) const;
	virtual bool Bar_MiniDockFrameNcCalcSize(
		RECT & rcAdjust,
		CExtMiniDockFrameWnd * pMiniFrameWnd,
		CExtControlBar * pBar,
		LPARAM lParam = 0
		) const;
	virtual bool Bar_MiniDockFrameCaptionCalcRect(
		RECT & rcCaption,
		CExtMiniDockFrameWnd * pMiniFrameWnd,
		CExtControlBar * pBar,
		LPARAM lParam = 0
		) const;
	virtual void PaintResizableBarSeparator(
		CDC & dc,
		const RECT & rc,
		bool bHorz,
		CExtControlBar * pBar,
		LPARAM lParam = 0
		);
	virtual bool Bar_LayoutNcAreaButton(
		RECT & rcButton,
		const RECT & rcCaption,
		CExtBarNcAreaButton * pLayoutBtn,
		CExtBarNcAreaButton * pPrevBtn,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual CRect Bar_GetCaptionBordersForText(
		CExtControlBar * pBar,
		LPARAM lParam = 0
		) const;
	virtual INT Bar_SeparatorWidthGet(
		CExtControlBar * pBar,
		LPARAM lParam = 0
		) const;
	virtual INT Bar_SeparatorHeightGet(
		CExtControlBar * pBar,
		LPARAM lParam = 0
		) const;
	virtual INT Bar_GripperWidthAtLeftGet(
		CExtControlBar * pBar,
		LPARAM lParam = 0
		) const;
	virtual INT Bar_GripperHeightAtTopGet(
		CExtControlBar * pBar,
		LPARAM lParam = 0
		) const;
	virtual HFONT Bar_GetCaptionFont(
		bool bHorz,
		CExtToolControlBar * pBar,
		LPARAM lParam = 0
		);
	virtual CSize Toolbar_GetMinButtonSize(
		CObject * pHelperSrc,
		LPARAM lParam = 0
		);
	virtual void Toolbar_AdjustButtonSize(
		CExtBarButton * pTBB,
		CSize & sizePreCalc
		);
	virtual HFONT Toolbar_GetFont(
		bool bHorz,
		CExtControlBar * pBar,
		LPARAM lParam = 0
		);
	virtual bool Toolbar_GetBGInfo(
		RECT & rcBorders,
		INT & nGripWidthAtLeft,
		INT & nGripHeightAtTop,
		CExtToolControlBar * pBar,
		LPARAM lParam = 0
		) const;
	virtual bool Toolbar_GetSizeOfCEB(
		SIZE & sizeReal,
		const SIZE & sizePreCalc,
		CDC & dc,
		BOOL bHorz,
		CExtBarContentExpandButton * pTBB,
		LPARAM lParam = 0
		);

#ifndef __EXT_MFC_NO_STATUSBAR
	virtual bool StatusBar_QuerySkinSupport(
		const CExtStatusControlBar * pStatusBar,
		LPARAM lParam = 0
		) const;
	virtual bool StatusBar_EraseBackground(
		CDC & dc,
		const RECT & rcClient,
		const CExtStatusControlBar * pStatusBar,
		LPARAM lParam = 0
		) const;
	virtual bool StatusBar_ErasePaneBackground(
		CDC & dc,
		int nPaneIdx,
		const RECT & rcPane,
		const CExtStatusControlBar * pStatusBar,
		LPARAM lParam = 0
		) const;
	virtual bool StatusBar_PaintPane(
		CDC & dc,
		int nPaneIdx,
		const RECT & rcPane,
		DWORD dwPaneStyle,
		HICON hIcon,
		__EXT_MFC_SAFE_LPCTSTR sPaneText,
		UINT nDrawTextFlags,
		COLORREF clrText,
		const CExtStatusControlBar * pStatusBar,
		LPARAM lParam = 0
		) const;
	virtual bool StatusBar_PaintSeparator(
		CDC & dc,
		int nPaneIdxAfterSep,
		const RECT & rcPaneBefore,
		const RECT & rcPaneAfter,
		const CExtStatusControlBar * pStatusBar,
		LPARAM lParam = 0
		) const;
#endif // __EXT_MFC_NO_STATUSBAR

	virtual bool AdjustControlFont(
		HFONT & hFont,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual DLGTEMPLATE * AdjustDialogTemplate(
		const DLGTEMPLATE * lpDialogTemplate,
		CObject * pHelperSrc,
		bool bWizard = false,
		LPARAM lParam = 0L
		);
	virtual HFONT CreateDefaultFont();
	virtual HFONT CreateCaptionFont();

	// init part of color table and system brushes table
	bool m_bUseTahomaFont:1; // uses in SyncSysColors() to re-init font
	virtual void SyncSysColors();

	// get any system color based brush
	virtual HBRUSH GetBrush( int nColorIndex );

	// get any system or translated color value
	virtual COLORREF GetColor(
		int nColorIndex,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	COLORREF GetColor(
		int nColorIndex,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		) const;
	virtual COLORREF GetMenuFrameFillColor(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual COLORREF GetShadowAdjustColor();
	virtual void FixedBar_AdjustClientRect(
		const CExtControlBar * pBar,
		CRect & rcPreCalc
		);
	virtual INT FixedBar_GetRowDistance(
		const CExtToolControlBar * pBar
		);
	virtual bool FixedBar_IsPaintRowBkMode(
		const CExtToolControlBar * pBar
		);

	// install new color
	int InstallColor(
		COLORREF clr,
		int nColorIndex = -1
		);
	
	// install required translated color as
	// described in e_translated_colors_t enumeration
	virtual void InitTranslatedColors();

	// init lighter/darker 3d-face-like brushes
	virtual void InitHelperBrushes();


	// used always by default used translated colors
	enum e_translated_colors_t
	{
		CLR_3DFACE_OUT			= __ExtMfc_COLOR_MAP_BASE + 0,
		CLR_3DFACE_IN			= __ExtMfc_COLOR_MAP_BASE + 1,
		CLR_3DFACE_DISABLED		= __ExtMfc_COLOR_MAP_BASE + 2,

		CLR_3DLIGHT_OUT			= __ExtMfc_COLOR_MAP_BASE + 3,
		CLR_3DLIGHT_IN			= __ExtMfc_COLOR_MAP_BASE + 4,
		CLR_3DLIGHT_DISABLED	= __ExtMfc_COLOR_MAP_BASE + 5,

		CLR_3DHILIGHT_OUT		= __ExtMfc_COLOR_MAP_BASE + 6,
		CLR_3DHILIGHT_IN		= __ExtMfc_COLOR_MAP_BASE + 7,
		CLR_3DHILIGHT_DISABLED	= __ExtMfc_COLOR_MAP_BASE + 8,

		CLR_3DSHADOW_OUT		= __ExtMfc_COLOR_MAP_BASE + 9,
		CLR_3DSHADOW_IN			= __ExtMfc_COLOR_MAP_BASE + 10,
		CLR_3DSHADOW_DISABLED	= __ExtMfc_COLOR_MAP_BASE + 11,

		CLR_3DDKSHADOW_OUT		= __ExtMfc_COLOR_MAP_BASE + 12,
		CLR_3DDKSHADOW_IN		= __ExtMfc_COLOR_MAP_BASE + 13,
		CLR_3DDKSHADOW_DISABLED = __ExtMfc_COLOR_MAP_BASE + 14,
		
		CLR_TEXT_OUT			= __ExtMfc_COLOR_MAP_BASE + 15,
		CLR_TEXT_IN				= __ExtMfc_COLOR_MAP_BASE + 16,
		CLR_TEXT_DISABLED		= __ExtMfc_COLOR_MAP_BASE + 17,

		// Menu text colors
		CLR_MENUTEXT_OUT		= __ExtMfc_COLOR_MAP_BASE + 18,
		CLR_MENUTEXT_IN			= __ExtMfc_COLOR_MAP_BASE + 19,
		CLR_MENUTEXT_DISABLED	= __ExtMfc_COLOR_MAP_BASE + 20,

		// Task Pane colors
		CLR_TASK_PANE_BK_TOP	= __ExtMfc_COLOR_MAP_BASE + 21,
		CLR_TASK_PANE_BK_BOTTOM	= __ExtMfc_COLOR_MAP_BASE + 22,

		CLR_TASK_PANE_GROUP_CAPTION_TEXT_NORMAL				= __ExtMfc_COLOR_MAP_BASE + 23,
		CLR_TASK_PANE_GROUP_CAPTION_TEXT_NORMAL_HOVERED		= __ExtMfc_COLOR_MAP_BASE + 24,
		CLR_TASK_PANE_GROUP_CAPTION_TEXT_HIGHLIGHTED		= __ExtMfc_COLOR_MAP_BASE + 25,
		CLR_TASK_PANE_GROUP_CAPTION_TEXT_HIGHLIGHTED_HOVERED= __ExtMfc_COLOR_MAP_BASE + 26,
	
		CLR_TASK_PANE_GROUP_CAPTION_BK_LEFT_NORMAL			= __ExtMfc_COLOR_MAP_BASE + 27,
		CLR_TASK_PANE_GROUP_CAPTION_BK_LEFT_HIGHLIGHTED		= __ExtMfc_COLOR_MAP_BASE + 28,
		CLR_TASK_PANE_GROUP_CAPTION_BK_RIGHT_NORMAL			= __ExtMfc_COLOR_MAP_BASE + 29,
		CLR_TASK_PANE_GROUP_CAPTION_BK_RIGHT_HIGHLIGHTED	= __ExtMfc_COLOR_MAP_BASE + 30,

		// Page Navigator colors
		CLR_PN_CAPTION_TEXT		= __ExtMfc_COLOR_MAP_BASE + 31,

		// Group Box colors
		CLR_GROUP_BOX_FRAME		= __ExtMfc_COLOR_MAP_BASE + 32,

		// Resizable Bar non client area color
		CLR_WRB_FRAME = __ExtMfc_COLOR_MAP_BASE + 33,
	};

	// align types
	enum e_align_t
	{
		__ALIGN_HORIZ_LEFT		= 0x00000000L,
		__ALIGN_HORIZ_CENTER	= 0x00000001L,
		__ALIGN_HORIZ_RIGHT		= 0x00000002L,
		__ALIGN_HORIZ_MASK		= 0x00000003L,
		__ALIGN_VERT_TOP		= 0x00000004L,
		__ALIGN_VERT_CENTER		= 0x00000008L,
		__ALIGN_VERT_BOTTOM		= 0x00000010L,
		__ALIGN_VERT_MASK		= 0x0000001CL,
	};

	enum e_ButtonFocusMode_t
	{
		__EBFM_CAPTION_AREA		= 0x00000000L,
		__EBFM_CLIENT_AREA		= 0x00000001L,
	};

	// gets the pushed metic offset
	virtual CSize GetPushedOffset();

	class __PROF_UIS_API glyph_t
	{
		CSize m_size; // size in pixels
		UINT m_nColors; // count of used indexes (including 0)
			// index 0 - transparent
		const UINT * m_pColorIndexes;
		bool m_bDynamicData;
	public:
		glyph_t();
		glyph_t(
			const SIZE & _size,
			UINT nColors,
			const UINT * pColorIndexes
			);
		glyph_t(
			int cx,
			int cy,
			UINT nColors,
			const UINT * pColorIndexes
			);
		glyph_t(
			const glyph_t & other,
			UINT nRotateAngle = 0
				);
		~glyph_t();

		const glyph_t & operator = ( const glyph_t & other )
		{
			_CopyFromOther(other);
		#ifdef _DEBUG
			if( other.m_pColorIndexes != NULL )
			{
				ASSERT( m_pColorIndexes != NULL );
				ASSERT( m_pColorIndexes != other.m_pColorIndexes );
				ASSERT( m_bDynamicData );
			}
		#endif // _DEBUG
			return *this;
		}

		UINT GetColorPixel(
			int x,
			int y
			) const;
		void Rotate(UINT nRotateAngle);
		CSize Size() const;
		operator CSize() const
		{
			return Size();
		}
		const UINT * GetSurface() const;
		UINT GetColorsCount() const;

	private:
		void _Init();
		void _Done();
		bool _CopyFromOther( const glyph_t & other );
		void _SetColorPixel(
			int x,
			int y,
			UINT nValue
			);
	public:
	
		static bool stat_DefGlyphRgnTransparencyFunc(
			const glyph_t & _glyph,
			int x,
			int y,
			UINT nColor,
			LPVOID lpCookie
			);
		CRgn & GenerateRgn(
			CRgn & rgn,
			bool (*pGlyphRgnTransparencyFunc)(
				const glyph_t & _glyph,
				int x,
				int y,
				UINT nColor,
				LPVOID lpCookie
				) = stat_DefGlyphRgnTransparencyFunc,
			LPVOID lpCallbackCookie = NULL,
			LPLONG pMinNonTransparentX = NULL,
			LPLONG pMinNonTransparentY = NULL,
			LPLONG pMaxNonTransparentX = NULL,
			LPLONG pMaxNonTransparentY = NULL,
			LPLONG pMinTransparentX = NULL,
			LPLONG pMinTransparentY = NULL,
			LPLONG pMaxTransparentX = NULL,
			LPLONG pMaxTransparentY = NULL
			) const;
	}; // class glyph_t

	static const glyph_t g_glyph_btn_expand_left;
	static const glyph_t g_glyph_btn_expand_right;
	static const glyph_t g_glyph_btn_expand_right2;
	static const glyph_t g_glyph_btn_expand_bottom;
	static const glyph_t g_glyph_btn_expand_bottom2;

	static const glyph_t g_glyph_btn_expand_left_2003;
	static const glyph_t g_glyph_btn_expand_right_2003;
	static const glyph_t g_glyph_btn_expand_right2_2003;
	static const glyph_t g_glyph_btn_expand_bottom_2003;
	static const glyph_t g_glyph_btn_expand_bottom2_2003;

	static const glyph_t g_glyph_customize_popup_src;
	static const glyph_t g_glyph_customize_dropdown_src;

	static const glyph_t g_glyph_task_pane_btn_expand_up;
	static const glyph_t g_glyph_task_pane_btn_expand_down;

	static const BYTE g_arrWinXpTreeBoxCollapsedBmpData_small[];
	static const BYTE g_arrWinXpTreeBoxExpandedBmpData_small[];
	static const BYTE g_arrWinXpTreeBoxCollapsedBmpData_big[];
	static const BYTE g_arrWinXpTreeBoxExpandedBmpData_big[];

	virtual void LoadWinXpTreeBox(
		CExtCmdIcon & _icon,
		bool bExpanded,
		bool bBig = false
		);

	virtual void PaintGlyph(
		CDC & dc,
		POINT ptDest,
		const glyph_t & glyph,
		COLORREF * pColorValues
		);
	virtual void PaintGlyphCentered(
		CDC & dc,
		const RECT & rect,
		const glyph_t & glyph,
		COLORREF * pColorValues
		);

	virtual void PaintFloatToolbarRowBk(
		CDC & dc,
		const CExtToolControlBar * pBar,
		int nLastReviewBtnIdx,
		CRect & rcRowBk
		);

	virtual void PaintToolbarExpandButton(
		CDC & dc,
		const RECT & rcButtonArea,
		bool bHorz, // if false - down
		bool bBarIsCompletelyVisible,
		bool bEnabled,
		bool bPushed,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		bool bTransparentBackground = false
		);
	virtual void PaintMenuExpandButton(
		CDC & dc,
		const RECT & rectButton,
		bool bPushed,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintMenuScrollButton(
		CDC & dc,
		bool bHover,
		bool bPushed,
		bool bTopButton,
		const RECT & rcScrollButton,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintMenuTearOffButton(
		CDC & dc,
		const RECT & rectButton,
		bool bPushed,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual int GetMenuExpandButtonHeight();

	// statically implemented paint/helper algorithms

	static DWORD stat_DllGetVersion( __EXT_MFC_SAFE_LPCTSTR lpszDllName );

	static HBITMAP stat_GetScreenSurfacePart(
		const RECT & rcScreenSurfacePart,
		COLORREF ** ppClrSurface = NULL
		);

	static HBITMAP stat_PrintWnd(
		HWND hWnd,
		UINT nMessage = WM_PRINTCLIENT,
		LPARAM lParamPrint = PRF_NONCLIENT|PRF_CLIENT|PRF_ERASEBKGND|PRF_CHILDREN,
		HDC hSrcDC = NULL,
		const RECT * pRectFillSrc = NULL
		);
	static void stat_PrintChildren(
		HWND hWndStart,
		UINT nMessage,
		HDC hDC,
		LPARAM lParamPrint,
		bool bDeepTreeWalk = true,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	static LONG stat_PassPaintMessages(
		HWND hWnd,
		bool bPassNcPaint = true,
		bool bPassEraseBkgnd = true,
		bool bPassPaint = true
		);
	static LONG stat_PassPaintMessages(
		bool bPassNcPaint = true,
		bool bPassEraseBkgnd = true,
		bool bPassPaint = true
		);

#if (defined __EXT_PM_BACK_COMPATIBILITY_BITMAP_API)
	static bool stat_ResizeBitmap(
		CBitmap & bmpSrc,
		CSize _size,
		CBrush & brushFill
		);
	static HICON stat_HBITMAPtoHICON(
		HBITMAP hBmpSrc,
		COLORREF clrTransparent,
		const RECT * pRcPart = NULL,
		bool bReplaceSysColors = true
		);
	static bool stat_CloneBitmap(
		CBitmap & bmpDst,
		const CBitmap & bmpSrc,
		const RECT * pRcPart = NULL,
		COLORREF ** ppSurface = NULL // if not NULL - create 32 bit surface
		);
	static HBITMAP stat_CloneBitmap(
		HBITMAP hBmpSrc,
		const RECT * pRcPart = NULL,
		COLORREF ** ppSurface = NULL // if not NULL - create 32 bit surface
		);
	static INT stat_GetBitmapColorMap( // returns bitmap's color bit count or zero if error
		HBITMAP hBmpSrc,
		CMap < COLORREF, COLORREF, DWORD, DWORD > & _map // key is color, value is count of color entries in bitmap
		);
	static INT stat_GetBitmapColorArray( // returns bitmap's color bit count or zero if error
		HBITMAP hBmpSrc,
		CArray < COLORREF, COLORREF > & arr,
		bool bMakeUniqueColors = true // used only if bit count <= 8
		);
	static HGLOBAL stat_HBITMAPtoHGLOBAL(
		HBITMAP hBmpSrc,
		HPALETTE hPalDst = NULL
		);
	static HBITMAP stat_LoadBitmapFromMemoryData(
		const BYTE * pDataBmp,
		DWORD dwSizeDataBmp
		);
	static bool stat_SerializeBitmap(
		CArchive & ar,
		HBITMAP * p_hBmp,
		DWORD dwResourceSize = 0L // not 0 only if loaded from resources
		);
	static bool stat_SerializeBitmap(
		__EXT_MFC_SAFE_LPCTSTR strFileName,
		bool bRead,
		HBITMAP * p_hBmp
		);
	static HBITMAP stat_LoadBitmapResource(
		HINSTANCE hInst,
		HRSRC hRsrc
		);
	static HBITMAP stat_LoadBitmapResource(
		__EXT_MFC_SAFE_LPCTSTR sResourceID,
		__EXT_MFC_SAFE_LPCTSTR sResourceType = RT_BITMAP, // default bitmap section
		HINSTANCE hInst = NULL // find it automatically
		);
#endif // (defined __EXT_PM_BACK_COMPATIBILITY_BITMAP_API)

	struct monitor_parms_t
	{
		CRect m_rcMonitor, m_rcWorkArea;
		bool m_bPrimaryMonitor:1;
		monitor_parms_t()
			: m_rcMonitor( 0, 0, 0, 0 )
			, m_rcWorkArea( 0, 0, 0, 0 )
			, m_bPrimaryMonitor( true )
		{
		}
	}; // struct monitor_parms_t
	static void stat_GetMonitorParms(
		monitor_parms_t & _mp
		);
	static void stat_GetMonitorParms(
		monitor_parms_t & _mp,
		const POINT & _ptScreenFrom
		);
	static void stat_GetMonitorParms(
		monitor_parms_t & _mp,
		const RECT & _rcScreenFrom
		);
	static void stat_GetMonitorParms(
		monitor_parms_t & _mp,
		HWND hWndFrom
		);
	static void stat_GetMonitorParms(
		monitor_parms_t & _mp,
		CWnd * pWndFrom
		);
	static CRect stat_AlignWndRectToMonitor(
		CRect rcInitial,
		bool bUseWorkArea = true, // if false - use all monitor area
		bool bNoPartialVisibility = false
		);

	static void stat_DrawDotLineH(
		CDC & dc,
		int x1,
		int x2,
		int y,
		COLORREF clrDots
		);
	static void stat_DrawDotLineV(
		CDC & dc,
		int x,
		int y1,
		int y2,
		COLORREF clrDots
		);

#if (defined __EXT_PM_BACK_COMPATIBILITY_COLOR_API)

	static COLORREF stat_RGBtoCMY( COLORREF clr );
	static COLORREF stat_CMYtoRGB( COLORREF clr );

	//----------------------------------------------------------------------
	// Conversion between the HSL (Hue, Saturation, and Luminosity) 
	// and RBG color model.
	//----------------------------------------------------------------------
	// The conversion algorithms presented here come from the book by 
	// Fundamentals of Interactive Computer Graphics by Foley and van Dam. 
	// In the example code, HSL values are represented as floating point 
	// number in the range 0 to 1. RGB tridrants use the Windows convention 
	// of 0 to 255 of each element. 
	//----------------------------------------------------------------------
	static double stat_HuetoRGB(double m1, double m2, double h );
	static COLORREF stat_HLStoRGB( double H, double L, double S );
	static void stat_RGBtoHSL( COLORREF rgb, double *H, double *S, double *L );

	static BYTE stat_GetRGBFromHue(float rm1, float rm2, float rh);
	static COLORREF stat_GetRGBFromHLSExtend( double H, double L, double S );

	static COLORREF stat_HLS_Adjust(
		COLORREF clr,
		double percentH = 0.0,
		double percentL = 0.0,
		double percentS = 0.0
		);

	static COLORREF stat_RGB_Enlight( 
		COLORREF clrLight, 
		COLORREF clrDark, 
		INT nEnlighten
		);

	static COLORREF stat_RGB_Blend( 
		COLORREF clrFrom, 
		COLORREF clrTo, 
		INT nAlpha
		);

#endif // (defined __EXT_PM_BACK_COMPATIBILITY_COLOR_API)

	static BOOL stat_PaintParentBk(
		HWND hWnd,
		HDC hDC,
		LPCRECT rectClip = NULL
		);

	typedef bool (*pfnExcludeChildAreaCallback)(
		HDC hDC,
		HWND hWnd,
		HWND hWndChild,
		LPVOID pCookie
		);

	static void stat_ExcludeChildAreas(
		HDC hDC,
		HWND hWnd,
		pfnExcludeChildAreaCallback pCallback = NULL,
		LPVOID pCallbackCookie = NULL
		);

	static void stat_TransparentBlt(
		HDC hdcDest,        // handle to destination DC
		int nXOriginDest,   // x-coord of destination upper-left corner
		int nYOriginDest,   // y-coord of destination upper-left corner
		int nWidthDest,     // width of destination rectangle
		int hHeightDest,    // height of destination rectangle
		HDC hdcSrc,         // handle to source DC
		int nXOriginSrc,    // x-coord of source upper-left corner
		int nYOriginSrc,    // y-coord of source upper-left corner
		int nWidthSrc,      // width of source rectangle
		int nHeightSrc,     // height of source rectangle
		UINT crTransparent  // color to make transparent
		);

	// generate DIB for UI light brush (when BPP <=8)
	static HBITMAP stat_GenLBDIB(
		COLORREF clrDarker = COLORREF(-1), // by default COLORREF(-1) is changed to ::GetSysColor(COLOR_BTNFACE)
		COLORREF clrLighter = COLORREF(-1), // by default COLORREF(-1) is changed to ::GetSysColor(COLOR_BTNHIGHLIGHT)
		int nColorMaskHorz = 1,
		int nColorMaskVert = 1,
		int nSkipMaskHorz = 0,
		int nSkipMaskVert = 0,
		COLORREF clrSkip = COLORREF(-1L) // // default COLORREF(-1) is changed to clrDarker
		);

	static void stat_PaintGradientRect(
		CDC & dc,
		const CRect & rcPaintGradient,
		COLORREF clrLeft,
		COLORREF clrRight,
		bool bHorz = false,
		UINT nCountOfSteps = 256
		);
	static void stat_PaintGradientRect2steps(
		CDC & dc,
		const CRect & rcPaintGradient,
		COLORREF clrLeft,
		COLORREF clrMiddle,
		COLORREF clrRight,
		bool bHorz = false,
		INT nNumerator = 2,
		INT nDenominator = 5,
		UINT nCountOfSteps = 256
		);

	static void stat_PaintDotNet3dRect(
		CDC & dc,
		LPCRECT lpRect,
		COLORREF clrTopLeft,
		COLORREF clrBottomRight
		);
	static void stat_PaintDotNet3dRect(
		CDC & dc,
		int x,
		int y,
		int cx,
		int cy,
		COLORREF clrTopLeft,
		COLORREF clrBottomRight
		);

	static void stat_PaintRadioDot(
		CDC & dc,
		int x,
		int y,
		COLORREF color
		);

	static void stat_PaintCheckMark(
		CDC & dc,
		int x,
		int y,
		COLORREF color
		);

#if (!defined __EXT_MFC_NO_TAB_CTRL)

	static void stat_PaintTabItemImpl(
		CDC & dc,
		CRect & rcTabItemsArea,
		bool bTopLeft,
		bool bHorz,
		bool bSelected,
		bool bEnabled,
		bool bCenteredText,
		bool bGroupedMode,
		bool bInGroupActive,
		bool bInvertedVerticalMode,
		bool bDrawIcon,
		const CRect & rcEntireItem,
		CSize sizeTextMeasured,
		CFont * pFont,
		__EXT_MFC_SAFE_LPCTSTR sText,
		CExtCmdIcon * pIcon,
		CExtCmdIcon * pIconTabItemCloseButton,
		INT nPaintStateITICB,
		CRect & rcTabItemCloseButton,
		COLORREF clrText,
		COLORREF clrTabBk,
		COLORREF clrTabBorderLT,
		COLORREF clrTabBorderRB,
		COLORREF clrTabSeparator,
		bool bEnableEndEllipsis = true,
		CObject * pHelperSrc = NULL
		);

	static void stat_PaintTabButtonImpl(
		CDC & dc,
		CRect & rcButton,
		LONG nHitTest,
		bool bTopLeft,
		bool bHorz,
		bool bEnabled,
		bool bHover,
		bool bPushed,
		bool bGroupedMode,
		COLORREF clrGlyph,
		COLORREF clrTL,
		COLORREF clrBR,
		bool bFlat = false
		);

	static void stat_PaintTabClientAreaImpl(
		CDC & dc,
		CRect & rcClient,
		CRect & rcTabItemsArea,
		CRect & rcTabNearBorderArea,
		DWORD dwOrientation,
		bool bGroupedMode,
		COLORREF clrTabItemsAreaBk,
		COLORREF clrTabNearBorderAreaBk,
		COLORREF clrTabNearMargin
		);

	virtual void GetThemeAccentTabColors(
		COLORREF * pClrSetectedTabItemText,
		COLORREF * pClrSetectedTabItemFace = NULL,
		COLORREF * pClrSetectedTabItemBorderLight = NULL,
		COLORREF * pClrSetectedTabItemBorderDark = NULL,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	virtual void PaintTabItem(
		CDC & dc,
		CRect & rcTabItemsArea,
		bool bTopLeft,
		bool bHorz,
		bool bSelected,
		bool bCenteredText,
		bool bGroupedMode,
		bool bInGroupActive,
		bool bInvertedVerticalMode,
		const CRect & rcEntireItem,
		CSize sizeTextMeasured,
		CFont * pFont,
		__EXT_MFC_SAFE_LPCTSTR sText,
		CExtCmdIcon * pIcon,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		COLORREF clrForceText = COLORREF(-1L),
		COLORREF clrForceTabBk = COLORREF(-1L),
		COLORREF clrForceTabBorderLT = COLORREF(-1L),
		COLORREF clrForceTabBorderRB = COLORREF(-1L),
		COLORREF clrForceTabSeparator = COLORREF(-1L)
		);

	virtual bool QueryTabWndHoverChangingRedraw(
		const CExtTabWnd * pWndTab,
		LPARAM lParam = 0L
		);

	virtual void PaintTabClientArea(
		CDC & dc,
		CRect & rcClient,
		CRect & rcTabItemsArea,
		CRect & rcTabNearBorderArea,
		DWORD dwOrientation,
		bool bGroupedMode,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	
	virtual void PaintTabbedTabClientArea(
		CDC & dc,
		CRect & rcClient,
		CRect & rcTabItemsArea,
		CRect & rcTabNearBorderArea,
		DWORD dwOrientation,
		bool bGroupedMode,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	
	virtual void PaintTabButton(
		CDC & dc,
		CRect & rcButton,
		LONG nHitTest,
		bool bTopLeft,
		bool bHorz,
		bool bEnabled,
		bool bHover,
		bool bPushed,
		bool bGroupedMode,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		bool bFlat = false
		);

	virtual void PaintTabNcAreaRect(
		CDC & dc,
		const RECT & rc,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	
	virtual void TabWnd_MeasureItemAreaMargins(
		CExtTabWnd * pTabWnd,
		LONG & nSpaceBefore,
		LONG & nSpaceAfter,
		LONG & nSpaceOver
		);	
	
	virtual void TabWnd_UpdateItemMeasure(
		CExtTabWnd * pTabWnd,
		CExtTabWnd::TAB_ITEM_INFO * pTii,
		CDC & dcMeasure,
		CSize & sizePreCalc
		);	
	virtual bool TabWnd_GetParentSizingMargin(
		INT & nMargin,
		DWORD dwOrientation,
		CExtTabWnd * pTabWnd
		) const;
	virtual void TabWnd_AdjustItemCloseButtonRect(
		CRect & rcCloseButton,
		CExtTabWnd * pTabWnd
		);	
#endif // #if (!defined __EXT_MFC_NO_TAB_CTRL)

	virtual void PaintResizableBarChildNcAreaRect(
		CDC & dc,
		const RECT & rc,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	static CRect stat_CalcTextDimension(
		CDC & dc,
		CFont & font,
		const CExtSafeString & strText,
		UINT uFlags = DT_SINGLELINE|DT_LEFT|DT_CALCRECT
		);
	static int stat_CalcTextWidth(
		CDC & dc,
		CFont & font,
		const CExtSafeString & strText
		);

	// paint methods

	virtual void PaintIcon(
		CDC & dc,
		bool bHorz,
		CExtCmdIcon * pIcon,
		const CRect & rcClient,
		bool bPushed,
		bool bEnabled,
		bool bHover = false,
		INT nIconAlignment = 0,
		bool bRTL = false,
		CRect * prcIcon = NULL,
		CRect * prcText = NULL,
		CRect * prcIconMargins = NULL,
		COLORREF clrCustomAccentEffectForIcon = COLORREF(-1L)
		);

	CExtBitmap m_bmpFilterApplied, m_bmpFilterUnApplied;

	enum e_docking_caption_button_t
	{
		__DCBT_EMPTY					= 0,
		__DCBT_CLOSE					= 1,
		__DCBT_ARROW_UP					= 2,
		__DCBT_ARROW_DOWN				= 3,
		__DCBT_ARROW_LEFT				= 4,
		__DCBT_ARROW_RIGHT				= 5,
		__DCBT_WND_MINIMIZE				= 6,
		__DCBT_WND_RESTORE				= 7,
		__DCBT_WND_MAXIMIZE				= 8,
		__DCBT_WND_CONTEXTHELP			= 9,
		__DCBT_WND_KEEP					= 10,
		__DCBT_WND_UNKEEP				= 11,
		__DCBT_ARROW_UP_L				= 12,
		__DCBT_ARROW_DOWN_L				= 13,
		__DCBT_ARROW_LEFT_L				= 14,
		__DCBT_ARROW_RIGHT_L			= 15,
		__DCBT_XP_THIN_CLOSE			= 16,
		__DCBT_HOLLOW_UP				= 17,
		__DCBT_HOLLOW_DOWN				= 18,
		__DCBT_HOLLOW_LEFT				= 19,
		__DCBT_HOLLOW_RIGHT				= 20,
		__DCBT_CLOSE_DC2K				= 21,
		__DCBT_HOLLOW_PLUS				= 22,
		__DCBT_HOLLOW_MINUS				= 23,
		__DCBT_TREE_PLUS				= 24,
		__DCBT_TREE_MINUS				= 25,
		__DCBT_CIRCLE_PLUS				= 26,
		__DCBT_CIRCLE_MINUS				= 27,
		__DCBT_ARROW_PT_UP				= 28,
		__DCBT_ARROW_PT_DOWN			= 29,
		__DCBT_ARROW_PT_LEFT			= 30,
		__DCBT_ARROW_PT_RIGHT			= 31,
		__DCBT_ARROW_PT_LT				= 32,
		__DCBT_ARROW_PT_RT				= 33,
		__DCBT_ARROW_PT_RB				= 34,
		__DCBT_ARROW_PT_LB				= 35,
		__DCBT_ARROW_SMALL_UP			= 36,
		__DCBT_ARROW_SMALL_DOWN			= 37,
		__DCBT_ARROW_SMALL_LEFT			= 38,
		__DCBT_ARROW_SMALL_RIGHT		= 39,
		__DCBT_ELLIPSIS					= 40,
		__DCBT_ARROW_SORT_UP			= 41,
		__DCBT_ARROW_SORT_DOWN			= 42,
		__DCBT_ARROW_SORT_LEFT			= 43,
		__DCBT_ARROW_SORT_RIGHT			= 44,
		__DCBT_TABS_LIST_ARROW			= 45,
		__DCBT_PN_CONFIG_BUTTON			= 46,
		__DCBT_PN_CONFIG_BUTTON_2007	= 47,
		__DCBT_PN_CAPTION_EXPANDED		= 48,
		__DCBT_PN_CAPTION_COLLAPSED		= 49,
		__DCBT_TREE_PLUS_FILLED			= 50,
		__DCBT_TREE_MINUS_FILLED		= 51,
		__DCBT_SCROLL_TOP				= 52,
		__DCBT_SCROLL_LEFT				= 53,
		__DCBT_SCROLL_BOTTOM			= 54,
		__DCBT_SCROLL_RIGHT				= 55,
		__DCBT_2007_ARROW_SORT_UP		= 56,
		__DCBT_2007_ARROW_SORT_DOWN		= 57,
		__DCBT_2007_ARROW_SORT_LEFT		= 58,
		__DCBT_2007_ARROW_SORT_RIGHT	= 59,

		__DCBT_VALUE_MIN				= 0,
		__DCBT_VALUE_MAX				= 59,
	};
	
	static glyph_t * g_DockingCaptionGlyphs[__DCBT_VALUE_MAX+1];

	struct __PROF_UIS_API PAINTDOCKINGCAPTIONBUTTONDATA
	{
		CObject * m_pHelperSrc;
		LPARAM m_lParam;
		CRect m_rcClient;
		int m_eType; // CExtPaintManager::e_docking_caption_button_t
		bool m_bHover:1;
		bool m_bPushed:1;
		bool m_bEnabled:1;
		bool m_bSideBar:1;
		bool m_bBarWndActive:1;
		bool m_bFloating:1;

		PAINTDOCKINGCAPTIONBUTTONDATA();
		PAINTDOCKINGCAPTIONBUTTONDATA(
			CObject * pHelperSrc,
			const RECT & rcClient,
			int eType, // CExtPaintManager::e_docking_caption_button_t
			bool bHover,
			bool bPushed,
			bool bEnabled,
			bool bSideBar,
			bool bBarWndActive,
			bool bFloating
			);
	}; // struct PAINTDOCKINGCAPTIONBUTTONDATA

	virtual void PaintDockingCaptionButton(
		CDC & dc,
		CExtPaintManager::PAINTDOCKINGCAPTIONBUTTONDATA & _pdcbd
		);

	virtual void PaintSysCmdGlyph(
		CDC & dc,
		UINT nHelperSysCmdID,
		const RECT & rcItem,
		bool bHover,
		bool bPushed,
		bool bEnabled
		);

	struct __PROF_UIS_API PAINTPUSHBUTTONDATA
	{
		CObject * m_pHelperSrc;
		LPARAM m_lParam;
		CRect m_rcClient;
		__EXT_MFC_SAFE_LPCTSTR m_sText;
		CExtCmdIcon * m_pIcon;
		HFONT m_hFont;
		UINT m_nHelperSysCmdID;

		INT m_nTextAlignment;
		INT m_nIconAlignment;

		CRect m_rcBorderSizes;
		CRect m_rcIconMargins;
		CRect m_rcTextMargins;

		INT m_nFocusMode;

		bool m_bHorz:1;
		bool m_bFlat:1;
		bool m_bHover:1;
		bool m_bPushed:1;
		bool m_bChecked:1;
		bool m_bIndeterminate:1;
		bool m_bEnabled:1;
		bool m_bDrawBorder:1;
		bool m_bDrawFocusRect:1;
		bool m_bDefaultPushButton:1;
		bool m_bDropDown:1;
		bool m_bTransparentBackground:1;
		bool m_bSeparatedDropDown:1;
		bool m_bNoDropDownArrow:1;
		bool m_bPushedDropDown:1;
		bool m_bHoverDropDown:1;
		bool m_bHelperColorCellButton:1;

		// text properties
		bool m_bWordBreak:1;

		// custom colors
		COLORREF m_clrForceTextDisabled, m_clrForceTextNormal,
			m_clrForceTextHover, m_clrForceTextPressed,
			m_clrCustomAccentEffectForIcon;
		COLORREF m_clrForceBk;
		UINT m_nDrawTextFlagsH;
		bool m_bForceUseDrawTextApiH:1;
		bool m_bForceRtlLayout:1;
		bool m_bForceRtlText:1;

		PAINTPUSHBUTTONDATA();
		PAINTPUSHBUTTONDATA(
			CObject * pHelperSrc,
			bool bHorz,
			const RECT & rcClient,
			__EXT_MFC_SAFE_LPCTSTR sText,
			CExtCmdIcon * pIcon,
			bool bFlat,
			bool bHover,
			bool bPushed,
			bool bIndeterminate,
			bool bEnabled,
			bool bDrawBorder,
			bool bDrawFocusRect,
			bool bDefaultPushButton,
			int eAlign,
			HFONT hFont = NULL,
			bool bDropDown = false,
			UINT nHelperSysCmdID = 0,
			bool bTransparentBackground = false
			);

		bool IsRTL();
	}; // struct PAINTPUSHBUTTONDATA

	virtual void PaintPushButton(
		CDC & dc,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);
	virtual void PaintPushButtonText(
		CDC & dc,
		CRect & rcCaption,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);
	virtual void PaintPushButtonIcon(
		CDC & dc,
		CRect & rcClient,
		CRect & rcCaption,
		CRect & rcFocus,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);

	enum eBoxState_t
	{
		BOX_UNCHECKED					= 0, // unchecked state (check, radio)
		BOX_CHECKED						= 1, // checked state (check, radio)
		BOX_INDETERMINATE				= 2, // indeterminate state (check)
		
		BOX_LDOWN_UNCHECKED				= 3, // mouse down in unchecked state (check, radio)
		BOX_LDOWN_CHECKED				= 4, // mouse down in checked state (check, radio)
		BOX_LDOWN_INDETERMINATE			= 5, // mouse down in indeterminate state (check)
		
		BOX_MOUSE_HOVER_UNCHECKED		= 6, // mouse hover in unchecked state (check, radio)
		BOX_MOUSE_HOVER_CHECKED			= 7, // mouse hover in checked state (check, radio)
		BOX_MOUSE_HOVER_INDETERMINATE	= 8, // mouse hover in indeterminate state (check)
		
		BOX_DISABLED_UNCHECKED			= 9, // disabled in unchecked state (check, radio)
		BOX_DISABLED_CHECKED			= 10,// disabled in checked state (check, radio)
		BOX_DISABLED_INDETERMINATE		= 11 // disabled in indeterminate state (check)

	}; // enum eBoxState_t

	struct __PROF_UIS_API PAINTCHECKRADIOBUTTONDATA
	{
		eBoxState_t m_eState;

		CObject * m_pHelperSrc;
		LPARAM m_lParam;
		CRect m_rcClient;
		__EXT_MFC_SAFE_LPCTSTR m_sText;
		HFONT m_hFont;
		
		INT m_nTextAlignment;
		CRect m_rcTextMargins;

		bool m_bLeftText:1;
		bool m_bMultiline:1;
		bool m_bHover:1;
		bool m_bPushed:1;
		bool m_bEnabled:1;
		bool m_bDrawFocusRect:1;
		bool m_bTransparentBackground:1;

		COLORREF m_clrForceTextDisabled;
		COLORREF m_clrForceTextNormal;
		COLORREF m_clrForceTextHover;
		COLORREF m_clrForceTextPressed;
		COLORREF m_clrForceBk;

		CRect m_rcBox;

		PAINTCHECKRADIOBUTTONDATA();
		PAINTCHECKRADIOBUTTONDATA(
			CObject * pHelperSrc,
			eBoxState_t eState,
			bool bLeftText,
			bool bMultiline,
			const RECT & rcClient,
			__EXT_MFC_SAFE_LPCTSTR sText,
			bool bHover,
			bool bPushed,
			bool bEnabled,
			bool bDrawFocusRect,
			INT eAlign,
			HFONT hFont = NULL,
			bool bTransparentBackground = false
			);
	}; // struct PAINTCHECKRADIOBUTTONDATA

	virtual CSize GetCheckButtonBoxSize(
		CDC & dc,
		CExtPaintManager::PAINTCHECKRADIOBUTTONDATA & _pcbd
		) const;
	virtual CSize GetRadioButtonBoxSize(
		CDC & dc,
		CExtPaintManager::PAINTCHECKRADIOBUTTONDATA & _pcbd
		) const;

	virtual void PaintCheckOrRadioButtonText(
		CDC & dc,
		CExtPaintManager::PAINTCHECKRADIOBUTTONDATA & _pcbd,
		CSize _sizeBox,
		CRect & rcBoxLocation
		);

	virtual void PaintCheckButtonBox(
		CDC & dc,
		CExtPaintManager::PAINTCHECKRADIOBUTTONDATA & _pcbd
		);
	virtual void PaintRadioButtonBox(
		CDC & dc,
		CExtPaintManager::PAINTCHECKRADIOBUTTONDATA & _pcbd
		);

	virtual void PaintCheckButton(
		CDC & dc,
		CExtPaintManager::PAINTCHECKRADIOBUTTONDATA & _pcbd
		);
	virtual void PaintRadioButton(
		CDC & dc,
		CExtPaintManager::PAINTCHECKRADIOBUTTONDATA & _pcbd
		);

	virtual CSize GetDropDividerMerics();
	virtual void PaintDropDivider(
		CDC & dc,
		const RECT & rcItem,
		bool bBefore,
		bool bHorz
		);
	virtual void PaintDragSourceRect(
		CDC & dc,
		const RECT & rcItem
		);

	struct __PROF_UIS_API PAINTMENUITEMDATA
	{
		CObject * m_pHelperSrc;
		LPARAM m_lParam;
		CRect m_rcItem;
		CRect m_rcItemWithIndents;
		INT m_nIconAreaWidth;
		__EXT_MFC_SAFE_LPCTSTR m_sText, m_sAccelText, m_sExtendedText;
		CExtCmdIcon * m_pIcon;
		UINT m_nHelperSysCmdID; // for painting system menu glyphs
		HFONT m_hCustomFont;

		bool m_bPopup:1;
		bool m_bSelected:1;
		bool m_bPushedCheck:1;
		bool m_bPushedRadio:1;
		bool m_bIndeterminate:1;
		bool m_bEnabled:1;
		bool m_bRarelyUsed:1;
		bool m_bRarelyUsedPrev:1;
		bool m_bRarelyUsedNext:1;
		bool m_bForceNoLeftGradient:1;
		bool m_bCustomizeListMode:1;
		bool m_bSeparatedDropDown:1;
		bool m_bXtraMark:1;
		bool m_bXtraChecked:1;
		bool m_bBigAccent:1;
		CRect m_rcInPlaceWnd;
		CExtSafeString m_strInPlaceText;
		bool m_bHelperPopupDropped:1;
		COLORREF m_clrCustomAccentEffectForIcon;
		COLORREF m_clrForceMenuText;

		PAINTMENUITEMDATA();
		PAINTMENUITEMDATA(
			CObject * pHelperSrc,
			const RECT & rcItem,
			const RECT & rcItemWithIndents,
			INT nIconAreaWidth,
			__EXT_MFC_SAFE_LPCTSTR sText,
			__EXT_MFC_SAFE_LPCTSTR sAccelText,
			CExtCmdIcon * pIcon,
			bool bPopup,
			bool bSelected,
			bool bPushedCheck,
			bool bPushedRadio,
			bool bIndeterminate,
			bool bEnabled,
			bool bRarelyUsed,
			bool bRarelyUsedPrev,
			bool bRarelyUsedNext,
			UINT nHelperSysCmdID, // for painting system menu glyphs
			HFONT hCustomFont
			);
	}; // struct PAINTMENUITEMDATA

	virtual int TearOff_GetCaptionHeight() const;
	virtual void TearOff_GetCaptionPaint(
		CDC & dc,
		const RECT & rectItem,
		bool bHover,
		bool bPressed,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	virtual void PaintMenuItem(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid
		);
	virtual void PaintMenuItemIcon(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid
		);
	virtual void PaintMenuItemInPlaceWnd(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid
		);
	virtual void PaintMenuSeparator(
		CDC & dc,
		const RECT & rectItem,
		int nIconAreaWidth,
		bool bRarelyUsed,
		bool bIsForceNoLeftGradient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintSeparator(
		CDC & dc,
		const RECT & rectItem,
		bool bHorz,
		bool bTransparentBk,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	struct __PROF_UIS_API PAINTGRIPPERDATA
	{
		CObject * m_pHelperSrc;
		LPARAM m_lParam;
		const CRect m_rcGripper, m_rcText;
		bool m_bActive:1;
		bool m_bFloating:1;
		bool m_bHorz:1;
		bool m_bSideBar:1;
		__EXT_MFC_SAFE_LPCTSTR m_sCaption;
		bool m_bHelperNoRect:1;
		bool m_bHelperNoFill:1;
		bool m_bForceRTL:1;
		bool m_bFlashCaptionHighlightedState:1;
		COLORREF m_clrFlashCaptionText, m_clrFlashCaptionBackground;

		PAINTGRIPPERDATA();
		PAINTGRIPPERDATA(
			CObject * pHelperSrc,
			const RECT & rcGripper,
			const RECT & rcText,
			bool bActive,
			bool bFloating,
			bool bHorz,
			bool bSideBar = false,
			__EXT_MFC_SAFE_LPCTSTR sCaption = NULL,
			bool bForceRTL = false
			);
	}; // struct PAINTGRIPPERDATA

	virtual void PaintGripper(
		CDC & dc,
		CExtPaintManager::PAINTGRIPPERDATA & _pgd
		);

	struct __PROF_UIS_API PAINTDOCKINGFRAMEDATA
	{
		CObject * m_pHelperSrc;
		LPARAM m_lParam;
		CRect m_rcWindow;
		CRect m_rcClient;
		bool m_bActive:1;
		bool m_bFloating:1;
		bool m_bExtBar:1;
		bool m_bSideBar:1;

		PAINTDOCKINGFRAMEDATA();
		PAINTDOCKINGFRAMEDATA(
			CObject * pHelperSrc,
			const RECT & rcWindow,
			const RECT & rcClient,
			bool bActive,
			bool bFloating,
			bool bExtBar,
			bool bSideBar = false
			);
	}; // struct PAINTDOCKINGFRAMEDATA

	virtual void PaintDockingFrame(
		CDC & dc,
		CExtPaintManager::PAINTDOCKINGFRAMEDATA & _pdfd
		);

	struct __PROF_UIS_API PAINTCONTROLFRAMEDATA
	{
		CObject * m_pHelperSrc;
		LPARAM m_lParam;
		CRect m_rcClient;
		bool m_bFlat:1;
		bool m_bHover:1;
		bool m_bEnabled:1;
		bool m_bFocus:1;
		bool m_bReadOnly:1;

		PAINTCONTROLFRAMEDATA();
		PAINTCONTROLFRAMEDATA(
			CObject * pHelperSrc,
			const RECT & rcClient,
			bool bFlat,
			bool bHover,
			bool bEnabled,
			bool bFocus,
			bool bReadOnly
			);
	}; // struct PAINTCONTROLFRAMEDATA

	virtual void PaintControlFrame(
		CDC & dc,
		CExtPaintManager::PAINTCONTROLFRAMEDATA & _pcfd
		);

	struct __PROF_UIS_API PAINTCOMBOFRAMEDATA
	{
		CObject * m_pHelperSrc;
		LPARAM m_lParam;
		CRect m_rcClient;
		bool m_bHover:1;
		bool m_bPushed:1;
		bool m_bEnabled:1;
		COLORREF
			m_clrForceNABorder,
			m_clrForceNAContent,
			m_clrForceActiveOuterBorder
			;
		bool m_bNoTopOuterBorder:1;
		bool m_bRightText:1;

		PAINTCOMBOFRAMEDATA();
		PAINTCOMBOFRAMEDATA(
			CObject * pHelperSrc,
			const RECT & rcClient,
			bool bHover,
			bool bPushed,
			bool bEnabled,
			bool bRightText = false
			);
	}; // struct PAINTCOMBOFRAMEDATA

	virtual void PaintComboFrame(
		CDC & dc,
		CExtPaintManager::PAINTCOMBOFRAMEDATA & _pcfd
		);

	static HICON stat_GenerateColorIconBox(
		COLORREF clrIcon
		);
	static HICON stat_GenerateColorIconChar(
		COLORREF clrIcon,
		HFONT hFontForLetter,
		__EXT_MFC_SAFE_TCHAR tChr
		);
	static HICON stat_GenerateColorIconChar(
		COLORREF clrIcon,
		HFONT hFontForLetter
		);
	static HICON stat_GenerateColorIconFrame(
		COLORREF clrIcon
		);

	static bool stat_DefIsHwndNeedsDirectRepaint(
		HWND hWndChild
		);
	static bool stat_DefExcludeChildAreaCallback(
		HDC hDC,
		HWND hWnd,
		HWND hWndChild,
		LPVOID pCookie
		);

	static int stat_GetBPP();

	virtual INT GetDropDownButtonWidth(
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		) const;
	virtual INT GetSpinButtonWidth(
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		) const;
	virtual CRect GetSpinButtonMargins(
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		) const;

	CSize GetTextSizes(bool bBold = false);
	virtual int GetTextHeight(bool bHorz);

	virtual int GetTipShadowSize() const;
	virtual int GetMenuShadowSize() const;
	virtual int GetMenuIconAreaWidth() const;
	virtual CRect GetMenuBorderMetrics(
		CWnd * pWnd,
		LPARAM lParam = 0
		) const;
	virtual void MenuBottomResizingMarginGetInfo(
		INT & nMarginHeight,
		INT & nResizingCornerPartWidth,
		CExtPopupMenuWnd * pPopup,
		LPARAM lParam = 0L
		);
	virtual void MenuBottomResizingMarginPaint(
		CDC & dc,
		const RECT & rcResizingArea,
		CExtPopupMenuWnd * pPopup,
		LPARAM lParam = 0L
		);
	virtual CFont * MenuCaptionGetFont(
		CExtPopupMenuWnd * pPopup,
		LPARAM lParam = 0L
		) const;
	virtual CSize MenuCaption_Measure(
		CDC & dc,
		__EXT_MFC_SAFE_LPCTSTR sMenuCaptionText,
		CExtPopupMenuWnd * pPopup,
		LPARAM lParam = 0L
		) const;
	virtual void MenuCaption_Paint(
		CDC & dc,
		const RECT & rcMenuCaption,
		__EXT_MFC_SAFE_LPCTSTR sMenuCaptionText,
		CExtPopupMenuWnd * pPopup,
		LPARAM lParam = 0L
		) const;
	virtual void PaintMenuBorder(
		CDC & dc,
		const RECT & rectClient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void AdjustMenuDC(
		CExtPopupMenuWnd * pPopup,
		CDC & dc,
		bool bMemoryDC,
		LPARAM lParam = 0L
		);

	virtual bool IsMenuMustCombineExcludeArea(
		const CObject * pMenuTrackerObject = NULL
		) const;
	virtual bool IsToolBarChevronMenuCombined();
	virtual void PaintMenuCombinedArea(
		CDC & dc,
		const RECT & rcArea,
		const RECT & rcClient,
		int eCombineAlign, // CExtPopupMenuWnd::e_combine_align_t values
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	enum e_control_bar_border_type_t
	{
		__CB_OUTER_DOCKBAR = 0,
		__CB_OUTER_STATUSBAR = 1,
		__CB_INNER_STATUSBAR_ITEM = 2,
	};

	struct __PROF_UIS_API PAINTCONTROLBARBORDERSDATA
	{
		CObject * m_pHelperSrc;
		LPARAM m_lParam;

		int m_eCBBT; // CExtPaintManager::e_control_bar_border_type_t
		DWORD m_dwStyle;
		CRect m_rc;

		PAINTCONTROLBARBORDERSDATA();
		PAINTCONTROLBARBORDERSDATA(
			CObject * pHelperSrc,
			int eCBBT, // CExtPaintManager::e_control_bar_border_type_t
			DWORD dwStyle,
			const RECT & rc
			);
	}; // struct PAINTCONTROLBARBORDERSDATA
	
	void PaintControlBarBordersDefImpl(
		CDC & dc,
		CExtPaintManager::PAINTCONTROLBARBORDERSDATA & _pcbbd,
		COLORREF clrHi,
		COLORREF clrLo
		);

	virtual void PaintControlBarBorders(
		CDC & dc,
		CExtPaintManager::PAINTCONTROLBARBORDERSDATA & _pcbbd
		);

	virtual int GetThemeDockingType() const;
#if (!defined __EXT_MFC_NO_TAB_CONTROLBARS)
	virtual int GetAutoHideTabsType() const;
#endif // (!defined __EXT_MFC_NO_TAB_CONTROLBARS)

	struct __PROF_UIS_API PAINTINHERITEDBACKGROUNDDATA
	{
		bool m_bClientMapping:1,
			m_bBackgroundDrawn:1,
			m_bSequenceCanceled:1;
		HWND m_hWndBackgroundRequestPainter;
		CDC & m_dc;
		CWnd * m_pWnd;
		CObject * m_pObjHelperSrc;
		LPARAM m_lParam;
		PAINTINHERITEDBACKGROUNDDATA(
			bool bClientMapping,
			CDC & dc,
			CWnd * pWnd,
			CObject * pObjHelperSrc = NULL,
			LPARAM lParam = 0L
			);
		PAINTINHERITEDBACKGROUNDDATA(
			bool bClientMapping,
			CDC & dc,
			CObject * pObjHelperSrc,
			LPARAM lParam = 0L
			);
		bool Notify();
		operator WPARAM() const;
		static PAINTINHERITEDBACKGROUNDDATA * FromWPARAM( WPARAM wParam );
		CRect GetRenderingRect() const;
	}; // struct PAINTINHERITEDBACKGROUNDDATA

	virtual bool RenderCustomBackground(
		bool bClientMapping,
		CDC & dc,
		CObject * pObjHelperSrc,
		LPARAM lParam = 0L
		) const;
	static UINT g_nMsgPaintInheritedBackground;
	bool m_bCustomBackgroundInheritanceEnabled:1;
	virtual bool IsCustomBackgroundInheritanceEnabled() const;
	virtual bool GetCustomBackgroundInheritanceMode(
		CObject * pObjHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual bool GetCb2DbTransparentMode(
		CObject * pObjHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool PaintDockerBkgnd(
		bool bClientMapping,
		CDC & dc,
		CWnd * pWnd,
		LPARAM lParam = NULL
		);
	virtual bool PaintDockerBkgnd(
		bool bClientMapping,
		CDC & dc,
		const CRect &rcDst,
		const CRect &rcWnd,
		LPARAM lParam = NULL
		);
	virtual bool PaintDocumentClientAreaBkgnd(
		CDC & dc,
		CWnd * pWnd,
		LPARAM lParam = NULL
		);

	virtual void PaintControlBarClientArea(
		CDC & dc,
		const RECT & rcClient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	virtual void PaintDockBarClientArea(
		CDC & dc,
		const RECT & rcClient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

#if (!defined __EXT_MFC_NO_SHORTCUTLIST_CTRL)
	bool m_bShortcutListUseButtonStyleInScrollButtons:1;
	bool m_bShortcutListUseDockerBkgnd:1;
	bool m_bShortcutListItemUseButtonStyle:1;
	COLORREF m_clrShortcutListItemAlternativeText;
	virtual void PaintShortcutListBkgnd(
		CDC & dc,
		const RECT & rcClient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintShortcutListScrollButton(
		CDC & dc,
		bool bHorzLayout,
		const RECT & rcButton,
		bool bUpOrLeftBtn,
		bool bHover,
		bool bPressed,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	struct __PROF_UIS_API PAINTSHORTCUTLISTITEMSDATA
	{
		CObject * m_pHelperSrc;
		LPARAM m_lParam;

		CExtCmdIcon * m_pIconBig, * m_pIconSmall;
		LPARAM m_lParamItem;
		CRect m_rcBoundsAll, m_rcBoundsIcon, m_rcBoundsText,
			m_rcCtrlClient;
		CExtSafeString m_sText;
		bool m_bHover:1, m_bPressed:1, m_bVisible:1,
			m_bChecked:1, m_bExpandMode:1, m_bHorzLayout:1,
			m_bBigIconView:1, m_bEraseQuery:1;
		DWORD m_dwShortcutListStyle;
		HFONT m_hItemTextFont;

		PAINTSHORTCUTLISTITEMSDATA();
		PAINTSHORTCUTLISTITEMSDATA(
			CObject * pHelperSrc,
			DWORD dwShortcutListStyle,
			HFONT hItemTextFont,
			CExtCmdIcon * pIconBig,
			CExtCmdIcon * pIconSmall,
			LPARAM lParamItem,
			const RECT & rcBoundsAll,
			const RECT & rcBoundsIcon,
			const RECT & rcBoundsText,
			const RECT & rcCtrlClient,
			__EXT_MFC_SAFE_LPCTSTR sText,
			bool bHover,
			bool bPressed,
			bool bVisible,
			bool bChecked,
			bool bExpandMode,
			bool bHorzLayout,
			bool BigIconView,
			bool bEraseQuery
			);
	}; // struct PAINTSHORTCUTLISTITEMSDATA

	virtual void PaintShortcutListItem(
		CDC & dc,
		CExtPaintManager::PAINTSHORTCUTLISTITEMSDATA & _pslid
		);
#endif // (!defined __EXT_MFC_NO_SHORTCUTLIST_CTRL)

	virtual void OnSysColorChange();
	virtual void OnSettingChange(
		UINT uFlags,
		__EXT_MFC_SAFE_LPCTSTR lpszSection
		);
	virtual void OnDisplayChange(
		INT nDepthBPP,
		CPoint ptSizes
		);
	virtual void OnThemeChanged(
		WPARAM wParam,
		LPARAM lParam
		);
	virtual bool OnStateSerialize(
		CArchive & ar,
		bool bEnableThrowExceptions = false
		);

	virtual CSize GetToolBarButtonOffset( BOOL bHorz ) const;

	struct __PROF_UIS_API PAINTTOOLBARTEXTFIELDDATA
	{
		CObject * m_pHelperSrc;
		LPARAM m_lParam;
		UINT m_nDrawTextFlags;
		CExtSafeString m_sText;
		CRect m_rcButton, m_rcTextField;
		bool m_bComboField:1;
		bool m_bHover:1;
		bool m_bPushed:1;
		bool m_bEnabled:1;

		PAINTTOOLBARTEXTFIELDDATA();
		PAINTTOOLBARTEXTFIELDDATA(
			CObject * pHelperSrc,
			__EXT_MFC_SAFE_LPCTSTR sText,
			const RECT & rcButton,
			const RECT & rcTextField,
			bool bComboField,
			bool bHover,
			bool bPushed,
			bool bEnabled
			);
	}; // struct PAINTTOOLBARTEXTFIELDDATA

	virtual void PaintToolbarTextField(
		CDC & dc,
		PAINTTOOLBARTEXTFIELDDATA & _ptbtfd
		);

	virtual COLORREF GetIconAlphaColor() const;
	virtual double GetIconAlphaAdjustPercent() const;

	virtual bool AdjustIcon( 
		CExtCmdIcon * pIcon
		);

	virtual CSize FixedBar_GetRoundedAreaMerics() const;

	virtual CSize GetResizingGriperSize(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;

	virtual void PaintResizingGripper(
		CDC & dc,
		const RECT & rcGrip,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

#if (!defined __EXT_MFC_NO_PAGE_NAVIGATOR )
	virtual INT PageNavigator_GetSplitterHeight() const;
	virtual INT PageNavigator_GetItemCaptionHeight() const;
	virtual INT PageNavigator_GetItemPaneCaptionHeight() const;
	virtual void PaintPageNavigatorClientArea(
		CDC & dc,
		const RECT & rcClient,
		CObject * pHelperSrc
		);
	virtual void PaintPageNavigatorBorder(
		CDC & dc,
		const RECT & rcControl
		);
	virtual void PaintPageNavigatorItem(
		CDC & dc,
		const CRect & rcItem,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		CExtCmdIcon * pIcon,
		bool bExpanded,
		bool bPushed,
		bool bHover
		);	
	virtual void PaintPageNavigatorItemCaptionText(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption
		);	
	virtual void PaintPageNavigatorItemCaption(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption
		);
	virtual void PaintPageNavigatorCaption(
		CDC & dc,
		const CRect & rcItem,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		CExtCmdIcon * pIcon,
		bool bExpanded,
		bool bPushed,
		bool bHover,
		bool bAllowInvertTextColor = true
		);	
	virtual void PaintPageNavigatorCaptionTextImpl(
		CDC & dc,
		const CRect & rcItem,
		__EXT_MFC_SAFE_LPCTSTR strCaption
		);	
	virtual void PaintPageNavigatorCaptionText(
		CDC & dc,
		const CRect & rcItem,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		bool bPushed,
		bool bHover,
		bool bAllowInvertTextColor = true
		);	
	virtual void PaintPageNavigatorItemPaneCaptionTextImpl(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption
		);
	virtual void PaintPageNavigatorItemPaneCaptionText(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption
		);
	virtual void PaintPageNavigatorItemPaneCaption(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		bool bHover,
		bool bPressed,
		bool bExpandable,
		bool bExpanded,
		bool bDrawTopLine = true
		);
	virtual void PaintPageNavigatorConfigButton(
		CDC & dc,
		const CRect & rcItem,
		bool bPushed,
		bool bHover
		);	
	virtual void PaintPageNavigatorSplitter(
		CDC & dc,
		const CRect & rcSplitter,
		bool bDrawDots = true
		);
	virtual void PaintPageNavigatorSplitterDots(
		CDC & dc,
		const CRect & rcSplitter,
		INT nOffsetV = 0
		);
	virtual void PaintPageNavigatorSplitterDotsImpl(
		CDC & dc,
		const CRect & rcSplitter,
		COLORREF clrDark,
		COLORREF clrLight,
		INT nOffsetV = 0,
		INT nDotCount = 9
		);
#endif // (!defined __EXT_MFC_NO_PAGE_NAVIGATOR )

#if (!defined __EXT_MFC_NO_TASK_PANE )
	virtual void TaskPanePaintClientArea(
		CDC & dc,
		const RECT & rcClient,
		CObject * pHelperSrc
		);
	virtual void TaskPanePaintClientAreaToolbar(
		CDC & dc,
		const RECT & rcClient,
		CObject * pHelperSrc
		);
	virtual void TaskPanePaintBorder(
		CDC & dc,
		const RECT & rcClient,
		CObject * pHelperSrc
		);
	virtual void TaskPanePaintGroupCaptionBackground(
		CDC & dc,
		const CRect & rcCaption,
		bool bHover,
		bool bPressed,
		bool bHighlighted,
		bool bRoundedLeftTopCorner,
		bool bRoundedRightTopCorner,
		bool bGradient2Steps,
		CObject * pHelperSrc
		);
	virtual void TaskPanePaintGroupCaption(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		bool bHover,
		bool bPressed,
		bool bHighlighted,
		bool bPaintExpandButton,
		bool bExpanded,
		CObject * pHelperSrc
		);
	virtual void TaskPanePaintGroupCaptionText(
		CDC & dc,
		const CRect & rcText,
		__EXT_MFC_SAFE_LPCTSTR strText,
		bool bHover,
		bool bPressed,
		bool bHighlighted,
		CObject * pHelperSrc
		);
	virtual CRect TaskPaneQueryMarginsPage() const;
	virtual LONG TaskPaneQueryGroupSpacing() const;
	virtual LONG TaskPaneQueryGroupCaptionMinHeight() const;
	virtual CRect TaskPaneQueryGroupCaptionTextMargins() const;
	virtual HFONT TaskPaneQueryGroupCaptionFont();
#endif // (!defined __EXT_MFC_NO_TASK_PANE )

#if (!defined __EXT_MFC_NO_DATE_PICKER)
	virtual void PaintDatePickerPushButton(
		CDC & dc,
		const CRect & rcButton,
		LONG nButtonType, // __EDPWH_BTN_NONE or __EDPWH_BTN_TODAY
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		bool bFlat,
		bool bDrawBorder,
		bool bPushed,
		bool bHover,
		HFONT hFont,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintDatePickerButtonsSeparator(
		CDC & dc,
		const RECT & rcSeparator,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintDatePickerClientArea(
		CDC & dc,
		const RECT & rcTotalClient,
		const RECT & rcUsedClient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintDatePickerBorder(
		CDC & dc,
		const RECT & rcControl,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintDatePickerHeaderBackground(
		INT nCol,
		INT nRow,
		CDC & dc,
		INT nYear,
		INT nMonth,
		const RECT & rcHeader,
		const RECT & rcHeaderWithoutBorders,
		const RECT & rcHeaderDate,
		const RECT & rcScrollBtnBackward,
		const RECT & rcScrollBtnForward,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_DATE_PICKER)

#ifndef __EXT_MFC_NO_UNDO_REDO_POPUP
	virtual void PaintUndoRedoCaption(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
#endif // __EXT_MFC_NO_UNDO_REDO_POPUP

#if( !defined __EXT_MFC_NO_SPIN || !defined __EXT_MFC_NO_DURATIONWND )
	virtual CRect Spin_QueryNcAreaMargins(
		bool bSpinAlignRight,
		bool bSpinAlignLeft,
		bool bHasScrolBars
		) const;	
	virtual void PaintSpinButtonArrow(
		CDC & dc,
		const CRect & rcButton,
		bool bUp,		
		bool bHorz,
		bool bEnabled,
		bool bPushed,
		bool bHover,
		bool bHotTrack,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
	virtual void PaintSpinButton(
		CDC & dc,
		const CRect & rcButton,
		bool bUp,		
		bool bHorz,
		bool bEnabled,
		bool bFlat,
		bool bDrawBorder,
		bool bPushed,
		bool bHover,
		bool bHotTrack,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
#endif // #if( !defined __EXT_MFC_NO_SPIN || !defined __EXT_MFC_NO_DURATIONWND )

#ifndef __EXT_MFC_NO_SLIDER
	virtual bool PaintSliderChannel(
		CDC & dc,
		const CRect & rcChannel,
		bool bHorz,
		bool bEnabled,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
	virtual bool PaintSliderThumb(
		CDC & dc,
		const CRect & rcThumb,
		bool bHorz,
		bool bLeft,
		bool bRight,
		bool bEnabled,
		bool bPushed,
		bool bFocused,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
	virtual bool PaintSliderTics(
		CDC & dc,
		const CRect & rcClient,
		bool bHorz,
		bool bEnabled,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
#endif // __EXT_MFC_NO_SLIDER
	
#ifndef __EXT_MFC_NO_DURATIONWND
	virtual INT Duration_GetSpinButtonWidth(
		const CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual INT Duration_GetDropDownButtonWidth(
		const CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual CRect Duration_GetSpinButtonExtraSpace(
		const CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual CRect Duration_GetDropDownButtonExtraSpace(
		const CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual void Duration_PaintSpinButton(
		CDC & dc,
		const CRect & rcButton,
		bool bUp,		
		bool bEnabled,
		bool bPushed,
		bool bHovered,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
	virtual void Duration_PaintDropDownButton(
		CDC & dc,
		const CRect & rcButton,
		bool bEnabled,
		bool bPushed,
		bool bHovered,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
#endif // __EXT_MFC_NO_DURATIONWND

#if (defined __EXT_PM_BACK_COMPATIBILITY_BITMAP_API)
	static HBITMAP stat_ColorizeMonochromeBitmap(
		HBITMAP hBitmapSrc,
		COLORREF clrTransparent,
		COLORREF clrTarget
		);
	static HBITMAP stat_HLS_Adjust_Bitmap(
		HBITMAP hBitmapSrc,
		COLORREF clrTransparent = RGB(0,0,0),
		COLORREF clrTolerance = RGB(0,0,0),
		double percentH = 0.0,
		double percentL = 0.0,
		double percentS = 0.0
		);
	static bool stat_HLS_Adjust_Bitmap(
		CBitmap & _bmp,
		COLORREF clrTransparent = RGB(0,0,0),
		COLORREF clrTolerance = RGB(0,0,0),
		double percentH = 0.0,
		double percentL = 0.0,
		double percentS = 0.0
		);
	static HRGN stat_HBITMAPtoHRGN(
		HBITMAP hBitmap,
		COLORREF clrTransparent,
		COLORREF clrTolerance = RGB(0,0,0)
		);
#endif // __EXT_PM_BACK_COMPATIBILITY_BITMAP_API

	enum eStyle2005_t
	{
		__ES2005_BETA1	= 1,
		__ES2005_BETA2	= 2,
		__ES2005_RC		= 3,
	};

	eStyle2005_t m_eStyle2005;

#if (!defined __EXT_MFC_NO_DOCK_MARKERS)
	enum eDockMarkerType_t
	{
		__EDMT_2005_TOP				= 0,
		__EDMT_2005_BOTTOM			= 1,
		__EDMT_2005_LEFT			= 2,
		__EDMT_2005_RIGHT			= 3,
		__EDMT_2005_CENTER			= 4,
		__EDMT_2005_GROUP_SPARSED	= 5,
		__EDMT_2005_GROUP_CENTRAL	= 6,
#if (!defined __EXT_MFC_NO_TAB_CONTROLBARS )
		__EDMT_2005_GROUP_TAB		= 7,
		__EDMT_2005_TAB				= 8,
#endif // (!defined __EXT_MFC_NO_TAB_CONTROLBARS )
		__EDMT_MIN_VALUE			= 0,
#if (!defined __EXT_MFC_NO_TAB_CONTROLBARS )
		__EDMT_MAX_VALUE			= 8,
#else // (!defined __EXT_MFC_NO_TAB_CONTROLBARS )
		__EDMT_MAX_VALUE			= 6,
#endif // else from (!defined __EXT_MFC_NO_TAB_CONTROLBARS )
		__EDMT_EMPTY				= -1
	};

	class __PROF_UIS_API DockMarkerBase
	{
	public:
		eDockMarkerType_t m_eDockMarkerType;
		CExtBitmapCache m_bmpIn, m_bmpOut, m_bmpOuterBk;
		CPoint m_ptOffsetInner;
		CRgn m_rgn;
		CSize m_size;
		CTypedPtrArray < CPtrArray, DockMarkerBase * > m_arrChildren;
		CRect m_rcScreen;
		bool m_bSparsedMode:1;
	protected:
		CExtPaintManager * m_pPM;
		int m_eResizablePanelDockingType;
		virtual void _EmptyChildren();
		virtual void _DetachHandles();
	public:
		DockMarkerBase(
			CExtPaintManager * pPM,
			int eResizablePanelDockingType,
			eDockMarkerType_t eDockMarkerType = __EDMT_EMPTY,
			CRect rcScreen = CRect( 0, 0, 0, 0 )
			);
		virtual ~DockMarkerBase();
		virtual bool IsEmpty() const;
		virtual void Empty();
		bool CreateFromBitmapResources(
			CRect rcScreen,
			eDockMarkerType_t eDockMarkerType,
			COLORREF clrTransparentIn,
			UINT nResourceBmpIn,
			UINT nResourceBmpOut,
			__EXT_MFC_SAFE_LPCTSTR strResourceTypeBmpIn = RT_BITMAP, // default bitmap section
			__EXT_MFC_SAFE_LPCTSTR strResourceTypeBmpOut = RT_BITMAP, // default bitmap section
			HINSTANCE hInstBmpIn = NULL, // find it automatically
			HINSTANCE hInstBmpOut = NULL // find it automatically
			);
		virtual bool CreateFromBitmapResources(
			CRect rcScreen,
			eDockMarkerType_t eDockMarkerType,
			COLORREF clrTransparentIn,
			__EXT_MFC_SAFE_LPCTSTR strResourceBmpIn,
			__EXT_MFC_SAFE_LPCTSTR strResourceBmpOut = NULL,
			__EXT_MFC_SAFE_LPCTSTR strResourceTypeBmpIn = RT_BITMAP, // default bitmap section
			__EXT_MFC_SAFE_LPCTSTR strResourceTypeBmpOut = RT_BITMAP, // default bitmap section
			HINSTANCE hInstBmpIn = NULL, // find it automatically
			HINSTANCE hInstBmpOut = NULL // find it automatically
			);
		bool CreateFromBitmapData(
			CRect rcScreen,
			eDockMarkerType_t eDockMarkerType,
			COLORREF clrTransparentIn,
			const BYTE * pDataBmpIn,
			DWORD dwSizeDataBmpIn,
			const BYTE * pDataBmpOut = NULL,
			DWORD dwSizeDataBmpOut = 0
			);
		virtual bool CreateFromBitmaps(
			CRect rcScreen,
			eDockMarkerType_t eDockMarkerType,
			COLORREF clrTransparentIn,
			const CExtBitmap & _bmpIn,
			const CExtBitmap & _bmpOut
			);
		virtual bool Create(
			bool bCentralMode,
			eDockMarkerType_t eDockMarkerType = __EDMT_EMPTY,
			CRect rcScreen = CRect( 0, 0, 0, 0 )
			);
		virtual bool DockMarker_CreateWnds(
			HWND hWndLastDynamicTarget,
			CTypedPtrArray < CPtrArray, CExtDynDockMarkerWnd * > & arrDockMarkerWnds,
			CExtDynDockMarkerWnd * pWndParentMarker
			);
		virtual void OnCalcScreenRect(
			eDockMarkerType_t eDockMarkerType,
			CRect rcScreen,
			DockMarkerBase * pCenterMarker = NULL
			);
	}; // class DockMarkerBase

	class __PROF_UIS_API DockMarkerBeta2 : public DockMarkerBase
	{
	public:
		DockMarkerBeta2(
			CExtPaintManager * pPM,
			int eResizablePanelDockingType,
			eDockMarkerType_t eDockMarkerType = __EDMT_EMPTY,
			CRect rcScreen = CRect( 0, 0, 0, 0 )
			);
		virtual ~DockMarkerBeta2();
		virtual bool Create(
			bool bCentralMode,
			eDockMarkerType_t eDockMarkerType = __EDMT_EMPTY,
			CRect rcScreen = CRect( 0, 0, 0, 0 )
			);
		virtual void OnCalcScreenRect(
			eDockMarkerType_t eDockMarkerType,
			CRect rcScreen,
			DockMarkerBase * pCenterMarker = NULL
			);
	}; // class DockMarkerBeta2

	class __PROF_UIS_API DockMarker2008XP : public DockMarkerBase
	{
	public:
		DockMarker2008XP(
			CExtPaintManager * pPM,
			int eResizablePanelDockingType,
			eDockMarkerType_t eDockMarkerType = __EDMT_EMPTY,
			CRect rcScreen = CRect( 0, 0, 0, 0 )
			);
		virtual ~DockMarker2008XP();
		virtual bool Create(
			bool bCentralMode,
			eDockMarkerType_t eDockMarkerType = __EDMT_EMPTY,
			CRect rcScreen = CRect( 0, 0, 0, 0 )
			);
		virtual void OnCalcScreenRect(
			eDockMarkerType_t eDockMarkerType,
			CRect rcScreen,
			DockMarkerBase * pCenterMarker = NULL
			);
	}; // class DockMarker2008XP

	class __PROF_UIS_API DockMarker2008Vista : public DockMarkerBase
	{
	public:
		DockMarker2008Vista(
			CExtPaintManager * pPM,
			int eResizablePanelDockingType,
			eDockMarkerType_t eDockMarkerType = __EDMT_EMPTY,
			CRect rcScreen = CRect( 0, 0, 0, 0 )
			);
		virtual ~DockMarker2008Vista();
		virtual bool Create(
			bool bCentralMode,
			eDockMarkerType_t eDockMarkerType = __EDMT_EMPTY,
			CRect rcScreen = CRect( 0, 0, 0, 0 )
			);
		virtual void OnCalcScreenRect(
			eDockMarkerType_t eDockMarkerType,
			CRect rcScreen,
			DockMarkerBase * pCenterMarker = NULL
			);
	}; // class DockMarker2008Vista

	virtual DockMarkerBase * DockMarker_CreateObject(
		int eResizablePanelDockingType
		);
	virtual bool DockMarker_CreateWnds(
		HWND hWndLastDynamicTarget,
		eDockMarkerType_t eDockMarkerType,
		CRect rcScreen,
		CTypedPtrArray < CPtrArray, CExtDynDockMarkerWnd * > & arrDockMarkerWnds,
		int eResizablePanelDockingType,
		CExtDynDockMarkerWnd * pWndParentMarker
		);
	virtual void DockMarker_PostRender(
		CDC & dc,
		CRect rcItem,
		eDockMarkerType_t eMarkerType,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual CRect DockMarker_GetOuterDistance();
	virtual BYTE DockMarker_GetAlpha(
		bool bHighlight,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool DockMarker_IsAdjustBmpsRequired(
		eDockMarkerType_t eDockMarkerType
		) const;
	virtual void DockMarker_AdjustBmps(
		eDockMarkerType_t eDockMarkerType,
		CExtBitmap & bmpIn,
		COLORREF clrTransparentIn,
		CExtBitmap & bmpOut,
		COLORREF clrTransparentOut
		);
	virtual void DockMarker_AdjustHighlightedArea(
		COLORREF * pClrSurface,
		int nClrSurfaceDX,
		int nClrSurfaceDY,
		bool bTabShape,
		bool bTabsAtTop,
		const CRect & rcTabMainArea,
		const CRect & rcTabBottomMiddleArea,
		COLORREF clrAdjustMain = COLORREF(-1L),
		COLORREF clrAdjustBorder = COLORREF(-1L),
		int nBorderMetric = 2
		);
	virtual void DockMarker_AdjustHighlightedLayer(
		HWND hWnd,
		int nDX,
		int nDY,
		bool bTabShape,
		bool bTabsAtTop,
		const CRect & rcTabMainArea,
		const CRect & rcTabBottomMiddleArea,
		COLORREF clrAdjustMain = COLORREF(-1L),
		COLORREF clrAdjustBorder = COLORREF(-1L),
		int nBorderMetric = 2
		);
#endif // (!defined __EXT_MFC_NO_DOCK_MARKERS)

	virtual void PaintBarButtonCombinedArea(
		CDC & dc,
		CExtBarButton * pTBB,
		LPARAM lParam = 0L
		);

	virtual COLORREF QueryObjectTextColor(
		CDC & dc,
		bool bEnabled,
		bool bFocused,
		bool bHovered,
		bool bPressed,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	virtual bool PaintGroupBoxFrame(
		CDC & dc,
		const RECT & rcBorder,
		COLORREF clrFrame = COLORREF(-1L),
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	virtual bool PaintGroupBoxLabel(
		CDC & dc,
		__EXT_MFC_SAFE_LPCTSTR strText,
		COLORREF clrText,
		HFONT hFont,
		DWORD dwDrawTextFlags,
		bool bEnabled,
		const RECT & rcText,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	static COLORREF stat_PaintShadedEllipse_ComputeColorValue(
		double lfA,
		COLORREF clrShadeAccentLight,
		COLORREF clrShadeAccentDark
		);
	static void stat_PaintShadedEllipse(
		HDC hDC,
		const POINT & ptEllipseCenter,
		LONG nRadiusH,
		LONG nRadiusV,
		COLORREF clrShadeAccentLight,
		COLORREF clrShadeAccentDark
		);

	virtual bool ScrollBar_GetMetrics(
		INT * p_nHorzBarHeight = NULL,
		INT * p_nVertBarWidth = NULL,
		INT * p_nHorzButtonWidth = NULL,
		INT * p_nVertButtonHeight = NULL,
		INT * p_nHorzThumbMinWidth = NULL,
		INT * p_nVertThumbMinHeight = NULL,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		) const;
	enum e_scroll_bar_mouse_hover_type_t
	{
		__ESBMHT_NOWHERE                  = -1,
		__ESBMHT_SOLID_SCROLLABLE_AREA    = 0, // basically used for disabled state
		__ESBMHT_BUTTON_UP                = 1,
		__ESBMHT_BUTTON_DOWN              = 2,
		__ESBMHT_THUMB                    = 3,
		__ESBMHT_PAGE_UP                  = 4,
		__ESBMHT_PAGE_DOWN                = 5,
		__ESBMHT_GLYPH_ARROW_UP           = 6, // for skinning purposes only
		__ESBMHT_GLYPH_ARROW_DOWN         = 7, // for skinning purposes only
		__ESBMHT_GLYPH_THUMB_GRIPPER      = 8, // for skinning purposes only
		__ESBMHT_PART_COUNT               = 9, // for using as array dimension
	}; // enum e_scroll_bar_mouse_hover_type_t
	enum e_scroll_bar_skin_part_t
	{
		__ESBSPT_DISABLED                 = 0,
		__ESBSPT_COLD                     = 1,
		__ESBSPT_NORMAL                   = 2,
		__ESBSPT_HOT                      = 3,
		__ESBSPT_PRESSED                  = 4,
		__ESBSPT_PART_COUNT               = 5, // for using as array dimension
	}; // enum e_scroll_bar_skin_part_t
	struct __PROF_UIS_API SCROLLBARSKINDATA
	{
		CExtBitmapCache m_arrPartBmp[__ESBSPT_PART_COUNT][__ESBMHT_PART_COUNT];
		CRect m_arrPartPadding[__ESBSPT_PART_COUNT][__ESBMHT_PART_COUNT];
		COLORREF m_arrClrSolidBackground[__ESBSPT_PART_COUNT][__ESBMHT_PART_COUNT];
		COLORREF m_clrZsLineLightEnabled, m_clrZsLineDarkEnabled, m_clrZsLineLightDisabled, m_clrZsLineDarkDisabled;
		CExtBitmapCache m_bmpEntireArea;
		CRect m_rcEntirePaddingR, m_rcEntirePaddingC;
		SCROLLBARSKINDATA();
		virtual ~SCROLLBARSKINDATA();
		virtual void Empty();
		virtual CExtBitmap & GetPart(
			e_scroll_bar_skin_part_t ePartState,
			e_scroll_bar_mouse_hover_type_t eSBMHT, // part type
			RECT * pRectPadding = NULL,
			COLORREF * pClrSolidBackground = NULL
			);
		const CExtBitmap & GetPart(
			e_scroll_bar_skin_part_t ePartState,
			e_scroll_bar_mouse_hover_type_t eSBMHT, // part type
			RECT * pRectPadding = NULL,
			COLORREF * pClrSolidBackground = NULL
			) const;
		virtual void Load2007_Zoom(
			UINT nResourceID_ButtonPlus,
			UINT nResourceID_ButtonMinus,
			UINT nResourceID_ButtonThumb,
			COLORREF clrZsLineLightEnabled,
			COLORREF clrZsLineDarkEnabled,
			COLORREF clrZsLineLightDisabled,
			COLORREF clrZsLineDarkDisabled,
			UINT nDockID,
			bool bResourceColorChannelsPreMultiplied = true
			);
		virtual void Load2007_R1(
			UINT nResourceID_BumpyGlyphStack,
			INT nBumpyGlyphStackItemHeight,
			UINT nResourceID_Gripper,
			const RECT & rcBumpyGlyphStackItemPadding,
			COLORREF clrSolidBackground,
			COLORREF clrPressedPageAreas,
			UINT nResourceID_ArrowUp_Normal,
			UINT nResourceID_ArrowUp_Disabled,
			UINT nResourceID_ArrowDown_Normal,
			UINT nResourceID_ArrowDown_Disabled,
			bool bRotateArrowsAndBk270,
			UINT nResourceID_BkEntire,
			UINT nResourceID_BkPage,
			const RECT & rcEntirePaddingR,
			const RECT & rcEntirePaddingC
			);
		virtual void Load2007_R2(
			UINT nResourceID_BumpyGlyphStack,
			INT nBumpyGlyphStackItemHeight,
			UINT nResourceID_GripperStack,
			INT nGripperStackItemHeight,
			const RECT & rcBumpyGlyphStackItemPadding,
			COLORREF clrSolidBackground,
			COLORREF clrPressedPageAreas,
			UINT nResourceID_ArrowUp_Normal,
			UINT nResourceID_ArrowUp_Disabled,
			UINT nResourceID_ArrowDown_Normal,
			UINT nResourceID_ArrowDown_Disabled,
			bool bRotateArrowsAndBk270,
			UINT nResourceID_BkEntire,
			UINT nResourceID_BkPage,
			const RECT & rcEntirePaddingR,
			const RECT & rcEntirePaddingC
			);
	}; // struct SCROLLBARSKINDATA
	struct __PROF_UIS_API PAINTSCROLLBARDATA
	{
		bool m_bHorzBar:1, m_bEnabled:1, m_bHoveredAreaIsPressed:1, m_bHelperLightAccent:1;
		e_scroll_bar_mouse_hover_type_t m_eSBMHT;
		CRect m_rcBar, m_rcPageUp, m_rcPageDown,
			m_rcButtonUp, m_rcButtonDown, m_rcThumb,
			m_rcScrollableArea;
		CObject * m_pHelperSrc;
		LPARAM m_lParam;
		SCROLLINFO m_DSI;
		PAINTSCROLLBARDATA();
		PAINTSCROLLBARDATA(
			bool bHorzBar,
			bool bEnabled,
			bool bHoveredAreaIsPressed,
			e_scroll_bar_mouse_hover_type_t eSBMHT,
			const RECT & rcBar,
			const RECT & rcButtonUp,
			const RECT & rcButtonDown,
			const RECT & rcThumb,
			const RECT & rcPageUp,
			const RECT & rcPageDown,
			CObject * pHelperSrc = NULL,
			LPARAM lParam = 0L
			);
		PAINTSCROLLBARDATA(
			CExtScrollBar * pExtScrollBar,
			bool bHoveredAreaIsPressed = false,
			e_scroll_bar_mouse_hover_type_t eSBMHT = CExtPaintManager::__ESBMHT_NOWHERE,
			LPARAM lParam = 0L
			);
		virtual ~PAINTSCROLLBARDATA();
		virtual void PaintDefault(
			CDC & dc,
			CExtPaintManager * pPM
			);
		virtual void PaintSkinned(
			CDC & dc,
			CExtPaintManager * pPM,
			const SCROLLBARSKINDATA & _sbsd,
			BYTE nConstantAlpha = 0x0FF
			);
		virtual e_scroll_bar_mouse_hover_type_t GetHT(
			const POINT & pt
			) const;
		virtual e_scroll_bar_mouse_hover_type_t AdjustHT(
			const POINT & pt
			);
		virtual CRect GetAreaRect(
			e_scroll_bar_mouse_hover_type_t eSBMHT
			) const;
		virtual CRect GetAreaRectHT() const;
	}; // struct PAINTSCROLLBARDATA
	bool m_bScrollBarsHaveHoverEffectIn2kStyle:1;
	virtual void ScrollBar_Paint(
		CDC & dc,
		PAINTSCROLLBARDATA & _psbd
		) const;
	virtual SCROLLBARSKINDATA * ScrollBar_GetSkinData(
		bool bHorzBar,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		bool bLightAccent = true
		);

#ifndef __EXT_MFC_NO_GRIDWND
	virtual bool Grid_PaintButton(
		CDC & dc,
		const RECT & rcButton,
		INT nButtonType,
		bool bPressed,
		bool bHovered,
		bool bFocused,
		bool bEnabled,
		COLORREF clrFace,
		COLORREF clrLight,
		COLORREF clrShadow,
		COLORREF clrWindow,
		COLORREF clrText,
		DWORD dwHelperPaintFlags,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool Grid_PaintHeaderSortArrow(
		CDC & dc,
		const RECT & rcSortArrow,
		bool bHorz,
		bool bAscending,
		COLORREF * pColorValues,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool Grid_PaintHeaderBackground(
		CDC & dc,
		const RECT & rcArea,
		LONG nColNo,
		LONG nRowNo,
		INT nColType,
		INT nRowType,
		DWORD dwAreaFlags,
		DWORD dwHelperPaintFlags,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual COLORREF Grid_OnQueryTextColor(
		const CExtGridCell & _cell,
		CDC & dc,
		LONG nVisibleColNo,
		LONG nVisibleRowNo,
		LONG nColNo,
		LONG nRowNo,
		INT nColType,
		INT nRowType,
		DWORD dwAreaFlags,
		DWORD dwHelperPaintFlags
		);
#endif // #ifndef __EXT_MFC_NO_GRIDWND

#if (!defined __EXT_MFC_NO_REPORTGRIDWND)
	virtual bool ReportGrid_PaintHeaderRowBackground(
		CDC & dc,
		const RECT & rcArea,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool ReportGrid_PaintHeaderSortArrow(
		CDC & dc,
		const RECT & rcSortArrow,
		bool bAscending,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool ReportGrid_PaintGroupAreaBackground(
		CDC & dc,
		const RECT & rcArea,
		__EXT_MFC_SAFE_LPCTSTR strEmptyAreaCaption, // not NULL if area is empty
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual COLORREF ReportGrid_GetHeaderTextColor(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual COLORREF ReportGrid_GetGroupConnectorColor(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool ReportGrid_PaintGroupAreaItemBackground(
		CDC & dc,
		const RECT & rcItem,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_REPORTGRIDWND)

#if (!defined __EXT_MFC_NO_RIBBON_BAR)
	virtual bool Ribbon_OptionsPageBackgroundIsDefault() const;
	virtual INT Ribbon_GetContractedMarginHeight(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_PaintContractedMargin(
		CDC & dc,
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GetGroupHeight(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GetToolGroupExtraOffset(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GetToolGroupExtraLineDistance(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GetOuterGroupDistance(
		const CExtBarButton * pTBB,
		bool bDistanceBefore,
		LPARAM lParam = 0L
		);
	virtual CRect Ribbon_GetContentPadding(
		const CExtBarButton * pTBB,
		LPARAM lParam = 0L
		);
	virtual CSize Ribbon_GetIconSize(
		const CObject * pHelperSrc,
		INT nILV,
		LPARAM lParam = 0L
		);
	virtual CSize Ribbon_GetDropDownArrowSize(
		CDC & dc,
		INT nILV,
		const CExtBarButton * pTBB,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GetTextToIconDistance(
		CDC & dc,
		INT nILV,
		const CExtBarButton * pTBB,
		LPARAM lParam = 0L
		);
	virtual CSize Ribbon_CalcButtonSize(
		CDC & dc,
		INT nILV,
		const CExtBarButton * pTBB,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GroupCaptionGetHeight(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		) const;
	virtual bool Ribbon_GroupCaptionIsAtTop(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		) const;
	virtual CExtCmdIcon * Ribbon_GetGroupCollapsedIcon(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_PaintText(
		CDC & dc,
		__EXT_MFC_SAFE_LPCTSTR strText,
		const RECT & rcText,
		UINT nDrawTextFlags,
		bool bDrawDropDownArrow,
		CExtBitmap * pBmpAlternativeDropDownArrow,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_PaintGroupBk(
		CDC & dc,
		const RECT & rcGroupBk,
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual bool Ribbon_PaintQuickAccessGroupButton(
		CDC & dc,
		const RECT & rcGroupBk,
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual CRect Ribbon_GetPageOuterContentPadding(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_PaintPageBk(
		CDC & dc,
		const RECT & rcPageBk,
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_PaintSeparator(
		CDC & dc,
		const CExtBarButton * pTBB,
		LPARAM lParam = 0L
		);
	virtual CRect Ribbon_CalcLargeDropDownRect(
		const CExtBarButton * pTBB,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_PaintPushButton(
		CDC & dc,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);
	virtual CRect Ribbon_GetPopupGroupBorderMetrics(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
	virtual bool Ribbon_IsPopupGroupWithCaption(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual INT RibbonQuickAccessBar_GetBottomHeight(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		) const;
	virtual INT RibbonQuickAccessBar_GetButtonsAlignment(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		) const;
	virtual void RibbonQuickAccessBar_PaintBkAtTheBottom(
		CDC & dc,
		CRect rcQATB,
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		) const;
	virtual void RibbonQuickAccessBar_AdjustButtonLocation(
		CExtBarButton * pTBB,
		CRect & rcTBB,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GetTabIntersectionHeight(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		) const;
	virtual void Ribbon_PaintTabItem(
		CDC & dc,
		CRect & rcTabItemsArea,
		bool bSelected,
		const CRect & rcEntireItem,
		CFont * pFont,
		__EXT_MFC_SAFE_LPCTSTR sText,
		CExtCmdIcon * pIcon,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		COLORREF clrForceText = COLORREF(-1L),
		COLORREF clrForceTabBk = COLORREF(-1L),
		COLORREF clrForceTabBorderLT = COLORREF(-1L),
		COLORREF clrForceTabBorderRB = COLORREF(-1L),
		COLORREF clrForceTabSeparator = COLORREF(-1L)
		);
	virtual void Ribbon_PaintTabClientArea(
		CDC & dc,
		CRect & rcClient,
		CRect & rcTabItemsArea,
		CRect & rcTabNearBorderArea,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GetTabLineHeight(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		) const;

	virtual HRGN Ribbon_GetRgnCornerExclude(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual HRGN Ribbon_GetRgnCornerResizing(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_NcOverPaint(
		CDC & dc,
		bool bFrameActive,
		INT nWidthFromLeft,
		bool bDwmMode,
		LPCRECT pRectDwmText,
		__EXT_MFC_SAFE_LPCTSTR strDwmCaptionTitle,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_EmbeddedCaptionPaintText(
		CDC & dc,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		CRect rcDrawText,
		__EXT_MFC_SAFE_LPCTSTR strCaptionDelimiter,
		const CExtRibbonBar * pRibbonBar,
		LPARAM lParam = 0L
		);
	virtual UINT Ribbon_EmbeddedCaptionGetTextAlignmentFlags(
		const CExtRibbonBar * pRibbonBar,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_EmbeddedCaptionAdjustTextRect(
		CRect & rcAdjust,
		const CExtRibbonBar * pRibbonBar,

		LPARAM lParam = 0L
		);
	virtual void Ribbon_FileMenuButtonQuery(
		LPVOID pData,
		CExtCmdIcon * pIcon = NULL,
		__EXT_MFC_SAFE_LPCTSTR sText = NULL,
		LPARAM lParam = 0L
		);
	virtual bool Ribbon_FileButtonIsItegrationSupported() const;
	virtual INT Ribbon_FileButtonGetMenuIntersectionHeight() const;
	virtual bool Ribbon_FileButtonCalcLayout(
		CDC & dc,
		CExtNcFrameImpl * pExtNcFrameImpl,
		CExtRibbonButtonFile * pFileTBB,
		LPARAM lParam = 0L
		);
	virtual bool Ribbon_FileButtonPaint(
		CDC & dc,
		CExtRibbonButtonFile * pFileTBB,
		LPARAM lParam = 0L
		);
	virtual bool Ribbon_QuickAccessContentExpandButtonCalcLayout(
		CDC & dc,
		CExtRibbonButtonQuickAccessContentExpand * pQACEB,
		LPARAM lParam = 0L
		);
	virtual bool Ribbon_QuickAccessContentExpandButtonPaint(
		CDC & dc,
		CExtRibbonButtonQuickAccessContentExpand * pQACEB,
		LPARAM lParam = 0L
		);
	virtual CSize Ribbon_QuickAccessContentExpandGetShift(
		CDC & dc,
		CExtRibbonButtonQuickAccessContentExpand * pQACEB,
		LPARAM lParam = 0L
		);

	virtual bool Ribbon_DLB_IsVisible(
		CExtRibbonButtonDialogLauncher * pTBB,
		LPARAM lParam = 0L
		) const;
	virtual CSize Ribbon_DLB_CalcSize(
		CDC & dc,
		CExtRibbonButtonDialogLauncher * pTBB,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_DLB_Paint(
		CDC & dc,
		CExtRibbonButtonDialogLauncher * pTBB,
		LPARAM lParam = 0L
		);
	virtual CFont * RibbonGallery_GetItemFont(
		CExtRibbonGalleryWnd * pGalleryWnd,
		LPVOID pGalleryItemData,
		LPARAM lParam = 0L
		);
	virtual CSize RibbonGallery_MeasureItem(
		CDC & dc,
		CExtRibbonGalleryWnd * pGalleryWnd,
		LPVOID pGalleryItemData,
		LPARAM lParam = 0L
		);
	virtual bool RibbonGallery_DrawItem(
		CDC & dc,
		CExtRibbonGalleryWnd * pGalleryWnd,
		const RECT & rcItem,
		LPVOID pGalleryItemData,
		LPARAM lParam = 0L
		);
	virtual bool RibbonGallery_EraseEntireBk(
		CDC & dc,
		const CRect & rcClient,
		const CRect & rcActiveChildArea,
		CRgn & rgnActiveChildArea,
		const CRect & rcActiveChildArea2,
		CRgn & rgnActiveChildArea2,
		CExtRibbonGalleryWnd * pGalleryWnd,
		LPARAM lParam = 0L
		);
	virtual void RibbonGallery_AdjustClientRect(
		CRect & rcClient,
		const CExtRibbonGalleryWnd * pGalleryWnd,
		LPARAM lParam = 0L
		);
	virtual void RibbonGallery_PaintScrollArea(
		CDC & dc,
		CExtRibbonGalleryInplaceScrollBar * pSB,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_RIBBON_BAR)

	virtual void AdvTip_CalcRgn(
		HRGN hRgnPrecalc,
		const RECT & rcRectRgn,
		bool bDynamicShadowApplied,
		INT nSizeInnerShadowIncluded,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool AdvTip_PaintBackground(
		CDC & dc,
		const RECT & rcClient,
		bool bAdvTipWithShadow,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual CFont * AdvTip_GetFont(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual COLORREF AdvTip_GetTextColor(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	struct __PROF_UIS_API PAINTPROGRESSDATA
	{
		int m_nPos, m_nRange;
		CRect m_rcClient;
		bool m_bHorz:1, m_bSmooth:1, m_bBorder:1;
		CObject * m_pHelperSrc;
		LPARAM m_lParam;
		PAINTPROGRESSDATA(
			int nPos,
			int nRange,
			const RECT & rcClient,
			bool bHorz = true,
			bool bSmooth = true,
			bool bBorder = true,
			CObject * pHelperSrc = NULL,
			LPARAM lParam = 0L
			)
			: m_nPos( nPos )
			, m_nRange( nRange )
			, m_rcClient( rcClient )
			, m_bHorz( bHorz )
			, m_bSmooth( bSmooth )
			, m_bBorder( bBorder )
			, m_pHelperSrc( pHelperSrc )
			, m_lParam( lParam )
		{
		}
	}; // struct PAINTPROGRESSDATA
	virtual bool PaintProgress(
		CDC & dc,
		PAINTPROGRESSDATA & _ppd
		);

#if (!defined __EXT_MFC_NO_CUSTOMIZE)
	virtual CFont & ScreenTip_GetFont(
		bool bCaption,
		bool bMainPart,
		CExtCustomizeCmdScreenTip & _CCST,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	virtual CRect ScreenTip_GetPaddingOuter(
		CExtCustomizeCmdScreenTip & _CCST,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	virtual CRect ScreenTip_GetPaddingInnerBmp(
		bool bMainPart,
		CExtCustomizeCmdScreenTip & _CCST,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	virtual CRect ScreenTip_GetPaddingInnerText(
		bool bCaption,
		bool bMainPart,
		CExtCustomizeCmdScreenTip & _CCST,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	virtual INT ScreenTip_GetSeparatorHeight(
		CExtCustomizeCmdScreenTip & _CCST,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	virtual COLORREF ScreenTip_GetTextColor(
		bool bCaption,
		bool bMainPart,
		CExtCustomizeCmdScreenTip & _CCST,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	virtual CSize ScreenTip_Measure(
		CDC & dc,
		CExtCustomizeCmdScreenTip & _CCST,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	virtual void ScreenTip_PaintBackground(
		CDC & dc,
		const RECT & rcScreenTip,
		CExtCustomizeCmdScreenTip & _CCST,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	virtual void ScreenTip_Paint(
		CDC & dc,
		const RECT & rcScreenTip,
		CExtCustomizeCmdScreenTip & _CCST,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_CUSTOMIZE)

#if (!defined __EXT_MFC_NO_PAGECONTAINER_CTRL)
	bool m_bPageContainerUseButtonStyle:1;
	bool m_bPageContainerUseGroupBoxStyle:1;
	bool m_bPageContainerNoEmbossDisabledText:1;
	virtual void PageContainer_EraseEntire(
		CDC & dc,
		CRect rcClient,
		CExtPageContainerWnd * pWndPageContainer,
		LPARAM lParam = 0L
		);
	virtual void PageContainer_EraseScrollPosArea(
		CDC & dc,
		CRect rcScrollPosArea,
		LONG nScrollPos,
		LONG nScrollSize,
		CExtPageContainerWnd * pWndPageContainer,
		LPARAM lParam = 0L
		);
	virtual void PageContainer_DrawScrollPosArea(
		CDC & dc,
		CRect rcScrollPosArea,
		LONG nScrollPos,
		LONG nScrollSize,
		CExtPageContainerWnd * pWndPageContainer,
		LPARAM lParam = 0L
		);
	virtual void PageContainer_EraseItem(
		CDC & dc,
		LPVOID pPageInfo, // CExtPageContainerWnd::PAGE_ITEM_INFO
		CRect rcPage,
		CRect rcCaption,
		CRect rcWnd,
		CExtPageContainerWnd * pWndPageContainer,
		LPARAM lParam = 0L
		);
	virtual void PageContainer_DrawItem(
		CDC & dc,
		LPVOID pPageInfo, // CExtPageContainerWnd::PAGE_ITEM_INFO
		CRect rcPage,
		CRect rcCaption,
		CRect rcWnd,
		CExtPageContainerWnd * pWndPageContainer,
		LPARAM lParam = 0L
		);
	virtual void PageContainer_EraseCaption(
		CDC & dc,
		LPVOID pPageInfo, // CExtPageContainerWnd::PAGE_ITEM_INFO
		CRect rcCaption,
		CExtPageContainerWnd * pWndPageContainer,
		LPARAM lParam = 0L
		);
	virtual void PageContainer_DrawCaption(
		CDC & dc,
		LPVOID pPageInfo, // CExtPageContainerWnd::PAGE_ITEM_INFO
		CRect rcCaption,
		CExtPageContainerWnd * pWndPageContainer,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_PAGECONTAINER_CTRL)

	// header control
	virtual void Header_PaintBackground(
		CDC & dc,
		CRect rc,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual CRect Header_GetItemPadding(
		INT nColNo,
		INT nColCount,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual void Header_PaintItem(
		CDC & dc,
		CRect rcItemEntire,
		CRect rcItemData,
		CRect rcIcon,
		CRect rcText,
		CRect rcSortArrow,
		CRect rcButton,
		CRect rcButtonIcon,
		bool bSorted,
		bool bSortedAscending,
		INT nColNo,
		INT nColCount,
		const CExtCmdIcon & iconItem,
		const CExtCmdIcon & iconButton,
		bool bHover,
		bool bPressed,
		bool bButtonEvent,
		__EXT_MFC_SAFE_LPCTSTR strItemText,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void Header_GetButtonPadding(
		INT & nButtonPaddingBefore,
		INT & nButtonPaddingAfter,
		INT nColNo,
		INT nColCount,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual INT Header_GetDistanceBetweenIconAndSortArrow(
		INT nColNo,
		INT nColCount,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual INT Header_GetDistanceBetweenIconAndText(
		INT nColNo,
		INT nColCount,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual INT Header_GetDistanceBetweenTextAndButton(
		INT nColNo,
		INT nColCount,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual INT Header_GetSortArrowWidth(
		INT nColNo,
		INT nColCount,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
}; // class CExtPaintManager

class __PROF_UIS_API CExtPaintManagerXP : public CExtPaintManager
{
protected:
	bool m_bEnabledHoverIconShadows:1;
	bool m_bHelperXpStyle8BitBarRect:1;
	bool m_bExpBtnSwapVGlyphs:1;
	const glyph_t * m_pGlyphTbEpBtnH0;
	const glyph_t * m_pGlyphTbEpBtnH1;
	const glyph_t * m_pGlyphTbEpBtnV0;
	const glyph_t * m_pGlyphTbEpBtnV1;
	int m_nIdxClrMlaNormLeft, m_nIdxClrMlaNormRight, m_nIdxClrMlaNormMiddle,
		m_nIdxClrMlaRarelyLeft, m_nIdxClrMlaRarelyRight, m_nIdxClrMlaRarelyMiddle,
		m_nIdxClrBtnNormLeft, m_nIdxClrBtnNormRight,
		m_nIdxClrBtnHoverLeft, m_nIdxClrBtnHoverRight,
		m_nIdxClrBtnPressedLeft, m_nIdxClrBtnPressedRight,
		m_nIdxClrBtnHovPresLeft, m_nIdxClrBtnHovPresRight;

public:
	COLORREF m_clrCustomDropDownGlyphEnabled, m_clrCustomDropDownGlyphDisabled;

	DECLARE_SERIAL( CExtPaintManagerXP );

	// construction/destruction
	CExtPaintManagerXP();
	virtual ~CExtPaintManagerXP();

	virtual e_paint_manager_name_t OnQueryPaintManagerName()
	{
		ASSERT_VALID( this );
		return OfficeXP;
	}

	virtual INT GetSeparatorHeight()
	{
		ASSERT_VALID( this );
		return 1;
	}

	virtual bool OnQueryUseThemeColors() const;

	virtual COLORREF GetShadowAdjustColor();
	virtual void FixedBar_AdjustClientRect(
		const CExtControlBar * pBar,
		CRect & rcPreCalc
		);
	virtual INT FixedBar_GetRowDistance(
		const CExtToolControlBar * pBar
		);
	virtual bool FixedBar_IsPaintRowBkMode(
		const CExtToolControlBar * pBar
		);

	// install required translated color as
	// described in e_translated_colors_t enumeration
	virtual void InitTranslatedColors();

	// gets the pushed metic offset
	virtual CSize GetPushedOffset();

	// paint methods

	virtual void PaintPushButton(
		CDC & dc,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);
	virtual void PaintPushButtonText(
		CDC & dc,
		CRect & rcCaption,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);

	virtual void PaintGripper(
		CDC & dc,
		CExtPaintManager::PAINTGRIPPERDATA & _pgd
		);

	virtual void PaintSeparator(
		CDC & dc,
		const RECT & rectItem,
		bool bHorz,
		bool bTransparentBk,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	virtual void PaintIcon(
		CDC & dc,
		bool bHorz,
		CExtCmdIcon * pIcon,
		const CRect & rcClient,
		bool bPushed,
		bool bEnabled,
		bool bHover = false,
		INT nIconAlignment = 0,
		bool bRTL = false,
		CRect * prcIcon = NULL,
		CRect * prcText = NULL,
		CRect * prcIconMargins = NULL,
		COLORREF clrCustomAccentEffectForIcon = COLORREF(-1L)
		);

	virtual void PaintMenuItem(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid
		);
	virtual void PaintMenuItemIcon(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid
		);
	virtual void PaintMenuItemInPlaceWnd(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid
		);
	virtual void PaintMenuItemLeftAreaMarginXP(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid,
		const RECT & rcFillLeftPart,
		const RECT & rcFillRightPart
		);
	virtual bool PaintMenuItemBackgroundXP(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid,
		const RECT & rcSelectionArea
		);
	virtual bool PaintMenuItemSelectionAreaXP(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid,
		const RECT & rcSelectionArea
		);
	enum e_CheckMarkAreaTypeXP
	{
		__ECMATXP_EXTRA_MARK_CHECKED = 0,
		__ECMATXP_ICON_OR_CHECK_OR_RADIO_FRAME = 1,
	};
	virtual bool PaintMenuItemCheckMarkAreaXP(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid,
		const RECT & rcCheckMarkArea,
		e_CheckMarkAreaTypeXP eCMATXP
		);
	virtual void PaintMenuSeparator(
		CDC & dc,
		const RECT & rectItem,
		int nIconAreaWidth,
		bool bRarelyUsed,
		bool bIsForceNoLeftGradient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	virtual void PaintControlFrame(
		CDC & dc,
		CExtPaintManager::PAINTCONTROLFRAMEDATA & _pcfd
		);

	virtual void PaintComboFrame(
		CDC & dc,
		CExtPaintManager::PAINTCOMBOFRAMEDATA & _pcfd
		);

	virtual void PaintSysCmdGlyph(
		CDC & dc,
		UINT nHelperSysCmdID,
		const RECT & rcItem,
		bool bHover,
		bool bPushed,
		bool bEnabled
		);

	virtual void PaintFloatToolbarRowBk(
		CDC & dc,
		const CExtToolControlBar * pBar,
		int nLastReviewBtnIdx,
		CRect & rcRowBk
		);

	virtual void PaintToolbarExpandButton(
		CDC & dc,
		const RECT & rcButtonArea,
		bool bHorz, // if false - down
		bool bBarIsCompletelyVisible,
		bool bEnabled,
		bool bPushed,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		bool bTransparentBackground = false
		);
	virtual void PaintMenuExpandButton(
		CDC & dc,
		const RECT & rectButton,
		bool bPushed,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintMenuScrollButton(
		CDC & dc,
		bool bHover,
		bool bPushed,
		bool bTopButton,
		const RECT & rcScrollButton,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintMenuTearOffButton(
		CDC & dc,
		const RECT & rectButton,
		bool bPushed,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual int GetMenuExpandButtonHeight();

	virtual void PaintDockingFrame(
		CDC & dc,
		CExtPaintManager::PAINTDOCKINGFRAMEDATA & _pdfd
		);

	virtual int GetMenuShadowSize() const;
	virtual CRect GetMenuBorderMetrics(
		CWnd * pWnd,
		LPARAM lParam = 0
		) const;

	virtual void PaintMenuBorder(
		CDC & dc,
		const RECT & rectClient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	enum e_xp_colors_t
	{
		XPCLR_3DFACE_DARK				= __ExtMfc_XP_COLOR_SHIFT+0,
		XPCLR_3DFACE_NORMAL				= __ExtMfc_XP_COLOR_SHIFT+1,
		XPCLR_SEPARATOR					= __ExtMfc_XP_COLOR_SHIFT+2,
		XPCLR_HILIGHT					= __ExtMfc_XP_COLOR_SHIFT+3,
		XPCLR_HILIGHT_BORDER			= __ExtMfc_XP_COLOR_SHIFT+4,
		XPCLR_HILIGHT_BORDER_SELECTED	= __ExtMfc_XP_COLOR_SHIFT+5,
		XPCLR_RARELY_BORDER				= __ExtMfc_XP_COLOR_SHIFT+6,
		XPCLR_PUSHEDHOVERTEXT			= __ExtMfc_XP_COLOR_SHIFT+7,
		XPCLR_MENU_BORDER				= __ExtMfc_XP_COLOR_SHIFT+8,
		XPCLR_3DFACE_FLOAT_R			= __ExtMfc_XP_COLOR_SHIFT+9,
		XPCLR_3DFACE_FLOAT_F			= __ExtMfc_XP_COLOR_SHIFT+10,
		XPCLR_TEXT_FIELD_BORDER_NORMAL	= __ExtMfc_XP_COLOR_SHIFT+11,
		XPCLR_TEXT_FIELD_BORDER_DISABLED= __ExtMfc_XP_COLOR_SHIFT+12,
		XPCLR_GRIPPER					= __ExtMfc_XP_COLOR_SHIFT+13,
	};

	virtual bool IsMenuMustCombineExcludeArea(
		const CObject * pMenuTrackerObject = NULL
		) const;
	virtual bool IsToolBarChevronMenuCombined();
	virtual void PaintMenuCombinedArea(
		CDC & dc,
		const RECT & rcArea,
		const RECT & rcClient,
		int eCombineAlign, // CExtPopupMenuWnd::e_combine_align_t values
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	virtual void PaintDockingCaptionButton(
		CDC & dc,
		CExtPaintManager::PAINTDOCKINGCAPTIONBUTTONDATA & _pdcbd
		);
	virtual COLORREF GetMenuFrameFillColor(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintControlBarBorders(
		CDC & dc,
		CExtPaintManager::PAINTCONTROLBARBORDERSDATA & _pcbbd
		);

#if (!defined __EXT_MFC_NO_TAB_CTRL)
	virtual void PaintTabItem(
		CDC & dc,
		CRect & rcTabItemsArea,
		bool bTopLeft,
		bool bHorz,
		bool bSelected,
		bool bCenteredText,
		bool bGroupedMode,
		bool bInGroupActive,
		bool bInvertedVerticalMode,
		const CRect & rcEntireItem,
		CSize sizeTextMeasured,
		CFont * pFont,
		__EXT_MFC_SAFE_LPCTSTR sText,
		CExtCmdIcon * pIcon,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		COLORREF clrForceText = COLORREF(-1L),
		COLORREF clrForceTabBk = COLORREF(-1L),
		COLORREF clrForceTabBorderLT = COLORREF(-1L),
		COLORREF clrForceTabBorderRB = COLORREF(-1L),
		COLORREF clrForceTabSeparator = COLORREF(-1L)
		);
	virtual void PaintTabClientArea(
		CDC & dc,
		CRect & rcClient,
		CRect & rcTabItemsArea,
		CRect & rcTabNearBorderArea,
		DWORD dwOrientation,
		bool bGroupedMode,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintTabButton(
		CDC & dc,
		CRect & rcButton,
		LONG nHitTest,
		bool bTopLeft,
		bool bHorz,
		bool bEnabled,
		bool bHover,
		bool bPushed,
		bool bGroupedMode,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		bool bFlat = false
		);
	virtual void PaintTabNcAreaRect(
		CDC & dc,
		const RECT & rc,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
#endif // #if (!defined __EXT_MFC_NO_TAB_CTRL)

	virtual void PaintResizableBarChildNcAreaRect(
		CDC & dc,
		const RECT & rc,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

#if (!defined __EXT_MFC_NO_SHORTCUTLIST_CTRL)
	virtual void PaintShortcutListBkgnd(
		CDC & dc,
		const RECT & rcClient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintShortcutListItem(
		CDC & dc,
		CExtPaintManager::PAINTSHORTCUTLISTITEMSDATA & _pslid
		);
#endif // (!defined __EXT_MFC_NO_SHORTCUTLIST_CTRL)

	virtual void PaintToolbarTextField(
		CDC & dc,
		PAINTTOOLBARTEXTFIELDDATA & _ptbtfd
		);

	virtual COLORREF GetIconAlphaColor() const;
	virtual double GetIconAlphaAdjustPercent() const;

	virtual bool AdjustIcon( 
		CExtCmdIcon * pIcon
		);

	virtual CSize FixedBar_GetRoundedAreaMerics() const;
 
#if (!defined __EXT_MFC_NO_PAGE_NAVIGATOR )
	virtual void PaintPageNavigatorBorder(
		CDC & dc,
		const RECT & rcControl
		);
	virtual void PaintPageNavigatorItem(
		CDC & dc,
		const CRect & rcItem,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		CExtCmdIcon * pIcon,
		bool bExpanded,
		bool bPushed,
		bool bHover
		);	
	virtual void PaintPageNavigatorSplitter(
		CDC & dc,
		const CRect & rcSplitter,
		bool bDrawDots = true
		);
#endif // (!defined __EXT_MFC_NO_PAGE_NAVIGATOR )

#if (!defined __EXT_MFC_NO_TASK_PANE )
	virtual void TaskPanePaintBorder(
		CDC & dc,
		const RECT & rcClient,
		CObject * pHelperSrc
		);
	virtual void TaskPanePaintGroupCaption(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		bool bHover,
		bool bPressed,
		bool bHighlighted,
		bool bPaintExpandButton,
		bool bExpanded,
		CObject * pHelperSrc
		);
	virtual LONG TaskPaneQueryGroupCaptionMinHeight() const;
	virtual CRect TaskPaneQueryGroupCaptionTextMargins() const;
#endif // (!defined __EXT_MFC_NO_TASK_PANE )

#if (!defined __EXT_MFC_NO_DATE_PICKER)
	virtual void PaintDatePickerBorder(
		CDC & dc,
		const RECT & rcControl,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintDatePickerHeaderBackground(
		INT nCol,
		INT nRow,
		CDC & dc,
		INT nYear,
		INT nMonth,
		const RECT & rcHeader,
		const RECT & rcHeaderWithoutBorders,
		const RECT & rcHeaderDate,
		const RECT & rcScrollBtnBackward,
		const RECT & rcScrollBtnForward,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_DATE_PICKER)

#ifndef __EXT_MFC_NO_UNDO_REDO_POPUP
	virtual void PaintUndoRedoCaption(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
#endif // __EXT_MFC_NO_UNDO_REDO_POPUP

#if( !defined __EXT_MFC_NO_SPIN || !defined __EXT_MFC_NO_DURATIONWND )
	virtual void PaintSpinButton(
		CDC & dc,
		const CRect & rcButton,
		bool bUp,		
		bool bHorz,
		bool bEnabled,
		bool bFlat,
		bool bDrawBorder,
		bool bPushed,
		bool bHover,
		bool bHotTrack,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
#endif // #if( !defined __EXT_MFC_NO_SPIN || !defined __EXT_MFC_NO_DURATIONWND )

#if (!defined __EXT_MFC_NO_DOCK_MARKERS)
	virtual void DockMarker_AdjustBmps(
		eDockMarkerType_t eDockMarkerType,
		CExtBitmap & bmpIn,
		COLORREF clrTransparentIn,
		CExtBitmap & bmpOut,
		COLORREF clrTransparentOut
		);
#endif // (!defined __EXT_MFC_NO_DOCK_MARKERS)

#if (!defined __EXT_MFC_NO_RIBBON_BAR)
	virtual CRect Ribbon_GetPopupGroupBorderMetrics(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_RIBBON_BAR)

	// header control
	virtual void Header_PaintBackground(
		CDC & dc,
		CRect rc,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void Header_PaintItem(
		CDC & dc,
		CRect rcItemEntire,
		CRect rcItemData,
		CRect rcIcon,
		CRect rcText,
		CRect rcSortArrow,
		CRect rcButton,
		CRect rcButtonIcon,
		bool bSorted,
		bool bSortedAscending,
		INT nColNo,
		INT nColCount,
		const CExtCmdIcon & iconItem,
		const CExtCmdIcon & iconButton,
		bool bHover,
		bool bPressed,
		bool bButtonEvent,
		__EXT_MFC_SAFE_LPCTSTR strItemText,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
}; // class CExtPaintManagerXP

class __PROF_UIS_API CExtPaintManagerOffice2003 : public CExtPaintManagerXP
{
protected:
	int m_nIdxClrTbFillMargin;

public:
	DECLARE_SERIAL( CExtPaintManagerOffice2003 );

	// construction/destruction
	CExtPaintManagerOffice2003();
	virtual ~CExtPaintManagerOffice2003();

	virtual e_paint_manager_name_t OnQueryPaintManagerName()
	{
		ASSERT_VALID( this );
		return Office2003;
	}

#ifndef __EXT_MFC_NO_TAB_ONENOTE_CTRL
	virtual void TabOneNoteWnd_DrawClientArea(
		CDC & dc,
		CRect & rcClient,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	virtual void GetTabOneNoteItemColors(
		bool bSelected,
		bool bHover,
		bool bEnabled,
		COLORREF &clrBorderLight,
		COLORREF &clrBorderDark,
		COLORREF &clrBkLight,
		COLORREF &clrBkDark,
		COLORREF &clrText
		);
#endif // __EXT_MFC_NO_TAB_ONENOTE_CTRL

#ifndef __EXT_MFC_NO_TAB_WHIDBEY_CTRL
	virtual void GetTabWhidbeyItemColors(
		bool bSelected,
		bool bHover,
		bool bEnabled,
		COLORREF &clrBorder,
		COLORREF &clrBkLight,
		COLORREF &clrBkDark,
		COLORREF &clrText
		);
#endif // __EXT_MFC_NO_TAB_WHIDBEY_CTRL

	virtual bool OnQueryThemeColors(
		COLORREF *pclrFillHint,
		COLORREF *pclrAccentHint = NULL
		);
	virtual bool OnQueryUseThemeColors() const;

	virtual void OnPaintToolBarGradient(
		CDC & dc,
		CRect rcPaintGradient,
		bool bHorz,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		COLORREF clrLeft = COLORREF(-1L),
		COLORREF clrRight = COLORREF(-1L)
		) const;

	virtual COLORREF GetShadowAdjustColor();
	virtual void FixedBar_AdjustClientRect(
		const CExtControlBar * pBar,
		CRect & rcPreCalc
		);
	virtual INT FixedBar_GetRowDistance(
		const CExtToolControlBar * pBar
		);
	virtual bool FixedBar_IsPaintRowBkMode(
		const CExtToolControlBar * pBar
		);

	enum e_2003_colors_t
	{
		_2003CLR_GRADIENT_LIGHT			= __ExtMfc_2003_COLOR_SHIFT+0,
		_2003CLR_GRADIENT_DARK			= __ExtMfc_2003_COLOR_SHIFT+1,
		_2003CLR_GRIPPER_DOT_LIGHT		= __ExtMfc_2003_COLOR_SHIFT+2,
		_2003CLR_GRIPPER_DOT_DARK		= __ExtMfc_2003_COLOR_SHIFT+3,
		_2003CLR_EXPBTN_LIGHT			= __ExtMfc_2003_COLOR_SHIFT+4,
		_2003CLR_EXPBTN_DARK			= __ExtMfc_2003_COLOR_SHIFT+5,
		_2003CLR_EXPBTN_HOVER_LIGHT		= __ExtMfc_2003_COLOR_SHIFT+6,
		_2003CLR_EXPBTN_HOVER_DARK		= __ExtMfc_2003_COLOR_SHIFT+7,
		_2003CLR_EXPBTN_PRESSED_LIGHT	= __ExtMfc_2003_COLOR_SHIFT+8,
		_2003CLR_EXPBTN_PRESSED_DARK	= __ExtMfc_2003_COLOR_SHIFT+9,
		_2003CLR_SEPARATOR_LIGHT		= __ExtMfc_2003_COLOR_SHIFT+10,
		_2003CLR_SEPARATOR_DARK			= __ExtMfc_2003_COLOR_SHIFT+11,
		_2003CLR_EXPGLYPH_LIGHT			= __ExtMfc_2003_COLOR_SHIFT+12,
		_2003CLR_EXPGLYPH_DARK			= __ExtMfc_2003_COLOR_SHIFT+13,
		_2003CLR_STATUSBAR_ITEM			= __ExtMfc_2003_COLOR_SHIFT+14,
		_2003CLR_MLA_NORM_LEFT			= __ExtMfc_2003_COLOR_SHIFT+15,
		_2003CLR_MLA_NORM_MIDDLE		= __ExtMfc_2003_COLOR_SHIFT+16,
		_2003CLR_MLA_NORM_RIGHT			= __ExtMfc_2003_COLOR_SHIFT+17,
		_2003CLR_MLA_RARELY_LEFT		= __ExtMfc_2003_COLOR_SHIFT+18,
		_2003CLR_MLA_RARELY_MIDDLE		= __ExtMfc_2003_COLOR_SHIFT+19,
		_2003CLR_MLA_RARELY_RIGHT		= __ExtMfc_2003_COLOR_SHIFT+20,
		_2003CLR_BTN_HOVER_LEFT			= __ExtMfc_2003_COLOR_SHIFT+21,
		_2003CLR_BTN_HOVER_RIGHT		= __ExtMfc_2003_COLOR_SHIFT+22,
		_2003CLR_BTN_PRESSED_LEFT		= __ExtMfc_2003_COLOR_SHIFT+23,
		_2003CLR_BTN_PRESSED_RIGHT		= __ExtMfc_2003_COLOR_SHIFT+24,
		_2003CLR_BTN_HP_LEFT			= __ExtMfc_2003_COLOR_SHIFT+25,
		_2003CLR_BTN_HP_RIGHT			= __ExtMfc_2003_COLOR_SHIFT+26,
		_2003CLR_PN_BORDER				= __ExtMfc_2003_COLOR_SHIFT+27,
		_2003CLR_PN_GRIPPER_LIGHT		= __ExtMfc_2003_COLOR_SHIFT+28,
		_2003CLR_PN_GRIPPER_DARK		= __ExtMfc_2003_COLOR_SHIFT+29,
		_2003CLR_PN_PANE_CAPTION_LIGHT	= __ExtMfc_2003_COLOR_SHIFT+30,
		_2003CLR_PN_PANE_CAPTION_DARK	= __ExtMfc_2003_COLOR_SHIFT+31,
		_2003CLR_PN_PANE_CAPTION_HOVER_LIGHT	= __ExtMfc_2003_COLOR_SHIFT+32,
		_2003CLR_PN_PANE_CAPTION_HOVER_DARK		= __ExtMfc_2003_COLOR_SHIFT+33,
		_2003CLR_PN_PANE_CAPTION_BOTTOM_LINE	= __ExtMfc_2003_COLOR_SHIFT+34,
		_2003CLR_PN_ITEM_LIGHT			= __ExtMfc_2003_COLOR_SHIFT+35,
		_2003CLR_PN_ITEM_DARK			= __ExtMfc_2003_COLOR_SHIFT+36,
		_2003CLR_EXPBTN_CIRCLE_LIGHT	= __ExtMfc_2003_COLOR_SHIFT+37,
		_2003CLR_EXPBTN_CIRCLE_DARK		= __ExtMfc_2003_COLOR_SHIFT+38,
		_2003CLR_TOOLBAR_GRADIENT_LIGHT	= __ExtMfc_2003_COLOR_SHIFT+39,
		_2003CLR_TOOLBAR_GRADIENT_MIDDLE= __ExtMfc_2003_COLOR_SHIFT+40,
		_2003CLR_TOOLBAR_GRADIENT_DARK	= __ExtMfc_2003_COLOR_SHIFT+41,
		_2003CLR_TOOLBAR_BOTTOM_LINE	= __ExtMfc_2003_COLOR_SHIFT+42,
		_2003CLR_TBB_BK_COMBINED_TOP	= __ExtMfc_2003_COLOR_SHIFT+43,
		_2003CLR_TBB_BK_COMBINED_BOTTOM	= __ExtMfc_2003_COLOR_SHIFT+44,
	};

	// install required translated color as
	// described in e_translated_colors_t enumeration
	virtual void InitTranslatedColors();

	virtual bool IsToolBarChevronMenuCombined();

	virtual bool GetCb2DbTransparentMode(
		CObject * pObjHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool PaintDockerBkgnd(
		bool bClientMapping,
		CDC & dc,
		CWnd * pWnd,
		LPARAM lParam = NULL
		);
	virtual bool PaintDockerBkgnd(
		bool bClientMapping,
		CDC & dc,
		const CRect &rcDst,
		const CRect &rcWnd,
		LPARAM lParam = NULL
		);
	virtual void PaintControlBarClientArea(
		CDC & dc,
		const RECT & rcClient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintDockBarClientArea(
		CDC & dc,
		const RECT & rcClient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintDockingFrame(
		CDC & dc,
		CExtPaintManager::PAINTDOCKINGFRAMEDATA & _pdfd
		);
	virtual void PaintGripper(
		CDC & dc,
		CExtPaintManager::PAINTGRIPPERDATA & _pgd
		);
	virtual void PaintSeparator(
		CDC & dc,
		const RECT & rectItem,
		bool bHorz,
		bool bTransparentBk,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

#if (!defined __EXT_MFC_NO_TAB_CTRL)
	virtual void PaintTabClientArea(
		CDC & dc,
		CRect & rcClient,
		CRect & rcTabItemsArea,
		CRect & rcTabNearBorderArea,
		DWORD dwOrientation,
		bool bGroupedMode,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
#endif // #if (!defined __EXT_MFC_NO_TAB_CTRL)

	virtual void PaintControlFrame(
		CDC & dc,
		CExtPaintManager::PAINTCONTROLFRAMEDATA & _pcfd
		);
	virtual void PaintComboFrame(
		CDC & dc,
		CExtPaintManager::PAINTCOMBOFRAMEDATA & _pcfd
		);
	virtual void PaintFloatToolbarRowBk(
		CDC & dc,
		const CExtToolControlBar * pBar,
		int nLastReviewBtnIdx,
		CRect & rcRowBk
		);
	virtual void PaintToolbarExpandButton(
		CDC & dc,
		const RECT & rcButtonArea,
		bool bHorz, // if false - down
		bool bBarIsCompletelyVisible,
		bool bEnabled,
		bool bPushed,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		bool bTransparentBackground = false
		);
	virtual void PaintControlBarBorders(
		CDC & dc,
		CExtPaintManager::PAINTCONTROLBARBORDERSDATA & _pcbbd
		);
	virtual void PaintMenuCombinedArea(
		CDC & dc,
		const RECT & rcArea,
		const RECT & rcClient,
		int eCombineAlign, // CExtPopupMenuWnd::e_combine_align_t values
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintMenuExpandButton(
		CDC & dc,
		const RECT & rectButton,
		bool bPushed,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintMenuTearOffButton(
		CDC & dc,
		const RECT & rectButton,
		bool bPushed,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual int GetMenuExpandButtonHeight();

	virtual CSize GetToolBarButtonOffset( BOOL bHorz ) const;

	virtual COLORREF GetIconAlphaColor() const;
	virtual double GetIconAlphaAdjustPercent() const;

	virtual bool AdjustIcon( 
		CExtCmdIcon * pIcon
		);

	virtual CSize FixedBar_GetRoundedAreaMerics() const;

	virtual void PaintResizingGripper(
		CDC & dc,
		const RECT & rcGrip,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

#if (!defined __EXT_MFC_NO_PAGE_NAVIGATOR )
	virtual void PaintPageNavigatorBorder(
		CDC & dc,
		const RECT & rcControl
		);
	virtual void PaintPageNavigatorItemCaption(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption
		);
	virtual void PaintPageNavigatorItemPaneCaption(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		bool bHover,
		bool bPressed,
		bool bExpandable,
		bool bExpanded,
		bool bDrawTopLine = true
		);
	virtual void PaintPageNavigatorItem(
		CDC & dc,
		const CRect & rcItem,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		CExtCmdIcon * pIcon,
		bool bExpanded,
		bool bPushed,
		bool bHover
		);	
	virtual void PaintPageNavigatorSplitter(
		CDC & dc,
		const CRect & rcSplitter,
		bool bDrawDots = true
		);
#endif // (!defined __EXT_MFC_NO_PAGE_NAVIGATOR )

#if (!defined __EXT_MFC_NO_TASK_PANE )
	virtual void TaskPanePaintGroupCaption(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		bool bHover,
		bool bPressed,
		bool bHighlighted,
		bool bPaintExpandButton,
		bool bExpanded,
		CObject * pHelperSrc
		);
	virtual CRect TaskPaneQueryMarginsPage() const;
	virtual HFONT TaskPaneQueryGroupCaptionFont();
	virtual CRect TaskPaneQueryGroupCaptionTextMargins() const;
#endif // (!defined __EXT_MFC_NO_TASK_PANE )

#if (!defined __EXT_MFC_NO_DATE_PICKER)
	virtual void PaintDatePickerBorder(
		CDC & dc,
		const RECT & rcControl,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintDatePickerHeaderBackground(
		INT nCol,
		INT nRow,
		CDC & dc,
		INT nYear,
		INT nMonth,
		const RECT & rcHeader,
		const RECT & rcHeaderWithoutBorders,
		const RECT & rcHeaderDate,
		const RECT & rcScrollBtnBackward,
		const RECT & rcScrollBtnForward,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_DATE_PICKER)

#if( !defined __EXT_MFC_NO_SPIN || !defined __EXT_MFC_NO_DURATIONWND )
	virtual void PaintSpinButton(
		CDC & dc,
		const CRect & rcButton,
		bool bUp,		
		bool bHorz,
		bool bEnabled,
		bool bFlat,
		bool bDrawBorder,
		bool bPushed,
		bool bHover,
		bool bHotTrack,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
#endif // #if( !defined __EXT_MFC_NO_SPIN || !defined __EXT_MFC_NO_DURATIONWND )

#if (!defined __EXT_MFC_NO_DOCK_MARKERS)
	virtual void DockMarker_AdjustBmps(
		eDockMarkerType_t eDockMarkerType,
		CExtBitmap & bmpIn,
		COLORREF clrTransparentIn,
		CExtBitmap & bmpOut,
		COLORREF clrTransparentOut
		);
	virtual void DockMarker_AdjustHighlightedArea(
		COLORREF * pClrSurface,
		int nClrSurfaceDX,
		int nClrSurfaceDY,
		bool bTabShape,
		bool bTabsAtTop,
		const CRect & rcTabMainArea,
		const CRect & rcTabBottomMiddleArea,
		COLORREF clrAdjustMain = COLORREF(-1L),
		COLORREF clrAdjustBorder = COLORREF(-1L),
		int nBorderMetric = 2
		);
	virtual void DockMarker_AdjustHighlightedLayer(
		HWND hWnd,
		int nDX,
		int nDY,
		bool bTabShape,
		bool bTabsAtTop,
		const CRect & rcTabMainArea,
		const CRect & rcTabBottomMiddleArea,
		COLORREF clrAdjustMain = COLORREF(-1L),
		COLORREF clrAdjustBorder = COLORREF(-1L),
		int nBorderMetric = 2
		);
#endif // (!defined __EXT_MFC_NO_DOCK_MARKERS)

	virtual void PaintBarButtonCombinedArea(
		CDC & dc,
		CExtBarButton * pTBB,
		LPARAM lParam = 0L
		);

#if (!defined __EXT_MFC_NO_REPORTGRIDWND)
	virtual bool ReportGrid_PaintHeaderRowBackground(
		CDC & dc,
		const RECT & rcArea,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_REPORTGRIDWND)

	// header control
	virtual void Header_PaintBackground(
		CDC & dc,
		CRect rc,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void Header_PaintItem(
		CDC & dc,
		CRect rcItemEntire,
		CRect rcItemData,
		CRect rcIcon,
		CRect rcText,
		CRect rcSortArrow,
		CRect rcButton,
		CRect rcButtonIcon,
		bool bSorted,
		bool bSortedAscending,
		INT nColNo,
		INT nColCount,
		const CExtCmdIcon & iconItem,
		const CExtCmdIcon & iconButton,
		bool bHover,
		bool bPressed,
		bool bButtonEvent,
		__EXT_MFC_SAFE_LPCTSTR strItemText,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
}; // class CExtPaintManagerOffice2003

//////////////////////////////////////////////////////////////////////////
// CExtPaintManagerStudio2005
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtPaintManagerStudio2005 : public CExtPaintManagerOffice2003
{
public:
	DECLARE_SERIAL( CExtPaintManagerStudio2005 );

	// construction/destruction
	CExtPaintManagerStudio2005();
	virtual ~CExtPaintManagerStudio2005();

	virtual e_paint_manager_name_t OnQueryPaintManagerName()
	{
		ASSERT_VALID( this );
		return Studio2005;
	}

#ifndef __EXT_MFC_NO_TAB_ONENOTE_CTRL
	virtual void GetTabOneNoteItemColors(
		bool bSelected,
		bool bHover,
		bool bEnabled,
		COLORREF &clrBorderLight,
		COLORREF &clrBorderDark,
		COLORREF &clrBkLight,
		COLORREF &clrBkDark,
		COLORREF &clrText
		);
#endif // __EXT_MFC_NO_TAB_ONENOTE_CTRL

	virtual bool OnQueryThemeColors(
		COLORREF *pclrFillHint,
		COLORREF *pclrAccentHint = NULL
		);

	enum e_STUDIO_2005_colors_t
	{
		_STUDIO_2005CLR_BAR_CAPTION_INACTIVE = __ExtMfc_STUDIO_2005_COLOR_SHIFT+0,
		_STUDIO_2005CLR_BAR_CAPTION_ACTIVE_TOP = __ExtMfc_STUDIO_2005_COLOR_SHIFT+1,
		_STUDIO_2005CLR_BAR_CAPTION_ACTIVE_BOTTOM = __ExtMfc_STUDIO_2005_COLOR_SHIFT+2,
	};

#if (!defined __EXT_MFC_NO_TAB_CTRL)

	virtual void TabWnd_MeasureItemAreaMargins(
		CExtTabWnd * pTabWnd,
		LONG & nSpaceBefore,
		LONG & nSpaceAfter,
		LONG & nSpaceOver
		);	
	
	virtual void TabWnd_UpdateItemMeasure(
		CExtTabWnd * pTabWnd,
		CExtTabWnd::TAB_ITEM_INFO * pTii,
		CDC & dcMeasure,
		CSize & sizePreCalc
		);	

	virtual void TabWnd_AdjustItemCloseButtonRect(
		CRect & rcCloseButton,
		CExtTabWnd * pTabWnd
		);	

	virtual void GetThemeAccentTabColors(
		COLORREF * pClrSetectedTabItemText,
		COLORREF * pClrSetectedTabItemFace = NULL,
		COLORREF * pClrSetectedTabItemBorderLight = NULL,
		COLORREF * pClrSetectedTabItemBorderDark = NULL,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	virtual void PaintTabItem(
		CDC & dc,
		CRect & rcTabItemsArea,
		bool bTopLeft,
		bool bHorz,
		bool bSelected,
		bool bCenteredText,
		bool bGroupedMode,
		bool bInGroupActive,
		bool bInvertedVerticalMode,
		const CRect & rcEntireItem,
		CSize sizeTextMeasured,
		CFont * pFont,
		__EXT_MFC_SAFE_LPCTSTR sText,
		CExtCmdIcon * pIcon,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		COLORREF clrForceText = COLORREF(-1L),
		COLORREF clrForceTabBk = COLORREF(-1L),
		COLORREF clrForceTabBorderLT = COLORREF(-1L),
		COLORREF clrForceTabBorderRB = COLORREF(-1L),
		COLORREF clrForceTabSeparator = COLORREF(-1L)
		);
	virtual void PaintTabButton(
		CDC & dc,
		CRect & rcButton,
		LONG nHitTest,
		bool bTopLeft,
		bool bHorz,
		bool bEnabled,
		bool bHover,
		bool bPushed,
		bool bGroupedMode,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		bool bFlat = false
		);
	virtual void PaintTabClientArea(
		CDC & dc,
		CRect & rcClient,
		CRect & rcTabItemsArea,
		CRect & rcTabNearBorderArea,
		DWORD dwOrientation,
		bool bGroupedMode,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintTabbedTabClientArea(
		CDC & dc,
		CRect & rcClient,
		CRect & rcTabItemsArea,
		CRect & rcTabNearBorderArea,
		DWORD dwOrientation,
		bool bGroupedMode,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

#endif // #if (!defined __EXT_MFC_NO_TAB_CTRL)

	virtual int GetThemeDockingType() const;
#if (!defined __EXT_MFC_NO_TAB_CONTROLBARS)
	virtual int GetAutoHideTabsType() const;
#endif // (!defined __EXT_MFC_NO_TAB_CONTROLBARS)

	// install required translated color as
	// described in e_translated_colors_t enumeration
	virtual void InitTranslatedColors();

#if (!defined __EXT_MFC_NO_DOCK_MARKERS)
	virtual void DockMarker_AdjustBmps(
		eDockMarkerType_t eDockMarkerType,
		CExtBitmap & bmpIn,
		COLORREF clrTransparentIn,
		CExtBitmap & bmpOut,
		COLORREF clrTransparentOut
		);
#endif // (!defined __EXT_MFC_NO_DOCK_MARKERS)

	virtual COLORREF GetShadowAdjustColor();

	virtual void PaintGripper(
		CDC & dc,
		CExtPaintManager::PAINTGRIPPERDATA & _pgd
		);

	virtual void PaintDockingFrame(
		CDC & dc,
		CExtPaintManager::PAINTDOCKINGFRAMEDATA & _pdfd
		);
	virtual void PaintDockingCaptionButton(
		CDC & dc,
		CExtPaintManager::PAINTDOCKINGCAPTIONBUTTONDATA & _pdcbd
		);

	virtual COLORREF GetIconAlphaColor() const;
	virtual double GetIconAlphaAdjustPercent() const;

	virtual void PaintSeparator(
		CDC & dc,
		const RECT & rectItem,
		bool bHorz,
		bool bTransparentBk,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

#if (!defined __EXT_MFC_NO_RIBBON_BAR)
	virtual void Ribbon_PaintPageBk(
		CDC & dc,
		const RECT & rcPageBk,
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_RIBBON_BAR)

}; // class CExtPaintManagerStudio2005

//////////////////////////////////////////////////////////////////////////
// CExtPaintManagerStudio2008
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtPaintManagerStudio2008 : public CExtPaintManagerStudio2005
{
public:
	DECLARE_SERIAL( CExtPaintManagerStudio2008 );

	// construction/destruction
	CExtPaintManagerStudio2008();
	virtual ~CExtPaintManagerStudio2008();

	virtual e_paint_manager_name_t OnQueryPaintManagerName()
	{
		ASSERT_VALID( this );
		return Studio2008;
	}

	enum e_STUDIO_2008_colors_t
	{
		_STUDIO_2008CLR_MENU_ITEM_LEFT_AREA_MARGIN_LEFT		= __ExtMfc_STUDIO_2008_COLOR_SHIFT + 0,
		_STUDIO_2008CLR_MENU_ITEM_LEFT_AREA_MARGIN_RIGHT	= __ExtMfc_STUDIO_2008_COLOR_SHIFT + 1,
	};

	virtual bool OnQueryUseThemeColors() const;

	virtual int GetMenuIconAreaWidth() const;

	virtual bool IsMenuMustCombineExcludeArea(
		const CObject * pMenuTrackerObject = NULL
		) const;

	virtual void PaintPushButton(
		CDC & dc,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);

	virtual void PaintMenuItemLeftAreaMarginXP(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid,
		const RECT & rcFillLeftPart,
		const RECT & rcFillRightPart
		);

	virtual bool PaintMenuItemSelectionAreaXP(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid,
		const RECT & rcSelectionArea
		);

#if (!defined __EXT_MFC_NO_TAB_CTRL)
	virtual bool QueryTabWndHoverChangingRedraw(
		const CExtTabWnd * pWndTab,
		LPARAM lParam = 0L
		);
	virtual void TabWnd_MeasureItemAreaMargins(
		CExtTabWnd * pTabWnd,
		LONG & nSpaceBefore,
		LONG & nSpaceAfter,
		LONG & nSpaceOver
		);	
	virtual void TabWnd_UpdateItemMeasure(
		CExtTabWnd * pTabWnd,
		CExtTabWnd::TAB_ITEM_INFO * pTii,
		CDC & dcMeasure,
		CSize & sizePreCalc
		);	
	virtual bool TabWnd_GetParentSizingMargin(
		INT & nMargin,
		DWORD dwOrientation,
		CExtTabWnd * pTabWnd
		) const;
	virtual void PaintTabItem(
		CDC & dc,
		CRect & rcTabItemsArea,
		bool bTopLeft,
		bool bHorz,
		bool bSelected,
		bool bCenteredText,
		bool bGroupedMode,
		bool bInGroupActive,
		bool bInvertedVerticalMode,
		const CRect & rcEntireItem,
		CSize sizeTextMeasured,
		CFont * pFont,
		__EXT_MFC_SAFE_LPCTSTR sText,
		CExtCmdIcon * pIcon,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		COLORREF clrForceText = COLORREF(-1L),
		COLORREF clrForceTabBk = COLORREF(-1L),
		COLORREF clrForceTabBorderLT = COLORREF(-1L),
		COLORREF clrForceTabBorderRB = COLORREF(-1L),
		COLORREF clrForceTabSeparator = COLORREF(-1L)
		);
#endif // #if (!defined __EXT_MFC_NO_TAB_CTRL)

	virtual int GetThemeDockingType() const;

#if (!defined __EXT_MFC_NO_DOCK_MARKERS)
	virtual BYTE DockMarker_GetAlpha(
		bool bHighlight,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool DockMarker_IsAdjustBmpsRequired(
		eDockMarkerType_t eDockMarkerType
		) const;
	virtual void DockMarker_AdjustBmps(
		eDockMarkerType_t eDockMarkerType,
		CExtBitmap & bmpIn,
		COLORREF clrTransparentIn,
		CExtBitmap & bmpOut,
		COLORREF clrTransparentOut
		);
#endif // (!defined __EXT_MFC_NO_DOCK_MARKERS)

	virtual void InitTranslatedColors();

protected:
	CExtBitmapCache
		m_bmpMenuItemLunaBlue,
		m_bmpMenuItemLunaOliveGreen,
		m_bmpMenuItemLunaSilver,
		m_bmpMenuItemLunaRoyale,
		m_bmpMenuItemVista,
		m_bmpMenuItemOther;

}; // class CExtPaintManagerStudio2008

//////////////////////////////////////////////////////////////////////////
// CExtPaintManagerNativeXP
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtPaintManagerNativeXP : public CExtPaintManager
{
public:
	DECLARE_SERIAL( CExtPaintManagerNativeXP );

	// construction/destruction
	CExtPaintManagerNativeXP();
	virtual ~CExtPaintManagerNativeXP();

	virtual e_paint_manager_name_t OnQueryPaintManagerName()
	{
		ASSERT_VALID( this );
		return NativeXP;
	}
	
	virtual bool OnQueryUseThemeColors() const;

	virtual void InitTranslatedColors();

	virtual bool PaintDockerBkgnd(
		bool bClientMapping,
		CDC & dc,
		CWnd * pWnd,
		LPARAM lParam = NULL
		);
	virtual bool GetCb2DbTransparentMode(
		CObject * pObjHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintControlFrame(
		CDC & dc,
		CExtPaintManager::PAINTCONTROLFRAMEDATA & _pcfd
		);
	virtual void PaintComboFrame(
		CDC & dc,
		CExtPaintManager::PAINTCOMBOFRAMEDATA & _pcfd
		);
	virtual void PaintPushButton(
		CDC & dc,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);
	virtual void PaintPushButtonText(
		CDC & dc,
		CRect & rcCaption,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);
	virtual void PaintPushButtonIcon(
		CDC & dc,
		CRect & rcClient,
		CRect & rcCaption,
		CRect & rcFocus,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);
	virtual INT GetDropDownButtonWidth(
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		) const;
	virtual INT GetSpinButtonWidth(
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		) const;
	virtual CRect GetSpinButtonMargins(
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		) const;

	virtual void PaintToolbarExpandButton(
		CDC & dc,
		const RECT & rcButtonArea,
		bool bHorz, // if false - down
		bool bBarIsCompletelyVisible,
		bool bEnabled,
		bool bPushed,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		bool bTransparentBackground = false
		);
	virtual bool Toolbar_GetSizeOfCEB(
		SIZE & sizeReal,
		const SIZE & sizePreCalc,
		CDC & dc,
		BOOL bHorz,
		CExtBarContentExpandButton * pTBB,
		LPARAM lParam = 0
		);
	virtual void PaintMenuExpandButton(
		CDC & dc,
		const RECT & rectButton,
		bool bPushed,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual CRect GetMenuBorderMetrics(
		CWnd * pWnd,
		LPARAM lParam = 0
		) const;
	virtual void PaintMenuBorder(
		CDC & dc,
		const RECT & rectClient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool PaintMenuItem_UX(
		HWND hWnd,
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid
		);
	virtual void PaintMenuItem(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid
		);
	virtual void PaintMenuItemIcon(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid
		);
	virtual void PaintMenuTearOffButton(
		CDC & dc,
		const RECT & rectButton,
		bool bPushed,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool PaintSysCmdGlyph_UX(
		HWND hWnd,
		CDC & dc,
		UINT nHelperSysCmdID,
		const RECT & rcItem,
		bool bHover,
		bool bPushed,
		bool bEnabled
		);
	virtual bool PaintMenuItemIcon_UX(
		HWND hWnd,
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid
		);
	virtual void PaintMenuItemInPlaceWnd(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid
		);
	virtual bool PaintMenuSeparator_UX(
		HWND hWnd,
		CDC & dc,
		const RECT & rectItem,
		int nIconAreaWidth,
		bool bRarelyUsed,
		bool bIsForceNoLeftGradient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintMenuSeparator(
		CDC & dc,
		const RECT & rectItem,
		int nIconAreaWidth,
		bool bRarelyUsed,
		bool bIsForceNoLeftGradient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintSeparator(
		CDC & dc,
		const RECT & rectItem,
		bool bHorz,
		bool bTransparentBk,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintResizingGripper(
		CDC & dc,
		const RECT & rcGrip,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual COLORREF GetMenuFrameFillColor(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintControlBarClientArea(
		CDC & dc,
		const RECT & rcClient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintDockBarClientArea(
		CDC & dc,
		const RECT & rcClient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintControlBarBorders(
		CDC & dc,
		CExtPaintManager::PAINTCONTROLBARBORDERSDATA & _pcbbd
		);
	virtual void PaintGripper(
		CDC & dc,
		CExtPaintManager::PAINTGRIPPERDATA & _pgd
		);
	virtual void PaintDockingFrame(
		CDC & dc,
		CExtPaintManager::PAINTDOCKINGFRAMEDATA & _pdfd
		);
	virtual void FixedBar_AdjustClientRect(
		const CExtControlBar * pBar,
		CRect & rcPreCalc
		);
	virtual void PaintDockingCaptionButton(
		CDC & dc,
		CExtPaintManager::PAINTDOCKINGCAPTIONBUTTONDATA & _pdcbd
		);
	virtual bool Bar_LayoutNcAreaButton(
		RECT & rcButton,
		const RECT & rcCaption,
		CExtBarNcAreaButton * pLayoutBtn,
		CExtBarNcAreaButton * pPrevBtn,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual bool Bar_MiniDockFrameGetNcMetrics(
		INT & nResizingFrameDX,
		INT & nResizingFrameDY,
		INT & nCaptionDY,
		CExtMiniDockFrameWnd * pMiniFrameWnd,
		CExtControlBar * pBar,
		LPARAM lParam = 0
		) const;

#if (!defined __EXT_MFC_NO_TAB_CTRL)
	virtual bool QueryTabWndHoverChangingRedraw(
		const CExtTabWnd * pWndTab,
		LPARAM lParam = 0L
		);
	virtual void TabWnd_MeasureItemAreaMargins(
		CExtTabWnd * pTabWnd,
		LONG & nSpaceBefore,
		LONG & nSpaceAfter,
		LONG & nSpaceOver
		);	
	virtual void TabWnd_UpdateItemMeasure(
		CExtTabWnd * pTabWnd,
		CExtTabWnd::TAB_ITEM_INFO * pTii,
		CDC & dcMeasure,
		CSize & sizePreCalc
		);	
	virtual bool TabWnd_GetParentSizingMargin(
		INT & nMargin,
		DWORD dwOrientation,
		CExtTabWnd * pTabWnd
		) const;
	virtual void PaintTabNcAreaRect(
		CDC & dc,
		const RECT & rc,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintTabClientArea(
		CDC & dc,
		CRect & rcClient,
		CRect & rcTabItemsArea,
		CRect & rcTabNearBorderArea,
		DWORD dwOrientation,
		bool bGroupedMode,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintTabItem(
		CDC & dc,
		CRect & rcTabItemsArea,
		bool bTopLeft,
		bool bHorz,
		bool bSelected,
		bool bCenteredText,
		bool bGroupedMode,
		bool bInGroupActive,
		bool bInvertedVerticalMode,
		const CRect & rcEntireItem,
		CSize sizeTextMeasured,
		CFont * pFont,
		__EXT_MFC_SAFE_LPCTSTR sText,
		CExtCmdIcon * pIcon,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		COLORREF clrForceText = COLORREF(-1L),
		COLORREF clrForceTabBk = COLORREF(-1L),
		COLORREF clrForceTabBorderLT = COLORREF(-1L),
		COLORREF clrForceTabBorderRB = COLORREF(-1L),
		COLORREF clrForceTabSeparator = COLORREF(-1L)
		);
#endif // (!defined __EXT_MFC_NO_TAB_CTRL)

#ifndef __EXT_MFC_NO_STATUSBAR
	virtual bool StatusBar_EraseBackground(
		CDC & dc,
		const RECT & rcClient,
		const CExtStatusControlBar * pStatusBar,
		LPARAM lParam = 0
		) const;
	virtual bool StatusBar_ErasePaneBackground(
		CDC & dc,
		int nPaneIdx,
		const RECT & rcPane,
		const CExtStatusControlBar * pStatusBar,
		LPARAM lParam = 0
		) const;
	virtual bool StatusBar_PaintSeparator(
		CDC & dc,
		int nPaneIdxAfterSep,
		const RECT & rcPaneBefore,
		const RECT & rcPaneAfter,
		const CExtStatusControlBar * pStatusBar,
		LPARAM lParam = 0
		) const;
#endif // __EXT_MFC_NO_STATUSBAR

#if( !defined __EXT_MFC_NO_SPIN || !defined __EXT_MFC_NO_DURATIONWND )
	virtual CRect Spin_QueryNcAreaMargins(
		bool bSpinAlignRight,
		bool bSpinAlignLeft,
		bool bHasScrolBars
		) const;	
	virtual void PaintSpinButton(
		CDC & dc,
		const CRect & rcButton,
		bool bUp,		
		bool bHorz,
		bool bEnabled,
		bool bFlat,
		bool bDrawBorder,
		bool bPushed,
		bool bHover,
		bool bHotTrack,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
#endif // #if( !defined __EXT_MFC_NO_SPIN || !defined __EXT_MFC_NO_DURATIONWND )

#ifndef __EXT_MFC_NO_SLIDER
	virtual bool PaintSliderChannel(
		CDC & dc,
		const CRect & rcChannel,
		bool bHorz,
		bool bEnabled,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
	virtual bool PaintSliderThumb(
		CDC & dc,
		const CRect & rcThumb,
		bool bHorz,
		bool bLeft,
		bool bRight,
		bool bEnabled,
		bool bPushed,
		bool bFocused,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
#endif // __EXT_MFC_NO_SLIDER

#ifndef __EXT_MFC_NO_DURATIONWND
	virtual INT Duration_GetSpinButtonWidth(
		const CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual INT Duration_GetDropDownButtonWidth(
		const CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual CRect Duration_GetSpinButtonExtraSpace(
		const CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual CRect Duration_GetDropDownButtonExtraSpace(
		const CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual void Duration_PaintSpinButton(
		CDC & dc,
		const CRect & rcButton,
		bool bUp,		
		bool bEnabled,
		bool bPushed,
		bool bHovered,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
	virtual void Duration_PaintDropDownButton(
		CDC & dc,
		const CRect & rcButton,
		bool bEnabled,
		bool bPushed,
		bool bHovered,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
#endif // __EXT_MFC_NO_DURATIONWND

#if (!defined __EXT_MFC_NO_TASK_PANE )
	virtual void TaskPanePaintGroupCaption(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		bool bHover,
		bool bPressed,
		bool bHighlighted,
		bool bPaintExpandButton,
		bool bExpanded,
		CObject * pHelperSrc
		);
	virtual CRect TaskPaneQueryGroupCaptionTextMargins() const;
#endif // (!defined __EXT_MFC_NO_TASK_PANE )

#ifndef __EXT_MFC_NO_GRIDWND
	virtual bool Grid_PaintHeaderSortArrow(
		CDC & dc,
		const RECT & rcSortArrow,
		bool bHorz,
		bool bAscending,
		COLORREF * pColorValues,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool Grid_PaintHeaderBackground(
		CDC & dc,
		const RECT & rcArea,
		LONG nColNo,
		LONG nRowNo,
		INT nColType,
		INT nRowType,
		DWORD dwAreaFlags,
		DWORD dwHelperPaintFlags,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
#endif // #ifndef __EXT_MFC_NO_GRIDWND

#if (!defined __EXT_MFC_NO_REPORTGRIDWND)
	virtual bool ReportGrid_PaintHeaderRowBackground(
		CDC & dc,
		const RECT & rcArea,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool ReportGrid_PaintHeaderSortArrow(
		CDC & dc,
		const RECT & rcSortArrow,
		bool bAscending,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool ReportGrid_PaintGroupAreaBackground(
		CDC & dc,
		const RECT & rcArea,
		__EXT_MFC_SAFE_LPCTSTR strEmptyAreaCaption, // not NULL if area is empty
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual COLORREF ReportGrid_GetHeaderTextColor(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_REPORTGRIDWND)

#if (!defined __EXT_MFC_NO_RIBBON_BAR)
	virtual INT Ribbon_GetTabIntersectionHeight(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		) const;
	virtual void Ribbon_PaintTabItem(
		CDC & dc,
		CRect & rcTabItemsArea,
		bool bSelected,
		const CRect & rcEntireItem,
		CFont * pFont,
		__EXT_MFC_SAFE_LPCTSTR sText,
		CExtCmdIcon * pIcon,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		COLORREF clrForceText = COLORREF(-1L),
		COLORREF clrForceTabBk = COLORREF(-1L),
		COLORREF clrForceTabBorderLT = COLORREF(-1L),
		COLORREF clrForceTabBorderRB = COLORREF(-1L),
		COLORREF clrForceTabSeparator = COLORREF(-1L)
		);
	virtual void Ribbon_PaintPageBk(
		CDC & dc,
		const RECT & rcPageBk,
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
	virtual CRect Ribbon_GetPageOuterContentPadding(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GetGroupHeight(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual void RibbonQuickAccessBar_PaintBkAtTheBottom(
		CDC & dc,
		CRect rcQATB,
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		) const;
#endif // (!defined __EXT_MFC_NO_RIBBON_BAR)

	virtual void AdvTip_CalcRgn(
		HRGN hRgnPrecalc,
		const RECT & rcRectRgn,
		bool bDynamicShadowApplied,
		INT nSizeInnerShadowIncluded,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool AdvTip_PaintBackground(
		CDC & dc,
		const RECT & rcClient,
		bool bAdvTipWithShadow,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual CFont * AdvTip_GetFont(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual COLORREF AdvTip_GetTextColor(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	virtual CSize GetPushedOffset();
	virtual const CExtAnimationParameters *
		Animation_GetParameters(
			INT eAPT, // __EAPT_*** animation type
			CObject * pHelperSrc,
			const CExtAnimationClient * pAC,
			LPARAM lParam = 0L
			) const;

	virtual bool PaintProgress(
		CDC & dc,
		PAINTPROGRESSDATA & _ppd
		);

	// header control
	virtual void Header_PaintBackground(
		CDC & dc,
		CRect rc,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void Header_PaintItem(
		CDC & dc,
		CRect rcItemEntire,
		CRect rcItemData,
		CRect rcIcon,
		CRect rcText,
		CRect rcSortArrow,
		CRect rcButton,
		CRect rcButtonIcon,
		bool bSorted,
		bool bSortedAscending,
		INT nColNo,
		INT nColCount,
		const CExtCmdIcon & iconItem,
		const CExtCmdIcon & iconButton,
		bool bHover,
		bool bPressed,
		bool bButtonEvent,
		__EXT_MFC_SAFE_LPCTSTR strItemText,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	static bool stat_PaintHeaderPartUsingUxTheme(
		CDC & dc,
		CRect rc,
		CObject * pHelperSrc,
		LPARAM lParam,
		bool bDrawItemLikeBackground = false,
		bool bHover = false,
		bool bPressed = false
		);
}; // class CExtPaintManagerNativeXP

//////////////////////////////////////////////////////////////////////////
// class CExtPaintManagerOffice2003NoThemes
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtPaintManagerOffice2003NoThemes : public CExtPaintManagerOffice2003
{
public:    
	DECLARE_SERIAL( CExtPaintManagerOffice2003NoThemes );

	// construction/destruction
	CExtPaintManagerOffice2003NoThemes();
	virtual ~CExtPaintManagerOffice2003NoThemes();

	virtual e_paint_manager_name_t OnQueryPaintManagerName()
	{
		ASSERT_VALID( this );
		return Office2003NoThemes;
	}

	virtual bool OnQueryUseThemeColors() const;
	
	double GetIconAlphaAdjustPercent() const;
	
	COLORREF GetIconAlphaColor() const;

}; // class CExtPaintManagerOffice2003NoThemes

//////////////////////////////////////////////////////////////////////////
// CExtPaintManagerOffice2007_Impl
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtPaintManagerOffice2007_Impl : public CExtPaintManagerOffice2003
{
public:
	DECLARE_DYNAMIC( CExtPaintManagerOffice2007_Impl )
	// construction/destruction
	CExtPaintManagerOffice2007_Impl();
	virtual ~CExtPaintManagerOffice2007_Impl();

	COLORREF m_clrIconAlphaColor;
	double m_lfIconAlphaAdjustPercent;
	virtual COLORREF GetIconAlphaColor() const;
	virtual double GetIconAlphaAdjustPercent() const;

	COLORREF m_clrTransparentNcFrameActive, m_clrTransparentNcFrameInactive;
	CExtBitmapCache m_bmpNcFrameActive, m_bmpNcFrameInactive;
	CRect m_rcNcFrameBordersActive, m_rcNcFrameBordersInactive;
	INT m_nCaptionHeightActive, m_nCaptionHeightInactive;
	bool m_bUseNcFrameBmpForDockerBkgnd:1;
	COLORREF m_clrNcFrameTextActive, m_clrNcFrameTextInactive;
	CExtBitmapCache m_bmpNcButtonBkHover, m_bmpNcButtonBkPressed;
	CRect m_rcNcButtonBkPadding;
	CSize m_sizeNcButtonShapeInArr;
	CExtBitmapCache m_bmpArrNcButtonsHelp, m_bmpArrNcButtonsClose, m_bmpArrNcButtonsMaximize,
		m_bmpArrNcButtonsRestore, m_bmpArrNcButtonsMinimize;
	INT m_nNcBtnIdxDisabled, m_nNcBtnIdxNormalActive, m_nNcBtnIdxNormalInactive, m_nNcBtnIdxHover, m_nNcBtnIdxPressed;
	virtual bool NcFrame_IsSupported(
		const CWnd * pWnd,
		LPARAM lParam = 0L
		) const;
	virtual HRGN NcFrame_GenerateSkinFrameRGN(
		const RECT & rcWnd,
		const CWnd * pWnd,
		LPARAM lParam = 0L
		) const;
	virtual INT NcFrame_GetCaptionHeight(
		bool bActive,
		const CWnd * pWnd,
		LPARAM lParam = 0L
		) const;
	virtual void NcFrame_GetMetrics(
		RECT & rcNcBorders,
		RECT & rcThemePadding,
		const CWnd * pWnd,
		LPARAM lParam = 0L
		) const;
	virtual CRect NcFrame_GetHtRect(
		UINT nHT,
		bool bScreenMapping,
		bool bLayoutBordersH,
		bool bLayoutBordersV,
		const CExtCmdIcon * pIcon,
		const CWnd * pWnd,
		LPMINMAXINFO pMinMaxInfo = NULL,
		LPARAM lParam = 0L
		) const;
	virtual void NcFrame_Paint(
		CDC & dc,
		const CExtCmdIcon * pIcon,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		UINT nDrawTextAlignFlags,
		const RECT & rcFrame,
		const RECT & rcClient,
		const RECT & rcIcon,
		const RECT & rcText,
		const RECT & rcHelp,
		const RECT & rcMinimize,
		const RECT & rcMaximizeRestore,
		const RECT & rcClose,
		bool bFrameActive,
		bool bFrameEnabled,
		bool bFrameMaximized,
		e_nc_button_state_t eStateButtonHelp,
		e_nc_button_state_t eStateButtonMinimize,
		e_nc_button_state_t eStateButtonMaximizeRestore,
		e_nc_button_state_t eStateButtonClose,
		const CWnd * pWnd,
		LPARAM lParam = 0L
		) const;
	virtual void NcFrame_GetRects(
		CExtCmdIcon * pIcon,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		UINT nDrawTextAlignFlags,
		RECT & rcIcon,
		RECT & rcText,
		RECT & rcHelp,
		RECT & rcMinimize,
		RECT & rcMaximizeRestore,
		RECT & rcClose,
		const CWnd * pWnd,
		LPMINMAXINFO pMinMaxInfo = NULL,
		LPARAM lParam = 0L
		) const;
protected:
	COLORREF m_clrFillHint;
	COLORREF m_clrAccentHint;
	COLORREF m_clrDockingFrameDark;
	COLORREF m_clrFloatingToolbarGripperSolid;
	COLORREF m_clrDockingFrameCaptionTextActive;
	COLORREF m_clrDockingFrameCaptionTextInactive;
	COLORREF m_clrDockingFrameCaptionTextFloatingFixed;
	COLORREF m_clrDockingCaptionShapeFixedDisabled;
	COLORREF m_clrDockingCaptionShapeResizableDisabled;
	COLORREF m_clrDockingCaptionShapeFixedPushed;
	COLORREF m_clrDockingCaptionShapeResizablePushed;
	COLORREF m_clrDockingCaptionShapeFixedHover;
	COLORREF m_clrDockingCaptionShapeResizableHover;
	COLORREF m_clrDockingCaptionShapeFixedNormal;
	COLORREF m_clrDockingCaptionShapeResizableNormal;
public:
	virtual bool OnQueryThemeColors(
		COLORREF *pclrFillHint,
		COLORREF *pclrAccentHint = NULL
		);
	virtual bool OnQueryUseThemeColors() const;
	virtual void InitTranslatedColors();
	virtual bool PaintDockerBkgnd(
		bool bClientMapping,
		CDC & dc,
		const CRect &rcDst,
		const CRect &rcWnd,
		LPARAM lParam = NULL
		);
	COLORREF m_clrDCA1, m_clrDCA2, m_clrDCA3; // style R1
	CExtBitmapCache m_bmpDCA; // style R1 mask, style R2 top/left
	bool bDocumentClientAreaBkgndR2; // style R1 or R2
	virtual bool PaintDocumentClientAreaBkgnd(
		CDC & dc,
		CWnd * pWnd,
		LPARAM lParam = NULL
		);
	virtual void PaintSeparator(
		CDC & dc,
		const RECT & rectItem,
		bool bHorz,
		bool bTransparentBk,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintGripper(
		CDC & dc,
		CExtPaintManager::PAINTGRIPPERDATA & _pgd
		);
	virtual void PaintDockingFrame(
		CDC & dc,
		CExtPaintManager::PAINTDOCKINGFRAMEDATA & _pdfd
		);
	virtual void PaintDockingCaptionButton(
		CDC & dc,
		CExtPaintManager::PAINTDOCKINGCAPTIONBUTTONDATA & _pdcbd
		);
#if (!defined __EXT_MFC_NO_STATUSBAR)
	CRect m_rcStatusBkPadding;
	CExtBitmapCache m_bmpStatusBkLight, m_bmpStatusBkDark;
	CRect m_rcStatusSeparatorPadding;
	CExtBitmapCache m_bmpStatusSeparator;
	COLORREF m_clrStatusPaneTextColorDisabled, m_clrStatusPaneTextColorNormal;
	virtual bool StatusBar_EraseBackground(
		CDC & dc,
		const RECT & rcClient,
		const CExtStatusControlBar * pStatusBar,
		LPARAM lParam = 0
		) const;
	virtual bool StatusBar_PaintSeparator(
		CDC & dc,
		int nPaneIdxAfterSep,
		const RECT & rcPaneBefore,
		const RECT & rcPaneAfter,
		const CExtStatusControlBar * pStatusBar,
		LPARAM lParam = 0
		) const;
	virtual bool StatusBar_PaintPane(
		CDC & dc,
		int nPaneIdx,
		const RECT & rcPane,
		DWORD dwPaneStyle,
		HICON hIcon,
		__EXT_MFC_SAFE_LPCTSTR sPaneText,
		UINT nDrawTextFlags,
		COLORREF clrText,
		const CExtStatusControlBar * pStatusBar,
		LPARAM lParam = 0
		) const;
	virtual bool StatusBar_QuerySkinSupport(
		const CExtStatusControlBar * pStatusBar,
		LPARAM lParam = 0
		) const;
#endif // (!defined __EXT_MFC_NO_STATUSBAR)
#if (!defined __EXT_MFC_NO_TAB_CTRL)
	enum e_TabShapeOrientationIndex_t
	{
		__ETSOI_TOP		= 0,
		__ETSOI_BOTTOM	= 1,
		__ETSOI_LEFT	= 2,
		__ETSOI_RIGHT	= 3,
	};
	CExtBitmapCache m_arrBmpTabShapeNormal[4], m_arrBmpTabShapeSelArea[4], m_arrBmpTabArea[4], m_arrBmpTabSeparator[4];
	CSize m_arrSizeTabShape[4], m_arrSizeTabSeparator[4];
	CRect m_arrRectTabShapePadding[4], m_arrRectTabAreaPadding[4], m_arrRectTabSeparatorPadding[4];
	INT m_arrTabAreaMargins[4];
	INT m_nIdxTabShapeDisabled, m_nIdxTabShapeNormal,
		m_nIdxTabShapeHover, m_nIdxTabShapePressed,
		m_nIdxTabShapeSelected, m_nIdxTabShapeSelectedHover;
	COLORREF m_clrTabTextNormal, m_clrTabTextSelected;
	virtual bool QueryTabWndHoverChangingRedraw(
		const CExtTabWnd * pWndTab,
		LPARAM lParam = 0L
		);
	virtual void PaintTabbedTabClientArea(
		CDC & dc,
		CRect & rcClient,
		CRect & rcTabItemsArea,
		CRect & rcTabNearBorderArea,
		DWORD dwOrientation,
		bool bGroupedMode,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintTabClientArea(
		CDC & dc,
		CRect & rcClient,
		CRect & rcTabItemsArea,
		CRect & rcTabNearBorderArea,
		DWORD dwOrientation,
		bool bGroupedMode,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void PaintTabItem(
		CDC & dc,
		CRect & rcTabItemsArea,
		bool bTopLeft,
		bool bHorz,
		bool bSelected,
		bool bCenteredText,
		bool bGroupedMode,
		bool bInGroupActive,
		bool bInvertedVerticalMode,
		const CRect & rcEntireItem,
		CSize sizeTextMeasured,
		CFont * pFont,
		__EXT_MFC_SAFE_LPCTSTR sText,
		CExtCmdIcon * pIcon,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		COLORREF clrForceText = COLORREF(-1L),
		COLORREF clrForceTabBk = COLORREF(-1L),
		COLORREF clrForceTabBorderLT = COLORREF(-1L),
		COLORREF clrForceTabBorderRB = COLORREF(-1L),
		COLORREF clrForceTabSeparator = COLORREF(-1L)
		);
	virtual void PaintTabButton(
		CDC & dc,
		CRect & rcButton,
		LONG nHitTest,
		bool bTopLeft,
		bool bHorz,
		bool bEnabled,
		bool bHover,
		bool bPushed,
		bool bGroupedMode,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		bool bFlat = false
		);
	virtual void PaintTabNcAreaRect(
		CDC & dc,
		const RECT & rc,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void TabWnd_MeasureItemAreaMargins(
		CExtTabWnd * pTabWnd,
		LONG & nSpaceBefore,
		LONG & nSpaceAfter,
		LONG & nSpaceOver
		);	
	virtual void TabWnd_UpdateItemMeasure(
		CExtTabWnd * pTabWnd,
		CExtTabWnd::TAB_ITEM_INFO * pTii,
		CDC & dcMeasure,
		CSize & sizePreCalc
		);	
	virtual void TabWnd_AdjustItemCloseButtonRect(
		CRect & rcCloseButton,
		CExtTabWnd * pTabWnd
		);	
	virtual void GetThemeAccentTabColors(
		COLORREF * pClrSetectedTabItemText,
		COLORREF * pClrSetectedTabItemFace = NULL,
		COLORREF * pClrSetectedTabItemBorderLight = NULL,
		COLORREF * pClrSetectedTabItemBorderDark = NULL,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_TAB_CTRL)
	virtual int GetThemeDockingType() const;
#if (!defined __EXT_MFC_NO_TAB_CONTROLBARS)
	virtual int GetAutoHideTabsType() const;
#endif // (!defined __EXT_MFC_NO_TAB_CONTROLBARS)

	CExtBitmapCache m_bmpArrStatesCheckBox, m_bmpArrStatesRadioButton;
	virtual CSize GetCheckButtonBoxSize(
		CDC & dc,
		CExtPaintManager::PAINTCHECKRADIOBUTTONDATA & _pcbd
		) const;
	virtual CSize GetRadioButtonBoxSize(
		CDC & dc,
		CExtPaintManager::PAINTCHECKRADIOBUTTONDATA & _pcbd
		) const;
	virtual void PaintCheckButtonBox(
		CDC & dc,
		CExtPaintManager::PAINTCHECKRADIOBUTTONDATA & _pcbd
		);
	virtual void PaintRadioButtonBox(
		CDC & dc,
		CExtPaintManager::PAINTCHECKRADIOBUTTONDATA & _pcbd
		);
	COLORREF m_clrMenuItemLeftAreaMarginL, m_clrMenuItemLeftAreaMarginR;
	CExtBitmapCache
		m_bmpMenuItemLargeLeft,
		m_bmpMenuItemLargeRight,
		m_bmpMenuItemSmallLeft,
		m_bmpMenuItemSmallRight,
		m_bmpMenuArrow,
		m_bmpMenuCheckAreaChecked,
		m_bmpMenuCheckAreaUnchecked;
	CSize m_sizeMenuCheckAreaChecked, m_sizeMenuCheckAreaUnchecked;
	INT m_nMenuGlyphItemHeightSmall, m_nMenuGlyphItemHeightLarge;
	CRect	m_rcMenuItemPaddingLargeLeft,
			m_rcMenuItemPaddingLargeRight,
			m_rcMenuItemPaddingSmallLeft,
			m_rcMenuItemPaddingSmallRight,
			m_arrRectMenuCheckAreaCheckedPadding[2],
			m_arrRectMenuCheckAreaUncheckedPadding[2];
	virtual void PaintMenuItemLeftAreaMarginXP(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid,
		const RECT & rcFillLeftPart,
		const RECT & rcFillRightPart
		);
	virtual bool PaintMenuItemBackgroundXP(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid,
		const RECT & rcSelectionArea
		);
	virtual bool PaintMenuItemCheckMarkAreaXP(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid,
		const RECT & rcCheckMarkArea,
		e_CheckMarkAreaTypeXP eCMATXP
		);
	virtual void PaintMenuScrollButton(
		CDC & dc,
		bool bHover,
		bool bPushed,
		bool bTopButton,
		const RECT & rcScrollButton,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	virtual void PaintResizingGripper(
		CDC & dc,
		const RECT & rcGrip,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

#if (!defined __EXT_MFC_NO_PAGE_NAVIGATOR )
COLORREF m_arrClrPnCaptNormal[4], m_arrClrPnCaptActive[4],
		m_arrClrPnCaptHover[4], m_arrClrPnCaptPressed[4],
		m_arrClrPnSplitter[2], m_clrPnSplitterDots,
		m_clrPnCaptText, m_arrClrPnItemText[2],
		m_clrPnConfigButton;
	virtual INT PageNavigator_GetSplitterHeight() const;
	virtual INT PageNavigator_GetItemCaptionHeight() const;
	virtual INT PageNavigator_GetItemPaneCaptionHeight() const;
	virtual void PaintPageNavigatorItem(
		CDC & dc,
		const CRect & rcItem,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		CExtCmdIcon * pIcon,
		bool bExpanded,
		bool bPushed,
		bool bHover
		);	
	virtual void PaintPageNavigatorItemCaption(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption
		);
	virtual void PaintPageNavigatorCaptionText(
		CDC & dc,
		const CRect & rcItem,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		bool bPushed,
		bool bHover,
		bool bAllowInvertTextColor = true
		);	
	virtual void PaintPageNavigatorItemPaneCaptionText(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption
		);
	virtual void PaintPageNavigatorItemPaneCaption(
		CDC & dc,
		const CRect & rcCaption,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		bool bHover,
		bool bPressed,
		bool bExpandable,
		bool bExpanded,
		bool bDrawTopLine = true
		);
	virtual void PaintPageNavigatorConfigButton(
		CDC & dc,
		const CRect & rcItem,
		bool bPushed,
		bool bHover
		);	
	virtual void PaintPageNavigatorSplitter(
		CDC & dc,
		const CRect & rcSplitter,
		bool bDrawDots = true
		);
	virtual void PaintPageNavigatorSplitterDots(
		CDC & dc,
		const CRect & rcSplitter,
		INT nOffsetV = 0
		);
#endif // (!defined __EXT_MFC_NO_PAGE_NAVIGATOR )

	CSize m_sizeComboBoxDropDown;
	CRect m_rcPaddingComboBoxDropDown;
	CExtBitmapCache m_bmpArrComboBoxDropDown;
#if (!defined __EXT_MFC_NO_RIBBON_BAR )
	COLORREF m_clrRibbonComboBackGround;
#endif // (!defined __EXT_MFC_NO_RIBBON_BAR)
	COLORREF m_arrClrComboBoxBorder[4]; // normal=0, hover=1, pressed=2, disabled=3
	virtual void PaintComboFrame(
		CDC & dc,
		CExtPaintManager::PAINTCOMBOFRAMEDATA & _pcfd
		);
	virtual void PaintControlFrame(
		CDC & dc,
		CExtPaintManager::PAINTCONTROLFRAMEDATA & _pcfd
		);
	virtual void PaintToolbarTextField(
		CDC & dc,
		PAINTTOOLBARTEXTFIELDDATA & _ptbtfd
		);

	SCROLLBARSKINDATA
		m_SbSkinDataL_Zoom,
		m_SbSkinDataT_Zoom,
		m_SbSkinDataR_Zoom,
		m_SbSkinDataB_Zoom,
		m_SbSkinDataH_Light,
		m_SbSkinDataV_Light,
		m_SbSkinDataH_Dark,
		m_SbSkinDataV_Dark;
	virtual SCROLLBARSKINDATA * ScrollBar_GetSkinData(
		bool bHorzBar,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		bool bLightAccent = true
		);
	virtual bool ScrollBar_GetMetrics(
		INT * p_nHorzBarHeight = NULL,
		INT * p_nVertBarWidth = NULL,
		INT * p_nHorzButtonWidth = NULL,
		INT * p_nVertButtonHeight = NULL,
		INT * p_nHorzThumbMinWidth = NULL,
		INT * p_nVertThumbMinHeight = NULL,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		) const;

	COLORREF m_clrGridHeaderBkTop, m_clrGridHeaderBkBottom, m_clrGridHeaderBorder,
		m_clrGridHeaderSeparator, m_clrGridHeaderSortArrow;
#ifndef __EXT_MFC_NO_GRIDWND
	virtual bool Grid_PaintButton(
		CDC & dc,
		const RECT & rcButton,
		INT nButtonType,
		bool bPressed,
		bool bHovered,
		bool bFocused,
		bool bEnabled,
		COLORREF clrFace,
		COLORREF clrLight,
		COLORREF clrShadow,
		COLORREF clrWindow,
		COLORREF clrText,
		DWORD dwHelperPaintFlags,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool Grid_PaintHeaderSortArrow(
		CDC & dc,
		const RECT & rcSortArrow,
		bool bHorz,
		bool bAscending,
		COLORREF * pColorValues,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool Grid_PaintHeaderBackground(
		CDC & dc,
		const RECT & rcArea,
		LONG nColNo,
		LONG nRowNo,
		INT nColType,
		INT nRowType,
		DWORD dwAreaFlags,
		DWORD dwHelperPaintFlags,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
#endif // #ifndef __EXT_MFC_NO_GRIDWND

	COLORREF m_clrRgHeaderBkTop, m_clrRgHeaderBkBottom, m_clrRgHeaderBorder,
		m_clrRgHeaderSeparator, m_clrRgHeaderSortArrow, m_clrRgHeaderText;
#if (!defined __EXT_MFC_NO_REPORTGRIDWND)
	COLORREF m_clrRgGroupAreaBk, m_clrRgGroupAreaText;
	virtual bool ReportGrid_PaintHeaderRowBackground(
		CDC & dc,
		const RECT & rcArea,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool ReportGrid_PaintHeaderSortArrow(
		CDC & dc,
		const RECT & rcSortArrow,
		bool bAscending,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool ReportGrid_PaintGroupAreaBackground(
		CDC & dc,
		const RECT & rcArea,
		__EXT_MFC_SAFE_LPCTSTR strEmptyAreaCaption, // not NULL if area is empty
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual COLORREF ReportGrid_GetHeaderTextColor(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_REPORTGRIDWND)

	enum e_push_button_glyph_type_t
	{
		__EPBGT_NORMAL        = 0,
		__EPBGT_HOVER         = 1,
		__EPBGT_PRESSED       = 2,
		__EPBGT_DEFAULT       = 3,
		__EPBGT_DISABLED      = 4,
		__EPBGT_HH            = 5,
		__EPBGT_GLYPH_COUNT   = 6,
	};
//	INT m_nTbbLightWeightSimpleGlyphHeightH, m_nTbbLightWeightSimpleGlyphHeightV,
//		m_nTbbLightWeightSDDLeftGlyphHeightH, m_nTbbLightWeightSDDLeftGlyphHeightV,
//		m_nTbbLightWeightSDDRightGlyphHeightH, m_nTbbLightWeightSDDRightGlyphHeightV;
//	CRect m_rcTbbLightWeightSimplePaddingH, m_rcTbbLightWeightSimplePaddingV,
//		m_rcTbbLightWeightSDDLeftPaddingH, m_rcTbbLightWeightSDDLeftPaddingV,
//		m_rcTbbLightWeightSDDRightPaddingH, m_rcTbbLightWeightSDDRightPaddingV;
//	CExtBitmapCache
//		m_arrBmpTbbLightWeightSimpleH, m_arrBmpTbbLightWeightSimpleV,
//		m_arrBmpTbbLightWeightSDDLeftH, m_arrBmpTbbLightWeightSDDLeftV,
//		m_arrBmpTbbLightWeightSDDRightH, m_arrBmpTbbLightWeightSDDRightV;

	INT m_nPushBtnSimpleGlyphHeightH, m_nPushBtnSimpleGlyphHeightV,
		m_nPushBtnSDDLeftGlyphHeightH, m_nPushBtnSDDLeftGlyphHeightV,
		m_nPushBtnSDDRightGlyphHeightH, m_nPushBtnSDDRightGlyphHeightV;
	CRect m_rcPushBtnSimplePaddingH, m_rcPushBtnSimplePaddingV,
		m_rcPushBtnSDDLeftPaddingH, m_rcPushBtnSDDLeftPaddingV,
		m_rcPushBtnSDDRightPaddingH, m_rcPushBtnSDDRightPaddingV;
	CExtBitmapCache
		m_arrBmpPushBtnSimpleH, m_arrBmpPushBtnSimpleV,
		m_arrBmpPushBtnSDDLeftH, m_arrBmpPushBtnSDDLeftV,
		m_arrBmpPushBtnSDDRightH, m_arrBmpPushBtnSDDRightV;
	CExtBitmapCache 
		m_arrBmpSpinArrowDown, m_arrBmpSpinArrowUp,
		m_arrBmpSpinDown, m_arrBmpSpinUp;

	virtual void PaintPushButton(
		CDC & dc,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);
	virtual bool IsMenuMustCombineExcludeArea(
		const CObject * pMenuTrackerObject = NULL
		) const;

	CSize m_sizeRibbonComboBoxDropDown;
	CExtBitmapCache m_bmpArrRibbonComboBoxDropDown;
	CRect m_rcRibbonPaddingComboBoxDropDown;

	CExtBitmapCache m_bmpRibbonDDA;

#if (!defined __EXT_MFC_NO_RIBBON_BAR)

	CExtBitmapCache m_bmpRibbonPageBk;
	CExtBitmapCache m_bmpRibbonGroupBkExpanded[2]; // 0 - normal, 1 - hover
	CExtBitmapCache m_bmpRibbonGroupBkCollapsed[4]; // 0 - normal, 1 - hover, 2 - pressed, 3 - selected
		//CExtBitmapCache m_bmpRibbonIconBkCollapsed[3]; // 0 - normal, 1 - hover, 2 - pressed
	CExtBitmapCache m_bmpRibbonIconBkCF;
	INT m_nRibbonGroupIconBkVertOffset, m_nRibbonCaptionPartHeight,
		m_nRibbonGroupCaptionAreaHeightExpanded,
		m_nRibbonGroupCaptionAreaHeightCollapsed;
	CRect m_rcRibbonPageBkPadding,
		m_rcRibbonGroupPaddingBkExpanded,
		m_rcRibbonGroupPaddingBkCollapsed;
	bool m_bRibbonGroupCaptionAtTop:1, m_bRibbonGroupCaptionAreaHasPadding:1;
	INT m_nContractedMarginHeight;
	virtual INT Ribbon_GetContractedMarginHeight(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
	COLORREF m_clrContractedMargin1,m_clrContractedMargin2;
	virtual void Ribbon_PaintContractedMargin(
		CDC & dc,
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GetGroupHeight(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GetToolGroupExtraOffset(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GetToolGroupExtraLineDistance(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GroupCaptionGetHeight(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		) const;
	virtual bool Ribbon_GroupCaptionIsAtTop(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		) const;
	virtual CExtCmdIcon * Ribbon_GetGroupCollapsedIcon(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_PaintGroupBk(
		CDC & dc,
		const RECT & rcGroupBk,
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual bool Ribbon_PaintQuickAccessGroupButton(
		CDC & dc,
		const RECT & rcGroupBk,
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	CRect m_rcRibbonPageOuterContentPadding;
	virtual CRect Ribbon_GetPageOuterContentPadding(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_PaintPageBk(
		CDC & dc,
		const RECT & rcPageBk,
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
	CExtBitmapCache m_bmpRibbonSeparatorH, m_bmpRibbonSeparatorV;
	CRect m_rcRibbonSeparatorPaddingH, m_rcRibbonSeparatorPaddingV;
	INT m_nRibbonSeparatorDrawModeH, m_nRibbonSeparatorDrawModeV;
	virtual void Ribbon_PaintSeparator(
		CDC & dc,
		const CExtBarButton * pTBB,
		LPARAM lParam = 0L
		);
	COLORREF
		m_clrRibbonGroupCaptionTextExpanded,
		m_clrRibbonGroupCaptionTextShadowExpanded,
		m_clrRibbonGroupCaptionTextCollapsed,
		m_clrRibbonButtonNormal,
		m_clrRibbonButtonDisabled;
	CSize m_sizeRibbonGroupCaptionTextOffset;
	INT m_nRibbonGroupCaptionTextDF, m_nRibbonGroupCaptionTextShadowDF;

	virtual CRect Ribbon_CalcLargeDropDownRect(
		const CExtBarButton * pTBB,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_PaintPushButton(
		CDC & dc,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);

	virtual void Ribbon_PaintText(
		CDC & dc,
		__EXT_MFC_SAFE_LPCTSTR strText,
		const RECT & rcText,
		UINT nDrawTextFlags,
		bool bDrawDropDownArrow,
		CExtBitmap * pBmpAlternativeDropDownArrow,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	virtual CRect Ribbon_GetPopupGroupBorderMetrics(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
	virtual bool Ribbon_IsPopupGroupWithCaption(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;

	INT m_nRibbonQuickAccessBarButtonsAlignment;
	virtual INT RibbonQuickAccessBar_GetButtonsAlignment(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		) const;
	CExtBitmapCache m_bmpRibbonQuickAccessBarBkAtTheBottom;
	CRect m_rcPaddingRibbonQuickAccessBarBkAtTheBottom;
	virtual void RibbonQuickAccessBar_PaintBkAtTheBottom(
		CDC & dc,
		CRect rcQATB,
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		) const;
	virtual void RibbonQuickAccessBar_AdjustButtonLocation(
		CExtBarButton * pTBB,
		CRect & rcTBB,
		LPARAM lParam = 0L
		);
	INT m_nRibbonTabIntersectionHeight;
	virtual INT Ribbon_GetTabIntersectionHeight(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		) const;
	virtual void Ribbon_PaintTabItem(
		CDC & dc,
		CRect & rcTabItemsArea,
		bool bSelected,
		const CRect & rcEntireItem,
		CFont * pFont,
		__EXT_MFC_SAFE_LPCTSTR sText,
		CExtCmdIcon * pIcon,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		COLORREF clrForceText = COLORREF(-1L),
		COLORREF clrForceTabBk = COLORREF(-1L),
		COLORREF clrForceTabBorderLT = COLORREF(-1L),
		COLORREF clrForceTabBorderRB = COLORREF(-1L),
		COLORREF clrForceTabSeparator = COLORREF(-1L)
		);

	CRect m_rcRibbonNcCornerLeftCP, m_rcRibbonNcCornerRightCP;
	CExtBitmapCache m_bmpRibbonNcCornerDwmLeft, m_bmpRibbonNcCornerDwmRight;
	CExtBitmapCache m_bmpRibbonNcCornerActiveLeft,  m_bmpRibbonNcCornerInactiveLeft;
	CExtBitmapCache m_bmpRibbonNcCornerActiveRight, m_bmpRibbonNcCornerInactiveRight;
	CExtBitmapCache m_bmpRibbonNcCornerHT, m_bmpArrRibbonFileButton;
	CRgn m_rgnRibbonNcCornerExclude, m_rgnRibbonNcCornerResizing;
	INT m_nRibbonFileButtonHeight;

	virtual HRGN Ribbon_GetRgnCornerExclude(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual HRGN Ribbon_GetRgnCornerResizing(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_EmbeddedCaptionAdjustTextRect(
		CRect & rcAdjust,
		const CExtRibbonBar * pRibbonBar,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_NcOverPaint(
		CDC & dc,
		bool bFrameActive,
		INT nWidthFromLeft,
		bool bDwmMode,
		LPCRECT pRectDwmText,
		__EXT_MFC_SAFE_LPCTSTR strDwmCaptionTitle,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	COLORREF m_clrRibbon_EmbeddedCaptionTextLeft, m_clrRibbon_EmbeddedCaptionTextRight;
	virtual void Ribbon_EmbeddedCaptionPaintText(
		CDC & dc,
		__EXT_MFC_SAFE_LPCTSTR strCaption,
		CRect rcDrawText,
		__EXT_MFC_SAFE_LPCTSTR strCaptionDelimiter,
		const CExtRibbonBar * pRibbonBar,
		LPARAM lParam = 0L
		);
	UINT m_nRibbonEmbeddedCaptionTextAlignmentFlags;
	virtual UINT Ribbon_EmbeddedCaptionGetTextAlignmentFlags(
		const CExtRibbonBar * pRibbonBar,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_FileMenuButtonQuery(
		LPVOID pData,
		CExtCmdIcon * pIcon = NULL,
		__EXT_MFC_SAFE_LPCTSTR sText = NULL,
		LPARAM lParam = 0L
		);
	bool m_bRibbonFileButtonItegrationSupported:1;
	virtual bool Ribbon_FileButtonIsItegrationSupported() const;
	INT m_nRibbonFileButtonMenuIntersectionHeight;
	virtual INT Ribbon_FileButtonGetMenuIntersectionHeight() const;
	virtual bool Ribbon_FileButtonCalcLayout(
		CDC & dc,
		CExtNcFrameImpl * pExtNcFrameImpl,
		CExtRibbonButtonFile * pFileTBB,
		LPARAM lParam = 0L
		);
	virtual bool Ribbon_FileButtonPaint(
		CDC & dc,
		CExtRibbonButtonFile * pFileTBB,
		LPARAM lParam = 0L
		);
	CExtBitmapCache m_bmpArrRibbonQACEB;
	CRect m_rcRibbonPaddingQACEB;
	INT m_nRibbonHeightOfQACEB,
		m_nIdxRibbonQACEB_Normal,
		m_nIdxRibbonQACEB_Hover,
		m_nIdxRibbonQACEB_Pressed,
		m_nIdxRibbonQACEB_Selected;
	virtual bool Ribbon_QuickAccessContentExpandButtonCalcLayout(
		CDC & dc,
		CExtRibbonButtonQuickAccessContentExpand * pQACEB,
		LPARAM lParam = 0L
		);
	virtual bool Ribbon_QuickAccessContentExpandButtonPaint(
		CDC & dc,
		CExtRibbonButtonQuickAccessContentExpand * pQACEB,
		LPARAM lParam = 0L
		);
	CSize m_sizeAboveTheRibbonShiftQACEB;
	virtual CSize Ribbon_QuickAccessContentExpandGetShift(
		CDC & dc,
		CExtRibbonButtonQuickAccessContentExpand * pQACEB,
		LPARAM lParam = 0L
		);

	CExtBitmapCache m_arrBmpRibbonDLB;
	INT m_nRibbonHeightOfOneDLB,
		m_nDlbIdxDisabled, m_nDlbIdxNormal,
		m_nDlbIdxHover, m_nDlbIdxPressed;
	CRect rcRibbonContentPaddingDLB;
	virtual bool Ribbon_DLB_IsVisible(
		CExtRibbonButtonDialogLauncher * pTBB,
		LPARAM lParam = 0L
		) const;
	virtual CSize Ribbon_DLB_CalcSize(
		CDC & dc,
		CExtRibbonButtonDialogLauncher * pTBB,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_DLB_Paint(
		CDC & dc,
		CExtRibbonButtonDialogLauncher * pTBB,
		LPARAM lParam = 0L
		);

	virtual CFont * RibbonGallery_GetItemFont(
		CExtRibbonGalleryWnd * pGalleryWnd,
		LPVOID pGalleryItemData,
		LPARAM lParam = 0L
		);
	virtual CSize RibbonGallery_MeasureItem(
		CDC & dc,
		CExtRibbonGalleryWnd * pGalleryWnd,
		LPVOID pGalleryItemData,
		LPARAM lParam = 0L
		);
	virtual bool RibbonGallery_DrawItem(
		CDC & dc,
		CExtRibbonGalleryWnd * pGalleryWnd,
		const RECT & rcItem,
		LPVOID pGalleryItemData,
		LPARAM lParam = 0L
		);
	COLORREF m_clrRibbonGalleryInplaceBorderNormal;
	COLORREF m_clrRibbonGalleryInplaceBorderHover;
	COLORREF m_clrRibbonGalleryInplaceBkgndNormal;
	COLORREF m_clrRibbonGalleryInplaceBkgndHover;
	virtual bool RibbonGallery_EraseEntireBk(
		CDC & dc,
		const CRect & rcClient,
		const CRect & rcActiveChildArea,
		CRgn & rgnActiveChildArea,
		const CRect & rcActiveChildArea2,
		CRgn & rgnActiveChildArea2,
		CExtRibbonGalleryWnd * pGalleryWnd,
		LPARAM lParam = 0L
		);
	COLORREF m_rcRibbonGalleryScrollFill;
	CRect m_rcRibbonGalleryScrollButtonPadding;
	INT m_nHeightRibbonGalleryScrollButton, m_nIndexRibbonGalleryScrollButtonDisabled,
		m_nIndexRibbonGalleryScrollButtonNormal, m_nIndexRibbonGalleryScrollButtonHover,
		m_nIndexRibbonGalleryScrollButtonPressed;
	CExtBitmapCache
		m_bmpArrRibbonGalleryScrollButtonUp,
		m_bmpArrRibbonGalleryScrollButtonDown,
		m_bmpArrRibbonGalleryScrollButtonMenu;
	virtual void RibbonGallery_PaintScrollArea(
		CDC & dc,
		CExtRibbonGalleryInplaceScrollBar * pSB,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_RIBBON_BAR)

	// tool buttons 2007
	enum e_button_tool_style_arr_t
	{
		__EBTSA_SOLID	= 0,
		__EBTSA_LEFT	= 1,
		__EBTSA_MIDDLE	= 2,
		__EBTSA_RIGHT	= 3,
	};
	enum e_button_small_style_arr_t
	{
		__EBSSA_LEFT	= 0,
		__EBSSA_RIGHT	= 1,
	};
	enum e_button_large_style_arr_t
	{
		__EBLSA_MAIN	= 0,
		__EBLSA_DD		= 1,
	};
	enum e_tool_button_separator_t
	{
		__ETBS_HOVER	= 0,
		__ETBS_PRESSED	= 1,
	};
	enum e_large_button_separator_t
	{
		__ELBS_HOVER	= 0,
		__ELBS_PRESSED	= 1,
	};
	CRect m_rcPaddingOfButtonTS, m_rcPaddingOfButtonSS,
		m_rcPaddingOfButtonLSM, // m_rcPaddingOfButtonLSB,
		m_rcPaddingOfButtonLSXM, m_rcPaddingOfButtonLSXB,
		m_rcPaddingOfToolButtonSeparator, m_rcPaddingOfLargeButtonSeparator;
	INT m_nHeightOfButtonTS, m_nHeightOfButtonSS,
		m_nHeightOfButtonLSM, //, m_nHeightOfButtonLSB,
		m_nHeightOfButtonLSXM, m_nHeightOfButtonLSXB;
	CExtBitmapCache m_bmpArrButtonTS[4],
		m_bmpArrButtonSS_simple, m_bmpArrButtonSS_DD[2],
		m_bmpArrButtonLSM, // m_bmpArrButtonLSB,
		m_bmpArrButtonLSXM, m_bmpArrButtonLSXB,
		m_bmpToolBtnSeparator[2], m_bmpLargeBtnSeparator[2];
	enum e_button2007index_t
	{
		__E07BI_NORMAL				= 0,
		__E07BI_HOVER				= 1,
		__E07BI_PRESSED				= 2,
		__E07BI_HDD					= 3,
		__E07BI_SEL_T				= 4,
		__E07BI_INDETERMINATE		= 5,
	};
	enum e_button2007indexX_t
	{
		__E07BIX_NORMAL				= 0,
		__E07BIX_HOVER				= 1,
		__E07BIX_HOVER2				= 2,
		__E07BIX_PRESSED			= 3,
		__E07BIX_PRESSED2			= 4,
__E07BIX_PRESSED3			= 5,
		__E07BIX_INDETERMINATE		= 6,
		__E07BIX_SELECTED			= 7,
	};
	INT m_arrIndicesButtonTS[6], m_arrIndicesButtonSS_Left[6], m_arrIndicesButtonSS_Right[6],
		m_arrIndicesButtonLSM[6], //, m_arrIndicesButtonLSB[6]
		m_arrIndicesButtonLSXM[8], m_arrIndicesButtonLSXB[8];

	virtual INT GetDropDownButtonWidth(
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		) const;
	virtual INT GetSpinButtonWidth(
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		) const;

	virtual HFONT CreateDefaultFont();
	virtual HFONT CreateCaptionFont();

	COLORREF m_clrRibbonModeMenuTextNormal;
	CExtBitmapCache m_bmpRibbonModeMenuBorder;
	CRect m_rcRibbonModeMenuBorderPadding, m_rcRibbonModeMenuMetrics;
	virtual void PaintMenuItem(
		CDC & dc,
		CExtPaintManager::PAINTMENUITEMDATA & _pmid
		);
	virtual CRect GetMenuBorderMetrics(
		CWnd * pWnd,
		LPARAM lParam = 0
		) const;
	CRect m_rcPaddingRibbonMenuResizingMarginHV, m_rcPaddingRibbonMenuResizingMarginV;
	CExtBitmapCache m_bmpRibbonMenuResizingMarginHV, m_bmpRibbonMenuResizingMarginV;
	CExtBitmapCache m_bmpRibbonMenuResizingGripperHV, m_bmpRibbonMenuResizingGripperV;
	virtual void MenuBottomResizingMarginGetInfo(
		INT & nMarginHeight,
		INT & nResizingCornerPartWidth,
		CExtPopupMenuWnd * pPopup,
		LPARAM lParam = 0L
		);
	virtual void MenuBottomResizingMarginPaint(
		CDC & dc,
		const RECT & rcResizingArea,
		CExtPopupMenuWnd * pPopup,
		LPARAM lParam = 0L
		);
	COLORREF m_clrMenuCaptionText;
	CExtBitmapCache m_bmpMenuCaptionBk;
	CRect m_rcMenuCaptionBmpPadding;
	virtual void MenuCaption_Paint(
		CDC & dc,
		const RECT & rcMenuCaption,
		__EXT_MFC_SAFE_LPCTSTR sMenuCaptionText,
		CExtPopupMenuWnd * pPopup,
		LPARAM lParam = 0L
		) const;
	virtual void PaintMenuBorder(
		CDC & dc,
		const RECT & rectClient,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void AdjustMenuDC(
		CExtPopupMenuWnd * pPopup,
		CDC & dc,
		bool bMemoryDC,
		LPARAM lParam = 0L
		);
	virtual COLORREF GetShadowAdjustColor();

	virtual const CExtAnimationParameters *
		Animation_GetParameters(
			INT eAPT, // __EAPT_*** animation type
			CObject * pHelperSrc,
			const CExtAnimationClient * pAC,
			LPARAM lParam = 0L
			) const;

#if( !defined __EXT_MFC_NO_SPIN || !defined __EXT_MFC_NO_DURATIONWND )
	virtual void PaintSpinButton(
		CDC & dc,
		const CRect & rcButton,
		bool bUp,		
		bool bHorz,
		bool bEnabled,
		bool bFlat,
		bool bDrawBorder,
		bool bPushed,
		bool bHover,
		bool bHotTrack,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
#endif // #if( !defined __EXT_MFC_NO_SPIN || !defined __EXT_MFC_NO_DURATIONWND )

#ifndef __EXT_MFC_NO_SLIDER
	virtual bool PaintSliderThumb(
		CDC & dc,
		const CRect & rcThumb,
		bool bHorz,
		bool bLeft,
		bool bRight,
		bool bEnabled,
		bool bPushed,
		bool bFocused,
		bool bHover,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);	
#endif // __EXT_MFC_NO_SLIDER

	CExtBitmapCache m_bmpAdvTipBorder;
	CRect m_rcAdvTipPaddingBorder, m_rcAdvTipPaddingGradient;
	COLORREF m_clrAdvTipGradientTop, m_clrAdvTipGradientBottom, m_clrAdvTipText;
	bool m_bAdvTipOnePxExcludeMode:1;
	virtual void AdvTip_CalcRgn(
		HRGN hRgnPrecalc,
		const RECT & rcRectRgn,
		bool bDynamicShadowApplied,
		INT nSizeInnerShadowIncluded,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual bool AdvTip_PaintBackground(
		CDC & dc,
		const RECT & rcClient,
		bool bAdvTipWithShadow,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual CFont * AdvTip_GetFont(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual COLORREF AdvTip_GetTextColor(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);

	CRect m_rcPaddingRibbonFileMenuBigBorder;
	CExtBitmapCache m_bmpRibbonFileMenuBigBorder;
	CRect m_rcPaddingRibbonFileMenuOptionsButton;
	CExtBitmapCache m_bmpRibbonFileMenuOptionsButtonHot, m_bmpRibbonFileMenuOptionsButtonCold;

	CExtBitmapCache m_bmpResizingGripper;
//	CExtBitmapCache m_bmpZsThumbH, m_bmpZsThumbV, m_bmpZsPlus, m_bmpZsMinus;
//	CExtBitmapCache m_bmpZsThumbDisabledH, m_bmpZsThumbDisabledV, m_bmpZsPlusDisabled, m_bmpZsMinusDisabled;
//	COLORREF m_clrZsLineLightEnabled, m_clrZsLineDarkEnabled, m_clrZsLineLightDisabled, m_clrZsLineDarkDisabled;

	virtual bool PaintGroupBoxFrame(
		CDC & dc,
		const RECT & rcBorder,
		COLORREF clrFrame = COLORREF(-1L),
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);

	CExtBitmapCache
		m_bmpProgressMainH, m_bmpProgressMainV,
		m_bmpProgressBorderH, m_bmpProgressBorderV;
	CRect
		m_rcProgressBarPartH,
		m_rcProgressBarPartV,
		m_rcProgressBackgroundPartH,
		m_rcProgressBackgroundPartV,
		m_rcProgressBarPaddingH,
		m_rcProgressBarPaddingV,
		m_rcProgressBackgroundPaddingH,
		m_rcProgressBackgroundPaddingV,
		m_rcProgressBorderPaddingH,
		m_rcProgressBorderPaddingV;
	virtual bool PaintProgress(
		CDC & dc,
		PAINTPROGRESSDATA & _ppd
		);

#if (!defined __EXT_MFC_NO_CUSTOMIZE)
	virtual COLORREF ScreenTip_GetTextColor(
		bool bCaption,
		bool bMainPart,
		CExtCustomizeCmdScreenTip & _CCST,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
	virtual void ScreenTip_PaintBackground(
		CDC & dc,
		const RECT & rcScreenTip,
		CExtCustomizeCmdScreenTip & _CCST,
		CObject * pHelperSrc = NULL,
		LPARAM lParam = 0L
		);
#endif // (!defined __EXT_MFC_NO_CUSTOMIZE)

	// header control
	virtual void Header_PaintBackground(
		CDC & dc,
		CRect rc,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	virtual void Header_PaintItem(
		CDC & dc,
		CRect rcItemEntire,
		CRect rcItemData,
		CRect rcIcon,
		CRect rcText,
		CRect rcSortArrow,
		CRect rcButton,
		CRect rcButtonIcon,
		bool bSorted,
		bool bSortedAscending,
		INT nColNo,
		INT nColCount,
		const CExtCmdIcon & iconItem,
		const CExtCmdIcon & iconButton,
		bool bHover,
		bool bPressed,
		bool bButtonEvent,
		__EXT_MFC_SAFE_LPCTSTR strItemText,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
}; // class CExtPaintManagerOffice2007_Impl

//////////////////////////////////////////////////////////////////////////
// CExtPaintManagerOffice2007_R1
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtPaintManagerOffice2007_R1 : public CExtPaintManagerOffice2007_Impl
{
public:
	DECLARE_SERIAL( CExtPaintManagerOffice2007_R1 );
	// construction/destruction
	CExtPaintManagerOffice2007_R1();
	virtual ~CExtPaintManagerOffice2007_R1();
	virtual e_paint_manager_name_t OnQueryPaintManagerName()
	{
		ASSERT_VALID( this );
		return Office2007_R1;
	}
	virtual void InitTranslatedColors();
	virtual void PaintPushButton(
		CDC & dc,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);
#if (!defined __EXT_MFC_NO_TAB_CTRL)
	virtual bool TabWnd_GetParentSizingMargin(
		INT & nMargin,
		DWORD dwOrientation,
		CExtTabWnd * pTabWnd
		) const;
#endif // #if (!defined __EXT_MFC_NO_TAB_CTRL)
#if (!defined __EXT_MFC_NO_RIBBON_BAR)
	virtual INT Ribbon_GetGroupHeight(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GetToolGroupExtraOffset(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GetToolGroupExtraLineDistance(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual INT Ribbon_GetOuterGroupDistance(
		const CExtBarButton * pTBB,
		bool bDistanceBefore,
		LPARAM lParam = 0L
		);
	virtual CRect Ribbon_GetContentPadding(
		const CExtBarButton * pTBB,
		LPARAM lParam = 0L
		);
	virtual CExtCmdIcon * Ribbon_GetGroupCollapsedIcon(
		const CExtRibbonButtonGroup * pGroupTBB,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_PaintPageBk(
		CDC & dc,
		const RECT & rcPageBk,
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_SyncFonts();
	virtual CRect Ribbon_GetPopupGroupBorderMetrics(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		);
	virtual bool Ribbon_IsPopupGroupWithCaption(
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		) const;
	virtual bool Ribbon_FileButtonCalcLayout(
		CDC & dc,
		CExtNcFrameImpl * pExtNcFrameImpl,
		CExtRibbonButtonFile * pFileTBB,
		LPARAM lParam = 0L
		);
	virtual bool Ribbon_FileButtonPaint(
		CDC & dc,
		CExtRibbonButtonFile * pFileTBB,
		LPARAM lParam = 0L
		);
	virtual void Ribbon_PaintTabClientArea(
		CDC & dc,
		CRect & rcClient,
		CRect & rcTabItemsArea,
		CRect & rcTabNearBorderArea,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
	CExtBitmapCache m_bmpArrRibbonFileButtonR1, m_bmpRibbonFileButtonArea;
	virtual void Ribbon_PaintTabItem(
		CDC & dc,
		CRect & rcTabItemsArea,
		bool bSelected,
		const CRect & rcEntireItem,
		CFont * pFont,
		__EXT_MFC_SAFE_LPCTSTR sText,
		CExtCmdIcon * pIcon,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		COLORREF clrForceText = COLORREF(-1L),
		COLORREF clrForceTabBk = COLORREF(-1L),
		COLORREF clrForceTabBorderLT = COLORREF(-1L),
		COLORREF clrForceTabBorderRB = COLORREF(-1L),
		COLORREF clrForceTabSeparator = COLORREF(-1L)
		);
	virtual INT Ribbon_GetTabLineHeight(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		) const;
#endif // (!defined __EXT_MFC_NO_RIBBON_BAR)

}; // class CExtPaintManagerOffice2007_R1

//////////////////////////////////////////////////////////////////////////
// CExtPaintManagerOffice2007_R2_LunaBlue
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtPaintManagerOffice2007_R2_LunaBlue : public CExtPaintManagerOffice2007_Impl
{
public:
	DECLARE_SERIAL( CExtPaintManagerOffice2007_R2_LunaBlue );
	// construction/destruction
	CExtPaintManagerOffice2007_R2_LunaBlue();
	virtual ~CExtPaintManagerOffice2007_R2_LunaBlue();
	virtual e_paint_manager_name_t OnQueryPaintManagerName()
	{
		ASSERT_VALID( this );
		return Office2007_R2_LunaBlue;
	}
	virtual void InitTranslatedColors();
	virtual void PaintPushButton(
		CDC & dc,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);
#if (!defined __EXT_MFC_NO_RIBBON_BAR)
	virtual INT RibbonQuickAccessBar_GetBottomHeight(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		) const;
#endif // (!defined __EXT_MFC_NO_RIBBON_BAR)
}; // class CExtPaintManagerOffice2007_R2_LunaBlue

//////////////////////////////////////////////////////////////////////////
// CExtPaintManagerOffice2007_R2_Silver
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtPaintManagerOffice2007_R2_Silver : public CExtPaintManagerOffice2007_Impl
{
public:
	DECLARE_SERIAL( CExtPaintManagerOffice2007_R2_Silver );
	// construction/destruction
	CExtPaintManagerOffice2007_R2_Silver();
	virtual ~CExtPaintManagerOffice2007_R2_Silver();
	virtual e_paint_manager_name_t OnQueryPaintManagerName()
	{
		ASSERT_VALID( this );
		return Office2007_R2_Silver;
	}
	virtual void InitTranslatedColors();
	virtual void PaintPushButton(
		CDC & dc,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);
#if (!defined __EXT_MFC_NO_RIBBON_BAR)
	virtual INT RibbonQuickAccessBar_GetBottomHeight(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		) const;
#endif // (!defined __EXT_MFC_NO_RIBBON_BAR)
}; // class CExtPaintManagerOffice2007_R2_Silver

class __PROF_UIS_API CExtPaintManagerOffice2007_R3_Silver : public CExtPaintManagerOffice2007_R2_Silver
{
public:
	DECLARE_SERIAL( CExtPaintManagerOffice2007_R3_Silver );
	// construction/destruction
	CExtPaintManagerOffice2007_R3_Silver();
	virtual ~CExtPaintManagerOffice2007_R3_Silver();
	virtual e_paint_manager_name_t OnQueryPaintManagerName()
	{
		ASSERT_VALID( this );
		return Office2007_R3_Silver;
	}
}; // class CExtPaintManagerOffice2007_R3_Silver

//////////////////////////////////////////////////////////////////////////
// CExtPaintManagerOffice2007_R3_LunaBlue
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtPaintManagerOffice2007_R3_LunaBlue : public CExtPaintManagerOffice2007_R2_LunaBlue
{
public:
	DECLARE_SERIAL( CExtPaintManagerOffice2007_R3_LunaBlue );
	// construction/destruction
	CExtPaintManagerOffice2007_R3_LunaBlue();
	virtual ~CExtPaintManagerOffice2007_R3_LunaBlue();
	virtual e_paint_manager_name_t OnQueryPaintManagerName()
	{
		ASSERT_VALID( this );
		return Office2007_R3_LunaBlue;
	}
}; // class CExtPaintManagerOffice2007_R3_LunaBlue

//////////////////////////////////////////////////////////////////////////
// CExtPaintManagerOffice2007_R2_Obsidian
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtPaintManagerOffice2007_R2_Obsidian : public CExtPaintManagerOffice2007_Impl
{
public:
	DECLARE_SERIAL( CExtPaintManagerOffice2007_R2_Obsidian );
	// construction/destruction
	CExtPaintManagerOffice2007_R2_Obsidian();
	virtual ~CExtPaintManagerOffice2007_R2_Obsidian();
	virtual e_paint_manager_name_t OnQueryPaintManagerName()
	{
		ASSERT_VALID( this );
		return Office2007_R2_Obsidian;
	}
	virtual void InitTranslatedColors();
	virtual void PaintPushButton(
		CDC & dc,
		CExtPaintManager::PAINTPUSHBUTTONDATA & _ppbd
		);
#if (!defined __EXT_MFC_NO_TAB_CTRL)
	virtual void PaintTabButton(
		CDC & dc,
		CRect & rcButton,
		LONG nHitTest,
		bool bTopLeft,
		bool bHorz,
		bool bEnabled,
		bool bHover,
		bool bPushed,
		bool bGroupedMode,
		CObject * pHelperSrc,
		LPARAM lParam = 0L,
		bool bFlat = false
		);
#endif // #if (!defined __EXT_MFC_NO_TAB_CTRL)
	virtual COLORREF QueryObjectTextColor(
		CDC & dc,
		bool bEnabled,
		bool bFocused,
		bool bHovered,
		bool bPressed,
		CObject * pHelperSrc,
		LPARAM lParam = 0L
		);
#if (!defined __EXT_MFC_NO_RIBBON_BAR)
	virtual INT RibbonQuickAccessBar_GetBottomHeight(
		const CExtRibbonPage * pRibbonPage,
		LPARAM lParam = 0L
		) const;
#endif // (!defined __EXT_MFC_NO_RIBBON_BAR)
}; // class CExtPaintManagerOffice2007_R2_Obsidian

//////////////////////////////////////////////////////////////////////////
// CExtPaintManagerOffice2007_R3_Obsidian
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtPaintManagerOffice2007_R3_Obsidian : public CExtPaintManagerOffice2007_R2_Obsidian
{
public:
	DECLARE_SERIAL( CExtPaintManagerOffice2007_R3_Obsidian );
	// construction/destruction
	CExtPaintManagerOffice2007_R3_Obsidian();
	virtual ~CExtPaintManagerOffice2007_R3_Obsidian();
	virtual e_paint_manager_name_t OnQueryPaintManagerName()
	{
		ASSERT_VALID( this );
		return Office2007_R3_Obsidian;
	}
}; // class CExtPaintManagerOffice2007_R3_Obsidian

//////////////////////////////////////////////////////////////////////////
// CExtPaintManagerOffice2007_Blue
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtPaintManagerOffice2007_Blue : public CExtPaintManagerOffice2007_R3_LunaBlue
{
public:
	DECLARE_SERIAL( CExtPaintManagerOffice2007_Blue );
	CExtPaintManagerOffice2007_Blue();
	virtual ~CExtPaintManagerOffice2007_Blue();
}; // class CExtPaintManagerOffice2007_Blue

//////////////////////////////////////////////////////////////////////////
// CExtPaintManagerOffice2007_Black
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtPaintManagerOffice2007_Black : public CExtPaintManagerOffice2007_R3_Obsidian
{
public:
	DECLARE_SERIAL( CExtPaintManagerOffice2007_Black );
	CExtPaintManagerOffice2007_Black();
	virtual ~CExtPaintManagerOffice2007_Black();
}; // class CExtPaintManagerOffice2007_Black

//////////////////////////////////////////////////////////////////////////
// CExtPaintManagerOffice2007_Silver
//////////////////////////////////////////////////////////////////////////

class __PROF_UIS_API CExtPaintManagerOffice2007_Silver : public CExtPaintManagerOffice2007_R3_Silver
{
public:
	DECLARE_SERIAL( CExtPaintManagerOffice2007_Silver );
	CExtPaintManagerOffice2007_Silver();
	virtual ~CExtPaintManagerOffice2007_Silver();
}; // class CExtPaintManagerOffice2007_Silver

extern __PROF_UIS_API CExtPaintManager::CExtPaintManagerAutoPtr g_PaintManager;

#endif // __EXT_PAINT_MANAGER_H

