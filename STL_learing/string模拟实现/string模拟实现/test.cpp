#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include"string.h"
namespace lzq
{
	void test_string1()
	{
	    string s1("abcd");
		//std::cout << s1.c_str() << std::endl;
		
		string s2("hello world");
		std::cout << s2.c_str() << std::endl;

		for (size_t i = 0; i < s2.size(); ++i)
		{
			s2[i]++;
		}
		//std::cout<<s2
		std::cout << s2.c_str() << std::endl;

		for (auto ch : s2)
		{
			std::cout << ch << "PP";
		}
		std::cout << std::endl;

		string::iterator it1 = s1.begin();
		while (it1 != s1.end())
		{
			std::cout << *it1 << " ";
			++it1;
		}
		std::cout << std::endl;
	}
}

int main()
{
	lzq::test_string1();	
	return 0;
}

