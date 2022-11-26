#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
using namespace std;
//namespace stdrun
//{
//	int num = 101;
//	void show()
//	{
//		std::cout<< num <<std::endl;
//	}
//}
//
//namespace bobo = stdrun;  //给自定义的别名
//
//namespace doubo = std;//给标准别名
////CPP编译器设置，禁止改变标准
//
//int main()
//{
//	bobo::show();
//	doubo::cout << "hello" << std::endl;
//	return 0;
//}





//using深入
//#include <iostream>

//void run()
//{
//	using namespace std;//等同于局部变量
//	cout << "hello world" << endl;
//}
//
//namespace run1
//{
//	int x = 10;
//	void show()
//	{
//		std::cout << x << std::endl;
//	}
//}
//int main()
//{
//	run();
//	std::cout << "hello" << std::endl;
//	using run1::x;
//	using run1::show;//单独引用命名空间的变量或函数；
//	std::cout << x << std::endl;
//	show();
//	return 0;
//}


//全局变量以及using
//#include <iostream>
//using namespace std;
//int a;//CPP没有声明与定义;
//int a=5;
//namespace
//{//一般禁止使用匿名命名空间
//	int a = 10;
//}
//void main()
//{
//	a = 3;
//	::a = 10;引用全局，不包含匿名
//	cout << a << endl;
//}

//using细节
//#include <iostream>
//using namespace std;
//
//namespace data
//{
//	int num = 10;
//	int numx = 100;
//}
//void main()
//{
//	int num = 5;//局部变量覆盖命名空间
//	using namespace data;
//	cout << num << endl;
//	cin.get();
//}


////CPP 全局与局部
//#include <iostream>
//using namespace std;
//
//int num = 100;
//void main()
//{
//	int num = 10;
//	{
//		int num = 20;
//		cout << num << endl;//局部覆盖
//		cout << ::num << endl;//全局
//	}
//	cout << num << endl;
//	cout << ::num << endl;
//	cin.get();
//}


//#include <iostream>
//using namespace std;
//
//namespace stdfun
//{
//	struct data
//	{
//		int a;
//		int b;
//		int getadd()
//		{
//			return a + b;
//		}
//		int getsub();
//	};
//}
//
//int stdfun::data::getsub()//命名空间:: 类型 ::函数名
//{
//	return a - b;
//}
//void main()
//{
//	stdfun::data data1;
//	data1.a = 10;
//	data1.b = 5;
//	cout << data1.getadd() << endl;
//	cout << data1.getsub() << endl;
//	cin.get();
//}


////static extern
//#include <iostream>
//using namespace std;
//
//
////::先是当前文件static，再是跨文件extern 
////匿名结构体等同于全局变量，可以使用 ::屏蔽匿名
//extern int x;//引用外部全局变量
//
//namespace std
//{//解决办法是把它扩展到std;
//	int x = 999;
//}
//void main()
//{
//
//	void test();//声明 
//	test();
//	//cout << std::x << endl;//extern与匿名空间冲突。
//	cin.get();
//}


////typeid
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//void main()
//{//typeid 获取数据类型
//	int a;
//	cout << typeid(a).name() << endl;//int 
//	cout << typeid(10).name() << endl;//int 
//	cout << typeid(10 + 1.2).name() << endl;//double
//	cout << typeid("holle world").name() << endl;//char const [12]
//
//
//	int *px;
//	int *py;
//	if (strcmp(typeid(*px).name(), typeid(*py).name()) == 0)
//	{
//		cout << "==";
//	}
//	else
//	{
//		cout << "!=";
//	}
//	cin.get();
//}




//#include <iostream>
//using namespace std;
//
////auto关键字
////auto 自适应数据类型，自动推理类型
//template <class T1,class T2>
//auto add(T1 t1, T2 t2)
//{
//	return t1 + t2;
//}
// 
//void main()
//{
//	cout << add(10, 5) <<typeid (add(10.2,10)).name()<< endl;
//	cout << add(12.3, 10) << endl;
//	cin.get();
//}




//bool
//bool 一个字节，非零为1，零为0；
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//void main()
//{
//	bool num = 0 && 2 && 3 || 2;
//	while (num)
//	{
//		cout << "holle" << endl;
//	}
//	system("pause");
//}




//decltype
//decltype 根据一个变量获取数据类型，创建数组，创建指针
//#include <iostream>
//using namespace std;
//
//template <class T>
//void show(T *p)
//{
//	//decltype(*p) num(*p);//内存备份
//	//cout << num << endl;
//	//cout << *p << endl;
//	
//	//int a = *p;//数组引用
//	//decltype(a) num[5]{ a,a,a,a,a };
//	//for (auto i : num)
//	//{
//	//	cout << i << endl;
//	//}
//}
//void main()
//{
//	int a = 10;
//	show(&a);
//	cin.get();
//}




//C Cpp 数组之间的区别
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int arr[5] = { 1,2,3,4,5 };//C
//	int arr1[5]{ 1,2,3,4,5 };//Cpp
//
//	int *p = new int[5]{ 1,2,3,4,5 };
//	int *p2(new int[5]{ 1,2,3,4,5 });
//	for (int i = 0; i < 5; i++)
//	{
//		cout << p[i] << endl;
//	}
//	
//
//	//int *p3 = new int [] {1, 2, 3, 4, 5};//Cpp不接受不完整数据类型
//	cin.get();
//}




////C Cpp数组风格
//#include <iostream>
//#include <array>
//using namespace std;
//
//void main1()
//{
//	int a[5];//C风格
//	int b[5][5] = { 0 };//不能用auto 循环
//
//
//	array<int,10>myint1{ 11,2,3,4,5,6,7,8,9,10 };//CPP风格
//	array<int,10>myint2{ 21,2,3,4,5,6,7,8,9,10 };
//	array<int,10>myint3{ 31,2,3,4,5,6,7,8,9,10 };
//	array< array < int, 10>,3 >myint4{myint1,myint2,myint3};//一维数组嵌套成二维数组...三维数组 
//	for (int i = 0; i <3; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << myint4[i][j]<<" ";
//		}
//		cout <<"\n";
//	}
//	for (auto i : myint4)
//	{
//		for (auto j : i)
//		{
//			cout << j << " ";
//		}
//		cout << "\n";
//	}
//
//	cin.get();
//}






//空指针-nullptr
//#include <iostream>
//using namespace std;
//
//void show(int p)
//{
//	cout << "int " << endl;
//}
//void show(int *p)
//{
//	cout << "int * " << endl;
//}
//
//void main()
//{
//	//show(NULL);//C风格的空指针，会被默认为是整数
//	//show(nullptr);//C++风格的空指针
//
//	cout << typeid(NULL).name() << endl;//int 
//	cout << typeid(nullptr).name() << endl;//std::nullptr_t
//	//严格类型匹配
//
//
//
//	int *p1 = NULL;//赋值给p1
//	int *p2 = nullptr;
//	show(p1);
//	show(p2);
//	cin.get();
//}





//别名风格    typedef    using
//#include <iostream>
//using namespace std;
////typedef只能处理C语言
//// 无法处理C++中独有的，命名空间，函数模板，类模板
//
//typedef int a[5];
//int main1()
//{
//	a al;
//	cout << sizeof(al) << endl;
//	return 0;
//}
//
//namespace run
//{
//	int num = 10; 
//}
////typedef afu run;//typedef 无法处理C++中，独有的命名空间
//namespace boer = run;//命名空间需要单独处理
//void main2()
//{
//	run::num = 19;
//	cout << boer::num << endl;
//	system("pause");
//}
//
////template <class T> // typedef T tx;
////void runit(T t)
////{
////	typedef T tx;
////}
//
////一般情况下，原则使用using取代typedef
////typedf 处理不了模板，处理不了命名空间
//
////int num;//定义变量
////using INT=int num;//增加using INT=
////using INT=int;//去掉变量名
//
//typedef double DB;//C
//using DBCPP= double;//C++风格别名
//
//typedef int ab[10];
//using intarray = int[10];
//
//typedef  int(*p)(int n, int m);// 函数指针类型 ，p 函数名
//using pfu = int(*)(int n, int m);//别名， 去掉函数名
//
//typedef int(*p1[5])(int n, int m);
//using pfnum = int(*[5])(int n, int m);//函数指针数组
//
//void main23()
//{
//	cout << typeid(DBCPP).name()<<"  "<<sizeof(DBCPP)<< endl;
//	cout << typeid(DB).name() <<"  "<<sizeof(DB)<< endl;
//	cout << "\n";
//	intarray a2;
//	cout << sizeof(a2) << endl;
//	cin.get();
//}
//模板别名
//#include <iostream>
//using namespace std;
//template<class T> using t = T;
//template<class T> using tp = T * ;
////template<class T> typedef T tpp;
//template <class T>
//T show(T tx)
//{
//	t<int> t1(tx);
//	tp<int> t2(&tx);需要指定类型
//	cout << t1 << "  " << t2 << endl;
//	return t1;
//}
//
//void main()
//{
//	int a = 10;
//	cout << show(a) << endl;
//}
//#include <iostream>
//using namespace std;
////模板的别名，用别名优化模板的名称，只能在类，命名空间，全局使用，不可以再函数内部使用
//template<class T>  
//using tencent = array<T, 10>;//数组模板
//
//void main()
//{
//	using intarray = array<int, 10>;//模板别名，类型明确
//	array<int, 10> myint;
//	intarray myint1;
//
//
//	tencent<int> t1{ 1,2,3,4,5,6,7,8,9,0 };
//	for (auto i : t1)
//	{
//		cout << i << endl;
//	}
//	cin.get();
// }






