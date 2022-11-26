
#define _CRT_SECURE_NO_WARNINGS ; 

//CPP 结构体与C的区别
//1，CPP 结构体可以为空，
//2  CPP可以有默认值
//3  CPP 结构体定义变量，无需关键字
//4  CPP结构体可以有函数
//5  变量函数指针，是变量，lambda相当于函数块，不计入体积 
//6  CPP结构体默认公有，也可以设置私有
//7  结构体声明，只能创建指针引用，拓展结构体作用范围
//8  结构体内部可以创建引用或指针
//9  匿名结构体不可以初始化
//10 结构体可以继承，多态

#include <iostream>
#include <functional>
using namespace std;

//struct Mystruct
//{
//	//void(*p)() = []() {};
//	//function <void(void)> fun = []() {};
//	//function <void(int)> fun1 = [](int a) {};
//};
//void main1()
//{
//	//function 包装器一个40字节
//	//指针4个字节
//	cout << sizeof(Mystruct) << endl;
//	cin.get();
//}
//
//struct point
//{
//private:
//	int x;
//	int y;
//public:
//	point(int a,int b):x(a), y(b) //x用a初始化，y用b初始化
//	{
//
//	}
//	void show()
//	{
//		cout << x << "  " << y << endl;
//	}
//};
//
//void main4()
//{
//	//point p1{1,2};
//	//p1.show();
//	
//	//结构体含私有成员的初始化方法
//	//私有，需要构造函数，按照这个风格初始化
//	//point p1(1,2);
//	//p1.show();
//	//point *ps = new point(3, 4);//指针
//	//ps->show();
//	//point p2[3]{point(13,4),point(13,4),point(13,4) };//数组
//	//point *ps = new point[3]{ point(13,4),point(13,4),point(13,4) };//堆上数组
//
//	//p1.x = p1.y = 10;//外部访问
//
//	cin.get();
//}

//struct Mystruct;//结构体声明，只能创建指针，引用
//Mystruct *p;
////Mystruct my;//error 变量
//void show(Mystruct &my)//引用
//{
//
//}

//struct wuwei
//{
//	virtual void show()
//	{
//		cout << "老子是男神" << endl;
//	}
//};
//struct xiaowei :public wuwei
//{
//	void show()
//	{
//		cout << "男神之神" << endl;
//	}
//};
//void main()
//{
//	wuwei *p = new wuwei;//多态
//	p->show();
//	p = new xiaowei;
//	p->show();
//
//	cin.get();
//}







//私有数据问题 
//#include <iostream>
//using namespace std;
//struct Mystruct
//{
//private:
//	int a;
//	int b;
//public:
//	Mystruct(int x, int y) :a(x), b(y)
//	{
//
//	}
//	void show()
//	{
//		cout << a<< " " << b << endl;
//	}
//};
//
//void main()
//{
//	//Mystruct my1{ 1,2 };
//	Mystruct my1(3,4);
//	Mystruct my2 = my1;//赋值，赋值拷贝，无论私有或公有
//	 
//	my2.show();
//	cin.get();
//}





//异常
//try 尝试运行
//throw 抛出错误
//catch 解决错误

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int divv1(int a, int b)
//{
//	cout << "a=" << a << "  b=" << b << endl;
//	return a / b;
//}
//int divv2(int a, int b)
//{
//	try 
//	{
//		if (a == 0)
//		{
//			throw 1;//抛出错误
//		}
//		if (b == 0)
//		{
//			throw 2;
//		}
//		cout << "a=" << a << "  b=" << b << endl;
//		return a / b;
//	}
//	catch (int code)
//	{
//		if (code == 1)
//		{
//			cout << "被除数不能为零" << endl;
//		}
//		if (code==2)
//		{
//			cout << "除数不能为零" << endl;
//		}
//		return 0;
//	}
//	 
//}
//void main()
//{
//	int num1;
//	int num2;
//	cin >> num1 >> num2;
//	cout << divv2(num1 , num2) << endl;
//
//	cin.get();
//}






//CPP数据类型极限  limits
//#include <iostream>
//#include <limits>
//
//using namespace std;
//
//void main()
//{
//	cout << numeric_limits<int>::max() << endl;
//	cout << numeric_limits<int>::min() << endl;
//	cout << numeric_limits<int>::lowest() << endl;//整数一样的含义min（）
//
//	cout << numeric_limits<double>::max() << endl;
//	cout << numeric_limits<double>::min() << endl;//能表示最小精度的数
//	cout << numeric_limits<double>::lowest() << endl;//能表示最小的数
//	cin.get();
//}







//算法容器函数
//#include <iostream>
//#include <functional>
//#include <vector>
//#include <numeric>
//#include <algorithm>
//using namespace std;
//using namespace std::placeholders;
//struct my
//{
//	int get(int data)
//	{
//		return data % 2 == 0;
//	}
//};
//
//template<class T>
//bool getT(T t)
//{
//	return t % 2 == 0;
//}
//
//int get(int data)
//{
//	return data % 2 == 0;
//}
//struct Mystruct
//{
//	int operator()(int data)//伪函数
//	{
//		return data % 2 == 0;
//	}
//
//};
//void main()
//{
	//vector<int> myint{ 1,2,3,4,5,6,7,8,9,11 };
	//int num = count_if(myint.begin(), myint.end(), [](int data)->bool {return data % 2 == 0; });

	//int num = count_if(myint.begin(), myint.end(), Mystruct());

	//int num = count_if(myint.begin(), myint.end(), get);

	//int num = count_if(myint.begin(), myint.end(), getT<int>);模板需要推理类型

	/*my my1;
	auto fun = bind(&my::get, &my1, _1);函数绑定器，绑定成员函数
	int num = count_if(myint.begin(), myint.end(), fun);
	cout << num << endl;
*/
//cin.get();
//}







