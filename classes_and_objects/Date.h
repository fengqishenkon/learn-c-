#define _CRT_SECURE_NO_WARNINGS 
#pragma once
#include<assert.h>
#include<iostream>
using namespace std;

//函数申明
class Date
{
public:
	//获取月份对应天数
	int Getmonthday(int year,int month)
	{
		assert(month > 0 && month < 13);
		static int montharray[13] = { -1,31,30,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			return 29;
		}
		else
		{
			return montharray[month];
		}

	}

	//构造函数
	Date(int year = 1, int month = 1, int day = 1);

	//打印
	void print() const;

	//日期+=天数
	Date& operator+=(int day);

	//日期+天数
	Date operator+(int day);

private:
	int _year;
	int _month;
	int _day;
}; 
