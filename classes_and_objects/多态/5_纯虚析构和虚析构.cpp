//#define _CRT_SECURE_NO_WARNINGS 
//#include<iostream>
//#include<string>
//using namespace std;
///*new就是在堆（Heap）上动态分配内存的操作符。
//当你写下 new int时，你是在做两件事：
//1.
//向操作系统申请一块足够存放一个 int的内存
//2.
//返回这块内存的地址*/
//
//class Base
//{
//public:
//	//纯虚函数
//	virtual void speak() = 0;
//	Base()
//	{
//		cout << "Base的构造函数调用" << endl;
//	}
//	//用虚析构可以解决 父类指针释放子类对象时不干净的问题
//	/*virtual ~Base()
//	{
//		cout << "Base的析构函数调用" << endl;
//	}*/
//
//	//纯虚析构
//	virtual ~Base() = 0;
//};
//
//Base::~Base()
//{
//	cout << "Base的纯析构函数调用" << endl;
//}
//
//class Son :public Base
//{
//public:
//
//	Son(string name)
//	{
//		cout << "Son的构造函数调用" << endl;
//		m_name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout <<*m_name<< " Son speak" << endl;
//	}
//
//	~Son()
//	{
//		if (m_name != NULL)
//		{
//			cout << "Son的析构函数调用" << endl;
//			delete m_name;
//			m_name = NULL;
//		}
//	}
//
//	string* m_name;
//};
//
//void test01()
//{
//	Base* base = new Son("TIM");
//	base->speak();
//	//父类指针在析构时，不会调用子类中的析构函数,导致子类如果有堆区属性，出现内存泄露
//	delete base;
//}
//
//int main()
//{
//
//	test01();
//	return 0;
//}