//auto强化
//#include <iostream>
//using namespace std;

//C++14自动推理返回值,功能最强大，可以任意推理
//C++11需要返回->指定类型
//auto add(int a, int b)//->int   //decltype(a，b)
//{
//	return a+b;
//}
//#include <iostream>
//using namespace std;
//template <class T1,class T2>
//auto add(T1 t1, T2 t2)->decltype(t1+t2)//获取数据类型
//{
//	return t1 + t2;
//}
//void main()
//{
//	cout << add(10, 20) <<endl;
//}

//auto(*f)() ->int(*)();//F是什么
//int(*    (*f)()   )();//返回值函数指针


//auto pf() 3  -> auto(*)(int x) 2  ->  int(*)(int a,int b) 1
//	int(* (*pf(void) )(int x))(int a,int b)
//	
//
//auto pf()->auto(*)(int x)->int(*)(int a,int b)
//{
//	return nullptr;//返回指针
//}

//auto pfu(int a, int b)  3   -> auto(*)()  2  -> int (*)(int, int(*)(int, int)) 1;//指针返回类型推理
//	int(*   (*  pfu(int a,int b )  )()  )(int,int(*)(int int))

//void main()
//{
//	//cout << add(1, 2) << endl;
//
//
//	cin.get();
//}




//收缩转换
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//char ch1(78);//不保证结果正确
//	char ch{ 7700 };//保证数据类型的转换需要收缩转换。赋值时使用大括号{}初始化
//	cout << (int)ch << endl;
//	cin.get();
//}





//C14  二进制
//#include <iostream>
//using namespace std;
//void main()
//{
//	int a = 0b1001;  //二进制写法
//	int b = 0b1010;
//	int as =010;
//	cout << a <<"  "<<b <<as << endl;
//	cin.get();
//}





//constexpr
//#include <iostream>
//using namespace std;
//
////constexpr标志返回值或其他表达式为常量
//constexpr int get()
//{
//	return 5;
//}
//int main()
//{
//	int a[5 + get()];
//	return 0;
//}





//inline
//#include <iostream>
//using namespace std;
//
//namespace all
//{
//	namespace V2014
//	{
//		void fun(int num)
//		{
//			cout << "int " << " V2014" << endl;
//		}
//
//	}
//}
//namespace all
//{
//	//inline 展开在all,默认的版本
//	inline namespace V2015
//	{
//		void fun(int num)
//		{
//			cout << "int " << " V2015" << endl;
//		}
//		void fun(double num)
//		{
//			cout << "double " << " V2015" << endl;
//		}
//	}
//}
//void main()
//{
//	all::V2014::fun(1);//明确调用一个版本
//	all::V2015::fun(1);
//	all::fun(1);//指定默认版本
//
//	system("pause");
//}





//lambda 表达式
//该表达式主要解决代码内嵌，
//[](){}();匿名表达式、[]()->{}()//指定返回值类型
//[]加 =引用，只读， =加mutable，读原本改副本，  &可读可改
//()参数，{}语句的实现，()调用

//#include <iostream>
//#include<array>
//#include <algorithm>//算法头文件
//using namespace std;
//解决函数的怀孕现象
//void main1()
//{
//	[] {cout << "hello "; }();
//
//}
//void main2()
//{
	//auto fun = [] {cout << "hello"; };
	//fun();//调用

	//[] {cout << "hello "; }();//匿名lambda表达式 
	//()调用；{}函数执行体

	//()参数列表，{}函数体，()调用
	//[] (char*str){cout << str << endl; }("huahua");

	//auto fun = [](char*str) {cout << str << endl; };
	//fun("fangfang");
	//cout << typeid(fun).name() << endl;//本质类
	//cout << fun << endl;//lambda不可以直接取地址


	//system("pause");
//}

//void main2()
//{
//	auto fun = [](double a, double b) {return a + b; };
//	cout << fun(19, 29.1) << endl;
//
//	auto fun1 = [](double a, double b)->int {return a + b; };//指定类型 
//	cout << fun1(12.1, 10) << endl;
//	cin.get();
//}
//void main1()
//{
	//int num = 100;
	//auto fun = [](int num) {num = 5, cout << num << endl; };
	//fun(num);//函数有副本机制
	//cout << "main= " << num << endl;

	//int num1 = 100;
	//int num2 = 99;
	//[=]() {cout << num1 << " " << num2 << endl; }();//=只能读外部变量
	//[&]() {num1=101,cout << num1 << " " << num2 << endl; }();//& 读写外部变量

	//[=]()mutable {num1=11,num2=12,cout << num1 << " " << num2 << endl; }();//muteble修改副本

	//cout <<"main= "<< num1 << " " << num2 << endl;
	//system("pause");
//}

//void main2()
//{
//	int a = 10;
//	int b = 9;
//	int c = 8;
//	[&a,b,c]() {a=10,  cout << a << b << c<<endl; }();//a 可以读写，bc 只读
//	[a,b,c]()mutable {a=1,b=2,c=3,cout << a << b << c<<endl; }();//修改副本
//
//	cout << a << b << c;
//	system("pause");
//}

//void main10()
//{
//	//vs2015以上
//	[](auto c, auto b) {cout << c + b << endl; }(10,11);
//	[](auto a, auto b) {cout << a + b << endl; }(10,11.8);
//	[](auto a=0, auto b=0) {cout << a + b << endl; }(10, 11.8);
//	[](auto a=0, auto b=0) {cout << a + b << endl; }(1,1);//默认参数需要传递类型，初始化需要用=号赋值
//	system("pause");
//}
//void main()
//{
//	array<int, 10> myint{ 1,2,3,4,5,6,7,8,9,0 };
//	//lambda表达式经典的用法
//	for_each(myint.begin(), myint.end(), [](int num) {cout << num << endl; });
//	
//	for_each(myint.begin(), myint.end(), [](int &num) {num+=1,cout << num << endl; });//修改数组的每个值
//	for_each(myint.begin(), myint.end(), [](int num) {cout << num << endl; });
//
//	system("pause");
//}






//函数包装器
//#include <iostream>
//#include <functional>//函数包装头文件
//using namespace std;
//using std::function;//函数包装器
//
//void go()
//{
//	cout << "hello world!" << endl ;
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//void main()
//{	//<返回类型(参数)>
//	function< void (void) > fun1=go;
//	fun1();
//	function< void (void )> fun2 = []() { cout << "go lambda" << endl; };
//	fun2();
//
//	function< int (int, int) >fun3 = add;
//	cout << fun3(10, 19) << endl;
//
//	function< int (int, int) >fun4 = [](int a, int b)->int  { return a + b; };//lambda 表达式
//	cout << fun4(2, 3) << endl;
//	system("pause");
//}






//模板元
//递归加速
//执行速度快，编译时间慢，代码会增加
//运行的时间节约在编译的时候
//递归加速，游戏优化,仅仅适用于C11；
//
//#include <iostream>
//using namespace std;

//int get50(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return get50(n - 1) + get50(n - 2);
//	}
//}//反复调用，函数等待，返回 ，浪费时间多

//template <int N>
//struct data
//{
//	enum {res = data<N-1>::res+data<N-2>::res};
//};
//template<>
//struct data <1>
//{
//	enum {res=1};
//};
//template<>
//struct data <2>
//{
//	enum { res = 2 };
//};
//
//void main()
//{
//	cout << data <40>::res << endl;//模板元，代码加速
//	//cout << get50(40) << endl ;
//	system("pause");
//}






//C C++ const的特点
//#include<iostream>
//using namespace std;

//void run1(const int *p);//改变地址，不能改变内容
//void run2(int const *p);
//void run3(int *const p);//不改变地址，能改变内容
//void run4(const int* const p);//不改变地址，不改变内容
//void run5(int const* const p);

//void main()
//{
//	//const int  num = 100;
//	int a[num];//error
//	//*(int*)&num = 4;//C const 可以避免直接，无法避免间接修改；
//	system("pause");
//}

//void main()
//{
	//const int n = 10;//寄存器产生
	//int a[n];//C++ 编译器自动优化，n 替换为10；
	//cout << sizeof(a) << endl;

	//int a = 10;
	//const int n = a;//内存产生
	//cout << n << endl;
	//int data[n];//C++ 编译器不敢乱优化，怕变量发生变量，如果在变量前面加上conat则会优化
	//system("pause");
//}

//void main()
//{
	//const int n = 10;
	//*(int*)(&n) = 3;
	//cout << *(&n) << endl;//内存里面的值改变了，但编译器会优化，强行转化为10
	//cout << n << endl;

	//int a = 10;
	//const int n = a;//赋值的情况下可以改变
	//*(int*)(&n) = 3;
	//cout << *(&n) << endl;//直接读内存，不会优化
	//cout << n << endl;
	//cin.get();
//}


//const数组
//#include <iostream>
//using namespace std;

//void main()
//{
//	const int arr[5]{ 1,2,3,4,5 };
//	const int *p = arr;
//	*(int*)p = 100;
//	//const 不会优化数组，可以间接改变
//	//*(p) = 1;//error 指向常量的指针，无法修改常量
//	for (auto i : arr)
//	{
//		cout << i << endl;
//	}
//
//	system("pause");
//}





//智能指针
//自动管理内存，防止内存泄露
//#include <iostream>
//#include <windows.h>
//#include <memory> //智能指针头文件
//using namespace std;

//void cmem()
//{
//	while (1)
//	{
//		double*p = new double[1024 * 1024 * 10];
//		Sleep(3000);
//		delete p;
//	}
//}

