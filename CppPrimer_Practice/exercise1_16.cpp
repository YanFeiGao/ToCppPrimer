// CppPrimerPractice.cpp: �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include <iostream>
int main()
{
	int sum = 0, value = 0;
	std::cout << "please input some numbers,press Ctrl+Z End" << std::endl;
	while (std::cin >> value)
	{
		sum = value + sum;
	}
	std::cout << "The sum is  " << sum << std::endl;
}

