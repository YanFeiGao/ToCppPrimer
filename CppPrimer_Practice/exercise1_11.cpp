// CppPrimerPractice.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
int main()
{
	int i = 0, j = 0;
	std::cout << "please input two numbers" << std::endl;
	std::cin >> i >> j;//j is greater than i.
	if (i > j)
	{
		i = i + j;
		j = i - j;
		i = i - j;
	}
	while (i <= j)
	{
		std::cout << i << std::endl;
		i++;
	}
	return 0;
}

