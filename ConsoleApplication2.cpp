// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
//static int Tuoi(int year)
//{
//	
//	int age = 2018 - year;
//	cout << "Tuoi cua ban la " << age << endl;
//	return age;
//}
int main()
{
	/*cout << "Nhap vao nam sinh hs 1 ";
	int year1;
	cin >> year1;
	Tuoi(year1);

	cout << "Nhap vao nam sinh hs 2 ";
	int year2;
	cin >> year2;
	Tuoi(year2);

	cout << "Nhap vao nam sinh hs 3 ";
	int year3;
	cin >> year3;
	Tuoi(year3);*/
	
	//max = (a > b) ? a : b;
	//cout << "Max la " << max << endl;
	//int chuo1 ;
	//cin >> chuo1;

	//int chuo3;
	//cin >> chuo3;

	//int chuo4;
	//cin >> chuo4;
	//cin.ignore(32767, '\n');

	//char chuo2[50];
	//cout << "Nhap ten cua ban ";
	//cin.getline(chuo2, 50);
	//cout << "Ten cua ban la " << chuo2 << endl;

	cout << "Nhap ten ";
	string ten;
	getline(cin, ten);
	cout << "Nhap diem toan " ;
	int toan, ly, hoa;
	cin >> toan;
	cout << "Nhap diem ly ";
	cin >> ly;
	cout << "Nhap diem hoa ";
	cin >> hoa;
	float trungbinh = (static_cast<float>(toan) + ly + hoa) / 3;
	cout << "ten cua ban la " << ten << endl;
	if ( hoa > 0 && toan > 0 && hoa > 0 && toan < 10 && ly < 10 && hoa < 10)
	{
		cout << "diem trung binh " << trungbinh << endl;
	}
	else
		cout << "sai " << endl;
	getchar();
    return 0;
}

