
#define _CRT_SECURE_NO_WARNINGS ; 

//CPP �ṹ����C������
//1��CPP �ṹ�����Ϊ�գ�
//2  CPP������Ĭ��ֵ
//3  CPP �ṹ�嶨�����������ؼ���
//4  CPP�ṹ������к���
//5  ��������ָ�룬�Ǳ�����lambda�൱�ں����飬��������� 
//6  CPP�ṹ��Ĭ�Ϲ��У�Ҳ��������˽��
//7  �ṹ��������ֻ�ܴ���ָ�����ã���չ�ṹ�����÷�Χ
//8  �ṹ���ڲ����Դ������û�ָ��
//9  �����ṹ�岻���Գ�ʼ��
//10 �ṹ����Լ̳У���̬

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
//	//function ��װ��һ��40�ֽ�
//	//ָ��4���ֽ�
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
//	point(int a,int b):x(a), y(b) //x��a��ʼ����y��b��ʼ��
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
//	//�ṹ�庬˽�г�Ա�ĳ�ʼ������
//	//˽�У���Ҫ���캯���������������ʼ��
//	//point p1(1,2);
//	//p1.show();
//	//point *ps = new point(3, 4);//ָ��
//	//ps->show();
//	//point p2[3]{point(13,4),point(13,4),point(13,4) };//����
//	//point *ps = new point[3]{ point(13,4),point(13,4),point(13,4) };//��������
//
//	//p1.x = p1.y = 10;//�ⲿ����
//
//	cin.get();
//}

//struct Mystruct;//�ṹ��������ֻ�ܴ���ָ�룬����
//Mystruct *p;
////Mystruct my;//error ����
//void show(Mystruct &my)//����
//{
//
//}

//struct wuwei
//{
//	virtual void show()
//	{
//		cout << "����������" << endl;
//	}
//};
//struct xiaowei :public wuwei
//{
//	void show()
//	{
//		cout << "����֮��" << endl;
//	}
//};
//void main()
//{
//	wuwei *p = new wuwei;//��̬
//	p->show();
//	p = new xiaowei;
//	p->show();
//
//	cin.get();
//}







//˽���������� 
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
//	Mystruct my2 = my1;//��ֵ����ֵ����������˽�л���
//	 
//	my2.show();
//	cin.get();
//}





//�쳣
//try ��������
//throw �׳�����
//catch �������

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
//			throw 1;//�׳�����
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
//			cout << "����������Ϊ��" << endl;
//		}
//		if (code==2)
//		{
//			cout << "��������Ϊ��" << endl;
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






//CPP�������ͼ���  limits
//#include <iostream>
//#include <limits>
//
//using namespace std;
//
//void main()
//{
//	cout << numeric_limits<int>::max() << endl;
//	cout << numeric_limits<int>::min() << endl;
//	cout << numeric_limits<int>::lowest() << endl;//����һ���ĺ���min����
//
//	cout << numeric_limits<double>::max() << endl;
//	cout << numeric_limits<double>::min() << endl;//�ܱ�ʾ��С���ȵ���
//	cout << numeric_limits<double>::lowest() << endl;//�ܱ�ʾ��С����
//	cin.get();
//}







//�㷨��������
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
//	int operator()(int data)//α����
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

	//int num = count_if(myint.begin(), myint.end(), getT<int>);ģ����Ҫ��������

	/*my my1;
	auto fun = bind(&my::get, &my1, _1);�����������󶨳�Ա����
	int num = count_if(myint.begin(), myint.end(), fun);
	cout << num << endl;
*/
//cin.get();
//}







//allocator �ֶ������ڴ漰�ͷ�
//allocator<Myclass>my; �Զ����ƹ���������ʱ��
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
//	allocator<Myclass>my;//������
//	Myclass *p = my.allocate(1);//����һ��Ԫ��
//	my.construct(p, Myclass());//�漰��������е���Ҫ���ݡ�����   Myclass()�������������Զ�������������
//
//	//my.destroy(p);//�ͷ����ݣ�û���ͷ��ڴ�,������������
//	my.deallocate(p, 1);//�ͷ��ڴ�
//
//	cin.get();
//}
//
//void main11()
//{
//	//���������ڼĴ����뻺�棬ˢ���ٶȿ�
//	//Myclass();//�������󣬹������ˣ���������
//	//Myclass *p = new Myclass;//����ڶ��ϾͲ��������ͷ�
//
//
//	//Myclass f1;//Myclass f1=Myclass();��д
//
//	//int a(5);//ԭ����ǹ��캯��
//	//int a = int(5);
//	//cout << "  a" << a << endl;
//
//	cin.get();
//}
//void main22()
//{
//	allocator<Myclass>my;//������
//	Myclass *p = my.allocate(3);//��������
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