//void autoptr()//情况一
//{
//	double *p(new double[1024 * 1024 * 10]);
//	auto_ptr<double>autop(p);//智能指针接管，自动回收
//	Sleep(3000);
//}
//void autoptr()
//{
//	double *p(new double[1024 * 1024 * 10]);
//	auto_ptr<double>autop(p);
//	Sleep(3000);
//}
//void autoptrnew()
//{
//	Sleep(6000);
//	unique_ptr<double>p(new double[1024 * 1024 * 10]);
//	Sleep(6000);
//}
//void autoptrnew()//情况二
//{
//	Sleep(6000);
//	unique_ptr<double>p(new double[1024 * 1024 * 10]);
//	Sleep(6000);
//}
//void main()
//{
//	//cmem();
//	//autoptr();
//	autoptrnew();
//
//
//	system("pause");
//}






//tuple 多元数组
//#include <iostream>
//#include <tuple>
//using namespace std;
//
//void main()
//{
//	char ch = 'z';
//	short sh = 12;
//	int num = 123456;
//	double db = 12.3;
//	const char *p ="calc";
//	tuple<char,short,int ,double,char*>mytuple (ch,sh,num,db,p);
//	auto autov = get<1>(mytuple);
//	cout << autov << endl;
//	system("pause");
//}






//左值引用与右值引用
//左值引用内存的值 ，右值引用寄存器的值
//#include<iostream>
//using namespace std;

//void main()
//{//左值
//	int num (10);
//	int &runm(num);//引用相当有变量的别名
//	runm = 1;//通过变量名改变变量
//	cout << num << endl;
//	cout << runm << endl;
//
//	cout << &num << endl;
//	cout << &runm << endl;//引用值的地址与引用变量相同
//	
//	system("pause");
//}

//void main()
//{
//	int num = 1;
//	int data;
//	cout <<(void*)&data << endl; 
//	data = num + 1;
//
//	data = num + 2;
//
//	data = num + 3;
//
//	system("pause");
//}
//void main()
//{
	/*int num ( 10);
	int &&rnum(num + 1);*///右值引用，快速备份。编译器自动回收。

	//int data = num + 4;
	//int&rdata(data);//左值引用需要两个步骤


	/*int arr[5]{ 1,2,3,4,5 };
	int *p(arr);
	cout << *p << endl;*/

	//int arr   int&rp;  &放在类型和变量名之间
	//int* arr   int* & rp;
	//int *&rp(p);//左值引用，改变指针
	//rp += 1;
	//cout << *rp << endl;

	//int* &&rrp(p + 2);
	//cout << *rrp << endl;

//	system("pause");
//}

//引用的经典用法一
//void showint(int && runm)
//{
//	cout << runm << endl;
//}
//void main()
//{
//	int  a[5]{ 1,2,3,4,5 };
//	showint(a[2] + 3);//节约内存
//	showint(move(a[4]));//move 位移语义，左值改变为右值
//	system("pause");
//}






//引用本质
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	/*int num = 10;
//	int &runm(num);
//	runm = 20;
//	cout << runm << endl;
//*/
//
//	double pd;
//	double &rdb(pd);
//
//	struct Mystruct
//	{
//		int &dp;
//		double &rdb;//引用的本质是指针实现，简化程序
//	};
//	cout << sizeof(Mystruct) << endl;
//	system("pause");
//}





//多线程
#include<iostream>
#include <thread>
#include <Windows.h>

//using namespace std;
//void run()
//{
//	MessageBoxA(0, "hello", "hello!", 0);
//}
//
//void main()
//{
//	//堆上开辟多线程数组
//	thread *pthread1(new thread[5]{ thread(run), thread(run), thread(run), thread(run), thread(run) });
//
//	cin.get();
//}
//void main4()
//{
//	//堆上
//	thread *pthread1(new thread(run));
//	thread *pthread2(new thread(run));
//	thread *pthread3(new thread(run));
//	cin.get();
//}
//void main3()
//{
//	thread t[5]{thread(run),thread(run),thread(run),thread(run),thread(run)};//初始化
//
//	cin.get();
//}
//void main2()
//{
//	//并行，异步非阻塞
//	//栈上
//	thread t1(run);//根据函数初始化并执行
//	thread t2(run);
//	thread t3(run);
//	thread t4(run);
//
//	cin.get();
//}
//void main()
//{
//	同步，也叫阻塞
//	run();
//	run();
//	run();
//}




//多线程传递参数

//类型严格匹配
//void showmsg( const char *str1,const char*str2,const int i)
//{
//	MessageBoxA(0, str1, str2,i);
//}
//
//void main()
//{
//	thread th1(showmsg, "1", "1",0);
//	thread th2(showmsg, "12", "12",1);
//	thread th3(showmsg, "123", "123",2);
//
//	cin.get();
//}






//多线程join 与 detach
//join,让当前主线程等待所有子线程执行完成才能退出
//detach，脱离主线程的绑定，主线程退出的时候，不影响子线程
//auto n = thread::hardware_concurrency();//获取CPU核心个数
//#include <thread>
//#include <iostream>
//#include <array>
//using namespace std;
//
//void show()
//{
//	MessageBoxA(0,"1","1",0);
//}
//
//void main2()
//{
//	//auto n = thread::hardware_concurrency();//获取CPU核心个数
//	cout << n << endl;
//
//	cin.get();
//}
//void main1()
//{
//	array<thread, 3> threads{ thread(show), thread(show), thread(show) };
//	for (int i = 0; i < 3; i++)
//	{
//		cout << threads[i].joinable() << endl;  //joinable()bool值
//		threads[i].join();//主线程等待当前线程执行完后退出
//		
//	}
//
//
//	//cin.get();
//}

//void main()
//{
//	thread th(show);
//	//th.join();
//	th.detach();//脱离主线程，主线程过了，自动退出不报错 
//	//使用detach之后线程无法通信
//	cout << th.joinable()<<endl;//0
//
//}





////atomic  原子变量
//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <atomic>
//using namespace std;
//
////线程安全，多线程访问不冲突，冲突代表不安全
////int num = 0;
//
////mutex m;//互斥,加锁解锁浪费时间
//
//atomic_int num{ 0 };//原子变量，不会发生线程冲突，线程安全
////atomic_char;

//void run()
//{
//	for (int i = 0; i < 10000000; i++)
//	{
//		//m.lock();
//		num++;
//		//m.unlock();
//	}
//}
//void main()
//{
//	clock_t start = clock();
//	thread th1(run);
//	thread th2(run);
//	th1.join();
//	th2.join();
//
//	clock_t end = clock();
//	cout << num << endl;
//	cout << end - start << "ms " << endl;
//	
//	
//	cin.get();
//}
//全局变量，冲突，结果正确，速度快
//mutex,结果正确，速度慢
//atomic ,结果正确，速度比mutex快







//多线程与lambda表达式
//#include <iostream>
//#include <thread>
//#include <Windows.h>
//#include <chrono>//时间类型头文件
//using namespace std;
//
//void main1()
//{
//	auto fun = []() {MessageBoxA(0, "1", "1", 0); };
//	thread th1(fun);
//	thread th2(fun);
//
//
//	cin.get();
//}
//void main2()
//{
//	
//	thread th1([]() {MessageBoxA(0, "1", "1", 0); });
//	thread th2([]() {MessageBoxA(0, "1", "1", 0); });
//
//
//	cin.get();
//}
//void main()
//{
//
//	thread th1([]() {
//		this_thread::sleep_for(chrono::seconds(3));//等待时间三秒
//		this_thread::yield();//让CPU先执行其他线程
//		cout<<this_thread::get_id()<<endl;//返回线程ID
//		//this_thread::sleep_until();//直到某个时刻的到来之时，都在等待
//		
//	});
//	thread th2([]() {
//		this_thread::sleep_for(chrono::seconds(5));
//		cout<<this_thread::get_id()<<endl; 
//		
//	});
//
//	cin.get();
//}






//new delete与malloc free的区别
//#include<iostream>
//#include <Windows.h>
//#include <cstdlib>
//using namespace std;
//
//void main1()
//{
//	//基本类型，int ,double ,char
//	int *p(new int(5));
//	cout << (void *)p << "  p=" << p << endl;
//	delete p;
//	cout<< (void *)p << "  p=" << p << endl;
//	//delete p;//error
//	p = nullptr;//delete 不会改变指针的值，为了避免迷途指针，应把指针设为nullptr;
//	//delete free对于基本数据类型，都起到释放作用，释放两次都会报错
//	//delete 会改变指针的值，free不会改变指针的值
//	cin.get();
//}
//
//void main4()
//{
//	int *p = (int *)malloc(4);
//	*p = 4;
//
//	free(p);//基本类型数据，free malloc 、new delete 效果一致
//
//	cin.get();
//}
//
//class mydata
//{
//public:
//	void *p;
//	mydata()
//	{
//		p = malloc(1024 * 1024 * 1024);
//		cout << "mydata create" << endl;
//	}
//	~mydata()//加~是析构函数
//	{
//		free(p);
//		cout << "mydata  delete" << endl;
//	}
//};
//
////mydata d1;//创建对象，自动调用构造函数
//void test()
//{
//	mydata d1;//栈上，创建的时候调用构造函数，销毁时调用析构函数
//}
//void main()
//{
//	//mydata *p = new mydata;
//
//	//delete p;//自动调用 ，构造，析构函数
//	//test();
//	mydata *p = new mydata;
//
//	//delete p;
//	//free(p);//free 不会调用析构函数
//
//
// 	cin.get();
//}





