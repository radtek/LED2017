// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "ax_cie_xyz.h"

/////////////////////////////////////////////////////////////////////////////
// CAX_CIE_XYZ

IMPLEMENT_DYNCREATE(CAX_CIE_XYZ, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CAX_CIE_XYZ properties

short CAX_CIE_XYZ::GetCIEType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void CAX_CIE_XYZ::SetCIEType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

BOOL CAX_CIE_XYZ::GetShowBBC()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void CAX_CIE_XYZ::SetShowBBC(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

BOOL CAX_CIE_XYZ::GetBShowXY()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void CAX_CIE_XYZ::SetBShowXY(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

float CAX_CIE_XYZ::GetX()
{
	float result;
	GetProperty(0x4, VT_R4, (void*)&result);
	return result;
}

void CAX_CIE_XYZ::SetX(float propVal)
{
	SetProperty(0x4, VT_R4, propVal);
}

float CAX_CIE_XYZ::GetY()
{
	float result;
	GetProperty(0x5, VT_R4, (void*)&result);
	return result;
}

void CAX_CIE_XYZ::SetY(float propVal)
{
	SetProperty(0x5, VT_R4, propVal);
}

BOOL CAX_CIE_XYZ::GetBShowXYValue()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void CAX_CIE_XYZ::SetBShowXYValue(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

CString CAX_CIE_XYZ::GetSzPath()
{
	CString result;
	GetProperty(0x7, VT_BSTR, (void*)&result);
	return result;
}

void CAX_CIE_XYZ::SetSzPath(LPCTSTR propVal)
{
	SetProperty(0x7, VT_BSTR, propVal);
}

CString CAX_CIE_XYZ::GetPassword()
{
	CString result;
	GetProperty(0x8, VT_BSTR, (void*)&result);
	return result;
}

void CAX_CIE_XYZ::SetPassword(LPCTSTR propVal)
{
	SetProperty(0x8, VT_BSTR, propVal);
}

CString CAX_CIE_XYZ::GetTitle()
{
	CString result;
	GetProperty(0x9, VT_BSTR, (void*)&result);
	return result;
}

void CAX_CIE_XYZ::SetTitle(LPCTSTR propVal)
{
	SetProperty(0x9, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CAX_CIE_XYZ operations

void CAX_CIE_XYZ::Draw()
{
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CAX_CIE_XYZ::CopyBMP()
{
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CAX_CIE_XYZ::Print()
{
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CAX_CIE_XYZ::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