//allocator 手动分配内存及释放
//allocator<Myclass>my; 自动控制构造析构的时间
//#include <iostream>
//#include <memory>
////#include <allocators>
//#include <cstdlib>
//using namespace std;
//
//class Myclass
//{
//public:
//	~Myclass()
//	{
//		cout << "  ~~myclass" << endl;
//	}
//	Myclass()
//	{
//		cout << "   mclass" << endl;
//	}
//	Myclass(const Myclass &my)
//	{
//		cout << "   copy " << endl;
//	}
//};
//void main1()
//{
//	Myclass *p = new Myclass;
//	delete p;
//	cin.get();
//}
//
//void main2()
//{
//	allocator<Myclass>my;//分配器
//	Myclass *p = my.allocate(1);//分配一个元素
//	my.construct(p, Myclass());//涉及面向对象中的重要内容。拷贝   Myclass()匿名对象，销毁自动调用析构函数
//
//	//my.destroy(p);//释放内容，没有释放内存,调用析构函数
//	my.deallocate(p, 1);//释放内存
//
//	cin.get();
//}
//
//void main11()
//{
//	//匿名对象在寄存器与缓存，刷新速度快
//	//Myclass();//匿名对象，构造完了，马上析构
//	//Myclass *p = new Myclass;//存放在堆上就不会马上释放
//
//
//	//Myclass f1;//Myclass f1=Myclass();缩写
//
//	//int a(5);//原理就是构造函数
//	//int a = int(5);
//	//cout << "  a" << a << endl;
//
//	cin.get();
//}
//void main22()
//{
//	allocator<Myclass>my;//分配器
//	Myclass *p = my.allocate(3);//分配三个
//
//	my.construct(p, Myclass());
//	my.construct(p+1, Myclass());
//	my.construct(p+2, Myclass());
//
//	my.destroy(p);
//	my.destroy(p + 1);
//	my.destroy(p + 2);
//
//	cin.get();
//}







//delete default 以及类中生成的默认四大函数
//#include <iostream>
//using namespace std;
//class myclass
//{
//public:
	//myclass(const myclass&my) = delete;//删除
	//四大函数
	//拷贝构造， 构造，析构，赋值重载
	//myclass my1;myclass my2(my1);//拷贝构造
	//myclass *p=new myclass;构造
	//delete p//析构
	//myclass my1;myclass my2;my2=my1;//赋值重载
	//myclass() =default;//default 声明存在
	//C++会给每个类生成的四个函数，写了新的会覆盖旧的，default 表示旧函数的存在


	//myclass(delete);//删除构造
//	myclass()
//	{
//		cout << "create" << endl;
//	}
//	//~myclass=delete;//删除析构
//	~myclass()
//	{
//		cout << "delete" << endl;
//	}
//	myclass() =default;
//};
//void main1()
//{
//	/*myclass my1;
//	myclass my2(my1);*/
//	myclass my1;
//	myclass my2;
//	my2 = my1;
//
//	cin.get();
//}

//class myclass
//{
//public:
//	int x;
//	int y;
//	myclass()
//	{
//		cout << "构造" << endl;
//	}
//	~myclass()
//	{
//		cout << "析构" << endl;
//	}
//	myclass(const myclass&my)
//	{
//		x = my.x;
//		y = my.y;//要把原来的覆盖了，需要自己实现
//
//		cout << "拷贝构造" << endl;
//	}
//	void show()
//	{
//		cout << x << "  " << y << endl;
//	}
//	/*myclass operator=(const myclass &my)=delete;*/
//	void operator=(const myclass &my)
//	{
//		x = my.x;
//		y = my.y;
//		cout << "赋值重载" << endl;
//	}
//};
//
//void main()
//{
//	myclass my1;
//	myclass my2;
//	my1.x = 10;
//	my1.y = 20;
//	my1.show();
//	my2 = my1;//赋值重载
//	my2.show();
//	cin.get();
//}
//void main1()
//{
//	myclass my1;
//	my1.x = 10;
//	my1.y = 20;
//	my1.show();
//	myclass my2(my1);//拷贝构造
//	my2.show();
//
//	cin.get();
//}


//default
//#include <iostream>
//using namespace std;
//
//class bobo
//{
//public :
//	int x;
//	int y;
//	int z;
//	bobo() = default;//声明存在
//	/*bobo();
//	{
//
//	}*/
//	bobo(int a, int b, int c) :x(a), y(b), z(c)
//	{
//
//	}
//};
//void main()
//{
//	//写了构造函数之后，会覆盖原生函数
//	bobo bo1(1,2,3);
//
//	cin.get();
//}






//模板参数展开
//模板元，代码优化
//#include <iostream>
//#include <cstdarg>
//using namespace std;
//template <class T >
//void show(T t)
//{
//	cout << t << endl;
//}
//template <class ...Args>
//void all(Args...args)
//{
//	int arr[] = {(show(args),0)...};
//	//int arr[],展开约束
//}
//template <class ...Args>
//void allit(Args...args)
//{
//	int arr[]={ (show(args),0)... };
//}
//
//void main()
//{
//	allit(1, 'a', "123", 7.8);
//	//all(1, 2, 3, 4, 5);
//	//all(1, 2, 3, 4, 5, 6);
//
//
//	cin.get();
//}






//类型后缀  
//#include <iostream>
//using namespace std;
//
//struct huihui
//{
//	unsigned int num;
//};
//operator "" _h 增加后缀
//文本运算符的整数参数类型("unsigned long")无效；
//应该为 char、wchar_t、char16_t、char32_t 或 unsigned long long	
//文本的后缀只能放在外部，或命名空间内

//huihui operator "" _h(unsigned long long  data)
//{
//	return { (unsigned int)data }; //{}给结构体初始化，()传递的数据类型与接收的一致
//}
//void main()
//{
//	huihui hui1 = 12_h;
//
//	cin.get();
//}
//void main1()
//{
//	float a = 1.0f;
//	cin.get();
//}





//逻辑lambda
//#include <iostream>
//#include <cstring>
//using namespace std;
//"1"  1
//"11"  1*2+1 = 3
//"101" 1*2*2 +1 = 5
//"101" (1*2+0)*2 +1 = 5

//void main()
//{
//	char str[100]{ 0 };
//	cin >> str;
//	cout<<[](char *str)->int 
//	{
//		int res = 0;
//		int length = strlen(str);
//		for (int i = 0; i < length; i++)
//		{
//			res *= 2;
//			res += str[i] - '0';
//		}
//		return res;
//	}(str)<< endl;
//
//	cin.get();
//}




//lambda递归
//#include <iostream>
//#include <functional>
//using namespace std;

//void main1()
//{
//	//&调用外部
//	function<void(void)> fun = [&]()->void  
//	{
//		cout << "huahua" << endl;
//		fun();
//	};
//	fun();
//
//	cin.get();
//}
//void main()
//{
//	
//	function<int(int)> fun = [&](int i) 
//	{
//		if (i == 0)
//		{
//			return 0;
//		}
//		else
//		{
//			cout << i << endl;
//			return fun(i - 1);
//		}
//	};
//	cout<<fun(100)<< endl;
//
//	cin.get();
//}






