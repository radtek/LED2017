#include "StdAfx.h"
#include "LRAComm.h"


CLRAComm::CLRAComm(void)
{
	m_strCOM = "COM1";
	m_iBaudRate = 9600;
	m_ser.m_ucDeviceAddress = 0xAF;
	m_ser.m_ucPCAddress = 0xEE;
}


CLRAComm::~CLRAComm(void)
{
}


void CLRAComm::SetAddress(BYTE ucPCAddress, BYTE ucDeviceAddress)
{
	m_ser.m_ucPCAddress = ucPCAddress;
	m_ser.m_ucDeviceAddress = ucDeviceAddress;
}


void CLRAComm::Initialize(CString strCOM, int iBaudRate)
{
	m_strCOM = strCOM;
	m_iBaudRate = iBaudRate;
}


BOOL CLRAComm::SwitchAllChannel(BOOL bOn)
{
	BOOL bChannel[LRA_CHANNEL_NUM];
	for (int i = 0; i < LRA_CHANNEL_NUM; i++)
	{
		bChannel[i] = bOn;
	}

	return SetChannel(bChannel);
}


BOOL CLRAComm::SwitchOneChannel(int iChannel, BOOL bOn)
{
	ASSERT(iChannel >= 0 && iChannel < LRA_CHANNEL_NUM);

	BOOL bChannel[LRA_CHANNEL_NUM];
	for (int i = 0; i < LRA_CHANNEL_NUM; i++)
	{
		bChannel[i] = FALSE;
	}
	bChannel[iChannel] = bOn;

	return SetChannel(bChannel);
}


BOOL CLRAComm::SetChannel(BOOL bChannel[])
{
	HANDLE comHandle;
	if (!m_ser.Open(comHandle, m_strCOM, m_iBaudRate))
	{
		return FALSE;
	}
	m_ser.SetReadTime(comHandle, 1000, 1, 1000);

	BYTE ucOut[2], ucIn[256];
	ucOut[0] = 0;
	ucOut[1] = 0;
	for (int i = 0; i < 8; i++)
	{
		ucOut[1] |= bChannel[i] ? 1 << i : 0;
	}
	ucOut[0] |= bChannel[8] ? 1 << 0 : 0;
	ucOut[0] |= bChannel[9] ? 1 << 1 : 0;

	if (!m_ser.SendPackage(comHandle, 0xAA, ucOut, 2))
	{
		m_ser.Close(comHandle);
		return FALSE;
	}

	int nReceive = 0;
	int iReturn = m_ser.ReceivePackage(comHandle, 0xAA, ucIn, 256, nReceive);
	if (iReturn < 0)
	{
		m_ser.Close(comHandle);
		return FALSE;
	}

	m_ser.Close(comHandle);
	return TRUE;
}