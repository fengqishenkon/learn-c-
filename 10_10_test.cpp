#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;

//
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//void Print()
//	//{
//	//	cout << _day << endl;
//	//}
//
//	void Print()
//	{
//		
//		cout << this << endl;
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//	//�������������thisָ������  //thisָ�벻����ʾ�Ĵ���ʵ�κ��βΡ�
//
//	void Print(Date* const this)//const��*����ߣ������ǲ�����Date����߻����ұߣ���ʾthisָ������ݲ��ɱ䣬�磺this->_year���ʱ��_year���ɱ䣻��*���ұ߱�ʾthis�����ɱ䣬�磺this=nullptr;�����Ļ��������ᱨ����ʾthisָ���޷��޸ġ�
//	{
//		cout << this->_year << "/" << this->_month << "/" << this->_day << endl;
//	}
//
//
//
////private://ʹ�ڲ���Ա���ܱ��ⲿ���ʵ�
//	int _year;       //����  �ж����������Ƕ��壬��Ҫ����û�п��ռ䣬������Ҫ���ռ䣬�����������ռ䡣
//	int _month;      
//	int _day;          
//};
//
//
//class a                          
//{
//public:
//	void Print()                         
//	{ 
//		cout << _ch << endl;               
//	}
//private:
//	char _ch;
//	int _i;
//};
//
//class b
//{
//public:
//	void Print()
//	{
//		//
//	}
//};
//
//class c
//{};
//
//
//
//int main()
//{
//	Date d1;
//	Date d2;//�����嶨��Ҳ����Ϊ  ��ʵ����������  
//
//	d1.Init(2025, 9, 27);
//	d2.Init(2024, 8, 20);
//	////������_year��Ҫ��ͬ�Ŀռ�洢������ֵ
//	//d1._year++;
//	//d2._year++;
//
//	////Print()����ָ����һ���ģ�����Ҫ�����Ŀռ�
//	//d1.Print();
//	//d2.Print();
//
//	//cout << sizeof(d1) << endl;
//	//cout << sizeof(Date) << endl;
//
//	//cout << sizeof(a) << endl; //8
//	//cout << sizeof(b) << endl; //1  û�г�Ա����������󣬷���1byte����Ϊ��ռλ����ʾ�������
//	//cout << sizeof(c) << endl; //1
//
//	cout << &d1 << endl;
//	cout << &d2 << endl << endl;
//
//	//������thisָ�롣
//	d1.Print();
//	cout << endl;
//	d2.Print();
//
//	/*d1.Print(&d1);
//	d2.Print(&d2);*/
//	return 0;
//}



//
//class A
//{
//public:
//	void Print()
//	{
//		cout << this << endl;
//		cout << "A::Print()" << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//
//	A* p = nullptr;
//	p->Print();//   call Print ��ַ  //����p->Print()����ʱ���ᱨ���������룬��Ϊ��ȻpΪ��ָ�룬p->Print()���pֱ�Ӵ���ȥ����Print��Ա��������û�ж�p���н����ã����Ա���ʱ���ᱨ��
//	return 0;
//
//}


class Date
{
public:
	/*void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}*/

	Date()
	{
		_year = 1;
		_month = 1;
		_day = 1;
	}

	void Print()
	{
		//cout << this << endl;
		cout << _year << "/" << _month << "/" << _day << endl;
	}


	//private://ʹ�ڲ���Ա���ܱ��ⲿ���ʵ�
	int _year;       //����  �ж����������Ƕ��壬��Ҫ����û�п��ռ䣬������Ҫ���ռ䣬�����������ռ䡣
	int _month;
	int _day;
};

int main()
{
	Date d1;//Date���캯��
	d1.Print();
	return 0;
}