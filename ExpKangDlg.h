// (c) 2024, RetiredCoder (RC)
// License: GPLv3, see "LICENSE.TXT" file
// https://github.com/RetiredC/Kang-2

// ExpKangDlg.h : header file
//

#pragma once


// CExpKangDlg dialog
class CExpKangDlg : public CDialogEx
{
// Construction
public:
	CExpKangDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EXPKANG_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
    CListBox lsLog;
    afx_msg void OnBnClickedButton1();
    afx_msg void OnBnClickedButton2();
    CStatic lbTime;
};
