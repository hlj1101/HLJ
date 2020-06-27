﻿
// MFC2课堂2View.cpp: CMFC2课堂2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC2课堂2.h"
#endif

#include "MFC2课堂2Doc.h"
#include "MFC2课堂2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC2课堂2View

IMPLEMENT_DYNCREATE(CMFC2课堂2View, CView)

BEGIN_MESSAGE_MAP(CMFC2课堂2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC2课堂2View 构造/析构

CMFC2课堂2View::CMFC2课堂2View() noexcept
{
	// TODO: 在此处添加构造代码
	ca.SetSize(100);
}

CMFC2课堂2View::~CMFC2课堂2View()
{
}

BOOL CMFC2课堂2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC2课堂2View 绘图

void CMFC2课堂2View::OnDraw(CDC* pDC)
{
	CMFC2课堂2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < ca.GetSize(); i++)
	{
		pDC->Ellipse(ca.GetAt(i));
	}
	
}


// CMFC2课堂2View 诊断

#ifdef _DEBUG
void CMFC2课堂2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC2课堂2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC2课堂2Doc* CMFC2课堂2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC2课堂2Doc)));
	return (CMFC2课堂2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC2课堂2View 消息处理程序


void CMFC2课堂2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC2课堂2Doc* pDoc = GetDocument();
	int r = rand() % 100 + 50;
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