//delete default �Լ��������ɵ�Ĭ���Ĵ���
//#include <iostream>
//using namespace std;
//class myclass
//{
//public:
	//myclass(const myclass&my) = delete;//ɾ��
	//�Ĵ���
	//�������죬 ���죬��������ֵ����
	//myclass my1;myclass my2(my1);//��������
	//myclass *p=new myclass;����
	//delete p//����
	//myclass my1;myclass my2;my2=my1;//��ֵ����
	//myclass() =default;//default ��������
	//C++���ÿ�������ɵ��ĸ�������д���µĻḲ�Ǿɵģ�default ��ʾ�ɺ����Ĵ���


	//myclass(delete);//ɾ������
//	myclass()
//	{
//		cout << "create" << endl;
//	}
//	//~myclass=delete;//ɾ������
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
//		cout << "����" << endl;
//	}
//	~myclass()
//	{
//		cout << "����" << endl;
//	}
//	myclass(const myclass&my)
//	{
//		x = my.x;
//		y = my.y;//Ҫ��ԭ���ĸ����ˣ���Ҫ�Լ�ʵ��
//
//		cout << "��������" << endl;
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
//		cout << "��ֵ����" << endl;
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
//	my2 = my1;//��ֵ����
//	my2.show();
//	cin.get();
//}
//void main1()
//{
//	myclass my1;
//	my1.x = 10;
//	my1.y = 20;
//	my1.show();
//	myclass my2(my1);//��������
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
//	bobo() = default;//��������
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
//	//д�˹��캯��֮�󣬻Ḳ��ԭ������
//	bobo bo1(1,2,3);
//
//	cin.get();
//}






//ģ�����չ��
//ģ��Ԫ�������Ż�
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
//	//int arr[],չ��Լ��
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






//���ͺ�׺  
//#include <iostream>
//using namespace std;
//
//struct huihui
//{
//	unsigned int num;
//};
//operator "" _h ���Ӻ�׺
//�ı��������������������("unsigned long")��Ч��
//Ӧ��Ϊ char��wchar_t��char16_t��char32_t �� unsigned long long	
//�ı��ĺ�׺ֻ�ܷ����ⲿ���������ռ���

//huihui operator "" _h(unsigned long long  data)
//{
//	return { (unsigned int)data }; //{}���ṹ���ʼ����()���ݵ�������������յ�һ��
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





//�߼�lambda
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




//lambda�ݹ�
//#include <iostream>
//#include <functional>
//using namespace std;

//void main1()
//{
//	//&�����ⲿ
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






//���������뺯��ָ��
//#include <iostream>
//using namespace std;
//
//const char * go()
//{
//	return __func__;//ȡ��������
//}
//void main1()
//{
//	//cout << go() << endl;
//
//	cin.get();
//}
//
////�������������ͣ�˳���뷵��ֵ�޹�
////���Ա���������캯������ͨ������ 
////���ⲿ��ͨ���������غ������������
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
//	//���캯������
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
//	//���Ա��������
//	void go()
//	{
//
//	}
//	void go(int)
//	{
//
//	}
//};







//����ָ��������decltype
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
//	/*decltype (add) add1;*///error.��������²���ȷ
//	decltype (add) add1;//����ָ��
//	void (*p)(int a) = add;//����ָ��
//	cout << add << endl;
//	cout << (*add) << endl;
//	cout << (&add) << endl;
//	//��������*+��������&+��������һ��
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
//	decltype (add) &add1 = add;//����һ������
//	decltype (add) *add2 = add;//����һ��ָ��
//	add1(1);
//	add2(2);
//
//	//decltype (add) add2;//decltype ��ȡ������������һ������ָ�룬���µ�����
//	
//	decltype (10) data1 = 10;//�������ͣ�����һ��
//	decltype (10) data2 (10);
//
//	cin.get();
//}








