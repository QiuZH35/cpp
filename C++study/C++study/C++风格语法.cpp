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
//namespace bobo = stdrun;  //���Զ���ı���
//
//namespace doubo = std;//����׼����
////CPP���������ã���ֹ�ı��׼
//
//int main()
//{
//	bobo::show();
//	doubo::cout << "hello" << std::endl;
//	return 0;
//}





//using����
//#include <iostream>

//void run()
//{
//	using namespace std;//��ͬ�ھֲ�����
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
//	using run1::show;//�������������ռ�ı���������
//	std::cout << x << std::endl;
//	show();
//	return 0;
//}


//ȫ�ֱ����Լ�using
//#include <iostream>
//using namespace std;
//int a;//CPPû�������붨��;
//int a=5;
//namespace
//{//һ���ֹʹ�����������ռ�
//	int a = 10;
//}
//void main()
//{
//	a = 3;
//	::a = 10;����ȫ�֣�����������
//	cout << a << endl;
//}

//usingϸ��
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
//	int num = 5;//�ֲ��������������ռ�
//	using namespace data;
//	cout << num << endl;
//	cin.get();
//}


////CPP ȫ����ֲ�
//#include <iostream>
//using namespace std;
//
//int num = 100;
//void main()
//{
//	int num = 10;
//	{
//		int num = 20;
//		cout << num << endl;//�ֲ�����
//		cout << ::num << endl;//ȫ��
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
//int stdfun::data::getsub()//�����ռ�:: ���� ::������
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
////::���ǵ�ǰ�ļ�static�����ǿ��ļ�extern 
////�����ṹ���ͬ��ȫ�ֱ���������ʹ�� ::��������
//extern int x;//�����ⲿȫ�ֱ���
//
//namespace std
//{//����취�ǰ�����չ��std;
//	int x = 999;
//}
//void main()
//{
//
//	void test();//���� 
//	test();
//	//cout << std::x << endl;//extern�������ռ��ͻ��
//	cin.get();
//}


////typeid
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//void main()
//{//typeid ��ȡ��������
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
////auto�ؼ���
////auto ����Ӧ�������ͣ��Զ���������
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
//bool һ���ֽڣ�����Ϊ1����Ϊ0��
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
//decltype ����һ��������ȡ�������ͣ��������飬����ָ��
//#include <iostream>
//using namespace std;
//
//template <class T>
//void show(T *p)
//{
//	//decltype(*p) num(*p);//�ڴ汸��
//	//cout << num << endl;
//	//cout << *p << endl;
//	
//	//int a = *p;//��������
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




//C Cpp ����֮�������
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
//	//int *p3 = new int [] {1, 2, 3, 4, 5};//Cpp�����ܲ�������������
//	cin.get();
//}




////C Cpp������
//#include <iostream>
//#include <array>
//using namespace std;
//
//void main1()
//{
//	int a[5];//C���
//	int b[5][5] = { 0 };//������auto ѭ��
//
//
//	array<int,10>myint1{ 11,2,3,4,5,6,7,8,9,10 };//CPP���
//	array<int,10>myint2{ 21,2,3,4,5,6,7,8,9,10 };
//	array<int,10>myint3{ 31,2,3,4,5,6,7,8,9,10 };
//	array< array < int, 10>,3 >myint4{myint1,myint2,myint3};//һά����Ƕ�׳ɶ�ά����...��ά���� 
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






//��ָ��-nullptr
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
//	//show(NULL);//C���Ŀ�ָ�룬�ᱻĬ��Ϊ������
//	//show(nullptr);//C++���Ŀ�ָ��
//
//	cout << typeid(NULL).name() << endl;//int 
//	cout << typeid(nullptr).name() << endl;//std::nullptr_t
//	//�ϸ�����ƥ��
//
//
//
//	int *p1 = NULL;//��ֵ��p1
//	int *p2 = nullptr;
//	show(p1);
//	show(p2);
//	cin.get();
//}





//�������    typedef    using
//#include <iostream>
//using namespace std;
////typedefֻ�ܴ���C����
//// �޷�����C++�ж��еģ������ռ䣬����ģ�壬��ģ��
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
////typedef afu run;//typedef �޷�����C++�У����е������ռ�
//namespace boer = run;//�����ռ���Ҫ��������
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
////һ������£�ԭ��ʹ��usingȡ��typedef
////typedf ������ģ�壬�����������ռ�
//
////int num;//�������
////using INT=int num;//����using INT=
////using INT=int;//ȥ��������
//
//typedef double DB;//C
//using DBCPP= double;//C++������
//
//typedef int ab[10];
//using intarray = int[10];
//
//typedef  int(*p)(int n, int m);// ����ָ������ ��p ������
//using pfu = int(*)(int n, int m);//������ ȥ��������
//
//typedef int(*p1[5])(int n, int m);
//using pfnum = int(*[5])(int n, int m);//����ָ������
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
//ģ�����
//#include <iostream>
//using namespace std;
//template<class T> using t = T;
//template<class T> using tp = T * ;
////template<class T> typedef T tpp;
//template <class T>
//T show(T tx)
//{
//	t<int> t1(tx);
//	tp<int> t2(&tx);��Ҫָ������
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
////ģ��ı������ñ����Ż�ģ������ƣ�ֻ�����࣬�����ռ䣬ȫ��ʹ�ã��������ٺ����ڲ�ʹ��
//template<class T>  
//using tencent = array<T, 10>;//����ģ��
//
//void main()
//{
//	using intarray = array<int, 10>;//ģ�������������ȷ
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






//autoǿ��
//#include <iostream>
//using namespace std;

//C++14�Զ�������ֵ,������ǿ�󣬿�����������
//C++11��Ҫ����->ָ������
//auto add(int a, int b)//->int   //decltype(a��b)
//{
//	return a+b;
//}
//#include <iostream>
//using namespace std;
//template <class T1,class T2>
//auto add(T1 t1, T2 t2)->decltype(t1+t2)//��ȡ��������
//{
//	return t1 + t2;
//}
//void main()
//{
//	cout << add(10, 20) <<endl;
//}

//auto(*f)() ->int(*)();//F��ʲô
//int(*    (*f)()   )();//����ֵ����ָ��


