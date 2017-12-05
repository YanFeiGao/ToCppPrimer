// CppPrimerPractice.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <string.h>
int main()
{
	std::string temp = "D:\\MapGIS 10\\Cache\\One\\234";
	long pos = temp.rfind("\\", temp.length());//从字符串的尾部从查找第一个\\，并返回其位置
	std::string endstr = temp.substr(pos + 1);//将后面的串，赋值给新串
	return 0;
}

