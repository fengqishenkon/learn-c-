//#define _CRT_SECURE_NO_WARNINGS 
//#include<iostream>
//using namespace std;
//
////同名的静态成员变量
//class father
//{
//public:
//	static int ma;
//
//};
//int father::ma = 100;
//
//class son :public father
//{
//public:
//	static int ma;
//};
//int son::ma = 20;
//
//void test()
//{
//	//1、通过对象来访问数据
//	//son s1;
//	//cout << "son_ma=" << s1.ma << endl;
//	//cout << "father_ma=" << s1.father::ma << endl;
//
//	//静态成员变量特点 访问方式可以为​ 类名::静态成员名
//	//2、通过类名来访问  
//	cout << "son_ma=" << son::ma << endl;
//	cout << "father_ma=" << son::father::ma << endl;//第一个::代表通过类名的方式访问，第二个::代表访问父类作用于下
//}
//
//
////静态同名成员函数
//class father2
//{
//public:
//	static void func();
//};
//
//
//void father2::func()
//{
//	cout << "father2_static_void func" << endl;
//}
//
//class son2 :public father2
//{
//public:
//	static void func();
//};
//
//void son2::func()
//{
//	cout << "son2_static_void func" << endl;
//}
//
//void test2()
//{
//	//1、通过对象来访问数据
//	son2 s2;
//	s2.func();
//	s2.father2::func();
//
//	//2、通过类名来访数据
//	son2::func();
//	son2::father2::func();
//}
//
//int main()
//{
//	//test();
//	test2();
//	return 0;
//}
//