//auto pf() 3  -> auto(*)(int x) 2  ->  int(*)(int a,int b) 1
//	int(* (*pf(void) )(int x))(int a,int b)
//	
//
//auto pf()->auto(*)(int x)->int(*)(int a,int b)
//{
//	return nullptr;//����ָ��
//}

//auto pfu(int a, int b)  3   -> auto(*)()  2  -> int (*)(int, int(*)(int, int)) 1;//ָ�뷵����������
//	int(*   (*  pfu(int a,int b )  )()  )(int,int(*)(int int))

//void main()
//{
//	//cout << add(1, 2) << endl;
//
//
//	cin.get();
//}




//����ת��
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//char ch1(78);//����֤�����ȷ
//	char ch{ 7700 };//��֤�������͵�ת����Ҫ����ת������ֵʱʹ�ô�����{}��ʼ��
//	cout << (int)ch << endl;
//	cin.get();
//}





//C14  ������
//#include <iostream>
//using namespace std;
//void main()
//{
//	int a = 0b1001;  //������д��
//	int b = 0b1010;
//	int as =010;
//	cout << a <<"  "<<b <<as << endl;
//	cin.get();
//}





//constexpr
//#include <iostream>
//using namespace std;
//
////constexpr��־����ֵ���������ʽΪ����
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
//	//inline չ����all,Ĭ�ϵİ汾
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
//	all::V2014::fun(1);//��ȷ����һ���汾
//	all::V2015::fun(1);
//	all::fun(1);//ָ��Ĭ�ϰ汾
//
//	system("pause");
//}





//lambda ���ʽ
//�ñ��ʽ��Ҫ���������Ƕ��
//[](){}();�������ʽ��[]()->{}()//ָ������ֵ����
//[]�� =���ã�ֻ���� =��mutable����ԭ���ĸ�����  &�ɶ��ɸ�
//()������{}����ʵ�֣�()����

//#include <iostream>
//#include<array>
//#include <algorithm>//�㷨ͷ�ļ�
//using namespace std;
//��������Ļ�������
//void main1()
//{
//	[] {cout << "hello "; }();
//
//}
//void main2()
//{
	//auto fun = [] {cout << "hello"; };
	//fun();//����

	//[] {cout << "hello "; }();//����lambda���ʽ 
	//()���ã�{}����ִ����

	//()�����б�{}�����壬()����
	//[] (char*str){cout << str << endl; }("huahua");

	//auto fun = [](char*str) {cout << str << endl; };
	//fun("fangfang");
	//cout << typeid(fun).name() << endl;//������
	//cout << fun << endl;//lambda������ֱ��ȡ��ַ


	//system("pause");
//}

//void main2()
//{
//	auto fun = [](double a, double b) {return a + b; };
//	cout << fun(19, 29.1) << endl;
//
//	auto fun1 = [](double a, double b)->int {return a + b; };//ָ������ 
//	cout << fun1(12.1, 10) << endl;
//	cin.get();
//}
//void main1()
//{
	//int num = 100;
	//auto fun = [](int num) {num = 5, cout << num << endl; };
	//fun(num);//�����и�������
	//cout << "main= " << num << endl;

	//int num1 = 100;
	//int num2 = 99;
	//[=]() {cout << num1 << " " << num2 << endl; }();//=ֻ�ܶ��ⲿ����
	//[&]() {num1=101,cout << num1 << " " << num2 << endl; }();//& ��д�ⲿ����

	//[=]()mutable {num1=11,num2=12,cout << num1 << " " << num2 << endl; }();//muteble�޸ĸ���

	//cout <<"main= "<< num1 << " " << num2 << endl;
	//system("pause");
//}

//void main2()
//{
//	int a = 10;
//	int b = 9;
//	int c = 8;
//	[&a,b,c]() {a=10,  cout << a << b << c<<endl; }();//a ���Զ�д��bc ֻ��
//	[a,b,c]()mutable {a=1,b=2,c=3,cout << a << b << c<<endl; }();//�޸ĸ���
//
//	cout << a << b << c;
//	system("pause");
//}

//void main10()
//{
//	//vs2015����
//	[](auto c, auto b) {cout << c + b << endl; }(10,11);
//	[](auto a, auto b) {cout << a + b << endl; }(10,11.8);
//	[](auto a=0, auto b=0) {cout << a + b << endl; }(10, 11.8);
//	[](auto a=0, auto b=0) {cout << a + b << endl; }(1,1);//Ĭ�ϲ�����Ҫ�������ͣ���ʼ����Ҫ��=�Ÿ�ֵ
//	system("pause");
//}
//void main()
//{
//	array<int, 10> myint{ 1,2,3,4,5,6,7,8,9,0 };
//	//lambda���ʽ������÷�
//	for_each(myint.begin(), myint.end(), [](int num) {cout << num << endl; });
//	
//	for_each(myint.begin(), myint.end(), [](int &num) {num+=1,cout << num << endl; });//�޸������ÿ��ֵ
//	for_each(myint.begin(), myint.end(), [](int num) {cout << num << endl; });
//
//	system("pause");
//}






//������װ��
//#include <iostream>
//#include <functional>//������װͷ�ļ�
//using namespace std;
//using std::function;//������װ��
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
//{	//<��������(����)>
//	function< void (void) > fun1=go;
//	fun1();
//	function< void (void )> fun2 = []() { cout << "go lambda" << endl; };
//	fun2();
//
//	function< int (int, int) >fun3 = add;
//	cout << fun3(10, 19) << endl;
//
//	function< int (int, int) >fun4 = [](int a, int b)->int  { return a + b; };//lambda ���ʽ
//	cout << fun4(2, 3) << endl;
//	system("pause");
//}






//ģ��Ԫ
//�ݹ����
//ִ���ٶȿ죬����ʱ���������������
//���е�ʱ���Լ�ڱ����ʱ��
//�ݹ���٣���Ϸ�Ż�,����������C11��
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
//}//�������ã������ȴ������� ���˷�ʱ���

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
//	cout << data <40>::res << endl;//ģ��Ԫ���������
//	//cout << get50(40) << endl ;
//	system("pause");
//}






