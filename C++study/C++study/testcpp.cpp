
#define _CRT_SECURE_NO_WARNINGS 

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//	int num = 100;
//	int *p1 = &num;
//
//	//char *p2 = p1;//c++ 类型检测严格，精准，强弱类型
//
//	int *p2(p1);//()初始化  =赋值
//	return 0;
//}

//int main()
//{
//	int a[5]{ 1,2,3,4,5 };
//	for(int i=0;i<5;i++)
//	{
//		cout << a[i] << endl;
//	}
//	return 0;
//}

//int main()
//{
//	char arr[100]{ 0 };
//	cin >> arr;
//	cout << arr;
//	system(arr);
//	//C++重定向   >重写  >>追加    < <<输入
//
//}


//add CPP 函数重载
//模板函数的意义,通用，泛型
//调用时编译，不调用不编译
//int add(int a, int b)
//{
//	cout << "int" << endl;
//	return a + b;
//}
//char add(char a, char b)
//{
//	return a + b;
//}
//template<class T>//模板函数
//T add(T a, T b)
//{
//	cout << "T" << endl;
//	return a + b;
//}
//int main()
//{
//	cout << add(1, 2) << endl;//原生函数优先于模板函数
//	cout << add<int>(1, 2) <<endl;//要使用模板函数需要强行<>指定类型
//	cout << add('1', '2') << endl;
//	system("pause");
//}



#include <iostream>
using namespace std;
//namespace string1
//{
//	char str[10]{ "calc" };
//}
//namespace string2
//{
//	char str[10]{ "notepad" };
//}
////命名空间扩展，名称相同，同一个命名空间
////瀑布式开发
//namespace string2
//{
//	char cmd[10]{ "notepad" };
//	void show() {
//		cout << str << endl;
//	}
//}
//
////命名空间 ，可以无限嵌套
//namespace run
//{
//	namespace runit
//	{
//		namespace runintout
//		{
//			int num = 100;
//			void show()
//			{
//				cout << num << endl;
//			}
//		}
//	}
//}
//int main()
//{
//	//system(string2::str);
//	//string2::show;//命名空间函数与变量
//	run::runit::runintout::num = 199;
//	run::runit::runintout::show();
//	system("pause");
//}
//命名空间使用using namespace 直接访问全局变量，并且定义全局变量需要在命名空间定义之后
//内部覆盖外部
//namespace data
//{//命名空间没有私有，全部变量，函数都是公有，可以访问
//	int num=100;
//	namespace run
//	{
//		int num = 10;
//		void show()
//		{
//			cout << num << endl;
//			//cout << :; num << endl;//::num直接访问全局变量，不存在就是0.
//			cout << data::num << endl;
//		}
//	}
//	
//}
//using namespace data;//使用命名空间，直接访问当作全局变量
//int main()
//{
//	num = 10;
//	run::show();
//	cin.get();
//	return 0;
//}


////匿名命名空间等同于全局变量，匿名空间会与全局变量起冲突
//namespace
//{
//	int x = 10;
//
//}
//int main()
//{
//
//	x = 4;
//	cout << x << endl;
//	cin.get();
//}