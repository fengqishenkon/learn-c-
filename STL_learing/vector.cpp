#define _CRT_SECURE_NO_WARNINGS 
#include<string>
#include<vector>
#include<iostream>
#include<algorithm> //标准算法的头文件
using namespace std;




void myPrint(int val)
{
	cout << val << endl;
}


//vector存放内置数据类型的容器
void test_string8()
{
	//vector存放内置数据类型的容器 
	vector<int> v;

	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);


	// 通过迭代器访问容器中的数据类型  类似于指针
	// 每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
	//vector<int>::iterator itBegin = v.begin();//起始迭代器  指向容器中第一个元素的位置
	//vector<int>::iterator itEnd = v.end(); //结束迭代器，指向容器中最后一个元素的下一个位置

	////第一种遍历方式
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//第二种遍历方式
	for (vector<int>::iterator itBegin = v.begin(); itBegin < v.end(); itBegin++)
	{
		cout << *itBegin << endl;
	}

	//第三种遍历方式 利用STL提供的遍历算法
	//for_each()可以直接便利容器中的数据
	for_each(v.begin(), v.end(), myPrint);
}

void test_string9()
{
	//vector容器存放的是自定义数据类型
	class person
	{

	public:
		person(string name, int age)
		{
			this->name = name;
			this->age = age;
		}
		string name;
		int age;
	};

	//容器声明
	vector<person> v;

	//person对象
	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);

	//向容器里添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	


	// 通过迭代器访问容器中的数据类型  类似于指针
	// 每一个容器都有自己的迭代器，迭代器是访问容器中的元素

	for (vector<person >::iterator itBegin = v.begin(); itBegin!=v.end(); itBegin++)
	{
		cout << "名字::" << (*itBegin).name << "年龄：" << (*itBegin).age << endl;
		cout << "名字：" << itBegin->name << "年龄：" << itBegin->age << endl;
	}
	//构造函数
	//访问构造函数的方式


}

void test_string10()
{

	//vector容器存放的是自定义数据类型
	class person
	{

	public:
		person(string name, int age)
		{
			this->M_name = name;
			this->M_age = age;
		}
		string M_name;
		int M_age;
	};

	//容器声明
	vector<person *> v;


	//person类对象
	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);


	//向容器插入
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);


	//迭代器类似于指针
	for (vector<person *>::iterator itBegin = v.begin(); itBegin != v.end(); itBegin++)   //vector<person*>::iterator itBegin = v.begin(); //itBegin是起始迭代器  指向容器中第一个元素的位置
	{
		cout << "名字::" << (*itBegin)->M_name << "年龄：" << (*itBegin)->M_age << endl;
	}

}



int main()
{
   //test_string8();
   //test_string9();
	test_string10();

	return 0;
}