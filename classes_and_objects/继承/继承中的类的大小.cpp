#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;

class Base
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son1 :public Base
{
public:
	int m_d;
};

void test()
{
	cout << "sizeof son1=" << sizeof(son1) << endl;//sizeof(son1)=16
}



//int main()
//{
//	test();
//	return 0;
//}



