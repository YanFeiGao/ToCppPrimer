// CppPrimerPractice.cpp: �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include "Sales_item.h"
#include <iostream>
#include <stdexcept>
std::istream& test(std::istream& value)
{
	int v = 0;
	while (std::cin >> v, !value.eof())
	{
		if (value.bad())
		{
			throw std::runtime_error("IO stream error");
		}
		if (value.fail())
		{
			std::cout << " date error, please try again!" << std::endl;
			value.clear();
			value.ignore(100, '\n');
			continue;
		}
		std::cout << v << std::endl;
	}
	value.clear();
	return value;
}
int main()
{
	test(std::cin);
	return 0;
}

