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

//private://ʹ�ڲ���Ա���ܱ��ⲿ���ʵ�
	int _year;       //����  �ж����������Ƕ��壬��Ҫ����û�п��ռ䣬������Ҫ���ռ䣬�����������ռ䡣
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
	//Date d2;//�����嶨��Ҳ����Ϊ  ��ʵ����������  

	//d1.Init(2025, 9, 27);
	////������_year��Ҫ��ͬ�Ŀռ�洢������ֵ
	//d1._year++;
	//d2._year++;

	////Print()����ָ����һ���ģ�����Ҫ�����Ŀռ�
	//d1.Print();
	//d2.Print();

	//cout << sizeof(d1) << endl;
	//cout << sizeof(Date) << endl;

	cout << sizeof(a) << endl; //8
	cout << sizeof(b) << endl; //1  û�г�Ա����������󣬷���1byte����Ϊ��ռλ����ʾ�������
	cout << sizeof(c) << endl; //1
	return 0;
}