//#define _CRT_SECURE_NO_WARNINGS 
//#include<iostream>
//using namespace std;
//
//
//同名成员变量处理
//class father
//{
//public:
//	int a=100;
//};
//
//class son:public father
//{
//public:
//	int b=10;
//};
//
//void test1()
//{
//	son s1;
//	cout << s1.a << endl;//变量为son中的a
//	cout << s1.father::a << endl;//变量为father中的a
//	cout << s1.a << endl;
//}
//
//同名成员函数处理
//class father2
//{
//public:
//	void func()
//	{
//		cout << "father_func()调用" << endl;
//	}
//	void func(int a)//函数重载
//	{
//		cout << "father_func(int a)调用" << endl;
//	}
//};
//
//class son2 :public father2
//{
//public:
//	void func()
//	{
//		cout << "son2_func()调用" << endl;
//	}
//};
//
//void test02()
//{
//	son2 s2;
//	s2.func();//son2_func()调用
//	s2.father2::func();
//	s2.func(100);//不能直接调用
//	s2.father2::func(100);
//} 
//
//int main()
//{
//	test1();
//	test02();
//	return 0;
//}
//
