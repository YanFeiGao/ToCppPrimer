// CppPrimerPractice.cpp: �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include "Sales_item.h"
#include <iostream>
int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn())
	{
		std::cout << item1 + item2 << std::endl;
	}
	else
	{
		std::cout << "Diff item" << std::endl;
	}
}