//C C++ const���ص�
//#include<iostream>
//using namespace std;

//void run1(const int *p);//�ı��ַ�����ܸı�����
//void run2(int const *p);
//void run3(int *const p);//���ı��ַ���ܸı�����
//void run4(const int* const p);//���ı��ַ�����ı�����
//void run5(int const* const p);

//void main()
//{
//	//const int  num = 100;
//	int a[num];//error
//	//*(int*)&num = 4;//C const ���Ա���ֱ�ӣ��޷��������޸ģ�
//	system("pause");
//}

//void main()
//{
	//const int n = 10;//�Ĵ�������
	//int a[n];//C++ �������Զ��Ż���n �滻Ϊ10��
	//cout << sizeof(a) << endl;

	//int a = 10;
	//const int n = a;//�ڴ����
	//cout << n << endl;
	//int data[n];//C++ �������������Ż����±�����������������ڱ���ǰ�����conat����Ż�
	//system("pause");
//}

//void main()
//{
	//const int n = 10;
	//*(int*)(&n) = 3;
	//cout << *(&n) << endl;//�ڴ������ֵ�ı��ˣ������������Ż���ǿ��ת��Ϊ10
	//cout << n << endl;

	//int a = 10;
	//const int n = a;//��ֵ������¿��Ըı�
	//*(int*)(&n) = 3;
	//cout << *(&n) << endl;//ֱ�Ӷ��ڴ棬�����Ż�
	//cout << n << endl;
	//cin.get();
//}


//const����
//#include <iostream>
//using namespace std;

//void main()
//{
//	const int arr[5]{ 1,2,3,4,5 };
//	const int *p = arr;
//	*(int*)p = 100;
//	//const �����Ż����飬���Լ�Ӹı�
//	//*(p) = 1;//error ָ������ָ�룬�޷��޸ĳ���
//	for (auto i : arr)
//	{
//		cout << i << endl;
//	}
//
//	system("pause");
//}





//����ָ��
//�Զ������ڴ棬��ֹ�ڴ�й¶
//#include <iostream>
//#include <windows.h>
//#include <memory> //����ָ��ͷ�ļ�
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

//void autoptr()//���һ
//{
//	double *p(new double[1024 * 1024 * 10]);
//	auto_ptr<double>autop(p);//����ָ��ӹܣ��Զ�����
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
//void autoptrnew()//�����
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






//tuple ��Ԫ����
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






//��ֵ��������ֵ����
//��ֵ�����ڴ��ֵ ����ֵ���üĴ�����ֵ
//#include<iostream>
//using namespace std;

//void main()
//{//��ֵ
//	int num (10);
//	int &runm(num);//�����൱�б����ı���
//	runm = 1;//ͨ���������ı����
//	cout << num << endl;
//	cout << runm << endl;
//
//	cout << &num << endl;
//	cout << &runm << endl;//����ֵ�ĵ�ַ�����ñ�����ͬ
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
	int &&rnum(num + 1);*///��ֵ���ã����ٱ��ݡ��������Զ����ա�

	//int data = num + 4;
	//int&rdata(data);//��ֵ������Ҫ��������


	/*int arr[5]{ 1,2,3,4,5 };
	int *p(arr);
	cout << *p << endl;*/

	//int arr   int&rp;  &�������ͺͱ�����֮��
	//int* arr   int* & rp;
	//int *&rp(p);//��ֵ���ã��ı�ָ��
	//rp += 1;
	//cout << *rp << endl;

	//int* &&rrp(p + 2);
	//cout << *rrp << endl;

//	system("pause");
//}

//���õľ����÷�һ
//void showint(int && runm)
//{
//	cout << runm << endl;
//}
//void main()
//{
//	int  a[5]{ 1,2,3,4,5 };
//	showint(a[2] + 3);//��Լ�ڴ�
//	showint(move(a[4]));//move λ�����壬��ֵ�ı�Ϊ��ֵ
//	system("pause");
//}






//���ñ���
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
//		double &rdb;//���õı�����ָ��ʵ�֣��򻯳���
//	};
//	cout << sizeof(Mystruct) << endl;
//	system("pause");
//}





//���߳�
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
//	//���Ͽ��ٶ��߳�����
//	thread *pthread1(new thread[5]{ thread(run), thread(run), thread(run), thread(run), thread(run) });
//
//	cin.get();
//}
//void main4()
//{
//	//����
//	thread *pthread1(new thread(run));
//	thread *pthread2(new thread(run));
//	thread *pthread3(new thread(run));
//	cin.get();
//}
//void main3()
//{
//	thread t[5]{thread(run),thread(run),thread(run),thread(run),thread(run)};//��ʼ��
//
//	cin.get();
//}
//void main2()
//{
//	//���У��첽������
//	//ջ��
//	thread t1(run);//���ݺ�����ʼ����ִ��
//	thread t2(run);
//	thread t3(run);
//	thread t4(run);
//
//	cin.get();
//}
//void main()
//{
//	ͬ����Ҳ������
//	run();
//	run();
//	run();
//}




//���̴߳��ݲ���

//�����ϸ�ƥ��
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






//���߳�join �� detach
//join,�õ�ǰ���̵߳ȴ��������߳�ִ����ɲ����˳�
//detach���������̵߳İ󶨣����߳��˳���ʱ�򣬲�Ӱ�����߳�
//auto n = thread::hardware_concurrency();//��ȡCPU���ĸ���
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
//	//auto n = thread::hardware_concurrency();//��ȡCPU���ĸ���
//	cout << n << endl;
//
//	cin.get();
//}
//void main1()
//{
//	array<thread, 3> threads{ thread(show), thread(show), thread(show) };
//	for (int i = 0; i < 3; i++)
//	{
//		cout << threads[i].joinable() << endl;  //joinable()boolֵ
//		threads[i].join();//���̵߳ȴ���ǰ�߳�ִ������˳�
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
//	th.detach();//�������̣߳����̹߳��ˣ��Զ��˳������� 
//	//ʹ��detach֮���߳��޷�ͨ��
//	cout << th.joinable()<<endl;//0
//
//}





