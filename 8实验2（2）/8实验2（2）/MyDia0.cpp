// MyDia0.cpp : 实现文件
//

#include "stdafx.h"
#include "8实验2（2）.h"
#include "MyDia0.h"
#include "afxdialogex.h"


// MyDia0 对话框

IMPLEMENT_DYNAMIC(MyDia0, CDialogEx)

MyDia0::MyDia0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, a(0)
	, b(0)
{

}

MyDia0::~MyDia0()
{
}

void MyDia0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT4, a);
	DDX_Text(pDX, IDC_EDIT3, b);
}


BEGIN_MESSAGE_MAP(MyDia0, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT3, &MyDia0::OnEnChangeEdit3)
END_MESSAGE_MAP()


// MyDia0 消息处理程序


void MyDia0::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