//函数重载与函数指针
//#include <iostream>
//using namespace std;
//
//const char * go()
//{
//	return __func__;//取出函数名
//}
//void main1()
//{
//	//cout << go() << endl;
//
//	cin.get();
//}
//
////参数个数，类型，顺序，与返回值无关
////类成员函数，构造函数，普通函数。 
////类外部普通函数，重载函数否可以重载
//int add(int a)
//{
//	return a;
//}
//int add(double a, double b)
//{
//	return a + b;
//}
//int add(int a, int b, int c)
//{
//	return a + b + c;
//}
//void main2()
//{
//	int(*p1)(int) = add;
//	int(*p2)(double,double) = add;
//	cout << p1 << endl;
//	cout << p2 << endl;
//	cin.get();
//}
//
//struct mys
//{
//	//构造函数重载
//	mys()
//	{
//
//	}
//	mys(int i)
//	{
//
//	}
//
//
//	//类成员函数重载
//	void go()
//	{
//
//	}
//	void go(int)
//	{
//
//	}
//};







//函数指针类型与decltype
//#include <iostream>
//using namespace std;

//void add()
//{
//
//}
//void add(int a)
//{
//	cout << a <<endl;
//}
//
//void main1()
//{
//	/*decltype (add) add1;*///error.重载情况下不明确
//	decltype (add) add1;//函数指针
//	void (*p)(int a) = add;//函数指针
//	cout << add << endl;
//	cout << (*add) << endl;
//	cout << (&add) << endl;
//	//函数名，*+函数名，&+函数名，一致
//	(add(1));
//	((*add)(2));
//	((&add)(3));
//	cin.get();
//}
//
//void add(int a)
//{
//	cout << a << endl;
//}
//void main()
//{
//	decltype (add) &add1 = add;//生成一个引用
//	decltype (add) *add2 = add;//生成一个指针
//	add1(1);
//	add2(2);
//
//	//decltype (add) add2;//decltype 获取函数名，创建一个函数指针，用新的名称
//	
//	decltype (10) data1 = 10;//数据类型，构造一个
//	decltype (10) data2 (10);
//
//	cin.get();
//}








//函数模板推理机制
//#include <iostream>
//using namespace std;
//
//template <typename T>
//void go(T t)
//{
//	cout << typeid(t).name() << endl;
//	cout <<" t" << endl;
//}
//template <typename T>
//void go(T *t)
//{
//	cout << typeid(t).name() << endl;
//	cout << t<<"*****" << endl;
//}
//template <int i>
//void go()
//{
//	cout << i<< endl;
//}
//
//void main()
//{
//	//go<31-2>();数字模板调用方式
//	//go<decltype(32 - 1)>(12234);调用泛型模板，decltype获取数据类型
//	//nullptr 不是指针类型，是自定义类型，表示为空指针
//	go(nullptr);
//
//	int *p = nullptr;
//	go(p);
//	cin.get();
//}






//函数指针与函数模板
//函数模板当函数指针使用需要用<>指定类型
//#include <iostream>
//#include <functional>
//using namespace std;
//using namespace std::placeholders;
//
//template<class T>
//void show(T t)
//{
//	cout << t << endl;
//}
//
//struct Mystruct
//{
//	template<class T>
//	void show(T t)
//	{
//		cout << t << endl;
//	}
//	template<class T>
//	void showit(T t1,T t2)
//	{
//		cout << t1<<" "<<t2 << endl;
//	}
//	void go()
//	{
//		show(1234);
//	}
//};
//
//void main()
//{
//	Mystruct my1;
//	auto fun = bind(&Mystruct::showit<int>, &my1, 1, _1);
//	fun(2);
//
//
//	cin.get();
//}
//void main2()
//{
//	Mystruct my1;
//	my1.go();
//	my1.show(123);
//	my1.show(12.4);
//	my1.show<int>('3');
//
//	cin.get();
//}
//
//void main1()
//{
//	void(*p)(int i)=show<int>;
//	void(*p1)(double db) = show<double>;
//
//	cin.get();
//}







//C/C++数组
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void main3()
//{
//	char str[100] = "hollo world!";
//
//	/*for (auto i : str)
//	{
//		cout << (int)i << endl;
//	}
//*/
//	char *p1 = begin(str);//首元素地址
//	char*p2 = end(str);//末尾结束符地址
//	for (auto ib = begin(str), ie = end(str); ib != ie; ib++)
//	{
//		cout << *ib << endl;
//	}
//
//	cin.get();
//}
//void main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int *p1 = begin(a);
//	int *p2 = end(a);
//	for (int i = 0; i < 5; i++)
//	{
//		cout << a + i << endl;
//	}
//	cout << p1 << endl;
//	cout << p2 << endl;
//	cin.get();
//}







//构造函数常见错误
//#include <iostream>
//#include <cstdlib>
//#include <string>
//
//using namespace std;
//初始化数据的时候，如果类中引用其他类，需要重写构造函数

//union myu  error
//{
//	string str1;//string 是一个类，自己有构造函数
//	int a;
//	int b;
//};

//union内部如果有自定义的类，有自己的构造函数，union原来的构造函数会被删除，需要自己实现
//union myu
//{
//	string str1;
//	int a;
//	int b;
//	myu()
//	{
//		new(&str1)string;//调用string的构造函数
//	}
//	~myu()
//	{
//		str1.~basic_string();//析构
//	}
//};

//struct Mys
//{
//	string str;
//	int a;
//	int b;
//};
//void main1()
//{
	//myu my1;
	//Mys mysull;

	//cin.get();
//}  

//struct my
//{
//	int a;
//	int b;
//	my(int x,int y):a(x),b(y)
//	{
//
//	}
//};
//void main()
//{
//	my *p=new my[3]{ {1,2},{3,4},{5,6} };//涉及到new 需要重写构造函数
//	for (int i = 0; i < 3; i++)
//	{
//		cout << p[i].a<< "  " << p[i].b << endl;
//	}
//	cin.get();
//}








//分数数据类型
//#include <iostream>
//#include <ratio>//分数，精准化数据
//using namespace std;
//
//void main()
//{
//
//	typedef ratio<1, 2>er;
//	typedef ratio<1, 3>th;
//	er er1;
//	th th1;
//	//   分母              分子
//	cout << er1.num  <<"/"<< er1.den<< endl;
//	cout << th1.num << "/" << th1.den  << endl;
//	typedef ratio_add<er, th> sum;
//	cout << sum::num << " / " << sum::den << endl;
//	cout << (double)(sum::num) / (sum::den) << endl;//转换
//	cin.get();
//}







