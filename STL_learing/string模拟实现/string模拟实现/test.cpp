#define _CRT_SECURE_NO_WARNINGS 
//#include<iostream>
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
		std::string s1("hello world");
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

		s1 += 'h';

		s1 += '\0';
		s1 += '\0';
		s1 += '!';
		s1 += "yyyyyyyyyyyyyyyyyyyyyyyyyyy";
		cout << s1 << endl;
		cout << s1.c_str() << endl;

	}

	void test_string3()
	{
		/*string s1 = "hello world";
		s1.insert(1, 'a');
		cout << s1 << endl;

		string s2 = "hello world";

		
		s2.insert(11, "xxx");
		cout << s2 << endl;

		s2.erase(7);

		*/

		string s3 = "hello world";
		s3.erase(7);
		//cout << s3 << endl;

		string s4 = "hello world";
		s4.erase(7, 3);
		//cout << s4 << endl;

		string s5 = "hello world";
		s5.pop_back();
		cout << s5 << endl;

		/*string s6;
		s6.pop_back();*/

	}

}



int main()
{
	//lzq::test_string1();	
	//lzq::test_string2();
	//std::cout << typeid(lzq::string::iterator).name() << std::endl;
	//std::cout << typeid(std::string::iterator).name() << std::endl;//vs里面的iterator是一个类，具体比价复杂。不是所有的iterator的实现都是指针
	lzq::test_string3();

	return 0;
}

