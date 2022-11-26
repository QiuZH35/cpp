
#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include <thread>
#include <Windows.h>
#include <cstdlib>
//
using namespace std;
//void test()
//{
//	int i = 0;
//	while (1)
//	{
//		cout << ++i << endl;
//		Sleep(1000);
//	}
//}
//void main()
//{
//	thread *p(new thread(test));
//
//
//	system("pause");
//
//
//	system("pause");
//
//	system("pause");
//
//}







//多线程
//struct Mystruct
//{
//	Mystruct()
//	{
//		cout << " create" << endl;
//	}
//	
//	~Mystruct()
//	{
//		cout << "end" << endl;
//	}
//	void operator()()//对象名当作函数名使用，（）只适用于当前结构体使用
//	{
//		MessageBoxA(0, "ABCDEF", "123", 0);
//	}
//};
//
//void main()
//{
//	Mystruct go1;
//	thread t1(go1);
//	
//	Mystruct go2;
//	thread t2(go2);
//	thread t3(Mystruct());//不适合作为多线程参数，销毁太快
//
//	Mystruct()();//构造函数，会创建一个临时对象，匿名对象
//
//	//Mystruct *p = new Mystruct();//Mystruct()为构造函数，返回
//	cin.get();
//}
