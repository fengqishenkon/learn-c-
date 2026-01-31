#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
#include "vector.h"  

//using namespace std;
using namespace lzq;


// ·ºÐÍ º¯ÊýÄ£°å

//template<class Container>
template<class T>
void Printf(const T& v)
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
	v.insert(v.begin() + 2, 17);


	auto it = std::find(v.begin(), v.end(), 3);
	if (it != v.end())
	{
		v.insert(it, 10);

	}

	Printf(v);

}


void vector_test2()
{
	vector<int> v;
	vector<int> v2 = { 1,2,3,4 };
	vector<int> v3(v2.begin(), v2.end());
	vector<int>v4(4, 7);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	v = v2;

	Printf(v);

	//int i;
	//std::cin >> i;
	//auto it = std::find(v.begin(), v.end(), i);

	//v.erase(it);

	v.resize(7);
	v.resize(20,7);

	//Printf(v);

}



int main()
{

	//vector_test();
	vector_test2();

	return 0;
}