////atomic  ԭ�ӱ���
//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <atomic>
//using namespace std;
//
////�̰߳�ȫ�����̷߳��ʲ���ͻ����ͻ������ȫ
////int num = 0;
//
////mutex m;//����,���������˷�ʱ��
//
//atomic_int num{ 0 };//ԭ�ӱ��������ᷢ���̳߳�ͻ���̰߳�ȫ
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
//ȫ�ֱ�������ͻ�������ȷ���ٶȿ�
//mutex,�����ȷ���ٶ���
//atomic ,�����ȷ���ٶȱ�mutex��







//���߳���lambda���ʽ
//#include <iostream>
//#include <thread>
//#include <Windows.h>
//#include <chrono>//ʱ������ͷ�ļ�
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
//		this_thread::sleep_for(chrono::seconds(3));//�ȴ�ʱ������
//		this_thread::yield();//��CPU��ִ�������߳�
//		cout<<this_thread::get_id()<<endl;//�����߳�ID
//		//this_thread::sleep_until();//ֱ��ĳ��ʱ�̵ĵ���֮ʱ�����ڵȴ�
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






//new delete��malloc free������
//#include<iostream>
//#include <Windows.h>
//#include <cstdlib>
//using namespace std;
//
//void main1()
//{
//	//�������ͣ�int ,double ,char
//	int *p(new int(5));
//	cout << (void *)p << "  p=" << p << endl;
//	delete p;
//	cout<< (void *)p << "  p=" << p << endl;
//	//delete p;//error
//	p = nullptr;//delete ����ı�ָ���ֵ��Ϊ�˱�����;ָ�룬Ӧ��ָ����Ϊnullptr;
//	//delete free���ڻ����������ͣ������ͷ����ã��ͷ����ζ��ᱨ��
//	//delete ��ı�ָ���ֵ��free����ı�ָ���ֵ
//	cin.get();
//}
//
//void main4()
//{
//	int *p = (int *)malloc(4);
//	*p = 4;
//
//	free(p);//�����������ݣ�free malloc ��new delete Ч��һ��
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
//	~mydata()//��~����������
//	{
//		free(p);
//		cout << "mydata  delete" << endl;
//	}
//};
//
////mydata d1;//���������Զ����ù��캯��
//void test()
//{
//	mydata d1;//ջ�ϣ�������ʱ����ù��캯��������ʱ������������
//}
//void main()
//{
//	//mydata *p = new mydata;
//
//	//delete p;//�Զ����� �����죬��������
//	//test();
//	mydata *p = new mydata;
//
//	//delete p;
//	//free(p);//free ���������������
//
//
// 	cin.get();
//}





//delete ���Ӳ�ͬ����ʽ
//#include<iostream>
//using namespace std;
//
////���ڻ������� ���飬delete��delete[]Ч��һ��
//
////������������   �ϸ�����ƥ��
////mydata *p(new mydata);   delete p;
////mydata *p(new mydata[10]);  delete[]p;
//
//void main4()
//{
//	int *p1 = new int(4);//ָ��һ������
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
//	int *p1 = new int(4);//ָ��һ������
//	int *p2 = new int[10]{ 1,2,3,4,5,6,7,8,9,0 };//ָ������
//	delete p1;// int *p1 = new int(4);
//	delete[] p2;// int *p2 = new int[10]{ 1,2,3,4,5,6,7,8,9,0 };
//	//���ڻ����������ͣ����߿��Ի������
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
//	//delete[]p;//delete[] ��һֱ��������û�����飬û���������һֱdelete
//	//�������ϵĶ��󣬲�������delete[]
//
//
//	/*mydata *p(new mydata[10]);
//	delete[]p;*/
//	//delete p;//error
//
//
//	cin.get();
//}






//new �߼��÷�����̬����������ջ�������ڴ�
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
////char str[1024] = {0};//�ڴ澲̬��
////��̬����ջ��������
////int *p2 = new (str)int[10]{ 1,2,3,4,5,6,7,8,9,0 };
////���������Ը�����д������delete
////ջ������̬�������Ը�����д��������delete
//
//void main()
//{
//	//ÿ�ζ�����һ���µ��ڴ�
//	int *p1 = new int[10]  { 1,2,3,4,5,6,7,8,9,0 } ;//���Ͽ���
//	
//	char str[1024] = { 0 };//ջ��
//	//char *str = new char[1024]{0};//����
//	int *p2 = new (str)int[10]{1,2,3,4,5,6,7,8,9,0};//�����ڴ���str�ض�
//	//һֱ��ָ�����ڴ������ 
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






//new delete �ֲ�����
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
//	//operator ���أ����new�����µĽ��͡�ֻ�����ڵ�ǰ��
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
//		g_p = p;//�������ڶ���ֻ��һ������
//		return  p;
//		}
//		else
//		{
//			return g_p; 
//		}
//	}
//	static void operator delete(void *p)//����delete
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
////��һ�������޷��ڶ��ϱ���������
////ʵ��ͳ�Ʒ����ڴ棬�ͷ��ڴ�Ĵ���
////ʵ�ֵ������ģʽ��ʵ�ֱ��ⷴ��delete����
////new delete ���ڶ���ֻ����ڵ�ǰ�࣬  int. double ��Ӱ��

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






//ȫ���ڴ����
//#include <iostream>
//using namespace std;
//ȫ���ڴ����ͳ���ͷ��ڴ棬�����ڴ�
//�����ڴ������ڹ��칹�캯��
//���������������ͷ��ڴ�
//void *operator new(size_t size)
//{
//	void *p = malloc(size);
//	cout << "g_new  call" << endl;
//	return p;
//}
//void *operator new[](size_t size)//14�ֽڣ�һ��ָ�룬ʮ������
//{
//	cout << size << endl;
//	cout << "g_new  call []" << endl;
//	return operator new (size);//ÿ��Ԫ�ص���һ��new 
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
//	myclass *pt = new myclass[10];//����ʮ��new
//	delete[]pt;
//
//	cin.get();
//}

//sizeofͳ����Ĵ�С��ԭ��ͳ�ƴ������Ĵ�С
//����һ���ֽڱ�ʾ���ڣ����������ͬ�ڽṹ��
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