//数据类型索引容器
//#include <iostream>
//#include <typeinfo>//类型信息
//#include <typeindex>//类型的索引
//#include <unordered_map>//映射，红黑树
//#include <string>
//using namespace std;
//
//struct Cpp
//{
//
//};
//void main()
//{
//	//根据数据类型储存数据类型
//	unordered_map<type_index, string> mytype;//类型与字符串映射
//	mytype[typeid(int)] = "整型类型";
//	mytype[typeid(double)] = "实数类型";
//	mytype[typeid(Cpp)] = "Cpp class ";
//
//	cout << mytype[typeid(int)] << endl;
//	cout << mytype[typeid(double)] << endl;
//	cout << mytype[typeid(Cpp)] << endl;
//	cin.get();
//
//}







//委托构造
//#include <iostream>
//using namespace std;
//
//class huihui
//{
//public:
//	huihui():huihui(1)
//	{
//		cout << "huihui()" << endl;
//	}
//	huihui(int i) :huihui(i,'A')
//	{
//		cout << "huihui(int i)" << endl;
//	}
//	huihui(char c):huihui(1,'A')
//	{
//		cout << "huihui(char c)" << endl;
//	}
//	void show()
//	{
//		cout << id << " " << ch << endl;
//	}
//private:
//	//重要的东西放在内部
//	huihui(int i, char c) :id(i),ch(c)//主构造函数，目标构造
//	{
//		cout << "huihui(int i,char c)" << endl;
//	}
//	int id;
//	int ch;
//};
//void main()
//{
//	huihui fun;
//	fun.show();
//
//	cin.get();
//}







//CPP类运算符
// . ->    .*   ->*
//#include <iostream>
//using namespace std;
//
//class op
//{
//	int a = 0, b = 0;
//public:
//	//初始化
//	op(int x,int y):a(x),b(y)
//	{
//
//	}
//	~op()
//	{
//
//	}
//	int add()
//	{
//		return a + b;
//	}
//	int sub()
//	{
//		return a - b;
//	}
//};
//class myclass
//{
//public:
//	int add(int a, int b)
//	{
//		cout << "add call" << endl;
//		return a + b;
//	}
//
//};
//void main()
//{
//	myclass my1;
//	myclass *pmy = &my1;
//	//my1.add(1, 2);
//	//cout << typeid(my1.add).name() << endl;//通过对象调用函数，变成了普通函数
//	//cout << typeid(&myclass::add).name() << endl;//无法直接访问
//	//int(*p)(int, int)=my1.add;//error
//	
//	int(myclass::*p)(int, int) = &myclass::add;//创建一个函数指针存放类成员函数。
//	cout << (my1.*p)(1, 2) << endl;//对象
//	cout << (pmy->*p)(1, 2) << endl;//指针
//	//访问类成员函数指针的时候，指针调用 ->*  ,对象调用 .*  
//	cin.get();
//
//}
//
//void main1()
//{
//	op op1(1,2);
//	op1.add();
//
//	op*op2 = new op(1, 2);
//	op2->add();//指针用->。对象用 .
//
//	cin.get();
//}






//类成员函数指针
//#include <iostream>
//using namespace std;
//
//class myclass
//{
//public:
//	int add(int a, int b)
//	{
//		return a + b;
//	}
//	int sub(int a, int b)
//	{
//		return a - b;
//	}
//	int mul(int a, int b)
//	{
//		return a * b;
//	}
//	int divv(int a, int b)
//	{
//		return a / b;
//	}
//};
//void main1()
//{
//	myclass *pclass(nullptr);
//	int(myclass::*p)(int, int) = &myclass::add;
//	//空指针可以调用，没有类成员数据的，类成员函数指针
//	cout << pclass->add(1, 2) << endl;
//	cout << (pclass->*p)(1, 2) << endl;
//	cout << ((*pclass).*p)(1, 2) << endl;
//	cin.get();
//}
//void main2()
//{
//	//类成员函数指针数组
//	myclass*pclass(nullptr);
//	//栈上
//	//int(myclass::*p[4])(int, int) = { &myclass::add,&myclass::sub,&myclass::mul,&myclass::divv };
//	//堆上
//	int (myclass::**p)(int, int);
//	p = new  (int(myclass::*[4])(int, int)){ &myclass::add,&myclass::sub,&myclass::mul,&myclass::divv };
//	for (int i = 0; i < 4; i++)
//	{
//		cout << (pclass->*p[i])(100,10) << endl;//下表循环
//	}
//	for (int(myclass::**pp)(int, int) = p; pp < p + 4; pp++)
//	{
//		cout << (pclass->**pp)(100, 10) << endl;//指针循环
//	}
//
//	cin.get();
//}
//
//
//void change( int (myclass::*& p)(int, int) )//int (myclass::*& p)(int, int)类成员函数的引用
//{
//	p = &myclass::sub;
//
//}
////changeit的参数是类成员函数引用，返回值是类成员函数引用
//int( myclass::* &  changeit(   int (myclass::* & p)(int, int)   ) ) (int, int)
//{
//	p = &myclass::sub;
//	return p;
//
//}
//void main3()
//{
//	myclass*pclass(nullptr);
//	int (myclass::*p)(int, int) = &myclass::add;
//	//change(p);
//
//	p = changeit(p);
//	cout << (pclass ->* p)(100, 10) << endl;
//
//	cin.get();
//}
//
//void showit(int(myclass:: *p[4])(int, int))//类成员函数作为参数会退化为二级类成员函数指针
//{
//	p += 3;
//	cout << "showit" << endl;
//}
//void showita(int(myclass::**pp)(int, int))
//{
//	myclass *pclass(nullptr);
//	for (int(myclass::**pp1)(int, int) = pp; pp1 < pp + 4; pp1++)//二级类成员函数指针遍历类成员函数指针数组
//	{
//		cout << (pclass->**pp1)(100, 10) << endl;
//	}
//}
//
//void  main()
//{
//	myclass *pclass(nullptr);
//	int(myclass::*p[4])(int, int) = { &myclass::add,&myclass::sub,&myclass::mul,&myclass::divv};
//	showita(p);
//
//	cin.get();
//}







//构造与析构概念
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//构造函数，自己默认有一个，自己写会覆盖原生
//myclass() = default; 声明默认存在
//构造函数一般初始化
//析构函数一般回收释放内存
//析构没有参数，不可重载。
//class myclass
//{
//public:
//	//myclass() = default;
//	int *p;
//	myclass()
//	{
//		cout << "myclass ()" << endl;
//		p = new int[10000];
//	}
//	~myclass()
//	{
//		cout << "~myclass()" << endl;
//		delete[] p;
//	}
//
//};
//
//void go()
//{
//	//myclass my1;栈区
//	myclass *p = new myclass;
//}
//
//void main()
//{
//	//	myclass my1;
//	go();
//	cin.get();
//}







