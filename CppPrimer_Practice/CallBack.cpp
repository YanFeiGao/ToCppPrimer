// CppPrimerPractice.cpp: �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include <stdio.h>
#include "TestCallBack_1.h"
void print1()
{
	printf("callbackTest1 Printf Hello");
}
void main()
{
	CallBackTest1 test1;
	test1.fun1(print1);
	getchar();
}