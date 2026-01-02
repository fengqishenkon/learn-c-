//#define _CRT_SECURE_NO_WARNINGS 
//#include<iostream>
//#include<string>
//using namespace std;
//
////各个零件的类
////CPU类
//class CPU
//{
//public:
//	virtual void calculate() = 0;
//};
//
////VideoCard类
//class VideoCard
//{
//public:
//	virtual void diaplay() = 0;
//};
//
////Memory类
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//
////电脑类
////每个零件的工作接口
//class Computer
//{
//public:
//	Computer(CPU* cpu,VideoCard* vc,Memory* mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//
//	//工作函数
//	void work()
//	{
//		m_cpu->calculate();
//		m_vc->diaplay();
//		m_mem->storage();
//	}
//
//	~Computer()
//	{
//		//释放CPU零件
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//
//		//释放VideoCard零件
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//
//		//释放m_mem零件
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//private:
//	CPU* m_cpu;
//	VideoCard* m_vc;
//	Memory* m_mem;
//};
//
//
////具体厂商
////intel
////具体厂商各个零件工作的实现
//class intelCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "intelCPU开始计算了" << endl; 
//	}
//};
//
//class intelVideoCard :public VideoCard
//{
//public:
//	virtual void diaplay()
//	{
//		cout << "intelVideoCard开始显示" << endl;
//	}
//};
//
//
//class intelMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "intelMemory开始存储" << endl;
//	}
//};
//
//
//
//void test01()
//{
//	//第一台电脑intel零件  
//	CPU* IntelCPU = new intelCPU;
//	VideoCard* Intelvideocard = new intelVideoCard;
//	Memory* IntelMemory = new intelMemory;
//
//	//第一台电脑
//	Computer* computer1 = new Computer(IntelCPU, Intelvideocard, IntelMemory);
//	computer1->work();
//	delete computer1;	
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}
//
//
