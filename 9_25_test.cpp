#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;


class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Print()
	{
		cout << _day << endl;
	}

//private://使内部成员不能被外部访问到
	int _year;       //声明  判断是申明还是定义，主要看有没有开空间，定义需要开空间，但声明不开空间。
	int _month;      
	int _day;
};


class a
{
public:
	void Print()
	{
		cout << _ch << endl;
	}
private:
	char _ch;
	int _i;
};

class b
{
public:
	void Print()
	{
		//
	}
};

class c
{};

int main()
{
	//Date d1;
	//Date d2;//对整体定义也被称为  类实例化出对象  

	//d1.Init(2025, 9, 27);
	////这两个_year需要不同的空间存储独立的值
	//d1._year++;
	//d2._year++;

	////Print()函数指针是一样的，不需要独立的空间
	//d1.Print();
	//d2.Print();

	//cout << sizeof(d1) << endl;
	//cout << sizeof(Date) << endl;

	cout << sizeof(a) << endl; //8
	cout << sizeof(b) << endl; //1  没有成员变量的类对象，分配1byte纯粹为了占位，表示对象存在
	cout << sizeof(c) << endl; //1
	return 0;
}