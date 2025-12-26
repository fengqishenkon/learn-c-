//#define _CRT_SECURE_NO_WARNINGS 
//#include<iostream>
//using namespace std;
//
//
//
////虚继承：解决"重复继承"的问题
//class animal
//{
//public:
//	int age;	
//};
//
////虚继承
//class sheep : public animal{};
//
//class tuo: public animal{};
//
//class sheeptuo :public sheep, public tuo{};
//
//void test()
//{
//	sheeptuo st;
//	st.sheep::animal::age = 28;
//	st.tuo::animal::age = 16;//当不是虚继承的时候，这次的为age的赋值不会覆盖上面的age的值，因为修改的是不同内存位置的age的值
//	//当发生虚继承之后这里的数据就只有一个了，上面是28，下面把age的值改为了28
//	cout << st.sheep::age << endl;
//	cout << st.tuo::age << endl;
//}
//
//int main()
//{
//
//	test();
//	return 0;
//}



//解决菱形问题的另外一种理解办法

//// 普通继承（有问题）

//class A { int data; };
//
//class B : public A { };       // B有自己的A副本
//class C : public A { };       // C有自己的A副本
//class D : public B, public C { };  // D中有两份A的副本！
//
//// 使用时会有二义性
//D d;
//// d.data = 10;  // 错误：不知道是B的data还是C的data
//d.B::data = 10;  // 必须指定路径
//d.C::data = 20;  // 这是两个不同的data

//// 虚继承（解决问题）
//class A { int data; };
//
//class B : virtual public A { };  // virtual修饰继承关系
//class C : virtual public A { };  // virtual修饰继承关系
//class D : public B, public C { };
//
//// 现在D中只有一份A的副本
//D d;
//d.data = 10;  // 正确！没有二义性