//delete 两钟不同的形式
//#include<iostream>
//using namespace std;
//
////对于基本类型 数组，delete，delete[]效果一致
//
////复合数据类型   严格类型匹配
////mydata *p(new mydata);   delete p;
////mydata *p(new mydata[10]);  delete[]p;
//
//void main4()
//{
//	int *p1 = new int(4);//指向一个变量
//	cout << p1 << endl;
//
//	cout << "---------" << endl;
//	delete p1;// int *p1 = new int(4);
//	
//
//	cin.get();
//}
//void main2()
//{
//	int *p1 = new int(4);//指向一个变量
//	int *p2 = new int[10]{ 1,2,3,4,5,6,7,8,9,0 };//指向数组
//	delete p1;// int *p1 = new int(4);
//	delete[] p2;// int *p2 = new int[10]{ 1,2,3,4,5,6,7,8,9,0 };
//	//对于基本数据类型，两者可以互相混用
//	cin.get();
//}
//void main1()
//{
//	int *p = new int[10]{1,2,3,4,5,6,7,8,9,0};
//	cout << p << endl;
//	
//	cout << "-----------" << endl;
//	//delete p;
//	//delete[]p;
//
//	cin.get();
//}
//
//class mydata
//{
//public:
//	mydata()
//	{
//		cout << "create" << endl;
//	}
//	~mydata()
//	{
//		cout << "delete" << endl;
//	}
//};
//void main()
//{
//	/*mydata *p(new mydata);
//	delete p;*/
//
//	//mydata *p(new mydata);
//	//delete[]p;//delete[] 会一直检测后面有没有数组，没有数组则会一直delete
//	//单个堆上的对象，不可以用delete[]
//
//
//	/*mydata *p(new mydata[10]);
//	delete[]p;*/
//	//delete p;//error
//
//
//	cin.get();
//}






//new 高级用法，静态区、堆区、栈区开辟内存
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
////char str[1024] = {0};//内存静态区
////静态区，栈区，堆区
////int *p2 = new (str)int[10]{ 1,2,3,4,5,6,7,8,9,0 };
////堆区，可以覆盖重写，可以delete
////栈区，静态区，可以覆盖重写，不可以delete
//
//void main()
//{
//	//每次都分配一块新的内存
//	int *p1 = new int[10]  { 1,2,3,4,5,6,7,8,9,0 } ;//堆上开辟
//	
//	char str[1024] = { 0 };//栈区
//	//char *str = new char[1024]{0};//堆区
//	int *p2 = new (str)int[10]{1,2,3,4,5,6,7,8,9,0};//分配内存在str地段
//	//一直在指定的内存里分配 
//	
//	for (int i = 0; i < 10; i++)
//	{
//		cout << p1[i] << " " << p1 + i << "    " << p2[i] << " " << p2 + i << endl;
//	}
//	cout << "\n\n";
//	free(str);
//
//	p1 = new int[10]{ 1,2,3,4,5,6,7,8,9,0 };
//	p2 = new (str)int[10]{ 1,2,3,4,5,6,7,8,9,0 };
//	for (int i = 0; i < 10; i++)
//	{
//		cout << p1[i] << " " << p1 + i << "    " << p2[i] << " " << p2 + i << endl;
//	}
//	cout << "\n\n";
//	p1 = new int[10]{ 1,2,3,4,5,6,7,8,9,0 };
//	p2 = new (str)int[10]{ 1,2,3,4,5,6,7,8,9,0 };
//	for (int i = 0; i < 10; i++)
//	{
//		cout << p1[i] << " " << p1 + i << "    " << p2[i] << " " << p2 + i << endl;
//	}
//	cin.get();
//}






//new delete 局部重载
//#include <iostream>
//using namespace std;
//
//void *g_p = nullptr;
//int objs = 0;
//class myclass
//{
//public:
//	myclass()
//	{
//		////objs++;
//		//cout << "create" << endl;
//	}
//	~myclass()
//	{
//		//objs--;
//		cout << "delete" << endl;
//	}
//	//operator 重载，针对new做出新的解释。只作用于当前类
//	static void *operator new(size_t size)
//	{
//		/*objs++;
//		cout << "new call" << endl;
//		myclass *p = ::new myclass;
//		return  p;*/
//
//		if (g_p == nullptr)
//		{
//			objs++;
//		cout << "new call" << endl;
//		myclass *p = ::new myclass;
//		g_p = p;//单例，在堆上只有一个对象
//		return  p;
//		}
//		else
//		{
//			return g_p; 
//		}
//	}
//	static void operator delete(void *p)//重载delete
//	{
//		/*objs--;
//		cout << "delete call" << endl;
//		::delete p;*/
//
//		if (g_p != nullptr)
//		{
//			cout << "delete call" << endl;
//			::delete p;
//			g_p = nullptr;
//		}
//	}
//};
////第一个功能无法在堆上被创建的类
////实现统计分配内存，释放内存的次数
////实现单例设计模式，实现避免反复delete出错
////new delete 在内都，只针对于当前类，  int. double 无影响

//void main()
//{
//	myclass *p1 = new myclass;
//	//myclass *p2 = new myclass;
//	delete p1;
//
//	cin.get();
//}
//void main1()
//{
//	myclass *p1 = new myclass;
//	myclass *p2 = new myclass;
//	myclass *p3= new myclass;
//	delete p1;
//	
//	cout << objs << endl;
//	cin.get();
//}






//全局内存管理
//#include <iostream>
//using namespace std;
//全局内存管理，统计释放内存，分配内存
//分配内存优先于构造构造函数
//析构函数优先于释放内存
//void *operator new(size_t size)
//{
//	void *p = malloc(size);
//	cout << "g_new  call" << endl;
//	return p;
//}
//void *operator new[](size_t size)//14字节，一个指针，十个空类
//{
//	cout << size << endl;
//	cout << "g_new  call []" << endl;
//	return operator new (size);//每个元素调用一次new 
//}
//void operator delete(void *p)
//{
//	cout << "g_delete call" << endl;
//	free(p);
//}
//void operator delete[](void *p)
//{
//	cout << "g_delete call" << endl;
//	cout << "g_delete call []" << endl;
//	free(p);
//}
//class myclass
//{
//public:
//	myclass()
//	{
//		cout << "new call" << endl;
//	}
//	~myclass()
//	{
//		cout << "delete call" << endl;
//	}
//};
//void main()
//{
//	int *p1 = new int(5);
//	delete p1;
//
//	//::new;
//	myclass*p = new myclass;
//	delete(p);
//	
//	//int *pint = new int[10];//40
//	myclass *pt = new myclass[10];//调用十次new
//	delete[]pt;
//
//	cin.get();
//}

//sizeof统计类的大小，原则不统计代码区的大小
//空类一个字节表示存在，其他情况等同于结构体
//class all
//{
//	char ch;
//	void run(int d)
//	{
//	}
//};
//void main()
//{
//	cout << sizeof(all) << endl;
//	cin.get();
//} 






//全局 ，局部new  delete
//#include <iostream>
//#include <cstdlib>
//using namespace std;
////C++ C语言层
////c语言层管理内存，malloc free
//
////C++ 全局new 局部new ,都会调用一次构造函数
////管理内存，即调用局部也调用全局
////局部的类用于管理类对象，全局管理基本数据类型
////一、局部new ->全局new ->malloc->构造，二、局部的new->malloc->构造
////析构->局部delete ->全局delete->free.
////
//
//void *mymalloc(size_t size)
//{
//	cout << "malloc all" << endl;
//	return malloc(size);
//}
//void myfree(void*p)
//{
//	cout << "free all" << endl;
//	free(p);
//}
//
//#define  malloc mymalloc
//#define  free myfree 
//
//void *operator new(size_t size)
//{
//	cout << "g_all new" << endl;
//	void *p = malloc(size);
//	return p;
//}
//void operator delete(void*p)
//{
//	cout << "g_all delete" << endl;
//	free(p);
//}
//
////new 无论是局部还是全局，都会调用一次构造
//class myclass
//{
//public:
//	~myclass()
//	{
//		cout << "~myclass()" << endl;
//	}
//	myclass()
//	{
//		cout << "myclass()" << endl;
//	}
//	void *operator new(size_t size)
//	{
//		cout << "myclass new" << endl;
//		
//		//myclass *p = ::new myclass;
//		void *p = malloc(size);//跳过全局，直接malloc
//		return p;
//	}
//	void operator delete(void*p)
//	{
//		cout << "myclass delete" << endl;
//		
//		//::delete p;
//		free(p);//跳过全局，直接free;
//	}
//};
//
//void main()
//{
//	myclass *p =new myclass;
//	delete p;
//
//	//int *p1 = new int(5);
//	//int *p2 = new int[5]{1,2,3,4,5};
//	//new delete本质是函数，C++标准库函数，可以重写
//
//	cin.get();
//}






//伪函数与多线程
//#include <iostream>
//#include <thread>
//using namespace std;
//
//struct func
//{
//	void operator()()//方法可以将对象名当函数使用,   别名伪函数
//	{
//		cout << "hello china hello cpp" << endl;
//	}
//	void operator()(int i)
//	{
//		cout << "hello china hello cpp" <<i<< endl;
//	}
//};
//void main()
//{
//	func f1;
//	f1(1);
//	func f2;
//	f2(2);
//
//
//	cin.get();
//}
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







