#define _CRT_SECURE_NO_WARNINGS  

#include<iostream>
using namespace std;

//
//
//int main()
//{
//	int x = 0;
//	int& r1 = x;
//	//ָ������ò��漰��Ȩ�޵ķŴ����С
//	const int y = 1;
//	//Ȩ�޲��ܷŴ�
//	//int& r2 = y;//Ҫ�������Ļ���Ȼy���ܱ��޸ģ�����r2�ǿ��Ա�ȡ�����ġ�
//
//	const int& r2 = y;//�����Ļ�r2Ҳ�������޸��ˡ�
//
//
//	int z = 2;
//	int& r3 = z;
//	//Ȩ�޿�����С
//	const int& r4 = z;
//
//
//	// const int h = 3;  �����һ�������ʽ int const h=3;  �﷨����һ����
//	//ͬ�� const int& h=y;  ��ͬ��int const& h=y;
//	
//	int z = y;//�˴��ǿ��Եģ��˴���z = y;ֻ�ǰ�y��ֵ��ֵ��z;
//
//	const int* p1 = &y;
//	//Ȩ�޲��ܷŴ�
//	//int* p2 = p1;
//	const int* p2 = p1;
//
//	int* p3 = &z;
//	//Ȩ�޿�����С
//	const int* p4 = p3;
//	return 0;
//}


//ʵ��һ��ADD�꺯���ó�������

//#define ADD(int a,int b) return a+b;  //���У���ı������滻����ǰ����ú�����滻��
//#define ADD(a,b) a+b
//#define ADD(a,b) a+b;
//#define ADD(a,b) (a+b)
#define ADD(a,b) ((a)+(b))

int main()
{

	//#define ADD(a,b) a+b
	//int ret = ADD(1, 2) * 5;// 1+2*5;
	
    //#define ADD(a,b) a+b;
	//int ret = ADD(1, 2);//1+2;;

    //#define ADD(a,b) (a+b)
	//int ret2 = ADD(x|y,x&y); //(x|y + x&y); �˴���+���ȼ���ߣ�| �� &�����ȼ���֮;

    //#define ADD(a,b) ((a)+(b))
	int x = 1, y = 2;
	int ret3 = ADD(x|y, x&y);// ((1|2)+(1&2));

	cout << ret3 << endl;


	return 0;
}