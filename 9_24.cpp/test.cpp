//#define _CRT_SECURE_NO_WARNINGS 
//
//#include<iostream>
//using namespace std;
////全缺省
//void Func(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "c= " << c << endl<<endl;
//}
//
////半缺省
//void Func2(int a, int b = 10, int c = 20)
//{
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "c= " << c << endl<<endl;
//}
//
////函数重载
////可以出现同名函数，但是要求函数的形参不同
////void swap(int* p1, int* p2)
////{
////
////}
////
////void swap(double* p1, double* p2)
////{
////
////}
////void f()
////{
////
////}
////void f(int a)
////{
////
////}
//
//void swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//void swap(int& p1, int& p2)
//{
//	int tmp = p1;
//	p1 = p2;
//	p2 = tmp;
//}
//
//void LisPushBack(PNode& phead, int x) //void ListPushBack(LTNode*& phead,int x);
//{
//
//}
//
//int main()
//{
//	SLT s;
//	SeqPushBack(s, 1);
//	/*Func();
//
//	Func(1);
//
//	Func(1,2,3);*/
//
//	//Func2(30,20,199);
//	//int x1 = 1, x2 = 2;
//	//double d1 = 1.1, d2 = 2.2;
//	//swap(&x1, &x2);
//	//swap(&d1, &d2);
//	//int a = 10;
//	//int& b = a;
//	//cout << &a << endl;
//	//cout << &b << endl;
//	//
//	//cout << a << endl;
//	//cout << b << endl;
//
//	////引用不会改变指向，此处的b=x只是把x的值赋值给b；
//	//int x = 20;
//	//b = x;
//	//cout << &b << endl;
//	//cout << a << endl;
//	//cout << b << endl;
//
//	/*int& c = a;
//	int& d = b;
//	cout << &c << endl;
//	cout << &d << endl;*/
//	//cout << c << endl;
//
//	/*int x = 1, y = 2;
//	swap(&x, &y);
//	swap(x, y);*/
//	/*int x = 10, y = 12;
//	int* px = &x, * py = &y;*/
//	//int*& rpx = px;
//
//
//	return 0;
//}

//
//int& fun()
//{
//	int ret = 10;
//	return ret;
//}
//
//
//int& fxx()
//{
//	int xxx = 1000;
//	return xxx;
//}
//
//int main()
//{
//	int& x = fun();
//	cout << x << endl;
//
//	fxx();
//	cout << x << endl;
//
//	return 0;
//}