//成员函数与多线程
//#include <iostream>
//#include <thread>
//#include <Windows.h>
//using namespace std;
////引用类成员函数，原则上函数名不要重名，多线程尽量不要重名
//struct fun
//{
//	int i;
//	void run()
//	{
//		MessageBoxA(0, "hello","cpp",0);
//		cout << "hello china ,hello cpp!" << endl;
//	}
//	void run1(const char*str)
//	{
//		MessageBoxA(0, "hello",str, 0);
//		cout << "hello china" << endl;
//	}
//};
//
//void main()
//{
//	//fun*p(nullptr);
//	//p->run();//空类指针可以引用没有调用内部变量的成员函数
//
//	fun fun1;
//	//&fun::run 引用成员函数
//	thread th1 (&fun::run,fun1);
//	thread th2 (&fun::run, fun1);
//	thread th3(&fun::run1, fun1,"fangfang");
//	thread th4(&fun::run1, fun1,"huahau");//传递参数模式
//	cin.get();
//}






// promisefuture 多线程通信
//#include <iostream>
//#include <thread>
//#include <string>
//#include <cstdlib>
//#include <future>//promise函数头文件
//using namespace std;
//
//promise <string>val;//全局通信变量
//promise <string>vall;
// 
//void main()
//{
//	thread th1([]() {
//		future<string> fu1 = val.get_future();//获取未来状态
//		future<string> fu2 = vall. get_future();
//		cout << "等待中" << endl;
//		cout << fu1.get() << endl;
//		cout << "等待中" << endl;
//		cout << fu2.get() << endl;//获取 th2中的信息
//	});
//	thread th2([]() {
//		system("pause");
//		val.set_value("fangfang with huahua");
//		system("pause");
//		
//		vall.set_value("hello fangfang and huahua");
//		system("pause");
//	});
//	
//
//	th1.join();
//	th2.join();
//	
//	//cin.get();
//}







//多线程功能拓展基于继承
//#include <thread>
//#include <iostream>
//using namespace std;
//
//class Mythread : public thread//c++代码重用--继承
//{
//public :
//	Mythread() :thread()//子类调用父类构造函数
//	{
//
//	};
//	template <typename T,typename ...Args>//子类调用父类构造函数， 可变参数的构造
//	Mythread(T && func, Args &&...args) : thread(   forward<T>(func),forward<Args>(args)...   )//参数传递
//	{
//
//	}
//
//	void run(const char* cmd)//新增的功能
//	{
//		system(cmd);
//	}
//};
//
//void main()
//{
//	Mythread t1([]() {cout << "hello this is huahua" << endl;  });
//	t1.run("calc");
//	
//	Mythread t2(  [](int num) {cout << "hello this is huahua" << num << endl;} ,100  );
//	t2.run("notepad");
//	cin.get();
//}








//condition_variable  多线程条件变量
//#include <iostream>
//#include <thread>
//#include <condition_variable>
//#include <mutex>
//
//using namespace std;
////线程通信，结合mutex 
////一个线程或多个线程处于等待状态，通知一个或多个 
////condition_variable  线程之间传递信息
//mutex m;//线程互相排斥
//condition_variable cv;//线程通信
//void main()
//{
//	thread **th = new thread*[10];//开辟线程的指针数组
//	for (int i = 0; i < 10; i++)
//	{
//		th[i] = new thread([](int index) {
//			unique_lock<mutex> lck(m);//锁定
//			cv.wait_for(lck, chrono::hours(1000));//等待
//			cout << index << endl;//打印编号
//
//		}, i);//传递参数
//		this_thread::sleep_for(chrono::milliseconds(100));//错开
//	}	
//	for (int i = 0; i < 10;i++) 
//	{
//		lock_guard<mutex> lckg(m);//解锁向导
//		//cv.notify_one();//一个个通知
//	}
//	cv.notify_all();
//	for (int i = 0; i < 10; i++)
//	{
//			th[i]->join();
//			delete th[i];
//	}
//	delete[]th;
//	cin.get();
//}








//并行计算
//#include <iostream>
//#include <thread>
//#include <future>//线程将来的结果
//#include <chrono>//时间
//#include <mutex>
//using namespace std;
//
//mutex g_m;
//
//void main()
//{
//	auto run = [=](int index) {
//		lock_guard<mutex> lckg(g_m);//加锁
//		cout <<this_thread::get_id()<<"  "<< index << endl;//获取线程ID
//		this_thread::sleep_for(chrono::seconds(5));
//		return index * 1024;//返回结果
//	};
//	packaged_task<int(int)> pt1(run);//线程打包
//	packaged_task<int(int)> pt2(run);//创建两个任务包
//
//	thread t1([&]() {pt1(2); });
//	thread t2([&]() {pt2(3); });//开启线程
//	
//	cout << pt1.get_future().get() << endl;
//	cout << pt2.get_future().get() << endl;//获取结果
//	t1.join();
//	t2.join();
//
//	cin.get();
//}








//vector  动态数组分配
//#include <iostream>
//#include <vector>
//#include <array>
//using namespace std;
////vector动态数组，可以无限嵌套
////增删查改，动态增长的数据结构，线性表顺序存储
////
//void main1()
//{
//	vector<int> myint{1,2,3,4,5};
//	//array<int, 10>Myint{ 1,2,3,4,5 };
//	
//	for (int i = 10; i < 20; i++)
//	{
//		myint.push_back(i);//压缩到i
//	}
//
//	//myint.resize(5);//动态调整大小
//	myint.resize(6, 90);//vector,只有6个数据，缓冲有90
//
//	//存取数据
//	cout << myint.front() << endl;//第一个 
//	cout << myint.back() << endl;//最后一个
//	//迭代器，本质是指针
//	//for (auto id = myint.begin(), ie = myint.end(); id != ie; id++)
//	//{
//	//	cout << *id << endl;//迭代器式访问。正
//	//}
//	//for (auto rd = myint.rbegin(), re = myint.rend(); rd != re; rd++)
//	//{
//	//	cout << *rd << endl;//迭代器式访问。反
//	//}
//	
//	for (int i=0;i<myint.size();i++)
//	{
//		cout << myint[i] <<" ==  "<<myint.at(i)<< endl;
//	}
//
//	cin.get();
//}
//
//void main3()
//{
//	vector<int>myintx{ 11,12,13,14,15 };
//	vector<int> myint{ 1,2,3,4,5 };
//	//myint.assign(7, 100);//重新初始化，7个100
//	int a[5]{ 11,22,33,44,55 };
//	auto it = myint.begin() + 3;//在4的位置
//	//it = myint.insert(it, 400);//根据位置插入
//	//cout << "*it  " << *it << endl;
//	//it = myint.insert(it, a, a + 5);//插入一个数组
//	it = myint.insert(it, myintx.begin(), myintx.end());//批量插入
//
//	for (auto i : myint)
//	{
//		cout << i << endl;
//	}
//
//	cin.get();
//}
//void main33()
//{
//	vector<int> myint{ 1,2,3,4,5 };
//	auto it = myint.begin() + 3;
//	//myint.erase(it);//删除单个
//	//myint.erase(myint.begin()+2, myint.end());//删除多个
//	for (auto i : myint)
//	{
//		cout << i << endl;
//	}
//	cin. get();
//}
//void main44()
//{
//	vector<int> myint1{ 1,2,3,4,5 };
//	vector<int> myint2{ 11,12,13,14,15 };
//
//	myint1.swap(myint2);//交换
//	for (auto i : myint1)
//	{
//		cout << i << endl;
//	}
//
//	cin.get();
//}
//void main4x()
//{
//	vector<double> mydb;//堆上，不会栈溢出
//	for (int i = 0; i < 1000000; i++)
//	{
//		mydb.push_back(i);
//	}
//
//	cin.get();
//}
//
//void main2x()
//{
//	vector<int> myint1{ 1,2,3,4,5 };
//	for (int i = 0; i < 5; i++)//内存是连续开辟的
//	{
//		cout << myint1[i] << "   " << &myint1[i] << endl;
//	}
//	cin.get();
//}
//void main3x()
//{
//	vector<int>myint;
//	int *p = myint.get_allocator().allocate(5);//获取分配器分配内存
//	cout << myint.size() << endl;
//	cout << "\n\n\n";
//	for (int i = 0; i < 5; i++)
//	{
//		cout << (p[i] = i) << endl;
//		//cout << (p[i] = i) <<myint[i]<< endl;//error
//	}
//	myint.get_allocator().deallocate(p, 5);//释放内存
//	cin.get();//主动管理内存
//}
//
//void main()
//{//锯齿数组
//	vector<int>myint1{ 1,2,3,4,5 };
//	vector<int>myint2{ 1,2,3,4,5,6,7 };
//	vector<int>myint3{ 1,2,3,4 };
//
//	vector<vector<int>>myallint{ myint1,myint2,myint3 };
//	for (auto i : myallint)
//	{
//		for (auto j : i)
//		{
//			cout << j<<"  ";
//		}
//		cout << "\n";
//	}
//	cin.get();
//}







//可变参数实现多线程
//#include <thread>
//#include <cstdarg>
//#include <iostream>
//
//using namespace std;
//
//int go(const char*fmt, ...)
//{
//	va_list ap;//指针
//	va_start(ap, fmt);//开始
//	vprintf(fmt, ap);//调用
//	va_end(ap);//结束
//	return 0;
//}
//void main()
//{
//	thread th(go, "%sABCD%d___%c__%x", "12345abcd",98,'C',256);
//
//	cin.get();
//}







