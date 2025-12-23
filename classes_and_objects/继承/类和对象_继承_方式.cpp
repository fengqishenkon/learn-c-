//#define _CRT_SECURE_NO_WARNINGS 
//#include<iostream>
//using namespace std;
//
//
//class father
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//class father2
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//class father3
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//
////分别验证不同继承方式下father类中的不同权限的成员是否可以正常访问；
//class son1 :public father
//{
//public:
//	void fun1()
//	{
//		a = 10;//假设public继承方式下，father类中的public权限的成员在子类中依然是public;
//		b = 20;//假设public继承方式下，father类中的protected权限的成员在子类中依然是protected;
//		c = 30;//error;public继承方式下，父类中的private权限成员在子类中访问不到
//	}
//};
//
////验证
//void testson1()
//{
//	son1 s1;
//	
//	s1.a = 100;
//	s1.b = 100;//到son1中b依然是protected权限;无法访问
//
//}
//
////再在继承
//class grandson1 :public son1
//{
//public:
//	void func()
//	{
//		a = 10000;
//		b = 10000;
//		c = 1000;//依然不行
//	}
//};
//
//void testgrandson1()
//{
//	grandson1 gs;
//	gs.a = 1000;//public权限，类外依然可以访问
//	gs.b = 1000;//到grandson1中b依然是protected权限;类外无法访问
//}
//
//
//
//
//
////分别验证不同继承方式下father类中的不同权限的成员是否可以正常访问；
//class son2 :protected father2
//{
//public:
//	void fun2()
//	{
//		a = 10;//假设protected继承方式下，father类中的public权限的成员在子类中是protected;
//		b = 20;//假设protected继承方式下，father类中的protected权限的成员在子类中依然是protected;
//		c = 30;//error;public继承方式下，父类中的private权限成员在子类中访问不到
//	}
//};
//
//void testson2()
//{
//	son2 s2;
//	s2.a = 100;//在son2中a变为了protected权限，因此类外访问不到
//	s2.b = 100;//同上
//}
//
//
////再在继承
//class grandson2 :public son2
//{
//public:
//	void func()
//	{
//		a = 10000;//看看是否在这次public继承里面变味了public类，还是依然是protected类
//		b = 10000;
//	}
//};
//
//void testgrandson2()
//{
//	grandson2 gs;
//	gs.a = 1000;//依然是son2中的protected权限，内外访问不到
//	gs.b = 1000;//同上
//}
//
////分别验证不同继承方式下father类中的不同权限的成员是否可以正常访问；
//class son3 :private father
//{
//public:
//	void fun1()
//	{
//		a = 10;//假设private继承方式下，father类中的public权限的成员在子类中是private;
//		b = 20;//假设private继承方式下，father类中的protected权限的成员在子类是private;
//		c = 30;//error;private继承方式下，父类中的private权限成员在子类中访问不到
//	}
//};
//
//void testson3()
//{
//	son3 s3;
//	s3.a = 100;//在son2中a变为了private成员，因此类外访问不到
//	s3.b = 100;//同上
//}
//
////再继承操作
//class grandson :public son3
//{
//public:
//	void func()
//	{
//		a = 10000;//再sono3这个父类中已经变为private，在grandson这个子类中不管怎样都无法访问；
//		b = 10000;
//	}
//};
//
//int main()
//{
//	return 0;
//}
