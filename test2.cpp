#define _CRT_SECURE_NO_WARNINGS  

#include<iostream>
using namespace std;

//
//
//int main()
//{
//	int x = 0;
//	int& r1 = x;
//	//指针和引用才涉及到权限的放大和缩小
//	const int y = 1;
//	//权限不能放大
//	//int& r2 = y;//要是这样的话虽然y不能被修改，但是r2是可以被取别名的。
//
//	const int& r2 = y;//这样的话r2也不可以修改了。
//
//
//	int z = 2;
//	int& r3 = z;
//	//权限可以缩小
//	const int& r4 = z;
//
//
//	// const int h = 3;  另外的一个表达形式 int const h=3;  语法上是一样的
//	//同理 const int& h=y;  等同于int const& h=y;
//	
//	int z = y;//此处是可以的，此处的z = y;只是把y的值赋值给z;
//
//	const int* p1 = &y;
//	//权限不能放大
//	//int* p2 = p1;
//	const int* p2 = p1;
//
//	int* p3 = &z;
//	//权限可以缩小
//	const int* p4 = p3;
//	return 0;
//}


//实现一个ADD宏函数得常见问题

//#define ADD(int a,int b) return a+b;  //不行，宏的本质是替换，把前面的用后面的替换掉
//#define ADD(a,b) a+b
//#define ADD(a,b) a+b;
//#define ADD(a,b) (a+b)
#define ADD(a,b) ((a)+(b))

int main()
{

	//#define ADD(a,b) a+b
	//int ret = ADD(1, 2) * 5;// 1+2*5;
	
    //#define ADD(a,b) a+b;
	//int ret = ADD(1, 2);//1+2;;

    //#define ADD(a,b) (a+b)
	//int ret2 = ADD(x|y,x&y); //(x|y + x&y); 此处的+优先级最高，| 和 &的优先级次之;

    //#define ADD(a,b) ((a)+(b))
	int x = 1, y = 2;
	int ret3 = ADD(x|y, x&y);// ((1|2)+(1&2));

	cout << ret3 << endl;


	return 0;
}