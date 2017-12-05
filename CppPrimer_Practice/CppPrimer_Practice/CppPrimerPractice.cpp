// CppPrimerPractice.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "Sales_item.h"
#include <string.h>
//using namespace std;
int main()
{
	//test(std::cin);
	/*int i = 0;
	std::cout << std::unitbuf;
	while (std::cin >> i)
	{
		std::cout << i;
	}*/
	std::string temp = "D:\\MapGIS 10\\Cache\\One\\234";
	long pos = temp.rfind("\\", temp.length());
	std::string endstr = temp.substr(pos+1);
	return 0;
}

