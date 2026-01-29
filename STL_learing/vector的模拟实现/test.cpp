#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
#include "vector.h"  
#include<initializer_list>

using namespace lzq;

void Printf(const vector<int>& v)
{
	for (const auto& a : v)
	{
		std::cout << a <<" ";
	}

     std::cout << std::endl;
}

void vector_test()
{	
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);



	Printf(v);

	//v.pop_back();

	v.insert(v.begin(), 17);
	Printf(v);
}


int main()
{

	vector_test();
	return 0;
}
