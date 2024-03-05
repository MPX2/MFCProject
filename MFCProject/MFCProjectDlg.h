﻿
// MFCProjectDlg.h: 헤더 파일
//

#pragma once
#include "CTabMonDlg.h"


// CMFCProjectDlg 대화 상자
class CMFCProjectDlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCProjectDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_MAIN };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;
	int a;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButtonEnterModDialog();
	CTabCtrl m_tabSelection;
	CTabMonDlg m_dlgObject;
	afx_msg void OnSelchangeTabWeek(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnSelectMonthcalendarMonth(NMHDR* pNMHDR, LRESULT* pResult);
	CEdit m_ctrlCurTime;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	CFont font;
};