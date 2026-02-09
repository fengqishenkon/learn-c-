#define _CRT_SECURE_NO_WARNINGS 
#include<list>
#include<vector>
#include<iostream>
using namespace std;
void test_list1()
{
	list<int> lt4 = { 1,2,3,4,5,6,7,7,7 };
	list<int>::iterator it4 = lt4.begin();
	while (it4 != lt4.end())
	{
		cout << *it4 << " ";
		++it4;
	}
	cout << endl;
}



int main()
{
	test_list1();
	return 0;
}

