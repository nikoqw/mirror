#define GUIPLATFORM_KEYCODES \
K_BACK       = VK_BACK + K_DELTA,\
K_BACKSPACE  = VK_BACK + K_DELTA,\
\
K_TAB        = 9,\
\
K_SPACE      = 32,\
\
K_RETURN     = 13,\
K_ENTER      = K_RETURN,\
\
K_SHIFT_KEY  = VK_SHIFT + K_DELTA,\
K_CTRL_KEY   = VK_CONTROL + K_DELTA,\
K_ALT_KEY    = VK_MENU + K_DELTA,\
K_CAPSLOCK   = VK_CAPITAL + K_DELTA,\
K_ESCAPE     = VK_ESCAPE + K_DELTA,\
K_PRIOR      = VK_PRIOR + K_DELTA,\
K_PAGEUP     = VK_PRIOR + K_DELTA,\
K_NEXT       = VK_NEXT + K_DELTA,\
K_PAGEDOWN   = VK_NEXT + K_DELTA,\
K_END        = VK_END + K_DELTA,\
K_HOME       = VK_HOME + K_DELTA,\
K_LEFT       = VK_LEFT + K_DELTA,\
K_UP         = VK_UP + K_DELTA,\
K_RIGHT      = VK_RIGHT + K_DELTA,\
K_DOWN       = VK_DOWN + K_DELTA,\
K_INSERT     = VK_INSERT + K_DELTA,\
K_DELETE     = VK_DELETE + K_DELTA,\
\
K_NUMPAD0    = VK_NUMPAD0 + K_DELTA,\
K_NUMPAD1    = VK_NUMPAD1 + K_DELTA,\
K_NUMPAD2    = VK_NUMPAD2 + K_DELTA,\
K_NUMPAD3    = VK_NUMPAD3 + K_DELTA,\
K_NUMPAD4    = VK_NUMPAD4 + K_DELTA,\
K_NUMPAD5    = VK_NUMPAD5 + K_DELTA,\
K_NUMPAD6    = VK_NUMPAD6 + K_DELTA,\
K_NUMPAD7    = VK_NUMPAD7 + K_DELTA,\
K_NUMPAD8    = VK_NUMPAD8 + K_DELTA,\
K_NUMPAD9    = VK_NUMPAD9 + K_DELTA,\
K_MULTIPLY   = VK_MULTIPLY + K_DELTA,\
K_ADD        = VK_ADD + K_DELTA,\
K_SEPARATOR  = VK_SEPARATOR + K_DELTA,\
K_SUBTRACT   = VK_SUBTRACT + K_DELTA,\
K_DECIMAL    = VK_DECIMAL + K_DELTA,\
K_DIVIDE     = VK_DIVIDE + K_DELTA,\
K_SCROLL     = VK_SCROLL + K_DELTA,\
\
K_F1         = VK_F1 + K_DELTA,\
K_F2         = VK_F2 + K_DELTA,\
K_F3         = VK_F3 + K_DELTA,\
K_F4         = VK_F4 + K_DELTA,\
K_F5         = VK_F5 + K_DELTA,\
K_F6         = VK_F6 + K_DELTA,\
K_F7         = VK_F7 + K_DELTA,\
K_F8         = VK_F8 + K_DELTA,\
K_F9         = VK_F9 + K_DELTA,\
K_F10        = VK_F10 + K_DELTA,\
K_F11        = VK_F11 + K_DELTA,\
K_F12        = VK_F12 + K_DELTA,\
\
K_A          = 'A' + K_DELTA,\
K_B          = 'B' + K_DELTA,\
K_C          = 'C' + K_DELTA,\
K_D          = 'D' + K_DELTA,\
K_E          = 'E' + K_DELTA,\
K_F          = 'F' + K_DELTA,\
K_G          = 'G' + K_DELTA,\
K_H          = 'H' + K_DELTA,\
K_I          = 'I' + K_DELTA,\
K_J          = 'J' + K_DELTA,\
K_K          = 'K' + K_DELTA,\
K_L          = 'L' + K_DELTA,\
K_M          = 'M' + K_DELTA,\
K_N          = 'N' + K_DELTA,\
K_O          = 'O' + K_DELTA,\
K_P          = 'P' + K_DELTA,\
K_Q          = 'Q' + K_DELTA,\
K_R          = 'R' + K_DELTA,\
K_S          = 'S' + K_DELTA,\
K_T          = 'T' + K_DELTA,\
K_U          = 'U' + K_DELTA,\
K_V          = 'V' + K_DELTA,\
K_W          = 'W' + K_DELTA,\
K_X          = 'X' + K_DELTA,\
K_Y          = 'Y' + K_DELTA,\
K_Z          = 'Z' + K_DELTA,\
K_0          = '0' + K_DELTA,\
K_1          = '1' + K_DELTA,\
K_2          = '2' + K_DELTA,\
K_3          = '3' + K_DELTA,\
K_4          = '4' + K_DELTA,\
K_5          = '5' + K_DELTA,\
K_6          = '6' + K_DELTA,\
K_7          = '7' + K_DELTA,\
K_8          = '8' + K_DELTA,\
K_9          = '9' + K_DELTA,\
\
K_CTRL_LBRACKET  = K_CTRL|219|K_DELTA,\
K_CTRL_RBRACKET  = K_CTRL|221|K_DELTA,\
K_CTRL_MINUS     = K_CTRL|0xbd|K_DELTA,\
K_CTRL_GRAVE     = K_CTRL|0xc0|K_DELTA,\
K_CTRL_SLASH     = K_CTRL|0xbf|K_DELTA,\
K_CTRL_BACKSLASH = K_CTRL|0xdc|K_DELTA,\
K_CTRL_COMMA     = K_CTRL|0xbc|K_DELTA,\
K_CTRL_PERIOD    = K_CTRL|0xbe|K_DELTA,\
K_CTRL_SEMICOLON = K_CTRL|0xbe|K_DELTA,\
K_CTRL_EQUAL     = K_CTRL|0xbb|K_DELTA,\
K_CTRL_APOSTROPHE= K_CTRL|0xde|K_DELTA,\
\
K_BREAK      = VK_CANCEL + K_DELTA,\