//构造函数初始化成员列表
//#include <iostream>
//using namespace std;
//
//class myclass
//{
//public:
//	myclass() :x(4), y(10), p(new int(9)), pfun([](int a, int b) {return a + b; })
//	{
//		//初始化
//	}
//
//public:
//	int x; 
//	int y;
//	int *p;
//	int(*pfun)(int, int);
//};
//void main()
//{
//	myclass my1;
//	cout << my1.x << endl;
//	cout << my1.y << endl;
//	cout << *my1.p << endl;
//	cout << my1.pfun(10, 20) << endl;
//	cin.get();
//}







//类的成员默认值
//类成员可以使用 =  {}初始化，设定默认值
//#include <iostream>
//using namespace std;
//
//class myclass
//{
//public:
//	// {} 适用多种初始化
//	//int a=10;  int a {10}  类成员初始化方式
//	int b;
//	int *p=new int(5);//int *p{new int (5)}
//	int(*pfun)(int, int);
//	int c[5]{1,2,3,4.5};//数组少一个{}
//
//};
//void main()
//{
//	myclass my1;
//	cout << *my1.p << endl;
//
//
//	cin.get();
//}








//类嵌套的初始化
//嵌套类中，public下可以 以 类名::子类名创建对象。其他情况下不行
//#include <iostream>
//using namespace std;

//class point
//{
//public:
//	int x;
//	int y;
//	point(int a, int b):x(a),y(b)
//	{
//
//	}
//
//};
//class line
//{
//	public:
//		point *p1;
//		point *p2;
//		//初始化
//		line(int a1, int b1, int a2, int b2):p1(new point(a1,b1)),p2(new point(a2,b2))
//		{
//
//		}
//};

//嵌套类
//class myclass
//{
//	
//public:
//	class meclass
//	{
//	public:
//		int x;
//		int y;
//		meclass(int a, int b) :x(a), y(b)
//		{
//
//		}
//	};
//	meclass *px1, *px2;
//	myclass(int a1, int b1, int a2, int b2) :px1(new meclass(a1, b1)), px2(new meclass(a2, b2))
//	{
//		
//	}
//	
//
//};
//
//void main()
//{
//	myclass a1(1, 2, 3, 4);
//
//	//meclass x1(1, 2);//error 类内部
//	myclass::meclass(1, 2);
//	cin.get();
//}






//const 与类
//#include <iostream>
//using namespace std;
//创建对象时，const 常量对象，无法修改数据，只能引用尾部带const 的方法
//类的成员如果时const ，第一种默认初始化，第二中构造函数尾部初始化，不能在构造函数内部初始化
//类中的成员是const ,无法直接修改，可以间接
//类中的成员函数，返回值是const ，参数const，可以读取不能写，尾部const.常量对象仅可以引用方法
//const 不适用于构造与析构，常量对象一样引用

//class myclass //内部const 
//{
//public:
//	int x;
//	int y;
//	const int z;//常量数据原则必须初始化
//	myclass(int a, int b) :x(a), y(b),z(a+b)
//	{
//
//	}
//	void show() const//const 对象可以引用
//	{
//		cout << x << y << endl;
//		//加上const 只能读，无法修改
//	}
//	void change(const int a, const int b)//保护参数不被修改
//	{
//		y = b;
//		x = a;
//	}
//	const int getx(int x) const//返回一个常量，函数受保护
//	{
//		return x;
//	}
//};
//void main1()
//{
//	const myclass my1(10,20);//插入const为 常对象
//	my1.show();
//	cout << my1.z << endl;
//	int *p = const_cast <int *>(&my1.z);
//	*p = 3;//可以间接修改类中的const 成员	
//	cout << my1.z << endl;
//	cin.get();
//}

//class huihui
//{
//public:
//	int x;
//	int y;
//	int z;
//	huihui(int a = 10, int b = 10, int c = 10) :x(a), y(b), z(c)
//	{
//
//	}
//	void show() const
//	{
//		cout << x << y << z << endl;
//	}
//	void set(int a, int b, int c)
//	{
//		x = a;
//		y = b;
//		z = c;
//	}
//};
//void main2()
//{
//	const huihui hui1(1, 2, 3);//栈区
//	hui1.show();
//	//hui1.set(2, 3, 4);//error 常对象不能修改数据
//	huihui *phui = new huihui(4, 5, 6);
//	phui->show();
//	phui = nullptr;//指向常对象的指针
//
//	cin.get();
//}
//void main3()
//{
//	huihui *const phui = new huihui(1, 2, 3);
//	phui->show();
//	phui->set(1, 2, 3);
//	//phui = nullptr;//error
//	cin.get();
//}
//void main4()
//{
//	huihui const *const phui = new huihui(1, 2, 3);//常对象指向一个常指针
//	//phui = nullptr;//error
//	//phui->set(1, 2, 3);//error
//
//	cin.get();
//}

//class box
//{
//	int x;
//	int y;
//	int z;
//	mutable int time;//不被const 锁定
//
//};






//拷贝构造
//#include <iostream>
//using namespace std;
//
//class myclass
//{
//public:
//	myclass() = default;
//	int x;
//	int y;
//	myclass(const myclass &my, int i)
//	{
//		cout << "coll i" << endl;
//	}
//	myclass(const myclass &my)
//	{
//		cout << "coll" << endl;
//		x = my.x;
//		y = my.y;
//	}
//};
//void show(myclass my1)//函数有副本机制，调用拷贝构造
//{
//	cout << my1.x << my1.y << endl;
//}
//void showit(myclass &my1)//对象当参数尽量使用引用
//{
//	cout << my1.x << my1.y << endl;
//}
//myclass get()
//{
//	myclass my1;
//	my1.x = 10;
//	my1.y = 20;
//	return my1;//函数返回值有副本机制，拷贝一次
//}
//void main()
//{
//	get();
//
//}
//
//void main2x()
//{
//	myclass my1;
//	my1.x = 10;
//	my1.y = 20;
//	show(my1);
//
//	cin.get();
//}
//
//void main1x()
//{
//	myclass my1;
//	my1.x = 10;
//	my1.y = 20;
//	myclass my2(my1);//拷贝构造
//	cout << my2.x << my2.y << endl;
//	cin.get();
//}






