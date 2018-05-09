// CppPrimerPractice.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "future"
#include "thread"
#include "chrono"
#include "random"
#include "iostream"
#include "exception"
using namespace std;
int dosomething(char c)
{
	default_random_engine dre(c);
	uniform_int_distribution<int> id(10, 1000);
	for (int i = 0; i < 10; ++i)
	{
		this_thread::sleep_for(chrono::milliseconds(id(dre)));
		cout.put(c).flush();
	}
	return c;
}
int fun1()
{
	return dosomething('.');
}
int fun2()
{
	return dosomething('+');
}
int main()

{
	cout << "starting fun1() in background and fun2() in foreground" << endl;
	future<int> result1(async(fun1));
	int result2 = fun2();
	int result = result1.get() + result2;
	cout << " \n result of fun1()+fun2() " << result << endl;
	return 0;
}