//ȫ�� ���ֲ�new  delete
//#include <iostream>
//#include <cstdlib>
//using namespace std;
////C++ C���Բ�
////c���Բ�����ڴ棬malloc free
//
////C++ ȫ��new �ֲ�new ,�������һ�ι��캯��
////�����ڴ棬�����þֲ�Ҳ����ȫ��
////�ֲ��������ڹ��������ȫ�ֹ��������������
////һ���ֲ�new ->ȫ��new ->malloc->���죬�����ֲ���new->malloc->����
////����->�ֲ�delete ->ȫ��delete->free.
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
////new �����Ǿֲ�����ȫ�֣��������һ�ι���
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
//		void *p = malloc(size);//����ȫ�֣�ֱ��malloc
//		return p;
//	}
//	void operator delete(void*p)
//	{
//		cout << "myclass delete" << endl;
//		
//		//::delete p;
//		free(p);//����ȫ�֣�ֱ��free;
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
//	//new delete�����Ǻ�����C++��׼�⺯����������д
//
//	cin.get();
//}






//α��������߳�
//#include <iostream>
//#include <thread>
//using namespace std;
//
//struct func
//{
//	void operator()()//�������Խ�������������ʹ��,   ����α����
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







//��Ա��������߳�
//#include <iostream>
//#include <thread>
//#include <Windows.h>
//using namespace std;
////�������Ա������ԭ���Ϻ�������Ҫ���������߳̾�����Ҫ����
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
//	//p->run();//����ָ���������û�е����ڲ������ĳ�Ա����
//
//	fun fun1;
//	//&fun::run ���ó�Ա����
//	thread th1 (&fun::run,fun1);
//	thread th2 (&fun::run, fun1);
//	thread th3(&fun::run1, fun1,"fangfang");
//	thread th4(&fun::run1, fun1,"huahau");//���ݲ���ģʽ
//	cin.get();
//}






// promisefuture ���߳�ͨ��
//#include <iostream>
//#include <thread>
//#include <string>
//#include <cstdlib>
//#include <future>//promise����ͷ�ļ�
//using namespace std;
//
//promise <string>val;//ȫ��ͨ�ű���
//promise <string>vall;
// 
//void main()
//{
//	thread th1([]() {
//		future<string> fu1 = val.get_future();//��ȡδ��״̬
//		future<string> fu2 = vall. get_future();
//		cout << "�ȴ���" << endl;
//		cout << fu1.get() << endl;
//		cout << "�ȴ���" << endl;
//		cout << fu2.get() << endl;//��ȡ th2�е���Ϣ
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







//���̹߳�����չ���ڼ̳�
//#include <thread>
//#include <iostream>
//using namespace std;
//
//class Mythread : public thread//c++��������--�̳�
//{
//public :
//	Mythread() :thread()//������ø��๹�캯��
//	{
//
//	};
//	template <typename T,typename ...Args>//������ø��๹�캯���� �ɱ�����Ĺ���
//	Mythread(T && func, Args &&...args) : thread(   forward<T>(func),forward<Args>(args)...   )//��������
//	{
//
//	}
//
//	void run(const char* cmd)//�����Ĺ���
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








//condition_variable  ���߳���������
//#include <iostream>
//#include <thread>
//#include <condition_variable>
//#include <mutex>
//
//using namespace std;
////�߳�ͨ�ţ����mutex 
////һ���̻߳����̴߳��ڵȴ�״̬��֪ͨһ������ 
////condition_variable  �߳�֮�䴫����Ϣ
//mutex m;//�̻߳����ų�
//condition_variable cv;//�߳�ͨ��
//void main()
//{
//	thread **th = new thread*[10];//�����̵߳�ָ������
//	for (int i = 0; i < 10; i++)
//	{
//		th[i] = new thread([](int index) {
//			unique_lock<mutex> lck(m);//����
//			cv.wait_for(lck, chrono::hours(1000));//�ȴ�
//			cout << index << endl;//��ӡ���
//
//		}, i);//���ݲ���
//		this_thread::sleep_for(chrono::milliseconds(100));//��
//	}	
//	for (int i = 0; i < 10;i++) 
//	{
//		lock_guard<mutex> lckg(m);//������
//		//cv.notify_one();//һ����֪ͨ
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








//���м���
//#include <iostream>
//#include <thread>
//#include <future>//�߳̽����Ľ��
//#include <chrono>//ʱ��
//#include <mutex>
//using namespace std;
//
//mutex g_m;
//
//void main()
//{
//	auto run = [=](int index) {
//		lock_guard<mutex> lckg(g_m);//����
//		cout <<this_thread::get_id()<<"  "<< index << endl;//��ȡ�߳�ID
//		this_thread::sleep_for(chrono::seconds(5));
//		return index * 1024;//���ؽ��
//	};
//	packaged_task<int(int)> pt1(run);//�̴߳��
//	packaged_task<int(int)> pt2(run);//�������������
//
//	thread t1([&]() {pt1(2); });
//	thread t2([&]() {pt2(3); });//�����߳�
//	
//	cout << pt1.get_future().get() << endl;
//	cout << pt2.get_future().get() << endl;//��ȡ���
//	t1.join();
//	t2.join();
//
//	cin.get();
//}