//并行计算，汇总
//#include <iostream>
//#include <thread>
//#include <future>
//#include <vector>
//#include <cstdlib>
//
//using namespace std;
//#define COUNT 1000000
//
//int add( vector<int>*arr, int start,int count  )
//{
//	static mutex m;//只会初始化一次
//	int sum(0);//保存结果
//	for (int i = 0; i < count; i++)
//	{
//		sum += (*arr)[start + i];//实现累加
//	}
//	{
//		lock_guard<mutex> lckg(m);
//		cout<< "thread " << this_thread::get_id()
//			<< ", count=" << count
//			<< ", sum=" << sum << endl;
//	}
//
//	return sum;
//}
//void main()
//{
//	vector<int>data(COUNT);
//	for (int i = 0; i < COUNT; i++)
//	{
//		data[i] = (i + 1) % 1000;//0-999
//
//	}
//	vector<future<int>> result;//结果数组
//	int cpus = thread::hardware_concurrency();//获取CPU核心的个数
//	for (int i = 0; i < cpus*2; i++)
//	{
//		int batch_each = COUNT / (cpus * 2);//
//		if (i == (cpus * 2) - 1)
//		{
//			batch_each = COUNT - COUNT / (cpus * 2)*i;//最后一个线程承担多一点
//
//		}
//		//不断压入结果
//		result.push_back(async(add, &data, i*batch_each,batch_each));
//		//async返回结果
//	}
//	
//	//汇总
//	int lastresult(0);
//	for (int i = 0; i < cpus * 2; i++)
//	{
//		lastresult += result[i].get();//汇总结果
//	}
//	cout << "lastresult=" << lastresult << endl;
//	cin.get();
//}








//死锁与解锁
//#include <iostream>
//#include <mutex>
//#include <thread>
//#include <chrono>
//using namespace std;
////thread,引用类型函数，  引用模板，避免类型转换，尽量使用指针
////锁住一个变量之后，尽快操作完解锁，不要再加锁，避免造成互锁
//
//#define COUNT 100000
//mutex g_mutex1, g_mutex2;
//
//void add1(int *p1, int *p2)
//{
//	for (int i = 0; i < COUNT; i++)
//	{
//		g_mutex1.lock();//加锁
//		(*p1)++;
//		g_mutex2.lock();
//		(*p2)++;
//		g_mutex1.unlock();//解锁
//		g_mutex2.unlock();
//		
//		
//		/*g_mutex1.lock();
//		(*p1)++;
//		g_mutex1.unlock();
//		
//		g_mutex2.lock();
//		(*p2)++;
//		g_mutex2.unlock();*/
//	}
//}
//void add2(int *p1, int *p2)
//{
//	for (int i = 0; i < COUNT; i++)
//	{
//		g_mutex2.lock();
//		g_mutex1.lock();
//		(*p1)++;
//		g_mutex1.unlock();
//		(*p2)++;
//		g_mutex2.unlock();
//
//		/*g_mutex2.lock();
//		(*p2)++;
//		g_mutex2.unlock();
//		
//		g_mutex1.lock();
//		(*p1)++;
//		g_mutex1.unlock();*/
//	
//	}
//}
//void main()
//{
//	int a = 0;
//	int b = 0;
//	
//	thread th1(add1, &a, &b);
//	thread th2(add2, &a, &b);
//	
//	th1.join();
//	th2.join();
//	this_thread::sleep_for(chrono::seconds(5));
//	while (1)
//	{
//		cout << "a " << a << endl;
//		cout << "b " << b << endl;
//		this_thread::sleep_for(chrono::seconds(3));
//	
//	}
//
//	cin.get();
//}








//迅雷多线程面试题
//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <condition_variable>
//编写程序，开启3个线程，这3个贤臣ID分别是A.B.C，
//每个线程将自己的ID在屏幕上打印１０遍，
//要求输出结果必须按ABC的顺序显示：如ABCABC...，依次递推
//using namespace std;
//int LOOP = 10;
//int flag = 0;
//mutex m;
//condition_variable cv;

//void fun(int id)
//{
//	for (int i = 0; i < LOOP; i++)
//	{
//		unique_lock<mutex>ulk(m);
//		while ((id-65) != flag)
//		{
//			cv.wait(ulk);//不是该出现的场合，等待
//		}
//		cout << (char)id << endl;//转换
//		flag = (flag + 1) % 3;//0 1 2
//		cv.notify_all();//通知全部
//	}
//}
//void main()
//{
//	thread t1(fun, 65);
//	thread t2(fun, 66);
//	thread t3(fun, 67);
//	//thread t4(fun, 68);
//
//	t1.join();
//	t2.join();
//	t3.join();
//	//t4.join();
//
//	cin.get();
//}







//线程交换与移动
//swap(交换)  move(移动)
//#include <iostream>
//#include <thread>
//using namespace std;
//void main2()
//{
//	thread t1([]() {cout << "fangfang"; });
//	thread t2([]() {cout << "huahua" ; });
//	
//	cout << "\n t1 " << t1.get_id() << "  t2 " << t2.get_id() << endl;
//	swap(t1, t2);//交换线程
//	cout << "\n t1 " << t1.get_id() << "  t2 " << t2.get_id() << endl;
//	
//	t1.join();
//	t2.join();
//	cin.get();
//}
//
//void main()
//{
//	thread t1([]() {
//	
//		int i = 0;
//		while (1)
//		{
//			i++;
//			if (i > 100000000)
//			{
//				break;
//			}
//		}
//		cout << i << endl;
//		system("pause");
//	
//	; });
//	cout << t1.get_id() << endl;
//	//t1.join();
//	thread t2 = move(t1);//move线程的移动，t2 具备t1的属性
//	cout << t2.get_id()<<t1.get_id() << endl;
//	t2.join();
//
//
//	//cin.get();
//}







//lock_guard   unique_lock
//#include <iostream>
//#include <thread>
//#include <mutex>
//using namespace std;
//
//#define N 10000000
//mutex g_mutex;
//
//void add(int *p)
//{
//	for (int i = 0; i < N; i++)
//	{
//		//unique_lock<mutex> ulk(g_mutex);//自动加锁，自动解锁，根据跨语句循环锁定
//		//根据mutex 的属性，决定是否加锁
//
//		//lock_guard<mutex>lgd(g_mutex);//拥有mutex所有权，自动加锁，自动解锁
//		//读取失败的情况下就会一直等待
//
//		(*p)++;
//
//	}
//}
//
//void main()
//{
//	int a = 0;
//	thread th1(add, &a);
//	thread th2(add, &a);
//	th1.join();
//	th2.join();
//	cout << a << endl;
//
//	cin.get();
//}








//等待固定时间
//#include <iostream>
//#include <chrono>
//#include <thread>
//#include <condition_variable>
//#include <mutex>
//#include <ctime>
//using namespace std;
//
//condition_variable cv;
//mutex m;
//bool done=false;
//
//void run()
//{
//	auto start = chrono::high_resolution_clock::now();//当前时间
//	auto end = start+chrono::seconds(10);//当前时间
//	  //this_thread::sleep_until(end);
//	//unique_lock<mutex> lk(m);
//	//while (!done)
//	//{
//
//	//	if (cv.wait_until(lk, end) ==cv_status::timeout )//超出时间
//	//	{
//	//		done = true;
//	//		break;
//	//	}
//	//}
//	system("pause");
//}
//
//void main1()
//{
//	//thread th1(run);
//	auto start = chrono::high_resolution_clock::now();//当前时间
//	auto end = start + chrono::milliseconds(5000);//当前时间
//	//this_thread::sleep_until(end);//线程等待不用
//	system("pause");
//
//	cin.get();
//}
//
//void main()
//{
//	time_t t1, t2;
//	auto start = chrono::high_resolution_clock::now();
//	t1 = time(&t1);
//	double db = 0;
//	for (int i = 0; i < 1000000000; i++)
//	{
//		db += i;
//	}
//	t2 = time(&t2);
//	auto end = chrono::high_resolution_clock::now();
//	cout << difftime(t2 , t1) << endl;
//	cout << (end - start).count() << endl;//10的-9次方秒，高精确度
//
//	cin.get(); 
//}









//生产者，消费者
//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <condition_variable>
//#include <array>
//#include <vector>
//
//using namespace std;
//
//mutex m;
//condition_variable isfull,isempty;//处理两种情况
//bool falg = true;//标志
//vector<int> myint;
//
//void put(int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		unique_lock<mutex> lk(m);//生产锁定，生产过程不允许消费
//		while (myint.size()>=10)
//		{
//			isempty.wait(lk);//满了会一直等待
//		}
//		myint.push_back(i);//插入
//		cout << "生产 " << i+1 << endl;
//		isfull.notify_all();//通知消费者
//	}
//	this_thread::sleep_for(chrono::seconds(5));
//
//	falg = false;
//}
//void take()
//{
//	while (falg)
//	{
//		unique_lock<mutex>lk(m);//消费过程，不生产
//		while (myint.size() == 0)
//		{
//			isfull.wait(lk);
//		}
//		if (falg)
//		{
//			cout <<"消费 "<< myint[myint.size() - 1]+1 <<"  "<<this_thread::get_id()<< endl;
//			myint.pop_back();
//			isempty.notify_all();//通知生产者生产
//		}
//
//	}
//
//}
//
//void main()
//{
//	thread t1(take);
//	thread t2(take);
//	thread t3(take);
//	//put(100);
//	thread s1(put, 15);
//	thread s2(put, 15);
//
//	t1.join();
//	t2.join();
//	t3.join();
//
//	cin.get();
//}
//void main1()
//{
//	vector<int>myint{ 1,2,3,4,5 };
//	//cout << myint[0] << endl;
//
//	myint.pop_back();//删除尾部
//	myint.push_back(19);
//	for (auto i : myint)
//	{
//		cout << i << endl;
//	}
//	cin.get();
//}