//深浅拷贝
//浅拷贝，拷贝地址，深拷贝，拷贝内容
//类的内部有指针分配内存，需要深拷贝，否则浅拷贝
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class mystring
//{
//public:
//	char *pstr;
//	int length;
//	mystring(const char *str)
//	{
//		this->length = strlen(str) + 1;
//		this->pstr = new char[this->length]{ 0 };
//		strcpy(this->pstr, str);//初始化
//	}
//	void show()
//	{
//		cout << length << "  " << (void*)pstr <<"  "<<pstr<< endl;
//	}
//	~mystring()
//	{
//		delete[] pstr;
//	}

//	不受析构函数的影响
//	mystring(const mystring &str)//深拷贝 
//	{
//		this->length = str.length;
//		this->pstr = new char[this->length]{ 0 };
//		strcpy(this->pstr, str.pstr);//拷贝内容
//	}
//};
//void main()
//{
//	mystring str1("gogogo");
//	str1.show();
//	mystring str2(str1);
//	str2.show();
//	str1.~mystring();
//	str2.show();
//
//	cin.get();
//}







//构造与类型转换
//#include <iostream>
//using namespace std;
//
//struct point
//{
//	int a;
//	int b;
//};
//class myclass
//{
//public:
//	int x;
//	int y;
//	myclass(int n) :x(n), y(n)
//	{
//
//	}
//	myclass(const point & p) :x(p.a), y(p.b)
//	{
//
//	}
//};
//void main()
//{
//	//拷贝构造
//	myclass my(5);
//	myclass my1 = 5;//把5转换为myclass 类型
//
//	point p{1,2};
//	myclass my2(p);//把struct类型转换为class 类型
//	myclass  my3 = p;
//
//	cin.get();
//}







//引用与类
//#include <iostream>
//using namespace std;
////如果类中有引用必须使用默认初始化
////引用作为返回值，可以避免不必要的拷贝
//
//class myclass;//类的声明，提升作用域，只能作用于指针、引用，不能用于对象
//myclass *p;
//void run(myclass & rmy)
//{
//
//}
////myclass my;  rerror 
//class myclass
//{
//public :
//	int x=1;
//	int y=2;
//	int &rx=x;	//如果类中有引用必须使用默认初始化
//	//int &rx{ x };//默认初始化
//
//	myclass()//构造初始化
//	{
//		//rx = y;
//	}
//	myclass(const myclass &my)
//	{
//		cout << "copy call" << endl;
//	}
//	void show() const
//	{
//		cout << x << y << endl;
//	}
//};
//myclass & get(myclass &data)//引用可以避免不必要的拷贝
//{
//	return data;
//}
//void main()
//{
//	myclass my1;
//	//myclass & my2(my1);//引用my2 等价于my1，内存中只占用4个字节
//	
//	const myclass & my2(my1);
//	my2.show();//常引用等价于常对象
//}
//
//void main1()
//{
//	myclass my1;
//	get(my1);
//
//	cin.get();
//}







//静态成员  static
//#include <iostream>
//using namespace std;
//
//class myclass 
//{
//public :
//	static int num;//只会初始化一次
//	int data;//每创建一个对象，初始化一次
//	myclass()
//	{
//		num += 1;
//	}
//	~myclass()
//	{
//		num -= 1;
//	}
//};
//int myclass::num=0;//静态成员，多有的对象都可以访问
//void main()
//{
//	myclass my1, my2, my3;
//	my3.~myclass();
//
//	myclass *p = new myclass;
//	//静态成员，不属于任何一个对象，任何对象都可以访问,静态区
//	//用于同对象通讯
//	cout << my1.num << endl;
//	cout << my2.num << endl;
//	cout << my3.num << endl;
//	cout << myclass::num << endl;
//
//	cin.get();
//}

//#include <thread>
//#include <iostream>
//using namespace std;
//
//class mythread :public thread
//{
//public:
//	static int data;
//	mythread() :thread()
//	{
//
//	}
//	template<typename T,typename... Args>
//	mythread(T && func, Args &&...args) : thread(forward<T>(func), forward<Args>(args)...)
//	{
//
//	}
//};
////只能在外部初始化
//int mythread::data = 0;//类的静态变量，任何一个当前线程类都可以访问
////统计对象的个数
////多线程，调停者模式
//
//void go()
//{
//	while (1)
//	{
//		mythread::data += 1;
//		cout << this_thread::get_id() << "  " << mythread::data << endl;
//		this_thread::sleep_for(chrono::seconds(3));
//	}
//}
//void main()
//{
//	mythread my1(go);
//	mythread my2(go);
//
//	cin.get();
//}







//静态函数
//#include <iostream>
//#include <cstdlib>
//#include <vector>
//using namespace std;
//静态函数没有this，无法调用成员变量，成员函数

//class myclass
//{
//public:
//	int num;
//	void go()
//	{
//		cout << (void*)this << endl;//this 当前对象首地址
//	}
//	void show()
//	{
//		cout << (void*)this << endl;
//		cout << "show huihui" << endl;
//	}
//	static void showit(int data)//静态函数没有this指针
//	{
//		//num=1;//无法访问内部变量及函数
//		//show();
//
//		//无法使用this指针
//		//cout << (void*)this << endl;
//		cout << "showit huihui" << data << endl;
//	}
//};
//
//void main()
//{
//	myclass my1;
//	my1.showit(11);//也可以使用类名访问
//
//	myclass::showit(10);//类中的静态函数无需对象名就可以访问，原因是没有this
//	cin.get();
//}
//void main2()
//{
//	cout << typeid(&myclass::show).name() << endl;
//	cout << typeid(&myclass::showit).name() << endl;
//	void(*p)(int) = &myclass::showit;//C风格函数指针
//	void (myclass:: *px)() = &myclass::show;//类成员函数风格
//	cin.get();
//}
//void main1()
//{
//	myclass my1;
//	cout << (void *)&my1 << endl;
//	my1.go();
//
//	cin.get();
//}

//静态函数与静态变量配合使用
//struct runit
//{
//	static vector<runit*> all;
//	int x;
//	int y;
//	runit(int a, int b) :x(a), y(b)
//	{
//		all.push_back(this);//每次构造压入地址
//	}
//	void show()
//	{
//		cout << x << y << endl;
//	}
//	static void showall()//配合静态成员。管理对象的数量
//	{
//		for (auto i : all)
//		{
//			cout << (*i).x << (*i).y << endl;
//		}
//	}
//};
//vector<runit*> runit::all;
//void main()
//{
//	runit run1(1, 1);
//	runit run2(1, 2);
//	runit run3(1, 3);
//
//	runit::showall();
//	cout<<(void *)(runit::showall)<<endl;//打印其地址
//	cout<<(void *)(run3.showall)<<endl;
//	cin.get();
//}








