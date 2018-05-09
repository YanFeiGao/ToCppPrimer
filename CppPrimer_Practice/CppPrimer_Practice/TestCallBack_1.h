#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;
typedef void(*FUN)( );
class CallBackTest1
{
public:
	void fun1(FUN p)
	{
		( *p )( );
	}
};