
// SpaceSniffer.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CSpaceSnifferApp: 
// �йش����ʵ�֣������ SpaceSniffer.cpp
//

class CSpaceSnifferApp : public CWinApp
{
public:
	CSpaceSnifferApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CSpaceSnifferApp theApp;