//vector  ��̬�������
//#include <iostream>
//#include <vector>
//#include <array>
//using namespace std;
////vector��̬���飬��������Ƕ��
////��ɾ��ģ���̬���������ݽṹ�����Ա�˳��洢
////
//void main1()
//{
//	vector<int> myint{1,2,3,4,5};
//	//array<int, 10>Myint{ 1,2,3,4,5 };
//	
//	for (int i = 10; i < 20; i++)
//	{
//		myint.push_back(i);//ѹ����i
//	}
//
//	//myint.resize(5);//��̬������С
//	myint.resize(6, 90);//vector,ֻ��6�����ݣ�������90
//
//	//��ȡ����
//	cout << myint.front() << endl;//��һ�� 
//	cout << myint.back() << endl;//���һ��
//	//��������������ָ��
//	//for (auto id = myint.begin(), ie = myint.end(); id != ie; id++)
//	//{
//	//	cout << *id << endl;//������ʽ���ʡ���
//	//}
//	//for (auto rd = myint.rbegin(), re = myint.rend(); rd != re; rd++)
//	//{
//	//	cout << *rd << endl;//������ʽ���ʡ���
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
//	//myint.assign(7, 100);//���³�ʼ����7��100
//	int a[5]{ 11,22,33,44,55 };
//	auto it = myint.begin() + 3;//��4��λ��
//	//it = myint.insert(it, 400);//����λ�ò���
//	//cout << "*it  " << *it << endl;
//	//it = myint.insert(it, a, a + 5);//����һ������
//	it = myint.insert(it, myintx.begin(), myintx.end());//��������
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
//	//myint.erase(it);//ɾ������
//	//myint.erase(myint.begin()+2, myint.end());//ɾ�����
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
//	myint1.swap(myint2);//����
//	for (auto i : myint1)
//	{
//		cout << i << endl;
//	}
//
//	cin.get();
//}
//void main4x()
//{
//	vector<double> mydb;//���ϣ�����ջ���
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
//	for (int i = 0; i < 5; i++)//�ڴ����������ٵ�
//	{
//		cout << myint1[i] << "   " << &myint1[i] << endl;
//	}
//	cin.get();
//}
//void main3x()
//{
//	vector<int>myint;
//	int *p = myint.get_allocator().allocate(5);//��ȡ�����������ڴ�
//	cout << myint.size() << endl;
//	cout << "\n\n\n";
//	for (int i = 0; i < 5; i++)
//	{
//		cout << (p[i] = i) << endl;
//		//cout << (p[i] = i) <<myint[i]<< endl;//error
//	}
//	myint.get_allocator().deallocate(p, 5);//�ͷ��ڴ�
//	cin.get();//���������ڴ�
//}
//
//void main()
//{//�������
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







//�ɱ����ʵ�ֶ��߳�
//#include <thread>
//#include <cstdarg>
//#include <iostream>
//
//using namespace std;
//
//int go(const char*fmt, ...)
//{
//	va_list ap;//ָ��
//	va_start(ap, fmt);//��ʼ
//	vprintf(fmt, ap);//����
//	va_end(ap);//����
//	return 0;
//}
//void main()
//{
//	thread th(go, "%sABCD%d___%c__%x", "12345abcd",98,'C',256);
//
//	cin.get();
//}







//���м��㣬����
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
//	static mutex m;//ֻ���ʼ��һ��
//	int sum(0);//������
//	for (int i = 0; i < count; i++)
//	{
//		sum += (*arr)[start + i];//ʵ���ۼ�
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
//	vector<future<int>> result;//�������
//	int cpus = thread::hardware_concurrency();//��ȡCPU���ĵĸ���
//	for (int i = 0; i < cpus*2; i++)
//	{
//		int batch_each = COUNT / (cpus * 2);//
//		if (i == (cpus * 2) - 1)
//		{
//			batch_each = COUNT - COUNT / (cpus * 2)*i;//���һ���̳߳е���һ��
//
//		}
//		//����ѹ����
//		result.push_back(async(add, &data, i*batch_each,batch_each));
//		//async���ؽ��
//	}
//	
//	//����
//	int lastresult(0);
//	for (int i = 0; i < cpus * 2; i++)
//	{
//		lastresult += result[i].get();//���ܽ��
//	}
//	cout << "lastresult=" << lastresult << endl;
//	cin.get();
//}








//���������
//#include <iostream>
//#include <mutex>
//#include <thread>
//#include <chrono>
//using namespace std;
////thread,�������ͺ�����  ����ģ�壬��������ת��������ʹ��ָ��
////��סһ������֮�󣬾���������������Ҫ�ټ�����������ɻ���
//
//#define COUNT 100000
//mutex g_mutex1, g_mutex2;
//
//void add1(int *p1, int *p2)
//{
//	for (int i = 0; i < COUNT; i++)
//	{
//		g_mutex1.lock();//����
//		(*p1)++;
//		g_mutex2.lock();
//		(*p2)++;
//		g_mutex1.unlock();//����
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








//Ѹ�׶��߳�������
//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <condition_variable>
//��д���򣬿���3���̣߳���3���ͳ�ID�ֱ���A.B.C��
//ÿ���߳̽��Լ���ID����Ļ�ϴ�ӡ�����飬
//Ҫ�����������밴ABC��˳����ʾ����ABCABC...�����ε���
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
//			cv.wait(ulk);//���Ǹó��ֵĳ��ϣ��ȴ�
//		}
//		cout << (char)id << endl;//ת��
//		flag = (flag + 1) % 3;//0 1 2
//		cv.notify_all();//֪ͨȫ��
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







//�߳̽������ƶ�
//swap(����)  move(�ƶ�)
//#include <iostream>
//#include <thread>
//using namespace std;
//void main2()
//{
//	thread t1([]() {cout << "fangfang"; });
//	thread t2([]() {cout << "huahua" ; });
//	
//	cout << "\n t1 " << t1.get_id() << "  t2 " << t2.get_id() << endl;
//	swap(t1, t2);//�����߳�
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
//	thread t2 = move(t1);//move�̵߳��ƶ���t2 �߱�t1������
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
//		//unique_lock<mutex> ulk(g_mutex);//�Զ��������Զ����������ݿ����ѭ������
//		//����mutex �����ԣ������Ƿ����
//
//		//lock_guard<mutex>lgd(g_mutex);//ӵ��mutex����Ȩ���Զ��������Զ�����
//		//��ȡʧ�ܵ�����¾ͻ�һֱ�ȴ�
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








//�ȴ��̶�ʱ��
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
//	auto start = chrono::high_resolution_clock::now();//��ǰʱ��
//	auto end = start+chrono::seconds(10);//��ǰʱ��
//	  //this_thread::sleep_until(end);
//	//unique_lock<mutex> lk(m);
//	//while (!done)
//	//{
//
//	//	if (cv.wait_until(lk, end) ==cv_status::timeout )//����ʱ��
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
//	auto start = chrono::high_resolution_clock::now();//��ǰʱ��
//	auto end = start + chrono::milliseconds(5000);//��ǰʱ��
//	//this_thread::sleep_until(end);//�̵߳ȴ�����
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
//	cout << (end - start).count() << endl;//10��-9�η��룬�߾�ȷ��
//
//	cin.get(); 
//}









