// CppPrimerPractice.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "Sales_item.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{//input example: 0-1101-87999-X 3 10   code   number  price 
 //output      0-1101-87999-X 3 30  10   code   cost avg_price
	for (Sales_item item; cin >> item; cout << item << endl);
	return 0;
}

