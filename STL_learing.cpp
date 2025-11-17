#define _CRT_SECURE_NO_WARNINGS 
#include<string>
#include<iostream>
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
	//s1[0]++;
	//cout << s1 << endl;
	for (int i = 0; i < s1.size(); i++)//s1.size() == s1.length();
	{
		s1[i]++;
	}
	cout << s1 << endl;
}


int main()
{
	
	test_string2();

	return 0;
}