//�����ߣ�������
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
//condition_variable isfull,isempty;//�����������
//bool falg = true;//��־
//vector<int> myint;
//
//void put(int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		unique_lock<mutex> lk(m);//�����������������̲���������
//		while (myint.size()>=10)
//		{
//			isempty.wait(lk);//���˻�һֱ�ȴ�
//		}
//		myint.push_back(i);//����
//		cout << "���� " << i+1 << endl;
//		isfull.notify_all();//֪ͨ������
//	}
//	this_thread::sleep_for(chrono::seconds(5));
//
//	falg = false;
//}
//void take()
//{
//	while (falg)
//	{
//		unique_lock<mutex>lk(m);//���ѹ��̣�������
//		while (myint.size() == 0)
//		{
//			isfull.wait(lk);
//		}
//		if (falg)
//		{
//			cout <<"���� "<< myint[myint.size() - 1]+1 <<"  "<<this_thread::get_id()<< endl;
//			myint.pop_back();
//			isempty.notify_all();//֪ͨ����������
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
//	myint.pop_back();//ɾ��β��
//	myint.push_back(19);
//	for (auto i : myint)
//	{
//		cout << i << endl;
//	}
//	cin.get();
//}







//����ת��
//#include <iostream>
//using namespace std;
//static_cast<float>(x)  static_cast��̬ת��  <>Ҫת�������� ()Ҫת��������
//reinterpret_cast<char*>(pint);//ָ������ת����ָ��ֱ�Ӹ�ֵ
//�漰��const��������const_cast
//static_cast�����ڻ�����������
//dynamic_cast���ڰ�ȫ��ת����������������������������Ͳ�ƥ��ת��ʧ����Ϊnull;
//dynamic_cast��Ҫ���ڶ�̬���������麯��
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
//	char *pch = reinterpret_cast<char*>(pint);//ָ������ת����ָ��ֱ�Ӹ�ֵ
//
//	for (int i = 0; i < 4; i++)
//	{
//		//��ʾ����
//		cout << static_cast<int>(*(pch + i)) <<"  "<<reinterpret_cast<void*>(pch+i)<< endl;
//	}
//
//	cin.get();
//}
////�漰��const��������const_cast
//void main3()
//{
//	int num[5] = { 1,2,3,4,5 };
//	const int*p = num;
//	//int *pint =reinterpret_cast<int*>( p);//��������const
//	int *pint = const_cast<int*>(p);
//	for (int i = 0; i < 5; i++)
//	{
//		cout << pint[i] << "  " << reinterpret_cast<void*>(pint + i) << endl;
//	}
//	cin.get();
//}
//
//class huahua//����
//{
//public:
//	int hua1;
//	virtual void run()//virtual �麯��
//	{
//		cout << "huahua is runing" << endl;
//	}
//};
//class xiaohua :public huahua//����
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
//	xiaohua *pzi = new xiaohua;//����һ����������Լ�һ������
//	/*pfu->run();
//	pzi->run();*/
//
//	//huahua *phua = dynamic_cast<huahua*>(pzi);//�������ת��Ϊ����ָ��
//	//cout << reinterpret_cast<void*>(phua) << endl;;
//	//phua->run();
//	
//	xiaohua *pxiaohua = dynamic_cast<xiaohua*>(pfu);
//	cout << reinterpret_cast<void*>(pxiaohua) << endl;
//	if(pxiaohua !=nullptr)
//	{
//		pxiaohua->hua1 = 10;//������������������ı���
//		pxiaohua->xiaohua1 = 10;
//		pxiaohua->run();
//		(*pxiaohua).huahua::run();//�����м丸��ĵ��÷���
//	}
//
//	cin.get();
//}
//
//void main4()
//{
//	huahua huahua1;
//	xiaohua xiaohua1;
//	huahua*p;//��̬���������Զ�ѡ����ʵ���
//	
//	p= &huahua1;
//	p->run();
//	p = &xiaohua1;
//	p->run();
//}








//delete����

////��������=delete
//void show(int num)
//{
//	cout << num << endl;
//}
////void show(char num) = delete;//��ȷƥ������
////void show(int num) = delete;//ɾ������
//void main1()
//{
//	//show('A');
//	//show(100);
//
//	cin.get();
//}

//delete��������������
//class myclass
//{
//public:
//	//myclass() = delete;ɾ�����캯��
//	~myclass() = delete;
//};
//void main()
//{
//	myclass*p = new myclass;
//	delete p;//������ɾ����ʹ��delete p ����
//	//myclass myl;
//	cin.get();
//}







//�����Ŵ���
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








//forward_list ������
//�������Լ�ڴ棬���������ʱ��
//#include <iostream>
//#include <forward_list>

//using namespace std;
//
//void main1()
//{
//	forward_list<int> list1{ 1,2,3,4,5 };
//	list1.push_front(10);
//	//list1.push_back(10);ֻ��ͷ��
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
//	auto ib = list1.before_begin();//����ͷ�ڵ�
//	//list1.insert_after(ib, 19);//����Ĳ���
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
//	//list1.sort();//����
//	//list2.sort();
//	//list1.merge(list2);//�鲢
//	//list1.reverse();//��ת
//
//	//list1.assign(5, 20);//��ʼ��
//	cout << list1.max_size() << endl;
//	for (auto i : list1)
//	{
//		cout << i << endl;
//	}
//
//	cin.get();
//}







//__if_exists //�жϱ���,����,�����Ƿ����
//__if_not_exists �жϲ�����
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








//���ð�װ��  ref()��ģ��ʶ��Ϊ����
//#include <iostream>
//using namespace std;
//
//void change(int &num)//������Ϊ���� 
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
//void show(T t)//����ģ�壬�ı�����
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







//������װ����ģ��
//#include <iostream>
//#include <functional>//������װ��
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
//	function<int(int, int)> fun1 = add;//��װ����
//	function<int(int, int)> fun2 = [](int a, int b)->int {return a + b; };
//
//	//cout << fun1(20, 19) << endl;
//	cout << run(19, 29, fun1) << endl;//Ĭ���Ƶ���ԭ����������
//	cout << run < int, function<int(int, int)> >(19, 29, fun1) << endl;
//
//	cin.get();
//}