//����ģ���������
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
//	//go<31-2>();����ģ����÷�ʽ
//	//go<decltype(32 - 1)>(12234);���÷���ģ�壬decltype��ȡ��������
//	//nullptr ����ָ�����ͣ����Զ������ͣ���ʾΪ��ָ��
//	go(nullptr);
//
//	int *p = nullptr;
//	go(p);
//	cin.get();
//}






//����ָ���뺯��ģ��
//����ģ�嵱����ָ��ʹ����Ҫ��<>ָ������
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







//C/C++����
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
//	char *p1 = begin(str);//��Ԫ�ص�ַ
//	char*p2 = end(str);//ĩβ��������ַ
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







//���캯����������
//#include <iostream>
//#include <cstdlib>
//#include <string>
//
//using namespace std;
//��ʼ�����ݵ�ʱ������������������࣬��Ҫ��д���캯��

//union myu  error
//{
//	string str1;//string ��һ���࣬�Լ��й��캯��
//	int a;
//	int b;
//};

//union�ڲ�������Զ�����࣬���Լ��Ĺ��캯����unionԭ���Ĺ��캯���ᱻɾ������Ҫ�Լ�ʵ��
//union myu
//{
//	string str1;
//	int a;
//	int b;
//	myu()
//	{
//		new(&str1)string;//����string�Ĺ��캯��
//	}
//	~myu()
//	{
//		str1.~basic_string();//����
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
//	my *p=new my[3]{ {1,2},{3,4},{5,6} };//�漰��new ��Ҫ��д���캯��
//	for (int i = 0; i < 3; i++)
//	{
//		cout << p[i].a<< "  " << p[i].b << endl;
//	}
//	cin.get();
//}








//������������
//#include <iostream>
//#include <ratio>//��������׼������
//using namespace std;
//
//void main()
//{
//
//	typedef ratio<1, 2>er;
//	typedef ratio<1, 3>th;
//	er er1;
//	th th1;
//	//   ��ĸ              ����
//	cout << er1.num  <<"/"<< er1.den<< endl;
//	cout << th1.num << "/" << th1.den  << endl;
//	typedef ratio_add<er, th> sum;
//	cout << sum::num << " / " << sum::den << endl;
//	cout << (double)(sum::num) / (sum::den) << endl;//ת��
//	cin.get();
//}







//����������������
//#include <iostream>
//#include <typeinfo>//������Ϣ
//#include <typeindex>//���͵�����
//#include <unordered_map>//ӳ�䣬�����
//#include <string>
//using namespace std;
//
//struct Cpp
//{
//
//};
//void main()
//{
//	//�����������ʹ�����������
//	unordered_map<type_index, string> mytype;//�������ַ���ӳ��
//	mytype[typeid(int)] = "��������";
//	mytype[typeid(double)] = "ʵ������";
//	mytype[typeid(Cpp)] = "Cpp class ";
//
//	cout << mytype[typeid(int)] << endl;
//	cout << mytype[typeid(double)] << endl;
//	cout << mytype[typeid(Cpp)] << endl;
//	cin.get();
//
//}







//ί�й���
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
//	//��Ҫ�Ķ��������ڲ�
//	huihui(int i, char c) :id(i),ch(c)//�����캯����Ŀ�깹��
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







//CPP�������
// . ->    .*   ->*
//#include <iostream>
//using namespace std;
//
//class op
//{
//	int a = 0, b = 0;
//public:
//	//��ʼ��
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
//	//cout << typeid(my1.add).name() << endl;//ͨ��������ú������������ͨ����
//	//cout << typeid(&myclass::add).name() << endl;//�޷�ֱ�ӷ���
//	//int(*p)(int, int)=my1.add;//error
//	
//	int(myclass::*p)(int, int) = &myclass::add;//����һ������ָ�������Ա������
//	cout << (my1.*p)(1, 2) << endl;//����
//	cout << (pmy->*p)(1, 2) << endl;//ָ��
//	//�������Ա����ָ���ʱ��ָ����� ->*  ,������� .*  
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
//	op2->add();//ָ����->�������� .
//
//	cin.get();
//}






