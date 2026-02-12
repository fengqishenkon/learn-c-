#define _CRT_SECURE_NO_WARNINGS 

#include<deque>
using namespace std;
void test1()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

}


int main()
{

	test1();
	return 0;
}



