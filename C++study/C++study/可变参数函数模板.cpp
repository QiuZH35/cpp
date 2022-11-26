
#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
#include <cstdarg>

using namespace std;
//template <class T>//类型一致的情况
//T add(int n, T t...)//第一个表示多少个参数， ...表示可变参数
//{
//	cout << typeid(T).name() << endl;
//	va_list  arg_ptr;//开头指针
//	va_start(arg_ptr, n);//arg_ptr,开始从读取N个
//	T res(0);//初始化为0
//	for (int i = 0; i < n; i++)
//	{
//		res += va_arg(arg_ptr, T);//根据数据类型取出数据
//	}
//	va_end(arg_ptr);//结束
//	//cout << res << endl;
//	return res;
//}
//int main1()
//{
//	cout << add(3, 1, 2, 3) << endl;//计算N个数据的和
//	cout << add(5, 3, 4, 5, 6, 7) << endl;
//	cout << add(3, 12.1, 11.1, 13.1) << endl;
//
//	cin.get();
//	return 0;
//}


//void show()//结束递归
//{
//	//递归需要结束符
//}
////参数类型不一致，个数不确定
//template <typename T,typename...Args>//typename...Args可变参数
//void show(T t, Args...args)
//{
//	cout << t << endl;//打印
//	show(args...);//不能省略...
//}
//void main()
//{
//	show(1, 2, 'A', "class1");
//
//}




//#include <iostream>
//using namespace std;
// 
////默认参数
////C语言没有默认参数，
////默认参数从右边开始，参数进栈，从右向左。不默认的参数都在左边，默认的都在右边
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
