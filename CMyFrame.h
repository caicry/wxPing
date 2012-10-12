///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __CMYFRAME_H__
#define __CMYFRAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/dialog.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/toolbar.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class CMyFrame
///////////////////////////////////////////////////////////////////////////////
class CMyFrame : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText2;
		wxTextCtrl* m_textCtrlIP;
		wxStaticText* m_staticText21;
		wxTextCtrl* m_textCtrlTimes;
		wxButton* m_buttonPing;
		wxTextCtrl* m_textCtrlInfo;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnBtnPingClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		CMyFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("wxPing"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 703,643 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~CMyFrame();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class CDialogPingBase
///////////////////////////////////////////////////////////////////////////////
class CDialogPingBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText2;
		wxTextCtrl* m_textCtrlIP;
		wxStaticText* m_staticText21;
		wxTextCtrl* m_textCtrlTimes;
		wxButton* m_buttonPing;
		wxTextCtrl* m_textCtrlInfo;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnBtnPingClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		CDialogPingBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Ping"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 683,514 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~CDialogPingBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class CDialogIperfBase
///////////////////////////////////////////////////////////////////////////////
class CDialogIperfBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText22;
		wxTextCtrl* m_textCtrlCmds;
		wxButton* m_buttonCreate;
		wxButton* m_buttonKill;
		wxTextCtrl* m_textCtrlInfo;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnIdle( wxIdleEvent& event ) { event.Skip(); }
		virtual void OnInitDialog( wxInitDialogEvent& event ) { event.Skip(); }
		virtual void OnBtnCreateClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnBtnKillClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		CDialogIperfBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Iperf"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 683,514 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~CDialogIperfBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class CMainFrameBase
///////////////////////////////////////////////////////////////////////////////
class CMainFrameBase : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* m_menubar1;
		wxMenu* m_menu1;
		wxStaticText* m_staticText9;
		wxToolBar* m_toolBar2;
		wxButton* m_buttonPing;
		wxButton* m_buttonIperf;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnShowPingDialog( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnShowIperfDialog( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnBtnPingClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnBtnIperfCllick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		CMainFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 590,428 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~CMainFrameBase();
	
};

#endif //__CMYFRAME_H__