//类型转换
//#include <iostream>
//using namespace std;
//static_cast<float>(x)  static_cast静态转换  <>要转换的类型 ()要转换的数据
//reinterpret_cast<char*>(pint);//指针类型转换，指针直接赋值
//涉及到const，必须用const_cast
//static_cast适用于基本数据类型
//dynamic_cast用于安全的转换父类对象与子类对象，如果数据类型不匹配转换失败设为null;
//dynamic_cast主要用于多态，依赖于虚函数
//
//void main1()
//{
//	//printf("%d", 10.2);//error
//	//printf("%f", (float)1);
//	//printf("%d", static_cast<int>(10.2));
//	//printf("%f", static_cast<float>(1));
//
//	cin.get();
//}
//
//void main2()
//{
//	int *pint = new int(1);
//	char *pch = reinterpret_cast<char*>(pint);//指针类型转换，指针直接赋值
//
//	for (int i = 0; i < 4; i++)
//	{
//		//显示数据
//		cout << static_cast<int>(*(pch + i)) <<"  "<<reinterpret_cast<void*>(pch+i)<< endl;
//	}
//
//	cin.get();
//}
////涉及到const，必须用const_cast
//void main3()
//{
//	int num[5] = { 1,2,3,4,5 };
//	const int*p = num;
//	//int *pint =reinterpret_cast<int*>( p);//不适用于const
//	int *pint = const_cast<int*>(p);
//	for (int i = 0; i < 5; i++)
//	{
//		cout << pint[i] << "  " << reinterpret_cast<void*>(pint + i) << endl;
//	}
//	cin.get();
//}
//
//class huahua//父类
//{
//public:
//	int hua1;
//	virtual void run()//virtual 虚函数
//	{
//		cout << "huahua is runing" << endl;
//	}
//};
//class xiaohua :public huahua//子类
//{
//public:
//	int xiaohua1;
//	void run()
//	{
//		cout << "xiaohuahua is playing" << endl;
//	}
//};
//
//void main()
//{
//	huahua *pfu = new huahua;
//	xiaohua *pzi = new xiaohua;//创建一个父类对象以及一个子类
//	/*pfu->run();
//	pzi->run();*/
//
//	//huahua *phua = dynamic_cast<huahua*>(pzi);//子类对象转换为父类指针
//	//cout << reinterpret_cast<void*>(phua) << endl;;
//	//phua->run();
//	
//	xiaohua *pxiaohua = dynamic_cast<xiaohua*>(pfu);
//	cout << reinterpret_cast<void*>(pxiaohua) << endl;
//	if(pxiaohua !=nullptr)
//	{
//		pxiaohua->hua1 = 10;//访问子类继续父类对象的变量
//		pxiaohua->xiaohua1 = 10;
//		pxiaohua->run();
//		(*pxiaohua).huahua::run();//子类中间父类的调用方法
//	}
//
//	cin.get();
//}
//
//void main4()
//{
//	huahua huahua1;
//	xiaohua xiaohua1;
//	huahua*p;//多态根据类型自动选择合适的类
//	
//	p= &huahua1;
//	p->run();
//	p = &xiaohua1;
//	p->run();
//}








//delete函数

////函数声明=delete
//void show(int num)
//{
//	cout << num << endl;
//}
////void show(char num) = delete;//精确匹配类型
////void show(int num) = delete;//删除函数
//void main1()
//{
//	//show('A');
//	//show(100);
//
//	cin.get();
//}

//delete处理构造析构函数
//class myclass
//{
//public:
//	//myclass() = delete;删除构造函数
//	~myclass() = delete;
//};
//void main()
//{
//	myclass*p = new myclass;
//	delete p;//函数已删除，使用delete p 出错
//	//myclass myl;
//	cin.get();
//}







//大括号处理
//#include <iostream>
//#include <initializer_list>
//using namespace std;
//
//void show(initializer_list<const char*>list)
//{
//	for (auto i : list)
//	{
//		cout << i << endl;
//	}
//}
//
//int* getmem(initializer_list<int>list)
//{
//	int length = list.size();
//	int*p = new int[length];
//	int *lck = p;
//	for (auto i : list)
//	{
//		*(p++) = i;
//	}
//	return lck;
//}
//
//void main()
//{
//	int a[5]{1,2,3,4,5};
//	//show({ 1,2,3,4,5,6,7,8,9});
//	show({"fangfang","huahua","xiaohua"});
//
//	int *p = getmem({ 1,2,3,4,5,6,7 });
//	for (int i = 0; i < 7; i++)
//	{
//		cout << p[i] << "  " << (void*)(p + i) << endl;
//	}
//	cin.get();
//}








//forward_list 单链表
//单链表节约内存，但相对消耗时间
//#include <iostream>
//#include <forward_list>

//using namespace std;
//
//void main1()
//{
//	forward_list<int> list1{ 1,2,3,4,5 };
//	list1.push_front(10);
//	//list1.push_back(10);只能头插
//
//	/*for (auto i : list1)
//	{
//		cout << i << endl;
//	}
//*/
//
//	//auto ib = list1.begin();
//	int a[5] = { 11,12,13,14,15 };
//
//	auto ib = list1.before_begin();//链表头节点
//	//list1.insert_after(ib, 19);//链表的插入
//	list1.insert_after(ib,a, a + 5);
//	list1.erase_after(ib);
//	for (auto ib = list1.begin(), ie = list1.end(); ib != ie;ib++)
//	{
//		cout << *ib << endl;
//	}
//
//	cin.get();
//}
//
//void main()
//{
//	forward_list<int>list1{ 11,2,13,4,15 };
//	forward_list<int>list2{ 19,20,28 };
//	//list1.sort();//排序
//	//list2.sort();
//	//list1.merge(list2);//归并
//	//list1.reverse();//逆转
//
//	//list1.assign(5, 20);//初始化
//	cout << list1.max_size() << endl;
//	for (auto i : list1)
//	{
//		cout << i << endl;
//	}
//
//	cin.get();
//}







//__if_exists //判断变量,函数,类型是否存在
//__if_not_exists 判断不存在
//#include <iostream>
//using namespace std;

//void run()
//{
//
//}
//
//class myclass
//{
//
//};
//void main()
//{
//	int num;
//	__if_exists(num)
//	{
//		cout << "num is" << endl;
//	}
//	__if_not_exists(run1)
//	{
//		cout << "run is" << endl;
//	}
//	__if_exists(myclass)
//	{
//		cout << "class is" << endl;
//	}
//	cin.get();
//}
//template<class T>
//class Tclass
//{
//public:
//	T t;
//	void show(T tx)
//	{
//		cout << tx << endl;
//	}
//
//};
//void main()
//{
//	Tclass <int> t1;
//	__if_exists(Tclass <int>)
//	{
//		cout << "is" <<endl;
//	}
//
//	cin.get();
//}








//引用包装器  ref()让模板识别为引用
//#include <iostream>
//using namespace std;
//
//void change(int &num)//引用作为参数 
//{
//	num = 3;
//}
//void main1()
//{
//	int data = 100;
//	//change(data);
//
//	int &rdata(data);
//	change(rdata);
//	cout << data << endl;
//
//	cin.get();
//}
//
//template<class T>
//void show(T t)//函数模板，改变引用
//{
//	cout << t << endl;
//	t += 10;
//}
//
//void main()
//{
//	double db(1.0);
//	double &rdb(db);
//	//show(db);
//	show(ref(rdb));
//	cout << db << endl;
//
//	cin.get();
//}







//函数包装器与模板
//#include <iostream>
//#include <functional>//函数包装器
//
//using namespace std;
//using std::function;
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//template<class T, class F>
//T run(T t1, T t2, F f)
//{
//	return f(t1, t2);
//}
//
//void main()
//{
//	function<int(int, int)> fun1 = add;//包装函数
//	function<int(int, int)> fun2 = [](int a, int b)->int {return a + b; };
//
//	//cout << fun1(20, 19) << endl;
//	cout << run(19, 29, fun1) << endl;//默认推导，原生函数优先
//	cout << run < int, function<int(int, int)> >(19, 29, fun1) << endl;
//
//	cin.get();
//}






//函数之间模板的嵌套
//#include <iostream>
//#include <vector>
//#include <list>
//
//using namespace std;
//
//template <class T1,class T2>
//void showll(vector<T1> v,list<T2> l)
//{
//	vector< vector<T1> > v1;//模板的嵌套
//
//	for (auto i : v)
//	{
//		cout << i << endl;
//	}
//	for (auto i : l)
//	{
//		cout << i << endl;
//	}
//}
//
//void main()
//{
//	vector<int> myint1{ 1,2,3,4,5 };
//	vector<char> mych1{ 'A','B','C','D','E' };
//	list<int> myint2{1,2,3,4,5 };
//	list<char> mych2{ 'A','B','C','D','E' };
//	showll(myint1,mych2);
//	showll(mych1,myint2);
//
//
//	cin.get();
//}






//模板内部的引用
//变量，左值引用，右值引用，原则不能冲突
//ref 变量->左值引用
//move 右值引用 左值引用

