// CppPrimerPractice.cpp: �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include <string.h>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream outfile;
	int start = 1;
	int end = 2;
	outfile.open("D:\\MapGIS 10\\Cache\\0.txt");
	outfile << start << endl;
	outfile << end << endl;
	outfile.close();
}

