//#define _CRT_SECURE_NO_WARNINGS 
//#include<string>
//#include<iostream>
//using namespace std;
//
////普通计算器
///*class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_num1 + m_num2;
//		}
//		else if (oper == "-")
//		{
//			return m_num1 - m_num2;
//		}
//		else if (oper == "*")
//		{
//			return m_num1*m_num2;
//		}
//	}
//	int m_num1;//操作数
//	int m_num2;//操作数
//};
//
//void test1()
//{
//	//创建计算器对象
//	Calculator	c;
//	c.m_num1 = 7;
//	c.m_num2 = 3;
//	cout << "m_num1+m_num2=" << c.getResult("+") << endl;
//	cout << "m_num1-m_num2=" << c.getResult("-") << endl;
//	cout << "m_num1*m_num2=" << c.getResult("*") << endl;
//}
//*/
//
////普通实现的弊端
////1、要是扩展新功能，就需要改变源码
////2、开发中提倡开闭原则：对扩展进行开放，对修改进行关闭
//
//
////利用多态实现计算器
////实现计算器抽象类
//
//
////多态实现带来的好处：
////1、组织结构清晰
////2、可读性强
////3、对于前期和后期扩展以及维护性高
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		//cout << "AbstractCalculator已经被调用" << endl;
//		return 0;
//	}
//	int m_num1;
//	int m_num2;
//};
//
////加法计算器的类
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 + m_num2;
//	}
//};
//
////减法计算器类
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 - m_num2;
//	}
//};
//
////乘法计算器类
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 * m_num2;
//	}
//};
//
//
//
////父类引用指向子类对象
////函数的使用
////int  dogetResult(AbstractCalculator& calculator)
////{
////	int result = 0;
////	result = calculator.getResult();
////	return result;
////}
////
////void test2()
////{
////	//创建计算器抽象类的对象
////	//AbstractCalculator c;
////	/*c.m_num1 = 7;
////	c.m_num2 = 3;*/
////
////	//继承是类之间的关系，而不是对象之间的关系。派生类继承了基类的成员变量，但是每个对象都有自己独立的成员变量。
////	// 
////	//创建加法类对象
////	AddCalculator a;
////	a.m_num1 = 7;
////	a.m_num2 = 3;
////	cout << "m_num1 + m_num2="<<dogetResult(a) << endl;
////
////	//创建减法类对象
////	SubCalculator b;
////	b.m_num1 = 7;
////	b.m_num2 = 3;
////	cout << "m_num1 - m_num2=" << dogetResult(b) << endl;
////
////	//创建乘法类对象
////	MulCalculator c;
////	c.m_num1 = 7;
////	c.m_num2 = 3;
////	cout << "m_num1 * m_num2=" << dogetResult(c) << endl;
////
////}
//
////父类指针指向子类对象
//void test3()
//{
//
//	//加法
//	AbstractCalculator* p = new AddCalculator;
//	p->m_num1 = 10;
//	p->m_num2 = 100;
//	cout <<"m_num1 + m_num2="<< p->getResult() << endl;
//	delete p;
//
//	//减法
//	p = new SubCalculator;
//	p->m_num1 = 10;
//	p->m_num2 = 100;
//	cout << "m_num1 - m_num2=" << p->getResult() << endl;
//	delete p;
//
//	//乘法
//	p = new MulCalculator;
//	p->m_num1 = 10;
//	p->m_num2 = 100;
//	cout << "m_num1 * m_num2=" << p->getResult() << endl;
//	delete p;
//}
//
//
//
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}
//
//
//
//
