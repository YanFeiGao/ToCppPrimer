// CppPrimerPractice.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
void main()
{
	/*double dtemp = 2.0;
	char *chtemp = new char(8);
	memcpy(chtemp,&dtemp,sizeof(double));
	double dtemp1 = 0.0;
	memcpy(&dtemp1, chtemp, sizeof(double));*/
	double *pdtemp = new double[2];
	*pdtemp = 1.0;
	*( pdtemp + 1 ) = 2.0;
	char *pchtemp = new char(16);
	memcpy(pchtemp, pdtemp, sizeof(double) * 2);
}