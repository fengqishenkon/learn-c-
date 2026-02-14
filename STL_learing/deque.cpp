#define _CRT_SECURE_NO_WARNINGS 

#include<deque>
#include<iostream>
#include<algorithm>
using namespace std;

void printfDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); ++it)//只读迭代器
	{
		//*it = 100;
		cout << *it << ' ';
	}
	cout << endl;
}

void test1()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	//printDeque(d1);

	deque<int> d2(d1.begin(), d1.end());
	//printfDeque(d2);

	deque<int>d3(10, 100);
	//printfDeque(d3);

	deque<int>d4(d3);
	//printfDeque(d4);

	deque<int>d5;
	d5 = d4;
//	printfDeque(d5);

	deque<int>d6;
	d6.assign(d5.begin(), d5.end());
	//printfDeque(d6);


	deque<int>d7;
	d7.assign(10, 50);
	printfDeque(d7);

	if (d7.empty())
	{
		cout << "d7为空" << endl;
	}
	else
	{
		cout << "d7不为空" << endl;
	}

	cout << d7.size() << endl;

	//d7.resize(15);
	//printfDeque(d7);
	d7.resize(15,2);
	printfDeque(d7);

	d7.insert(d7.begin(), 1000);
	printfDeque(d7);

	d7.push_front(20);
	d7.push_back(30);
	printfDeque(d7);

	d7.erase(d7.begin());
	printfDeque(d7);

	deque<int>::iterator it = d7.begin();
	it++;
	d7.erase(it);
	printfDeque(d7);
	cout << d7.front() << endl;
	cout << d7.back() << endl;
	deque<int> d8;
	d8.push_front(89);
	d8.push_front(56);
	d8.push_front(14);
	d8.push_front(17);
	d8.push_front(5);
	sort(d8.begin(), d8.end());

	printfDeque(d8);



}


int main()
{

	test1();
	return 0;
}