//����֮��ģ���Ƕ��
//#include <iostream>
//#include <vector>
//#include <list>
//
//using namespace std;
//
//template <class T1,class T2>
//void showll(vector<T1> v,list<T2> l)
//{
//	vector< vector<T1> > v1;//ģ���Ƕ��
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






//ģ���ڲ�������
//��������ֵ���ã���ֵ���ã�ԭ���ܳ�ͻ
//ref ����->��ֵ����
//move ��ֵ���� ��ֵ����

//ģ���Դ����ã�����& ��&& ����ԭ��
//T t ��ref ����ԭ���������Ǹ���
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
//	//print1(data);//����
//	//print1(ref(data));//ԭ��   ���ð�װ����װ��������
//	//print1(rdata);
//	//print1(rrdata);//��ֵ�����ڴ汣�����ʱֵ
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
//	//print2(data);��ģ���Դ�����
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







//����ģ������
//�����ĸ��������Ͳ�һ����˳�����أ��뷵��ֵ�޹�
//��ָ������ƥ��ָ��
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
//	go(&p);//��ַ�����ڵ�ַ
//	cin.get();
//}







//ģ���Ĭ�ϲ���
//#include <iostream>
//using namespace std;
////��֤���е����Ͳ��������Ƶ���Ĭ�ϣ���ȷ
////����������ѭ����Ĭ�Ϲ���
//template<class T=int,int n=10> //ģ�����������Ĭ��ֵ
//void bobo(T bobo)
//{
//	cout << n << endl;
//	cout << bobo << endl;
//}
//
////��Լ������������Ͳ������������ƶ����������ң����븲�����Ͳ���
//template<class T1=int,class T2=int,class T3=int,class T4=int>
//
////����������Ĭ��ͳһ���ұߣ�����Ҫ�Ѳ�Ĭ�ϵ�����˲��ܵ���
//void boda(T1 t1=250.11,T2 t2=250.11,T3 t3 = 250.11,T4 t4=250.11)
//{
//	cout << t1 << " " << t2 << " " << t3 << " " << t4 << endl;
//
//}
//void main()
//{
//	//bobo<>(250.250);//�Զ�����
//	//bobo<int>(250.250);
//	//bobo<int, 250>(250.250);
//
//	boda<int,int,int,int>();
//
//	cin.get();
//}







//����ģ���ָ��ƥ��
#include <iostream>
//using namespace std;
////ģ���Զ�ƥ�� * ���
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








//�����Ա����
//��������--�º���

//bind()�󶨰�װ�� ����װ���Ա����������ʹ�ã����޷�ʹ������
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
//	//void (mystruct::*p)(int a) add������������
//	//Mystruct::p(10);//error,  p���ѵ��ã���Ҫ��װһ��
//	cin.get();
//}
//
//void main()
//{
//	Mystruct my1;     //������        �����ַ
//	auto fun1 = bind(&Mystruct::add1, &my1, _1);//bind()�� ����һ������
//	fun1(1000);
//	auto fun2 = bind(&Mystruct::add2, &my1, _1, _2);//����������
//	fun2(100, 200);
//	auto fun3 = bind(&Mystruct::add3, &my1, _1, _2, _3);//����������
//	fun3(120, 200, 900);
//	cin.get();
//}


//������װ������
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
//	auto fun = bind(add1, 10, _1);//������ģʽ
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
//	auto fun = bind(my1, 100, _1);//�� ,ջλ������
//	cout <<fun(123)<< endl;
//
//	cin.get();
//}






//��̬����
//#include <iostream>
//#include <cassert>
//using namespace std;
//
//int divv(int a, int b)
//{
//	assert(b != 0);//��ǰ����
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
//	//static_assert(a > 0, "is not 64");//������ʹ�ñ���
//	static_assert(a > 0, ">0,is not");
//	cin.get();
//}





//��������  inline
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//#define f(x) x*x*x  //C������������
//
//inline int get(int x);//C++
//
////��߳��������ٶ�
//
////inlineֻ�Ƕ��ڱ������Ľ���
////һ������£����Ƕ��������������������ƣ�
////��1�������еݹ�
////��2�����ܰ�����̬����
////��3�����ܰ���ѭ��
////��4�����ܰ���switch��goto ���
////��5�����ܰ�������
////��һ�������������岻�����������ƣ�����ϵͳ������������ͨ��ͨ�����Դ�
//
//
//template <class T>
//inline T go(T t)//inlineͬ�������ں���ģ��
//{
//	return t * t;
//}
//
//void main()
//{
//	go(5);
//	cin.get();
//}
//int get(int x)//����������ʡ��inline
//{
//	return x * x*x;
//}






//C++ת���ַ�
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
//	//R"()";ת��
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






//������ʽ
//regex_match ��֤
//regex_search ����
//regex_replace  �滻

//#include <iostream>
//#include <regex>
//using namespace std;

//void main1()
//{
//	regex reg("^select ([a-zA-Z]*) from ([a-zA-Z]*)$");
//	cmatch what;//ƥ��Ĵ����������
//	bool isit = regex_match("select id from admin", what, reg);
//	if ( isit)
//	{
//		for (int i = 0; i != what.size(); ++i)
//		{
//			cout << what[i + 1].first <<"\t";
//		}
//		cout << "ƥ��" ;
//	}
//	else
//	{
//		cout << "NOƥ��" << endl;
//	}
//	cin.get(); 
//}
//
//void main2()
//{
//	//^ ��ͷ
//	//()��
//	//[]��
//	//{}����
//	//$��β
//	regex reg("^(1[3|4|5|8|7][0-9]{9})");
//	string str1;
//	cin >> str1;
//	bool isit = regex_match(str1, reg);//��һ�ַ�ʽ������Ҫ���
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
//	regex reg("\\d+");//����
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
//	regex reg("\\d+");//����
//	char str1[50] = "hello 8848,hello huahua 180";
//	cout << regex_replace(str1, reg, "asdf") << endl;//�޷���ֵ
//
//	cin.get();
//}