//模板自带引用，无论& ，&& 都是原本
//T t ，ref 都是原本，否则都是副本
//#include <iostream>
//using namespace std;
//
//template<class T>
//void print1(T t)
//{
//	cout << "print(T t)" << endl;
//	t += 1;
//	cout << t << endl;
//}
//template<class T>
//void print2(T & t)
//{
//	cout << "print(T & t)" << endl;
//	t += 1;
//	cout << t << endl;
//}
//template<class T>
//void print3(T && t)
//{
//	cout << "print(T && t)" << endl;
//	t += 1;
//	cout << t << endl;
//}
//
//void main1()
//{
//	int data = 100;
//	int & rdata(data);
//	int && rrdata(data+1);
//	//print1(data);//副本
//	//print1(ref(data));//原本   引用包装，包装变量或函数
//	//print1(rdata);
//	//print1(rrdata);//右值引用内存保存的临时值
//
//	cout << "data= " << data << endl;
//
//	cin.get();
//}
//void main2()
//{
//	int data = 100;
//	int & rdata(data);
//	int && rrdata(data + 1);
//	//print2(data);该模板自带引用
//	//print2(rdata);
//	//print2(rrdata);
//	cout << "data= " << data<<endl;
//	cout << "rdata= " << rdata<<endl;
//	cout << "rrdata= " <<rrdata<< endl;
//
//	cin.get();
//}
//void main()
//{
//	int data = 100;
//	int & rdata(data);
//	int && rrdata(data + 1);
//	//print3(data);
//	//print3(rdata);
//	//print3(rrdata);
//	cout << "data= " << data << endl;
//	cout << "rdata= " << rdata << endl;
//	cout << "rrdata= " << rrdata << endl;
//	cin.get();
//}







//函数模板重载
//参数的个数，类型不一样，顺序重载，与返回值无关
//有指针优先匹配指针
//#include <iostream>
//using namespace std;
//
//template<class T>
//void go(T t1)
//{
//	cout << "TTT" << endl;
//	cout << t1 << endl;
//}
//template<class T>
//void go(T *t1)
//{
//	cout << "***" << endl;
//	cout << t1 << endl;
//}
//
//void main()
//{
//	int *p=new int[5]{ 1,2,3,4,5 };
//	go(p[0]);
//	go(p);
//	go(&p);//地址趋向于地址
//	cin.get();
//}







//模板的默认参数
//#include <iostream>
//using namespace std;
////保证所有的类型参数可以推导，默认，明确
////函数参数遵循函数默认规则
//template<class T=int,int n=10> //模板参数可以有默认值
//void bobo(T bobo)
//{
//	cout << n << endl;
//	cout << bobo << endl;
//}
//
////节约输入参数，类型参数可以任意制定，填充从左到右，必须覆盖类型参数
//template<class T1=int,class T2=int,class T3=int,class T4=int>
//
////函数参数，默认统一在右边，至少要把不默认的填充了才能调用
//void boda(T1 t1=250.11,T2 t2=250.11,T3 t3 = 250.11,T4 t4=250.11)
//{
//	cout << t1 << " " << t2 << " " << t3 << " " << t4 << endl;
//
//}
//void main()
//{
//	//bobo<>(250.250);//自动推理
//	//bobo<int>(250.250);
//	//bobo<int, 250>(250.250);
//
//	boda<int,int,int,int>();
//
//	cin.get();
//}







//函数模板的指针匹配
#include <iostream>
//using namespace std;
////模板自动匹配 * 多的
//template<class T>
//void com(T *p)
//{
//	cout << " * " << endl;
//	cout << typeid(T).name() << endl;
//}
//template<class T>
//void com(T **p)
//{
//	cout << " ** " << endl;
//	cout << typeid(T).name() << endl;
//}
//void main()
//{
//	int *p = nullptr;
//	int **pp = nullptr;
//	int ***ppp = nullptr;
//	com(p);
//	com(pp);
//	com(ppp);
//
//	cin.get();
//}








//绑定类成员函数
//函数绑定器--仿函数

//bind()绑定包装器 ，包装类成员函数，用于使用，绑定无法使用重载
//#include <iostream>
//#include <functional>
//using namespace std;
//using namespace std::placeholders;
//
//struct Mystruct
//{
//	void add1(int a)
//	{
//		cout << a << endl;
//	}
//	void add2(int a, int b)
//	{
//		cout << a << b << endl;
//	}
//	void add3(int a, int b, int c)
//	{
//		cout << a << b << c << endl;
//	}
//
//};
//void main1()
//{
//	Mystruct my1;
//	cout << typeid(my1.add1).name() << endl;
//	cout << typeid(&Mystruct::add1).name() << endl;
//	void (Mystruct::*p)(int a) = &Mystruct::add1;
//	//void (mystruct::*p)(int a) add函数数据类型
//	//Mystruct::p(10);//error,  p很难调用，需要封装一下
//	cin.get();
//}
//
//void main()
//{
//	Mystruct my1;     //函数名        对象地址
//	auto fun1 = bind(&Mystruct::add1, &my1, _1);//bind()绑定 ，有一个参数
//	fun1(1000);
//	auto fun2 = bind(&Mystruct::add2, &my1, _1, _2);//有两个参数
//	fun2(100, 200);
//	auto fun3 = bind(&Mystruct::add3, &my1, _1, _2, _3);//有三个参数
//	fun3(120, 200, 900);
//	cin.get();
//}


//函数包装器深入
//#include <iostream>
//#include <functional>
//using namespace std;
//using namespace std::placeholders;
//
//int add1(int a, int b)
//{
//	return a + b;
//}
//int add2(int a, int b,int c)
//{
//	return a + b + c;
//}
//void main1()
//{
//	auto fun = bind(add1, 10, _1);//适配器模式
//	cout << fun(1100) << endl;
//
//	auto fun1 = bind(add2, 10, 12,_1);
//	cout << fun1(1100) << endl;
//
//	cin.get();
//}
//
//void main2()
//{
//	auto fun = bind([](int a, int b)->int {return a + b; }, 100, _1);
//	cout <<fun(123)<< endl;
//	cin.get();
//}
//
//
//struct Mystruct
//{
//	int operator()(int a, int b)
//	{
//		cout << "a= " << a << "b= " << b << endl;
//		return a + b;
//	}
//
//};
//void main()
//{
//	Mystruct my1;
//	//cout << my1(1, 2) << endl;
//	auto fun = bind(my1, 100, _1);//绑定 ,栈位从左到右
//	cout <<fun(123)<< endl;
//
//	cin.get();
//}






//静态断言
//#include <iostream>
//#include <cassert>
//using namespace std;
//
//int divv(int a, int b)
//{
//	assert(b != 0);//提前报错
//	return a / b;
//}
//void main1()
//{
//	cout << divv(1, 0) << endl;
//	cin.get();
//}
//
////static_assert(sizeof(void*)>= 8, "is not 64");
//void main()
//{
//	//int b = 0;
//	const int a = 0;//    a=b   error
//	//static_assert(a > 0, "is not 64");//不可以使用变量
//	static_assert(a > 0, ">0,is not");
//	cin.get();
//}





//内联函数  inline
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//#define f(x) x*x*x  //C语言内联函数
//
//inline int get(int x);//C++
//
////提高程序运行速度
//
////inline只是对于编译器的建议
////一般情况下，我们对于内联函数做如下限制：
////（1）不能有递归
////（2）不能包含静态数据
////（3）不能包含循环
////（4）不能包含switch和goto 语句
////（5）不能包含数组
////若一个内联函数定义不满足以上限制，编译系统将把它当做普通普通函数对待
//
//
//template <class T>
//inline T go(T t)//inline同样适用于函数模板
//{
//	return t * t;
//}
//
//void main()
//{
//	go(5);
//	cin.get();
//}
//int get(int x)//已声明可以省略inline
//{
//	return x * x*x;
//}






//C++转义字符
//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//
//void main1()
//{
//
//	//string str("\"C:\\Program Files (x86)\\Microsoft\\Edge\\Application\\msedge.exe\"");
//	string str(R"("C:\Program Files (x86)\Microsoft\Edge\Application\msedge.exe")");
//	//R"()";转义
//	
//	system(str.c_str());
//	system("pause");
//}
//void main()
//{
//	/*string str("\"C:\\Program Files (x86)\\Microsoft\\Edge\\Application\\msedge.exe\"");*/
//	string str(R"("C:\Program Files (x86)\Microsoft\Edge\Application\msedge.exe")");
//	cout << str.c_str() << endl;
//
//	cin.get();
//}






//正则表达式
//regex_match 验证
//regex_search 检索
//regex_replace  替换

//#include <iostream>
//#include <regex>
//using namespace std;

//void main1()
//{
//	regex reg("^select ([a-zA-Z]*) from ([a-zA-Z]*)$");
//	cmatch what;//匹配的词语检索出来
//	bool isit = regex_match("select id from admin", what, reg);
//	if ( isit)
//	{
//		for (int i = 0; i != what.size(); ++i)
//		{
//			cout << what[i + 1].first <<"\t";
//		}
//		cout << "匹配" ;
//	}
//	else
//	{
//		cout << "NO匹配" << endl;
//	}
//	cin.get(); 
//}
//
//void main2()
//{
//	//^ 开头
//	//()组
//	//[]或
//	//{}几次
//	//$结尾
//	regex reg("^(1[3|4|5|8|7][0-9]{9})");
//	string str1;
//	cin >> str1;
//	bool isit = regex_match(str1, reg);//第一种方式，不需要结果
//	if (isit)
//	{
//		cout << "OK";
//	}
//	else
//	{
//		cout << "NO";
//	}
//	cin.get();
//}
//
//void main3()
//{
//	cmatch match;
//	regex reg("\\d+");//数字
//	char str1[50]="hello 8848,hello huahua 180";
//	bool isok = regex_search(str1, match, reg);
//	if (isok)
//	{
//		for (int i = 0; i != match.size(); i++)
//		{
//			cout << match[i].first << endl;
//		}
//	}
//
//	cin.get();
//}
//
//void main()
//{
//	cmatch match;
//	regex reg("\\d+");//数字
//	char str1[50] = "hello 8848,hello huahua 180";
//	cout << regex_replace(str1, reg, "asdf") << endl;//无返回值
//
//	cin.get();
//}