//���Ա����ָ��
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
//	//��ָ����Ե��ã�û�����Ա���ݵģ����Ա����ָ��
//	cout << pclass->add(1, 2) << endl;
//	cout << (pclass->*p)(1, 2) << endl;
//	cout << ((*pclass).*p)(1, 2) << endl;
//	cin.get();
//}
//void main2()
//{
//	//���Ա����ָ������
//	myclass*pclass(nullptr);
//	//ջ��
//	//int(myclass::*p[4])(int, int) = { &myclass::add,&myclass::sub,&myclass::mul,&myclass::divv };
//	//����
//	int (myclass::**p)(int, int);
//	p = new  (int(myclass::*[4])(int, int)){ &myclass::add,&myclass::sub,&myclass::mul,&myclass::divv };
//	for (int i = 0; i < 4; i++)
//	{
//		cout << (pclass->*p[i])(100,10) << endl;//�±�ѭ��
//	}
//	for (int(myclass::**pp)(int, int) = p; pp < p + 4; pp++)
//	{
//		cout << (pclass->**pp)(100, 10) << endl;//ָ��ѭ��
//	}
//
//	cin.get();
//}
//
//
//void change( int (myclass::*& p)(int, int) )//int (myclass::*& p)(int, int)���Ա����������
//{
//	p = &myclass::sub;
//
//}
////changeit�Ĳ��������Ա�������ã�����ֵ�����Ա��������
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
//void showit(int(myclass:: *p[4])(int, int))//���Ա������Ϊ�������˻�Ϊ�������Ա����ָ��
//{
//	p += 3;
//	cout << "showit" << endl;
//}
//void showita(int(myclass::**pp)(int, int))
//{
//	myclass *pclass(nullptr);
//	for (int(myclass::**pp1)(int, int) = pp; pp1 < pp + 4; pp1++)//�������Ա����ָ��������Ա����ָ������
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







//��������������
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//���캯�����Լ�Ĭ����һ�����Լ�д�Ḳ��ԭ��
//myclass() = default; ����Ĭ�ϴ���
//���캯��һ���ʼ��
//��������һ������ͷ��ڴ�
//����û�в������������ء�
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
//	//myclass my1;ջ��
//	myclass *p = new myclass;
//}
//
//void main()
//{
//	//	myclass my1;
//	go();
//	cin.get();
//}







//���캯����ʼ����Ա�б�
//#include <iostream>
//using namespace std;
//
//class myclass
//{
//public:
//	myclass() :x(4), y(10), p(new int(9)), pfun([](int a, int b) {return a + b; })
//	{
//		//��ʼ��
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







//��ĳ�ԱĬ��ֵ
//���Ա����ʹ�� =  {}��ʼ�����趨Ĭ��ֵ
//#include <iostream>
//using namespace std;
//
//class myclass
//{
//public:
//	// {} ���ö��ֳ�ʼ��
//	//int a=10;  int a {10}  ���Ա��ʼ����ʽ
//	int b;
//	int *p=new int(5);//int *p{new int (5)}
//	int(*pfun)(int, int);
//	int c[5]{1,2,3,4.5};//������һ��{}
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








//��Ƕ�׵ĳ�ʼ��
//Ƕ�����У�public�¿��� �� ����::����������������������²���
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
//		//��ʼ��
//		line(int a1, int b1, int a2, int b2):p1(new point(a1,b1)),p2(new point(a2,b2))
//		{
//
//		}
//};

//Ƕ����
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
//	//meclass x1(1, 2);//error ���ڲ�
//	myclass::meclass(1, 2);
//	cin.get();
//}






//const ����
//#include <iostream>
//using namespace std;
//��������ʱ��const ���������޷��޸����ݣ�ֻ������β����const �ķ���
//��ĳ�Ա���ʱconst ����һ��Ĭ�ϳ�ʼ�����ڶ��й��캯��β����ʼ���������ڹ��캯���ڲ���ʼ��
//���еĳ�Ա��const ,�޷�ֱ���޸ģ����Լ��
//���еĳ�Ա����������ֵ��const ������const�����Զ�ȡ����д��β��const.����������������÷���
//const �������ڹ�������������������һ������

//class myclass //�ڲ�const 
//{
//public:
//	int x;
//	int y;
//	const int z;//��������ԭ������ʼ��
//	myclass(int a, int b) :x(a), y(b),z(a+b)
//	{
//
//	}
//	void show() const//const �����������
//	{
//		cout << x << y << endl;
//		//����const ֻ�ܶ����޷��޸�
//	}
//	void change(const int a, const int b)//�������������޸�
//	{
//		y = b;
//		x = a;
//	}
//	const int getx(int x) const//����һ�������������ܱ���
//	{
//		return x;
//	}
//};
//void main1()
//{
//	const myclass my1(10,20);//����constΪ ������
//	my1.show();
//	cout << my1.z << endl;
//	int *p = const_cast <int *>(&my1.z);
//	*p = 3;//���Լ���޸����е�const ��Ա	
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
//	const huihui hui1(1, 2, 3);//ջ��
//	hui1.show();
//	//hui1.set(2, 3, 4);//error ���������޸�����
//	huihui *phui = new huihui(4, 5, 6);
//	phui->show();
//	phui = nullptr;//ָ�򳣶����ָ��
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
//	huihui const *const phui = new huihui(1, 2, 3);//������ָ��һ����ָ��
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
//	mutable int time;//����const ����
//
//};






//��������
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
//void show(myclass my1)//�����и������ƣ����ÿ�������
//{
//	cout << my1.x << my1.y << endl;
//}
//void showit(myclass &my1)//���󵱲�������ʹ������
//{
//	cout << my1.x << my1.y << endl;
//}
//myclass get()
//{
//	myclass my1;
//	my1.x = 10;
//	my1.y = 20;
//	return my1;//��������ֵ�и������ƣ�����һ��
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
//	myclass my2(my1);//��������
//	cout << my2.x << my2.y << endl;
//	cin.get();
//}






//��ǳ����
//ǳ������������ַ���������������
//����ڲ���ָ������ڴ棬��Ҫ���������ǳ����
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
//		strcpy(this->pstr, str);//��ʼ��
//	}
//	void show()
//	{
//		cout << length << "  " << (void*)pstr <<"  "<<pstr<< endl;
//	}
//	~mystring()
//	{
//		delete[] pstr;
//	}

//	��������������Ӱ��
//	mystring(const mystring &str)//��� 
//	{
//		this->length = str.length;
//		this->pstr = new char[this->length]{ 0 };
//		strcpy(this->pstr, str.pstr);//��������
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







//����������ת��
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
//	//��������
//	myclass my(5);
//	myclass my1 = 5;//��5ת��Ϊmyclass ����
//
//	point p{1,2};
//	myclass my2(p);//��struct����ת��Ϊclass ����
//	myclass  my3 = p;
//
//	cin.get();
//}







//��������
//#include <iostream>
//using namespace std;
////������������ñ���ʹ��Ĭ�ϳ�ʼ��
////������Ϊ����ֵ�����Ա��ⲻ��Ҫ�Ŀ���
//
//class myclass;//�������������������ֻ��������ָ�롢���ã��������ڶ���
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
//	int &rx=x;	//������������ñ���ʹ��Ĭ�ϳ�ʼ��
//	//int &rx{ x };//Ĭ�ϳ�ʼ��
//
//	myclass()//�����ʼ��
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
//myclass & get(myclass &data)//���ÿ��Ա��ⲻ��Ҫ�Ŀ���
//{
//	return data;
//}
//void main()
//{
//	myclass my1;
//	//myclass & my2(my1);//����my2 �ȼ���my1���ڴ���ֻռ��4���ֽ�
//	
//	const myclass & my2(my1);
//	my2.show();//�����õȼ��ڳ�����
//}
//
//void main1()
//{
//	myclass my1;
//	get(my1);
//
//	cin.get();
//}







//��̬��Ա  static
//#include <iostream>
//using namespace std;
//
//class myclass 
//{
//public :
//	static int num;//ֻ���ʼ��һ��
//	int data;//ÿ����һ�����󣬳�ʼ��һ��
//	myclass()
//	{
//		num += 1;
//	}
//	~myclass()
//	{
//		num -= 1;
//	}
//};
//int myclass::num=0;//��̬��Ա�����еĶ��󶼿��Է���
//void main()
//{
//	myclass my1, my2, my3;
//	my3.~myclass();
//
//	myclass *p = new myclass;
//	//��̬��Ա���������κ�һ�������κζ��󶼿��Է���,��̬��
//	//����ͬ����ͨѶ
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
////ֻ�����ⲿ��ʼ��
//int mythread::data = 0;//��ľ�̬�������κ�һ����ǰ�߳��඼���Է���
////ͳ�ƶ���ĸ���
////���̣߳���ͣ��ģʽ
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







//��̬����
//#include <iostream>
//#include <cstdlib>
//#include <vector>
//using namespace std;
//��̬����û��this���޷����ó�Ա��������Ա����

//class myclass
//{
//public:
//	int num;
//	void go()
//	{
//		cout << (void*)this << endl;//this ��ǰ�����׵�ַ
//	}
//	void show()
//	{
//		cout << (void*)this << endl;
//		cout << "show huihui" << endl;
//	}
//	static void showit(int data)//��̬����û��thisָ��
//	{
//		//num=1;//�޷������ڲ�����������
//		//show();
//
//		//�޷�ʹ��thisָ��
//		//cout << (void*)this << endl;
//		cout << "showit huihui" << data << endl;
//	}
//};
//
//void main()
//{
//	myclass my1;
//	my1.showit(11);//Ҳ����ʹ����������
//
//	myclass::showit(10);//���еľ�̬��������������Ϳ��Է��ʣ�ԭ����û��this
//	cin.get();
//}
//void main2()
//{
//	cout << typeid(&myclass::show).name() << endl;
//	cout << typeid(&myclass::showit).name() << endl;
//	void(*p)(int) = &myclass::showit;//C�����ָ��
//	void (myclass:: *px)() = &myclass::show;//���Ա�������
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

//��̬�����뾲̬�������ʹ��
//struct runit
//{
//	static vector<runit*> all;
//	int x;
//	int y;
//	runit(int a, int b) :x(a), y(b)
//	{
//		all.push_back(this);//ÿ�ι���ѹ���ַ
//	}
//	void show()
//	{
//		cout << x << y << endl;
//	}
//	static void showall()//��Ͼ�̬��Ա��������������
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
//	cout<<(void *)(runit::showall)<<endl;//��ӡ���ַ
//	cout<<(void *)(run3.showall)<<endl;
//	cin.get();
//}








//��Ԫ����
// friend
//��ͨ����+friend
//#include <iostream>
//using namespace std;
//
//class myclass
//{
//	int x;
//	int y;
//	friend void show(const myclass &my);//��Ԫ����
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
//	//my1.x = 10; �޷�����˽�г�Ա
//	
//
//	cin.get();
//}






//��Ԫ��
//friend ���Է���protected�� private����Ա
//#include <iostream>
//using namespace std;
//
//class myclass
//{
//public:
//	myclass();
//	~myclass();
//	friend class newclass;//��Ԫ��
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
//	//û��explicit����������࣬���Խ���Ϊ���죬���Խ���Ϊ����ת��
//
//	//��explicit,�޶��Զ�ת��������ǿ��ת��
//	//myclass my(5);
//	//myclss my = 5;//error
//	myclass my = (myclass)5;
//	cout << my.num << endl;
//	cin.get();
//}







//���صĸ���������
//ʵ�ַ��ͣ�����������
//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//void main1()
//{
//	//error C ָ���ַ����޷�ֱ�����
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
////inline �����죬���������Ա���������Լӣ��������Լ������Ƿ���������
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
//		this->length = strlen(str) + 1;//��ȡ�ַ�������
//		this->pstr = new char[this->length];
//		strcpy(this->pstr, str);//����
//	}
//	mystring(const mystring &my)
//	{
//		cout << "���" << endl;
//		this->length = my.length;
//		this->pstr= new char[this->length];
//		strcpy(this->pstr, my.pstr);//���
//
//	}
//	mystring add(const mystring &my)
//	{
//		int n = this->length + my.length - 1;
//		mystring temp;
//		temp.length = n;
//		temp.pstr = new char[temp.length];//�����ڴ�
//		strcpy(temp.pstr,this->pstr);
//		strcat(temp.pstr, my.pstr);//β������
//
//		return temp;
//	}
//	mystring operator +(const mystring &my)//���������
//	{
//		cout << "mystring operator +" << endl;
//		int n = this->length + my.length - 1;
//		mystring temp;
//		temp.length = n;
//		temp.pstr = new char[temp.length];//�����ڴ�
//		strcpy(temp.pstr, this->pstr);
//		strcat(temp.pstr, my.pstr);//β��׷��
//		return temp;
//	}
//};
//
//void main2()
//{
//	mystring my1 = "12345";
//	mystring my2 = "6789";
//	//mystring my3 = my1.add(my2);//��Ա����ʵ��
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







//�����������

//�ⲿ���أ�û��thisָ����������
//���ǹ��б������ⲿ��������ֱ�����أ��漰private����,��Ҫ��Ԫ����friend
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
////�ⲿ���أ�û��thisָ����������
////���ǹ��б������ⲿ��������ֱ�����أ��漰private����,��Ҫ��Ԫ����friend
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
//ostream &operator <<(ostream &, const box &box1)//������ʽ�����������һ�����ã�����һ������
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








//���������븳ֵ���ط���
//�������죬��ֵ���ء�������������
//ʵ�����͵�ת��
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
//		cout << "��������" << endl;
//	}
//	myclass():x(10),y(20)
//	{
//
//	}
//	void operator = (const point &po)
//	{
//		cout << "��ֵ����op" << endl;
//		this->x = po.a;
//		this->y = po.b;
//	}
//	void  operator = (const myclass &my)
//	{
//		cout << "��ֵ����" << endl;
//		this->x = my.x;
//		this->y = my.y;
//		
//	}
//
//	void operator = (int num)
//	{
//		cout << "��ֵ����num" << endl;
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
//	myclass my2(my1);//����ʱ��ʼ���ǿ�������
//	myclass my3;
//	myclass my4 = my2;//��������
//	my3 = my2;//��ֵ����
//
//	cin.get();
//}









//��ֵ�����Լ���ǳ����
//��ֵ���أ��������죬ֵ����
//��ָ�룬��ǳ����һ������ָ�룬ǳ�������ڴ湲����ַһ�£�����һ��
//�����ָ�벻һ�£��ڲ�һ�£��ڴ����

//��ֵ�������з���ֵ�������������ͣ�����ÿ������캯������Ҫע����ǳ����
//���ض����ַ�����ã������ջ�����ᴥ�����ϡ�
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
//	mystring(char *str)//ǳ
//	{
//		n = strlen(str) + 1;
//		p = new char[n];
//		strcpy(p, str);//����
//	}
//	mystring (const mystring &stringmy) //��
//	{
//		delete[] p;
//		cout << "���캯��call" << endl;
//		this->n = stringmy.n;
//		this->p = new char[this->n];
//		strcpy(this->p, stringmy.p);
//	}
//	void operator =(const mystring &stringmy)//��ֵ����
//	{
//		delete[] p;
//		cout << "��ֵ����call" << endl;
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
//	mystring my2(my1);//��������
//	//my2 = my1;��ֵ����
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
//		this->n += strlen(stringmy.p);//���ӳ���
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








//�����ڴ�ķ���
//#include <iostream>
//using namespace std;

//��Ա�������ڴ�������������������
//��ָ�룬���ݶ������빲�����������Ա���ݡ�
//�������Ա���ݣ�ִ�б�����ԭ����û���ڴ�ʵ��

//��̬��������main������ȫ�ֶ����ھ�̬��
//��̬�����ھ�̬����ֻ���ʼ��һ�Σ�
//����Ĵ�С�����������������ྲ̬����

//���еķǾ�̬���ݣ�������λ�����
//������Ķ��󣬾�̬���������ڵĶ���ջ������̬���䣬����
//���е�ָ�룬������λ����أ�������ڴ�һ���ڶ�����  new���Է������κ�һ����
//���е�const����ĳ�Ա����һ�� 
//class myclass
//{
//	int *p;
//	int n;
//	static int num;
//public:
//	myclass() :p(nullptr), n(0)
//	{
//		cout << "����" << endl;
//		p = new int[10]{ 1,2,3,4,5,6,7,8,9,10 };
//	}
//	~myclass()
//	{
//		cout << "����" << endl;
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
////static myclass my1, my2;��̬��
//myclass *p1 = new myclass;
////p1��̬����*p1�ڶ���
//int main()
//{
//	myclass *p1 = new myclass;
//	//p1,��Ϊһ��ָ�������ջ����*p1����Ϊһ�������ڶ���
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








//����ת��
#include <iostream>
using namespace std;

class myclass
{
public:
	int x;
	int y;
	myclass(int a) :x(a), y(a)//��ֵת��
	{
		cout << "����" << endl;
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
{//---��ʽת������ʾת��
	int a = 1.2;//�Զ�ת��
	int b = static_cast<int>(2.3);//CPP ��ʾת��
	int c = (int)3.4;//C ���

	int *p1 = nullptr;
	char *p2 = reinterpret_cast<char *> (p1);//Cpp ָ��ת��



	cin.get();
}