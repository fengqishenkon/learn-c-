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

	void test_string2()
	{
		string s1("hello world");
		/*string::const_iterator it1 = s1.begin();
		while (it1 != s1.end())
		{
			std::cout << *it1 << " ";
			++it1;
		}
		std::cout << std::endl;*/
		/*s1.push_back('y');
		std::cout << s1.size() << std::endl;
		std::cout << s1.size() << std::endl;
		std::cout <<s1.c_str()<< std::endl;*/

		s1.append("yyyyyy");
		//std::cout << s1.c_str()<< std::endl;
		

		s1+="sss";
		std::cout << s1.c_str() << std::endl;

		s1 += 'z';
		std::cout << s1.c_str() << std::endl;
	}
}



int main()
{
	//lzq::test_string1();	
	lzq::test_string2();
	//std::cout << typeid(lzq::string::iterator).name() << std::endl;
	//std::cout << typeid(std::string::iterator).name() << std::endl;//vs里面的iterator是一个类，具体比价复杂。不是所有的iterator的实现都是指针
	return 0;
}

