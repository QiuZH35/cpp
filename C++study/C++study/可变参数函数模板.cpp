
#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
#include <cstdarg>

using namespace std;
//template <class T>//����һ�µ����
//T add(int n, T t...)//��һ����ʾ���ٸ������� ...��ʾ�ɱ����
//{
//	cout << typeid(T).name() << endl;
//	va_list  arg_ptr;//��ͷָ��
//	va_start(arg_ptr, n);//arg_ptr,��ʼ�Ӷ�ȡN��
//	T res(0);//��ʼ��Ϊ0
//	for (int i = 0; i < n; i++)
//	{
//		res += va_arg(arg_ptr, T);//������������ȡ������
//	}
//	va_end(arg_ptr);//����
//	//cout << res << endl;
//	return res;
//}
//int main1()
//{
//	cout << add(3, 1, 2, 3) << endl;//����N�����ݵĺ�
//	cout << add(5, 3, 4, 5, 6, 7) << endl;
//	cout << add(3, 12.1, 11.1, 13.1) << endl;
//
//	cin.get();
//	return 0;
//}


//void show()//�����ݹ�
//{
//	//�ݹ���Ҫ������
//}
////�������Ͳ�һ�£�������ȷ��
//template <typename T,typename...Args>//typename...Args�ɱ����
//void show(T t, Args...args)
//{
//	cout << t << endl;//��ӡ
//	show(args...);//����ʡ��...
//}
//void main()
//{
//	show(1, 2, 'A', "class1");
//
//}




//#include <iostream>
//using namespace std;
// 
////Ĭ�ϲ���
////C����û��Ĭ�ϲ�����
////Ĭ�ϲ������ұ߿�ʼ��������ջ���������󡣲�Ĭ�ϵĲ���������ߣ�Ĭ�ϵĶ����ұ�
//int show(int a,int b,int c=1,int d=1)
//{
//	return a + b + c+d;
//}
//int main()
//{
//	cout << show(1, 2) << endl;
//	cout << show(1, 2, 3, 4) << endl;
//	return 0;
//}
