// CppPrimerPractice.cpp: �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include "Sales_item.h"
#include <iosfwd>
#include <fstream>  
#include <sstream> 
//using namespace std;
void read()
{//�ο�http://www.cnblogs.com/YanFeiGao/p/7874591.html
	std::ifstream infile;
	infile.open("D://������ͼ//Program//11.bat",ios::in | ios::binary,_SH_SECURE);
	infile.seekg(1,ios::beg);//���ļ���ͷ����ƶ�x�ĵ�λ��
	infile.read((char*)pd,sizeof(double)*(length-1));
	infile.close();
}
int main()
{
	std::locale loc = std::locale::global(std::locale(""));
	std::ofstream ofs;
	ofs.open("./11.bat", std::ios::out | std::ios::app | std::ios::binary, _SH_DENYNO);
	std::locale::global(loc);
	double *pAttBuf = new double();
	*pAttBuf = 8;
	ofs.write(reinterpret_cast<const char*>(pAttBuf), sizeof(double)*(1));
	*pAttBuf = 9;
	ofs.write(reinterpret_cast<const char*>(pAttBuf), sizeof(double)*(1));
	ofs.close();
	return 0;
}

