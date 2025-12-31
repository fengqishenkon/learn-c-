//#define _CRT_SECURE_NO_WARNINGS 
//#include<iostream>
//using namespace std;
//
//class AbstractDrinking
//{
//public:
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void PowerInCup() = 0;
//	virtual void PutSomething() = 0;
//
//	//ÖÆ×÷ÒûÆ·
//	void MakeDrink()
//	{
//		Boil();
//		Brew();
//		PowerInCup();
//		PutSomething();
//	}
//};
//
//class Tea :public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "É½ÈªË®" << endl;
//	}
//
//	virtual void Brew()
//	{
//		cout << "²èÒ¶" << endl;
//	}
//
//	virtual void PowerInCup()
//	{
//		cout << "²è±­" << endl;
//	}
//
//	virtual void PutSomething()
//	{
//		cout << "ÄûÃÊ" << endl;
//	}
//
//};
//
//class Coffee :public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "ÈªË®" << endl;
//	}
//
//	virtual void Brew()
//	{
//		cout << "¿§·È" << endl;
//	}
//
//	virtual void PowerInCup()
//	{
//		cout << "²£Á§±­" << endl;
//	}
//
//	virtual void PutSomething()
//	{
//		cout << "ÌÇºÍÅ£ÄÌ" << endl;
//	}
//
//};
//
//void domakedrink(AbstractDrinking* abc)
//{
//	abc->MakeDrink();
//	delete abc;
//}
//
//void test1()
//{
//	//Tea t;
//	//domakedrink(new Tea);
//	domakedrink(new Coffee);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
