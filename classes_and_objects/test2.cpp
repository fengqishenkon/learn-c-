#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		cout << "Date(int year=1,int month=1.int day)" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	int _year;
//	int _month;
//	int _day;
//};
//
//bool operator==(const Date& x1, const Date& x2)
//{
//	return x1._year == x2._year
//		&& x1._month == x2._month
//		&& x1._day == x2._day;
//}
//
//int main()
//{
//	const Date d1(2025, 4, 25);
//	const Date d2(2025, 4, 24);
//	//d1 == d2;
//	//operator==(d1, d2);
//	cout << (d1 == d2) << endl;
//	return 0;
//}



#include"Date.h"
int main()
{
	Date d1(2025,4,24);
	d1.print();
	//Date d2(d1 += 100);
	Date d2 = d1 + 100;
	//d1.print();
	//d2.print();
	Date d3 = d1 += 100;
	d1.print();
	d3.print();
	return 0;
}