#define _CRT_SECURE_NO_WARNINGS 
#include<string>
#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;


//常见string类型
void test_string1()
{
	string s1;
	string s2("hello world");
	string s3(s2);
	string s4(s2, 1, 6);//为什么数组是以0开始，比如int a[100]; a[i]本质是转换为 *(a+i);要是，不是从0开始从1开始，那么数组的第一个元素*(a+1);a是数组首元素的地址，a+1就是第二个元素的地址了，与本来的意思对不上，所以下标应该从0开始。
	string s5(s2, 1, 60);
	string s6(s2, 1);

	const char* str = "hello world";
	char str1[] = "hello world";
	string s7(str, 5);
	string s8(str1, 5);
	string s9(100, '&');


	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
	cout << s6 << endl;
	cout << s7 << endl;
	cout << s8 << endl;
	cout << s9 << endl;

	s1 = s2;
	s1 = "xxx";
	s1 = "x";


}


//operator[]
void test_string2()
{
	string s1("hello world");
	const string s2("hello world");
	//下标+[] （非主流方式的遍历+修改方式）
	//s1[0]++;
	//cout << s1 << endl;
	for (int i = 0; i < s1.size(); i++)//s1.size() == s1.length();
	{
		s1[i]++;
	}
	cout << s1 << endl;

	//迭代器（所有容器主流遍历+修改的方式）   是一个像指针的东西 
	//s1的每个字符都--
	string::iterator it1 = s1.begin();  //begin()字符串开始的位置
	while (it1 != s1.end())             //end()字符串结尾的下一个位置
	{
		(*it1)--;//迭代器里面的值 ++

		++it1;//迭代器本身向前走
	}
	cout << s1 << endl;

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::iterator it2 = v.begin();
	while (it2 != v.end())
	{
		cout << *it2 << " ";
		++it2;
	}
	cout << endl;

	list<double> l;
	l.push_back(1.2);
	l.push_back(2.3);
	l.push_back(3.4);	
	list<double>::iterator it3 = l.begin();
	while (it3 != l.end())
	{
		cout << *it3 << " ";
		++it3;
	}
	cout << endl;

	//using reverse //反向迭代器  支持从后向前遍历

	//迭代器的意义：
	//1、统一类似的方法遍历和修改容器
	//2、算法脱离具体底层结构，和底层结构解耦
	//3、算法独立模板、针对多个容器均可使用
	//reverse(s1.begin(), s1.end());
	reverse(v.begin(), v.end());
	reverse(l.begin(), l.end());


	//范围for （c++11标准）  
	// 
	//auto自动推导类型
	auto x = 3;//推导x是int类
	auto y = 1.12;//推导y是double类
	cout << x << endl;
	cout << y << endl;
	

	/*int& z = x;
	auto c = z; //此处是拷贝 c++;后z值不变
	c++;*/  

	int& z = x;
	auto& c = z;  //此处才是引用
	c++;


	//两者都可
	auto p1 = x;
	auto p2 = &x;
	//只能传指针	
	auto* p3 = &x;


	//自动取容器数据(s1的数据)赋值给e
	//自动判断结束
	//自动迭代
	for (auto e : s1)
	{
		cout << e << " ";
	}
	cout << endl;

	for (auto& e : s1)
	{
		++e;
	}
	cout << endl;
	//auto e : s1 其本质是  auto e = *(迭代器)；所以要修改的话需要加引用 auto& e


	for (auto e : s1)
	{
		cout << e << " ";
	}
	cout << endl;

	for (auto& e : s1)
	{
		cout << ++e << " ";
	}
	cout << endl;
}
void test_string3()
{
	string s1("123456");
	string s2("hello world");
	string::iterator it1 = s1.begin();
	while (it1 != s1.end())
	{
		(*it1)--;
		++it1;
	}
	cout << s1 << endl;

	string::const_iterator it2 = s2.begin();//const_iterator 修饰的迭代器指向的数据不能修改
	while (it2 != s2.end())
	{
		//(*it2)--;//指向的数据本身不能修改
		++it2;    //但指针本身可以修改
	}

	//反向迭代器
	string::reverse_iterator it3 = s1.rbegin();//rbegin()是指向数组结尾的最后一个字符及/0之前的字符
	while (it3 != s1.rend())//rend()是指向数组开始的前一个字符。反向迭代器是从后面往前面开始迭代器的。
	{
		cout << *it3 << " ";
		++it3;
	}
	cout << endl;

	string::const_reverse_iterator it4 = s2.rbegin();
	while (it4 != s2.rend())
	{
		//(*it4)++;//const修饰的迭代器，不能修改
		cout << *it4 << " ";
		++it4;
	}

	


}

void test_string4()
{
	string s1("123456");
	cout << s1.max_size() << endl;

	//大小均不包含\0
	cout << s1.capacity() << endl;
	cout << s1.size() << endl;



	//capacity在内存中的扩容方式
	string s2;
	size_t old = s2.capacity();
	cout << "old:" << old << endl;
	for (int i = 0; i < 100; i++)
	{
		s2.push_back('x');
		if (old != s2.capacity())
		{
			cout << "s2.capacity:" << s2.capacity()<<endl;
			old = s2.capacity();
		}
	}
	
	cout << s1 << endl;
	s1.clear();
	cout << s1 << endl;


	//clear  不会缩容，只会把里面的数据删掉,缩容要重新开空间，代价很大 
	cout << "size:" << s2.size() << endl;
	cout << "capacity:" << s2.capacity() << endl;

	//s2.clear();

	for (size_t i = 0; i < 50; i++)
	{
		s2.pop_back();
	}

	s2.shrink_to_fit();//缩容，但缩容后的值>=size的大小
	cout << "size:" << s2.size() << endl;
	cout << "capacity:" << s2.capacity() << endl;

}

int main()
{
	
	//test_string2();
	//test_string3();
	test_string4();


	return 0;
}

