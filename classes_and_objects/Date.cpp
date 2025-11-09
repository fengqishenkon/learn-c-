#define _CRT_SECURE_NO_WARNINGS 
#include"Date.h"


Date::Date(int year , int month , int day )
{
	_year = year;
	_month = month;
	_day = day;
}

void Date::print() const
{
	cout << _year<< '/' << _month << '/' << _day << endl;
}

Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > Getmonthday(_year, _month))
	{ 
		_day -= Getmonthday(_year, _month);
		++_month;
		if (_month > 12)
		{
			++_year;
			_month = 1;
		}
	}
	return *this;
}

Date Date::operator+(int day)
{
	Date tmp(*this);
	tmp._day += day;
	while (tmp._day > Getmonthday(tmp._year, tmp._month))
	{
		tmp._day -= Getmonthday(tmp._year, tmp._month);
		++tmp._month;
		if (tmp._month > 12)
		{
			++tmp._year;
			tmp._month = 1;
		}
	}
	return tmp;
}
