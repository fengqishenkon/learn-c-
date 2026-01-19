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

	void split_url(const string& url)
	{
		size_t i1 = url.find(':');
		if (i1 != string::npos)
		{
			cout << url.substr(0, i1) << endl;
		}

		size_t i2 = i1 + 3;
		size_t i3 = url.find('/', i2);
		if (i3 != string::npos)
		{
			cout << url.substr(i2, i3 - i2) << endl;
			cout << url.substr(i3 + 1) << endl;
		}
		cout << endl;
	}


	void test_string4() 
	{
		string url1 = "https://yuanbao.tencent.com/chat/naQivTmsDa/7cbdacda-ee7f-4870-8414-d54310173f90";
		string url2 = "https://search.bilibili.com/all?vt=68741374&keyword=c%2B%2B%E6%B5%85%E6%8B%B7%E8%B4%9D%E6%B7%B1%E6%8B%B7%E8%B4%9D&from_source=webtop_search&spm_id_from=333.1007&search_source=5";

		split_url(url1);
		split_url(url2);
	}


	void test_string5()
	{
		string s1("abc");
		string s2("abc");

		string s3("abcd");
		string s4("abc");

		string s5("abc");
		string s6("abcd");
		
		cout << (s1 == s2)<<endl;
		cout << (s3 > s4) << endl;
		cout << (s5 < s6) << endl;

	}

	void test_string6()
	{
		string s1("abc");
		string s2("123");
		cin >> s1>>s2;
		cout << s1 << s2 << endl;
	}
}



int main()
{
	//lzq::test_string1();	
	//lzq::test_string2();
	//std::cout << typeid(lzq::string::iterator).name() << std::endl;
	//std::cout << typeid(std::string::iterator).name() << std::endl;//vs里面的iterator是一个类，具体比价复杂。不是所有的iterator的实现都是指针
	//lzq::test_string3();
	//lzq::test_string4();
	lzq::test_string6();

	return 0;
}

