﻿
// MFC2实验2.h: MFC2实验2 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含 'pch.h' 以生成 PCH"
#endif

#include "resource.h"       // 主符号


// CMFC2实验2App:
// 有关此类的实现，请参阅 MFC2实验2.cpp
//

class CMFC2实验2App : public CWinApp
{
public:
	CMFC2实验2App() noexcept;


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC2实验2App theApp;
