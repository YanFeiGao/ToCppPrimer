// CppPrimerPractice.cpp: �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include <string.h>
int main()
{
	std::string temp = "D:\\MapGIS 10\\Cache\\One\\234";
	long pos = temp.rfind("\\", temp.length());//���ַ�����β���Ӳ��ҵ�һ��\\����������λ��
	std::string endstr = temp.substr(pos + 1);//������Ĵ�����ֵ���´�
	return 0;
}

