#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;


//构造和析构的顺序
class father
{
public:
	father()
	{
		cout << "father构造函数" << endl;
	}

	~father()
	{
		cout << "father析构函数" << endl;
	}
};

class son :public father
{
public:
	son()
	{
		cout << "son构造函数" << endl;
	}

	~son()
	{
		cout << "son的析构函数" << endl;
	}
};


void test01()
{
	//father f1;
	son s1;//继承中的构造和析构的顺序类似于 父类是个大括号，子类是个小括号，大括号把小括号包裹在内，然后看大括号的部分和小括号的部分的一种顺序，  { ( ) }

}

int main()
{
	test01();
	return 0;
}