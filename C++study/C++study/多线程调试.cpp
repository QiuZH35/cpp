
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







//���߳�
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
//	void operator()()//����������������ʹ�ã�����ֻ�����ڵ�ǰ�ṹ��ʹ��
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
//	thread t3(Mystruct());//���ʺ���Ϊ���̲߳���������̫��
//
//	Mystruct()();//���캯�����ᴴ��һ����ʱ������������
//
//	//Mystruct *p = new Mystruct();//Mystruct()Ϊ���캯��������
//	cin.get();
//}