//友元函数
// friend
//普通函数+friend
//#include <iostream>
//using namespace std;
//
//class myclass
//{
//	int x;
//	int y;
//	friend void show(const myclass &my);//友元函数
//public:
//	myclass() :x(20), y(30)
//	{
//
//	}
//};
//void show(const myclass &my)
//{
//	cout << my.x << my.y << endl;
//}
//
//void main()
//{
//	myclass my1;
//	show(my1);
//	//my1.x = 10; 无法访问私有成员
//	
//
//	cin.get();
//}






//友元类
//friend 可以访问protected， private，成员
//#include <iostream>
//using namespace std;
//
//class myclass
//{
//public:
//	myclass();
//	~myclass();
//	friend class newclass;//友元类
//private:
//	int x=1;
//	int y=2;
//	int z=3;
//};
//myclass::myclass()
//{
//
//}
//myclass::~myclass()
//{
//
//}
//
//class newclass
//{
//	myclass my1;
//	char *password {"calc"};
//public:
//	void outit()
//	{
//		cout << password << my1.x << my1.y << my1.z << endl;
//	}
//};
//void main()
//{
//	newclass new1;
//	new1.outit();
//
//	cin.get();
//}







//explicit 
//#include <iostream>
//using namespace std;
//
//class myclass
//{
//public:
//	int num;
//public:
//	explicit myclass(int data):num(data)
//	{
//
//	}
//};
//void main()
//{
//	//myclass my(5);
//	//myclass my = 5;
//	//myclass my = myclass(5);
//	//myclass my = (myclass)5;
//	//没有explicit，代码歧义多，可以解释为构造，可以解释为类型转换
//
//	//有explicit,限定自动转换，可以强制转换
//	//myclass my(5);
//	//myclss my = 5;//error
//	myclass my = (myclass)5;
//	cout << my.num << endl;
//	cin.get();
//}







//重载的概念与意义
//实现泛型，能做到更好
//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//void main1()
//{
//	//error C 指针字符串无法直接相加
//	/*char* str11 = "huahua";
//	char* str22 = " fangfang";
//	cout << (str11 + str22) << endl;*/
//
//
//	string str1="huahua";
//	string str2=" fangfang";
//	cout << (str1 + str2) << endl;
//
//	cin.get();
//}
//
////inline ，构造，析构，类成员函数都可以加，编译器自己决定是否内联加速
//class mystring
//{
//public:
//	char *pstr;
//	int length;
//	inline mystring() :pstr(nullptr), length(0)
//	{
//		
//	}
//	mystring(char *str)
//	{
//		this->length = strlen(str) + 1;//获取字符串长度
//		this->pstr = new char[this->length];
//		strcpy(this->pstr, str);//拷贝
//	}
//	mystring(const mystring &my)
//	{
//		cout << "深拷贝" << endl;
//		this->length = my.length;
//		this->pstr= new char[this->length];
//		strcpy(this->pstr, my.pstr);//深拷贝
//
//	}
//	mystring add(const mystring &my)
//	{
//		int n = this->length + my.length - 1;
//		mystring temp;
//		temp.length = n;
//		temp.pstr = new char[temp.length];//分配内存
//		strcpy(temp.pstr,this->pstr);
//		strcat(temp.pstr, my.pstr);//尾部链接
//
//		return temp;
//	}
//	mystring operator +(const mystring &my)//运算符重载
//	{
//		cout << "mystring operator +" << endl;
//		int n = this->length + my.length - 1;
//		mystring temp;
//		temp.length = n;
//		temp.pstr = new char[temp.length];//分配内存
//		strcpy(temp.pstr, this->pstr);
//		strcat(temp.pstr, my.pstr);//尾部追加
//		return temp;
//	}
//};
//
//void main2()
//{
//	mystring my1 = "12345";
//	mystring my2 = "6789";
//	//mystring my3 = my1.add(my2);//成员函数实现
//	//mystring my3 = my1 + my2;
//	mystring my3 = my1.operator+( my2);
//	cout <<my3.pstr<< endl;
//
//
//	cin.get();
//}
//
//template<class T>
//T add(T a,T b)
//{
//	return a + b;
//
//}
//void main()
//{
//	cout << add(12, 20) << endl;
//	cout << add(12.1, 20.2) << endl;
//	mystring my1 = "1234";
//	mystring my2 = "789";
//
//	cout << (my1 + my2).pstr << endl;
//
//
//	cin.get();
//}







//流运算符重载

//外部重载，没有this指针隐含对象
//都是公有变量，外部函数可以直接重载，涉及private变量,需要友元函数friend
//#include <iostream>
//using namespace std;
//
//class box
//{
//public:
//	int x;
//	int y;
//	int z;
//	box() :x(10), y(20), z(30)
//	{
//
//	}
//};
//
////外部重载，没有this指针隐含对象
////都是公有变量，外部函数可以直接重载，涉及private变量,需要友元函数friend
//box operator +(const box& box1, const box &box2)
//{
//	box box3;
//	box3.x = box1.x + box2.x;
//	box3.y = box1.y + box2.y;
//	box3.z = box1.z + box2.z;
//	return box3;
//}
//box operator +(const box& box1, int num)
//{
//	box box3;
//	box3.x = box1.x + num;
//	box3.y = box1.y + num;
//	box3.z = box1.z + num;
//	return box3;
//}
//
//ostream &operator <<(ostream &, const box &box1)//重载流式运算符，输入一个引用，返回一个引用
//{
//	return cout << box1.x << box1.y << box1.z << endl;
//}
//istream &operator >>(istream &, box &box1)
//{
//	return cin >> box1.x >> box1.y >> box1.z;
//}
//
//void main()
//{
//	box box1;
//	cin >> box1;
//	cout << box1 << endl;
//
//	cin.get();
//}
//void main1()
//{
//	box box1;
//	box box2;
//	box box3 = box1 + box2;
//	cout << box3.x << box3.y << box3.z << endl;
//
//
//	box box4 = box1 + 20;
//	cout << box4.x << box4.y << box4.z << endl;
//
//	cin.get();
//}








