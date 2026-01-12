#define _CRT_SECURE_NO_WARNINGS 
#pragma one
#include<iostream>
#include<string.h>
#include<assert.h>
using namespace std;
namespace lzq
{
	class string
	{
	public:


		//指向对象可以修改的迭代器 
		typedef char* iterator;
		iterator begin();
		iterator end();

		//指向对象不能修改的迭代器
		typedef const char* const_iterator;
		const_iterator  begin() const;
		const_iterator end() const;


		//string();
		string(const char* str="");//构造	
		const char* c_str() const ;//目的是让c++的输出流可以理解
		~string(); //析构


		size_t size() const;//size()函数，用来计算字符串的实际大小

		char& operator[](size_t i);//operator是重载[]运算符，用来访问字符串中指定位置字符。传入下标i，返回对应位置字符，
		const char& operator[](size_t i) const;//非const版本返回char&可修改，const版本返回const char&只能读取 。
		string& operator+=(char ch);//重载+=
		string& operator+=(const char* str ) ;//只能读
		ostream& operator<<(ostream& out, const string& s);



		void push_back(char h);//在字符串末尾加上一个字符
		void append(const char* str);//在字符串末尾加上一个另外一个字符串
		void reserve(size_t n);//把容量扩大到n


	private:
		char* _str;//数组存放的位置的地址（杯子本身）
		size_t _size;//杯子实际盛水量
		size_t _capacity;//杯子的容量
	};
}
