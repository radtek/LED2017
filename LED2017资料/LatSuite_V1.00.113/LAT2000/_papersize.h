#if !defined(AFX__PAPERSIZE_H__4DD0B20B_1F5E_4F55_BA69_0660377E87E8__INCLUDED_)
#define AFX__PAPERSIZE_H__4DD0B20B_1F5E_4F55_BA69_0660377E87E8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// C_PaperSize wrapper class

class C_PaperSize : public COleDispatchDriver
{
public:
	C_PaperSize() {}		// Calls COleDispatchDriver default constructor
	C_PaperSize(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	C_PaperSize(const C_PaperSize& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetPaperName();
	void SetPaperName(LPCTSTR lpszNewValue);
	float GetWidth();
	void SetWidth(float newValue);
	float GetHeight();
	void SetHeight(float newValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX__PAPERSIZE_H__4DD0B20B_1F5E_4F55_BA69_0660377E87E8__INCLUDED_)