//拷贝构造与赋值重载分析
//拷贝构造，赋值重载。广义其他类型
//实现类型的转换
//#include <iostream>
//using namespace std;
//
//struct point
//{
//	int a;
//	int b;
//};
//class myclass
//{
//	int x;
//	int y;
//	friend void main();
//public:
//	//myclass operator = (const myclass &my) = delete;
//	myclass(int num):x(num),y(num)
//	{
//		cout << "拷贝构造" << endl;
//	}
//	myclass():x(10),y(20)
//	{
//
//	}
//	void operator = (const point &po)
//	{
//		cout << "赋值重载op" << endl;
//		this->x = po.a;
//		this->y = po.b;
//	}
//	void  operator = (const myclass &my)
//	{
//		cout << "赋值重载" << endl;
//		this->x = my.x;
//		this->y = my.y;
//		
//	}
//
//	void operator = (int num)
//	{
//		cout << "赋值重载num" << endl;
//		this->x = num;
//		this->y = num;
//	}
//
//	
//};
//void main()
//{
//	/*myclass my=3;
//	my = 8;
//	cout << my.x << my.y << endl;*/
//	point op{ 1,2 };
//	myclass my1;
//	my1 = op;
//	cout << my1.x << my1.y << endl;
//}

//void main1()
//{
//	myclass my1;
//	myclass my2(my1);//创建时初始化是拷贝构造
//	myclass my3;
//	myclass my4 = my2;//拷贝构造
//	my3 = my2;//赋值重载
//
//	cin.get();
//}









//赋值重载以及深浅拷贝
//赋值重载，拷贝构造，值传递
//非指针，深浅拷贝一样，有指针，浅拷贝，内存共享，地址一致，内容一致
//深拷贝，指针不一致，内部一致，内存独享

//赋值重载若有返回值，返回自身类型，会调用拷贝构造函数。需要注意深浅拷贝
//返回对象地址或引用，如果在栈区，会触发故障。
//#include <iostream>

//#include <cstring>
//using namespace std;
//
//class mystring
//{
//public:
//	char *p;
//	int n;
//	mystring() :p(nullptr), n(0)
//	{
//
//	}
//	mystring(char *str)//浅
//	{
//		n = strlen(str) + 1;
//		p = new char[n];
//		strcpy(p, str);//拷贝
//	}
//	mystring (const mystring &stringmy) //深
//	{
//		delete[] p;
//		cout << "构造函数call" << endl;
//		this->n = stringmy.n;
//		this->p = new char[this->n];
//		strcpy(this->p, stringmy.p);
//	}
//	void operator =(const mystring &stringmy)//赋值重载
//	{
//		delete[] p;
//		cout << "赋值重载call" << endl;
//		this->n = stringmy.n;
//		this->p = new char[this->n];
//		strcpy(this->p, stringmy.p);
//	}
//	~mystring()
//	{
//		delete[] this->p;
//	}
//};
//void main()
//{
//	mystring my1("12345");
//	mystring my2(my1);//拷贝构造
//	//my2 = my1;赋值重载
//	cout << (void *)my1.p <<" "<<my1.p<< endl;
//	cout << (void *)my2.p <<" "<<my2.p<< endl;
//
//	my1.~mystring();
//	cout << (void *)my1.p << " " << my1.p << endl;
//	cout << (void *)my2.p << " " << my2.p << endl;
//	cin.get();
//}








//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class mystring
//{
//	char *p;
//	int n;
//	friend void main();
//public:
//	mystring() :p(nullptr), n(0)
//	{
//
//	}
//	mystring(char *str)
//	{
//		p = new char[strlen(str) + 1];
//		n = strlen(str) + 1;
//		strcpy(p, str);
//	}
//	void operator +(mystring & stringmy)
//	{
//		this->n += strlen(stringmy.p);//增加长度
//		char *ptemp = new char[this->n];
//		strcpy(ptemp, this->p);
//		strcat(ptemp, stringmy.p);
//		delete[] this->p;
//		this->p = ptemp;
//
//	}
//	~mystring()
//	{
//
//	}
//
//}; 
//void main()
//{
//	mystring my1("hello");
//	mystring my2("huihui");
//	cout << typeid(my1.operator+(my2)).name() << endl;;
//	cout << typeid(my1 + my2).name() << endl;
//	my1 + my2;
//	cout << my1.p << endl;
//
//
//	cin.get();
//}








//类与内存的分析
//#include <iostream>
//using namespace std;

//成员函数都在代码区，不计入程序体积
//空指针，数据独享，代码共享，不调用类成员数据。
//调用类成员数据，执行崩溃，原因是没有内存实体

//静态区优先于main函数，全局对象，在静态区
//静态变量在静态区，只会初始化一次，
//求类的大小，不计入程序体积，类静态变量

//类中的非静态数据，与对象的位置相关
//函数外的对象，静态区；函数内的对象，栈区；动态分配，堆区
//类中的指针，与对象的位置相关，分配的内存一般在堆区。  new可以分配在任何一个区
//类中的const与类的成员数据一样 
//class myclass
//{
//	int *p;
//	int n;
//	static int num;
//public:
//	myclass() :p(nullptr), n(0)
//	{
//		cout << "构造" << endl;
//		p = new int[10]{ 1,2,3,4,5,6,7,8,9,10 };
//	}
//	~myclass()
//	{
//		cout << "析构" << endl;
//		delete[]p;
//	}
//	void show()
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			cout << this->p[i] << endl;
//		}
//	}
//	void out()
//	{
//		cout <<" myclass "<< endl;
//	}
//	static void outX()
//	{
//		cout << "myclass " << endl;
//	}
//		
//};
//int myclass::num=0;
//
////static myclass my1, my2;静态区
//myclass *p1 = new myclass;
////p1静态区，*p1在堆区
//int main()
//{
//	myclass *p1 = new myclass;
//	//p1,作为一个指针变量在栈区；*p1，作为一个对象在堆区
//
//	//myclass my1, my2;
//	//cout << sizeof(myclass) << endl;
//
//	return 0;
//}
//
//int main1()
//{
//	cout << sizeof(myclass) << endl;
//	myclass::outX();
//	/*myclass *p(nullptr);
//	p->show();
//	p->out();*/
//
//
//	return 0;
//}








//类型转换
#include <iostream>
using namespace std;

class myclass
{
public:
	int x;
	int y;
	myclass(int a) :x(a), y(a)//赋值转换
	{
		cout << "构造" << endl;
	}
};
void main()
{
	myclass my1 = 5;
	myclass my2 (6);
	myclass my3 = myclass(5);
	myclass my4 = (myclass)5;


	cin.get();
}


void main1()
{//---隐式转换，显示转换
	int a = 1.2;//自动转换
	int b = static_cast<int>(2.3);//CPP 显示转换
	int c = (int)3.4;//C 风格

	int *p1 = nullptr;
	char *p2 = reinterpret_cast<char *> (p1);//Cpp 指针转换



	cin.get();
}