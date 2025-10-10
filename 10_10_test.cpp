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
//	//这个里面隐含着this指针如下  //this指针不能显示的传递实参和形参。
//
//	void Print(Date* const this)//const在*的左边，不管是不是在Date的左边还是右边，表示this指向的内容不可变，如：this->_year这个时候_year不可变；在*的右边表示this本身不可变，如：this=nullptr;这样的话编译器会报错，表示this指针无法修改。
//	{
//		cout << this->_year << "/" << this->_month << "/" << this->_day << endl;
//	}
//
//
//
////private://使内部成员不能被外部访问到
//	int _year;       //声明  判断是申明还是定义，主要看有没有开空间，定义需要开空间，但声明不开空间。
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
//	Date d2;//对整体定义也被称为  类实例化出对象  
//
//	d1.Init(2025, 9, 27);
//	d2.Init(2024, 8, 20);
//	////这两个_year需要不同的空间存储独立的值
//	//d1._year++;
//	//d2._year++;
//
//	////Print()函数指针是一样的，不需要独立的空间
//	//d1.Print();
//	//d2.Print();
//
//	//cout << sizeof(d1) << endl;
//	//cout << sizeof(Date) << endl;
//
//	//cout << sizeof(a) << endl; //8
//	//cout << sizeof(b) << endl; //1  没有成员变量的类对象，分配1byte纯粹为了占位，表示对象存在
//	//cout << sizeof(c) << endl; //1
//
//	cout << &d1 << endl;
//	cout << &d2 << endl << endl;
//
//	//隐含的this指针。
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
//	p->Print();//   call Print 地址  //对于p->Print()编译时不会报错，正常编译，因为虽然p为空指针，p->Print()会把p直接传过去，但Print成员函数里面没有对p进行解引用，所以编译时不会报错
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


	//private://使内部成员不能被外部访问到
	int _year;       //声明  判断是申明还是定义，主要看有没有开空间，定义需要开空间，但声明不开空间。
	int _month;
	int _day;
};

int main()
{
	Date d1;//Date构造函数
	d1.Print();
	return 0;
}