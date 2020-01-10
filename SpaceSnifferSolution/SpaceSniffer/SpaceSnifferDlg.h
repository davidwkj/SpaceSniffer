
// SpaceSnifferDlg.h : 头文件
//

#pragma once
#include <iostream>
#include <fstream>
using namespace std;

// CSpaceSnifferDlg 对话框
class CSpaceSnifferDlg : public CDialogEx
{
// 构造
public:
	CSpaceSnifferDlg(CWnd* pParent = NULL);	// 标准构造函数
	
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SPACESNIFFER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	ofstream outFile;
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();




	void FindFile(char* pFilePath);

	
};