#define GUIPLATFORM_CTRL_TOP_DECLS \
	HWND           hwnd; \
	UDropTarget   *dndtgt; \


#define GUIPLATFORM_CTRL_DECLS \
private: \
	bool         activex:1; \
	bool         isdhctrl:1; \
\
	static  bool PeekMsg(MSG& msg); \
\
	static LRESULT CALLBACK UtilityProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); \
	static void RenderFormat(int format); \
	static void RenderAllFormats(); \
	static void DestroyClipboard(); \
 \
public: \
	static Event     ExitLoopEvent; \
	static bool&     EndSession(); \
	static bool      IsEndSession()            { return EndSession(); } \
	static HINSTANCE hInstance; \
 \
protected: \
	static HCURSOR   hCursor; \
 \
	static VectorMap< HWND, Ptr<Ctrl> >& Windows(); \
	static LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); \
 \
	static Event  OverwatchEndSession; \
	static HWND   OverwatchHWND; \
	static HANDLE OverwatchThread; \
 \
	static LRESULT CALLBACK OverwatchWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam); \
	static DWORD WINAPI Win32OverwatchThread(LPVOID); \
 \
	static Rect GetScreenClient(HWND hwnd); \
	struct CreateBox; \
	void  Create0(CreateBox *cr); \
	void  Create(HWND parent, DWORD style, DWORD exstyle, bool savebits, int show, bool dropshadow); \
	Image DoMouse(int e, Point p, int zd = 0); \
	static void sProcessMSG(MSG& msg); \
 \
	static  Vector<Callback> hotkey; \
 \
	friend void sSetCursor(Ctrl *ctrl, const Image& m); \
	 \
public: \
	virtual void    NcCreate(HWND hwnd); \
	virtual void    NcDestroy(); \
	virtual void    PreDestroy(); \
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam); \
 \
	HWND  GetHWND() const              { return parent ? NULL : top ? top->hwnd : NULL; } \
	HWND  GetOwnerHWND() const; \
 \
	static Ctrl  *CtrlFromHWND(HWND hwnd); \
 \
	Ctrl&   ActiveX(bool ax = true)            { activex = ax; return *this; } \
	Ctrl&   NoActiveX()                        { return ActiveX(false); } \
	bool    IsActiveX() const                  { return activex; } \
\
	void   PopUpHWND(HWND hwnd, bool savebits = true, bool activate = true, bool dropshadow = false, \
	                 bool topmost = false); \
\
	static void InitWin32(HINSTANCE hinst); \
	static void ExitWin32(); \
	static void GuiFlush()                              { ::GdiFlush(); } \


#define GUIPLATFORM_PASTECLIP_DECLS \
	UDropTarget *dt; \


#define GUIPLATFORM_TOPWINDOW_DECLS \
public: \
	virtual LRESULT  WindowProc(UINT message, WPARAM wParam, LPARAM lParam); \
 \
private: \
	dword       style; \
	dword       exstyle; \
	HICON       ico, lico; \
 \
	void        DeleteIco0(); \
	void        DeleteIco(); \
	void        CenterRect(HWND owner, int center); \
 \
public: \
	void       Open(HWND ownerhwnd); \
	TopWindow& Style(dword _style); \
	dword      GetStyle() const                       { return style; } \
	TopWindow& ExStyle(dword _exstyle); \
	dword      GetExStyle() const                     { return exstyle; } \


#define GUIPLATFORM_VIEWDRAW_DECLS \
	HWND   hwnd; \


NAMESPACE_UPP

inline unsigned GetHashValue(const HWND& hwnd)
{
	return (unsigned)(intptr_t)hwnd;
}
END_UPP_NAMESPACE

#ifdef PLATFORM_WIN32
#ifndef PLATFORM_WINCE

#include <ShellAPI.h>

#endif
#endif
