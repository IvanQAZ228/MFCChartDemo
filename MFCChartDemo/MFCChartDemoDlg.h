
// MFCChartDemoDlg.h : header file
//
#include "ChartCtrl\ChartCtrl.h"
#include "ChartCtrl\ChartLineSerie.h"
#include "ChartCtrl\ChartLabel.h"
#pragma once


// CMFCChartDemoDlg dialog
class CMFCChartDemoDlg : public CDialogEx
{
// Construction
public:
	CMFCChartDemoDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCCHARTDEMO_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	CChartCtrl m_ChartCtrl;
	CChartStandardAxis* pBottomAxis;
	CChartStandardAxis* pLeftAxis;
	CChartLineSerie* pSeries;


};
