#define _CRT_SECURE_NO_WARNINGS 
#include<list>
#include<vector>
#include<iostream>
using namespace std;
void test_list1()
{
	list<int> lt4 = { 1,2,3,4,5,6,7,7,7 };
	//list<int>::iterator it4 = lt4.begin();
	/*while (it4 != lt4.end())
	{
		cout << *it4 << " ";
		++it4;
	}
	cout << endl;*/


	//把5转移到头部
	auto it = find(lt4.begin(), lt4.end(), 5);
	lt4.splice(lt4.begin(), lt4, it);
	for (auto e : lt4)
	{
		cout << e << " ";
	}
	cout << endl;
}



int main()
{
	test_list1();
	return 0;
}

