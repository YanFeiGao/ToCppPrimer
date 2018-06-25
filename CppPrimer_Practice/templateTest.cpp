// CppPrimerPractice.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <stdio.h>
using namespace std;
template<class T1, class T2>
class A {
public:
	int fun1(T1 x, int y);
	T2 fun2(T1 x, T2 y);
protected:
private:
	int a;
	T1 b;
};

template<class T1, class T2>
T2 A<T1, T2>::fun2(T1 x, T2 y)
{
	return x + y;
}

template<class T1, class T2>
int A<T1, T2>::fun1(T1 x, int y)
{
	return x - y;
}

void main()
{
	A<float, float> temp;
	int i = temp.fun1(3.4, 1);
	float fj = temp.fun2(3.4, 4.3);
	getchar();
}