#define _CRT_SECURE_NO_WARNINGS  

#include<iostream>
using namespace std;



int main()
{
	int x = 0;
	int& r1 = x;
	//ָ������ò��漰��Ȩ�޵ķŴ����С
	const int y = 1;
	//Ȩ�޲��ܷŴ�
	//int& r2 = y;//Ҫ�������Ļ���Ȼy���ܱ��޸ģ�����r2�ǿ��Ա�ȡ�����ġ�

	const int& r2 = y;//�����Ļ�r2Ҳ�������޸��ˡ�


	int z = 2;
	int& r3 = z;
	//Ȩ�޿�����С
	const int& r4 = z;


	// const int h = 3;  �����һ�������ʽ int const h=3;  �﷨����һ����
	//ͬ�� const int& h=y;  ��ͬ��int const& h=y;
	
	int z = y;

	const int* p1 = &y;
	//Ȩ�޲��ܷŴ�
	//int* p2 = p1;
	const int* p2 = p1;

	int* p3 = &z;
	//Ȩ�޿�����С
	const int* p4 = p3;
	return 0;
}