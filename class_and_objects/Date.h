#define _CRT_SECURE_NO_WARNINGS 
#pragma once
class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1);
	
private:
	int _year;
	int _month;
	int _day;
}; 
