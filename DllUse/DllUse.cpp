﻿// For_Dll2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "f.h"
using namespace std;


string answer(bool h) {
	if (h == 1)
		return "Yes, this year is a leap year)";
	else
		return "No, this year is not a leap year(";
}


int main()
{
	string res;
	int ot = 0;
	char str[100];
	while (true) {
		res = "";
		cout << ("Enter the year ");
		cin >> (str);
		if (atoi(str) && str[0] != '-')
			res = answer(v_year(atoi(str)));// v_year - метод из библиотеки, определяющий високосность года
		else
			cout << "Invailid input";
		cout << (res + "\nWant to continue? Press 1 \nOtherwise, press 2 ");
		cin >> ot;
		if (ot != 1)
			break;
	}
	return 0;
}




