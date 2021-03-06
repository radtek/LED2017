//ExGetColorParaDLL.h

#ifndef __EXGETCOLORPARADLL_H__
#define __EXGETCOLORPARADLL_H__

struct COLOR_PARA
{
	float fx;        //色坐标
	float fy;
	float fu;
	float fv;

	float fCCT;      //相关色温(K)
	float dC;        //色差dC
	float fLd;       //主波长(nm)
	float fPur;      //色纯度(%)
	float fLp;       //峰值波长(nm)
	float fHW;       //半波宽(nm)
	float fLav;      //平均波长(nm)
	float fRa;       //显色性指数 Ra
	float fRR;       //红色比
	float fGR;       //绿色比
	float fBR;       //蓝色比
	float fRi[15];   //显色性指数 R1-R15
	
	float fIp;		//峰值AD

	float fPh;		//光度值
	float fPhe;		//辐射度值
	float fPlambda;	//绝对光谱洗漱
	float fSpect1;	//起始波长
	float fSpect2;	//
	float fInterval;
	float fPL[10000];	//光谱数据
};


struct ORI_PARA
{
	int iPixN;			//像素点个数
	float fDecWL[2048];	//原始波长数据
	float fDecAD[2048]; //原始AD值
	float fDecPL[2048]; //归一化之后的光谱数据
};

extern void __stdcall NH_GetSoftVer(CString &strVer);
extern BOOL __stdcall NH_Init(char cPW1[], char cPW2[], char cPath[]);
extern void __stdcall NH_GetColorPara(float fWL[], float fPL[],int iN, COLOR_PARA &para,BOOL bXY2CCT,float xx,float yy);
extern float __stdcall NH_GetV(float fWL);
extern float __stdcall NH_GetCDI();



#endif
