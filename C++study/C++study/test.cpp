#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;//告诉编译器使用std命名空间。 命名空间是C++中一个相对新的概念

//int main()
//{
//	cout << "Hello World";//在屏幕显示消息"hello world";
//	return 0;
//}

#include<iostream> 
#include<string> 
#include <limits> 
using namespace std;

//int main()
//{
//	cout << "type: \t\t" << "************size**************" << endl;
//	cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
//	cout << "\t最大值：" << (numeric_limits<bool>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
//	cout << "char: \t\t" << "所占字节数：" << sizeof(char);
//	cout << "\t最大值：" << (numeric_limits<char>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
//	cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
//	cout << "\t最大值：" << (numeric_limits<signed char>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
//	cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
//	cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
//	cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
//	cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
//	cout << "short: \t\t" << "所占字节数：" << sizeof(short);
//	cout << "\t最大值：" << (numeric_limits<short>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
//	cout << "int: \t\t" << "所占字节数：" << sizeof(int);
//	cout << "\t最大值：" << (numeric_limits<int>::max)();
//	cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
//	cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
//	cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
//	cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
//	cout << "long: \t\t" << "所占字节数：" << sizeof(long);
//	cout << "\t最大值：" << (numeric_limits<long>::max)();
//	cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
//	cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
//	cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
//	cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
//	cout << "double: \t" << "所占字节数：" << sizeof(double);
//	cout << "\t最大值：" << (numeric_limits<double>::max)();
//	cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
//	cout << "long double: \t" << "所占字节数：" << sizeof(long double);
//	cout << "\t最大值：" << (numeric_limits<long double>::max)();
//	cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
//	cout << "float: \t\t" << "所占字节数：" << sizeof(float);
//	cout << "\t最大值：" << (numeric_limits<float>::max)();
//	cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
//	cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
//	cout << "\t最大值：" << (numeric_limits<size_t>::max)();
//	cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
//	cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
//	// << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl; 
//	cout << "type: \t\t" << "************size**************" << endl;
//	return 0;
//}

//int main()
//{
//	int a = 21;
//	int b = 10;
//	int c;
//
//	c = a + b;
//	cout << "Line 1 - c 的值是 " << c << endl;
//	c = a - b;
//	cout << "Line 2 - c 的值是 " << c << endl;
//	c = a * b;
//	cout << "Line 3 - c 的值是 " << c << endl;
//	c = a / b;
//	cout << "Line 4 - c 的值是 " << c << endl;
//	c = a % b;
//	cout << "Line 5 - c 的值是 " << c << endl;
//
//	int d = 10;   //  测试自增、自减
//	c = d++;
//	cout << "Line 6 - c 的值是 " << c << endl;
//
//	d = 10;    // 重新赋值
//	c = d--;
//	cout << "Line 7 - c 的值是 " << c << endl;
//	return 0;
//}

//class Box
//{
//public:
//	double length;   // 长度
//	double breadth;  // 宽度
//	double height;   // 高度
//};

//int main()
//{
//	Box Box1;        // 声明 Box1，类型为 Box
//	Box Box2;        // 声明 Box2，类型为 Box
//	double volume = 0.0;     // 用于存储体积
//
//	// box 1 详述
//	Box1.height = 5.0;
//	Box1.length = 6.0;
//	Box1.breadth = 7.0;
//
//	// box 2 详述
//	Box2.height = 10.0;
//	Box2.length = 12.0;
//	Box2.breadth = 13.0;
//
//	// box 1 的体积
//	volume = Box1.height * Box1.length * Box1.breadth;
//	cout << "Box1 的体积：" << volume << endl;
//
//	// box 2 的体积
//	volume = Box2.height * Box2.length * Box2.breadth;
//	cout << "Box2 的体积：" << volume << endl;
//	return 0;
//}

//公有继承（public）：当一个类派生自公有基类时，基类的公有成员也是派生类的公有成员，基类的保护成员也是派生类的保护成员，基类的私有成员不能直接被派生类访问，但是可以通过调用基类的公有和保护成员来访问。
//保护继承（protected）： 当一个类派生自保护基类时，基类的公有和保护成员将成为派生类的保护成员。
//私有继承（private）：当一个类派生自私有基类时，基类的公有和保护成员将成为派生类的私有成员。--只允许自己使用
//class <派生类名> :<继承方式1><基类名1>, <继承方式2><基类名2>, …
//{
//	<派生类类体>
//};
// 基类 Shape
/*class Shape
{
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
protected:
	int width;
	int height;
};

// 基类 PaintCost
class PaintCost
{
public:
	int getCost(int area)
	{
		return area * 70;
	}
};

// 派生类
class Rectangle : public Shape, public PaintCost
{
public:
	int getArea()
	{
		return (width * height);
	}
};

int main(void)
{
	Rectangle Rect;
	int area;

	Rect.setWidth(5);
	Rect.setHeight(7);

	area = Rect.getArea();

	// 输出对象的面积
	cout << "Total area: " << Rect.getArea() << endl;

	// 输出总花费
	cout << "Total paint cost: $" << Rect.getCost(area) << endl;

	return 0;
}*/


/*class printData
{
public:
	void print(int i) {
		cout << "整数为：" << i << endl;
	}
	void print(double f) {
		cout << "浮点数为：" << f << endl;
	}
	void print(char c[]) {
		cout << "字符串为：" << c << endl;
	}

};
int main()
{
	printData pd;
	pd.print(5);//输出整数
	pd.print(500.263);//输出浮点数
	char c[] = "hello C++";//输出字符串
	pd.print(c);

	return 0;
}*/

//int main()
//{
//	cout << "please enter your first name:";
//	std::string name;
//	std::cin >> name;
//	std::cout << "hello " << name << "!" << std::endl;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;

//int main()
//{
//	cout << "plaese enter your first name:>";
//	string name;
//	cin >> name;
//	cout << "hello " << name << "!" << endl;
//	return 0;
//}
//int main()
//{	
//	cout << "Plaese enter your first name:" << endl;
//	string name;
//	cin >> name;
//	const string greeting = "hello " + name + "!";
//	const string spaces(greeting.size(), ' ');//计算greeting个空格
//	const string second = "* " + spaces + " *";
//	const string first(second.size(),'*');
//	cout << first << endl;
//	cout << second << endl;
//	cout << "* " << greeting << " *" << endl;
//	cout << second << endl;
//	cout << first << endl;
//	return 0;
//}

//int main()
//{
//	{const string s = "a string";
//	cout << s << endl; }
//	{const string s = "another string";
//	cout << s << endl; }
//	return 0;
//}

//int main()
//{
//	{const string s = "a string";
//	cout << s << endl;
//	{const string s = "another string";
//	cout << s << endl; } }
//	return 0;
//}

//int main()
//{
//	cout << "What is your name? ";
//	string name;
//	cin >> name;
//	cout << "hello " + name + "!";
//	cin >> name;
//	cout << "hello" + name
//		<< "; nice to meet you too!" << endl;
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//#include<iomanip>
//#include<ios>
//#include<stdexcept>
//#include<string>
//#include<vector>
//#include"grade.h"
//#include"Student_info.h"
//using namespace std;
//int main()
//{---//未完成
//	vector<Student_info> students;
//	Student_info record;
//	string::size_type maxlen = 0;
//	while (read(cin, record))
//	{
//		maxlen = max(maxlen, record.name.size());
//		students.push_back(record);
//	}
//	sort(students.begin(), students.end(), compare);
//	for (vector<Student_info>::size_type i = 0;
//		i != students.size(); ++i) {
//		cout << students[i].name
//			<< string(maxlen + 1 - students[i].name.size(), ' ');
//		try{
//			double final_grade = grade(students[i]);
//		streamsize prec = cout.precision();
//		cout << setprecision(3) << final_grade
//			<< setprecision(prec);
//		}
//			catch (domain_error e) {
//			cout << e.what();
//		}
//		cout << endl;
//	}
//	return 0;
//}

#include <iostream>
using namespace std;//懒人声明用法,简短的程序使用。
//int main()
//{
//	//输入一个数。然后转换为码（一Long等于220码）
//	int Long;
//	cout << "plaese input is Long:";
//	cin >> Long;
//	int ma = (Long * 220);
//	cout << ma << "码";
//}


//void _Time()
//{
//	string hours, minutes;
//	cin >> hours;
//	cin >> minutes;
//	cout << "Time " << hours <<':' << minutes;
//}
//int main()
//{
//	cout << "Enter the number of hours or minutes:";
//	_Time();
//
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	char ch='m';
//	
//	cout.put(ch);
//
//	return 0;
//}

//int main()
//{
//	std::cout << '\75';
//	std::cout.put('$')<<endl;
//	wchar_t bot = L'L';
//	wcout << bot << endl;
//	return 0;
//}
//int main()
//{
//	cout << int('o');//强制类型转换
//	return 0;
//}


//#include <iostream>
//using namespace std;
//const int FOOT_TO_INCH = 12;//定义const符号常量转换因子
//int main()
//{
//	int height;
//	cout << "Enter your height in inchs_";
//	cin >> height;
//	cout << "your Height convert to " << height / FOOT_TO_INCH;
//	cout << "foot and" << height % FOOT_TO_INCH << "inch height." << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int FOOT_TO_INCH = 12;
//const float KILOGRAM_TO_POUND = 2.2;//定义const常量字符转换因子
//const float INCH_TO_METER = 0.0254;
//int main()
//{
//	int height_foot, height_inch;
//	//用户输入的数据
//	float weight_pound, height, weight, BMI;
//	//转换后的变量储存
//	cout << "Enter your height foot: ";
//	cin >> height_foot;
//	cout << "Enter your height inch: ";
//	cin >> height_inch;
//	cout << "Enter your weight in pounds: ";
//	cin >> weight_pound;
//	height = (height_foot *FOOT_TO_INCH + height_inch)*INCH_TO_METER;//计算height并赋值
//	weight = weight_pound / KILOGRAM_TO_POUND;//计算weight并赋值
//	BMI = weight / (height*height);//计算BMI
//	cout << "Your BMI is:" << BMI << endl;
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//const int TIME_MINUTE = 60;
//const int MINUTE_SECONG = 60;
//
//int main()
//{
//	int degree, minute, second;
//	float degree_style;
//	//定义数据的变量
//	cout << "Enter a latitude in Degree ,Minute and Second :"<<endl;
//	cout << "First,Enter the degree; ";
//	cin >> degree;
//	cout << "Next, Enter the minute: ";
//	cin >> minute;
//	cout << "Finally,Enter the second: ";
//	cin >> second;
//	//读取用户数据
//	degree_style = degree + float(minute) / TIME_MINUTE +
//				   float(second) / (TIME_MINUTE*MINUTE_SECONG);
//	cout << degree << "degrees, " << minute << "minutes, "
//		<< second << "second, " << degree_style << "degree " << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int DAY_TO_HOUR = 24;
//const int HOUR_TO_MINUTE = 60;
//const int MINUTE_TO_SECOND = 60;
//
//int main()
//{
//	long long seconds;
//	int day, hours, minutes;
//	cout << "Enter the number of second: ";
//	cin >> seconds;
//	cout << seconds << " seconds= ";
//	day = seconds / (DAY_TO_HOUR*HOUR_TO_MINUTE*MINUTE_TO_SECOND);
//	seconds = seconds % (DAY_TO_HOUR*HOUR_TO_MINUTE*MINUTE_TO_SECOND);
//	hours = seconds / (HOUR_TO_MINUTE*MINUTE_TO_SECOND);
//	seconds = seconds % (HOUR_TO_MINUTE*MINUTE_TO_SECOND);
//	minutes = seconds / (MINUTE_TO_SECOND);
//	seconds = seconds % (MINUTE_TO_SECOND);
//	//数据之间的转换
//	cout << day << "day, " << hours << "hours, " << minutes << "minute, "
//		<< seconds << "second, ";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	long long global_amount, american_amount;
//	double population_percent;
//	//定义储存变量
//	cout << "Enter the world's population: ";
//	cin >> global_amount;
//	cout << "Enter the population of US; ";
//	cin >> american_amount;
//	population_percent = 100 * (double)american_amount / global_amount;
//	cout << "the population of the US is " << population_percent << "% of the world population." << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	float in_mile, in_km;
//	float in_gallon, in_litre;
//	float _consume;
//	cout << "Enter the in mile: ";
//	cin >> in_mile;
//	cout << "Enter the in gallon: ";
//	cin >> in_gallon;
//	_consume = in_mile / in_gallon;
//	//计算
//	cout << "the fuel consume is " << _consume << "mpg(mile/gallon)." << endl;
//	cout << "Enter the in km: ";
//	cin >> in_km;
//	cout << "Enter the in_liter: ";
//	cin >> in_litre;
//	_consume = (in_litre / in_km) * 100;
//	//计算
//	cout << "the fule consume is " << _consume << "L/100KM." << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;

//int main()
//{
//	cout << R"(Jim "king" Tutt uses "\n" instead of endl;)" << '\n';//原始类型(raw)字符串，打印“\n”之类的不用转义符
//	cout<<R"+*(Jim "king" Tutt uses "\n" instead of endl;)+*"<<'\n';
//	return 0;
//}

//#include <iostream>
//struct inflatable
//{
//	//结构体创建
//	char name[20];
//	float volume;
//	double price;
//};
//struct first
//{
//	char mune;
//	float vulmue;
//	double array;
//}perks;//接结构体类型名
//struct second
//{
//	int key_number;
//	char car[12];
//}mr_glitz =
//{
//	7,
//	"Packard"
//};//初始化方式创建
//struct //无名称的结构体类型---省略名称
//{
//	int x;
//	int y;
//}position;//创建一个名为position 的结构体变量
//int main()
//{
//	using namespace std;
//	inflatable guest =
	//{	//类型名，C++定义类型名可以不用struct关键字
	//	"Glorious Gloria",
	//	1.88,
	//	29.99
	//};
	/*inflatable guest[2]=
	{
		{"bambi",0.5,21.99},
		{"Gobzilla",200,565.21}
	};*/
	//inflatable pal;
	//pal = guest;//结构体可以成员之间赋值
	//perks.array = 888.99;//结构体访问并赋值
	//cout << perks.array << endl;
	//return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	/*int even;
//	int arr[5] = { 1,3,5,7,9 };
//	even =arr[0]+arr[4];*/
//	
//	/*float ideas[10] = {1.2,1.4,5.6};
//	cout << "the second element of array is" << ideas[1] << endl;*/
//
//	char arr[] = "cheeseburger";创建一个char 数组并初始化
//	string st = "Waldorf Salad";创建一个string对象并初始化
//	return 0;
//}

//struct flsh {
//
//	char kind[20];
//	int weight;
//	float length;
//}petes = {"BigFish",12,3.4};//创建结构体并初始化

//enum Response
//{
//	NO=0,
//	Yes=1,
//	Maybe=2
//};
//enum Response{No=0,Yes=1,Maybe=2};创建枚举并赋值

//int main()
//{
//	/*double ted = 0.0;
//	double* pt = &ted;
//	cout << "the ted " <<ted << endl;
//	cout << "the pt " << *pt << endl;*/
//	float treacle[10];
//	float* pa[2] = { &treacle[0],&treacle[8] };
//	
//	return 0;
//}
//#include <vector>
//int main()
//{
//	/*unsigned int num;
//	cout << "Please Enter number: ";
//	cin >> num;
//	int *arr = new int[num];*/
//
//	/*cout << (int*)"home of the jolly bytes";*///由于强制类型转换char转换成int 类型所以显示的是该数据的地址
//	return 0;
//}


//int main()
//{
//	struct fish {
//		char kind[20];
//		int weight;
//		long length;
//	};
//	fish* pd = new fish;//分配动态内存
//	cout << "Enter the kind of fish: ";
//	cin >> pd->kind;//读取动态内存
//	return 0;
//}

 /*#include <vector>
 #include <array>
 #include <string>*/
//{const int size = 10;
// std::vector <std::string> vest(size);//一个包含string对象的vector模板类
// std::array <std::string, size> arst;//一个包含string对象的array模板类
// vector<int>vi;//声明一个vector 对象
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char first_name[20], last_name[20];
//	char greda;
//	int ega;
//	定义变量，包括年龄，姓名，成绩。
//	cout << "What is your first name?: ";
//	cin.getline(first_name, 20);
//	让getline函数读取姓名，字符限制20个以内
//	cout << "What is your last name?: ";
//	cin.getline(last_name, 20);
//	cout << "What letter greda do you deserve?: ";
//	cin >> greda;
//	cout << "What is your ega?: ";
//	cin >> ega;
//	cout << "name" << first_name << "," << last_name << endl;
//	cout << "greda: " << char(greda + 1) << endl;
//	cout << "ega: " << ega << endl;
//	输出储存的信息
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string name;
//	string dessert;
//	//使用string类修改后的4.4程序清单	
//
//	cout << "Enter your name:\n";
//	getline(cin,name);
//	cout << "Enter your favorite dessert:\n";
//	getline(cin, dessert);
//	cout << "I have some selicious " << dessert;
//	cout << " for you, " << name << "\n";
//	return 0;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//const int SIZE = 20;
//
//int main()
//{
//	char first_name[SIZE],last_name[SIZE];
//	char full_name[SIZE * 2];
//	cout << "Enter your first name: ";
//	cin.getline(first_name, SIZE);
//	cout << "Enter your last name: ";
//	cin.getline(last_name, SIZE);
//	strcpy(full_name,last_name);//复制字符
//	strcat(full_name,",");//追加字符
//	strcat(full_name,first_name);
//	//同过strcpy()函数和strcat()函数，将两个字符串复制和组合
//	cout << "Here's the information in a single string: ";
//	cout << full_name << endl;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string first_name,last_name, full_name;
//	//使用string类引头文件string
//	cout << "Enter your first name: ";
//	getline(cin,first_name);
//	cout << "Enter your last name: ";
//	getline(cin,last_name);
//	full_name = last_name + "," + first_name;//string类可以直接追加
//	cout << "Here's the information in a single string: ";
//	cout << full_name << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//struct CandyBar {
//	char brand[20];
//	float weight;
//	int calorie;
//};
//
//int main()
//{
//	CandyBar snack = {"Mocha Munch",2.3,350};//创建一个名为snack的Candybar的变量并赋值
//	cout << "My favourite Candybar is " << snack.brand << endl;
//	cout << "And its weight is" << snack.weight << "calorie is" << snack.calorie << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//struct Candybar
//{
//	char brand[20];
//	float weight;
//	int calorie;
//};
//int main()
//{
//	Candybar snack[] = { { "Mocha Munch",2.3,350 }, {"hershey bar",4.2,550},{"Musketeers",2.6,430} };
//	//结构体成员数组.索引下标从零开始
//	cout << "My 1st Candybar is " << snack[0].brand << endl;
//	cout << "And its weight is" << snack[0].weight << "calorie is" << snack[0].calorie << endl;
//	cout << "My 2nd Candybar is" << snack[1].brand << endl;
//	cout << "And its weight is " << snack[1].weight << "calorie is" << snack[1].calorie << endl;
//	cout << "My 3th Candybar is " << snack[2].brand << endl;
//	cout << "And its weight is " << snack[2].weight << "calorie is " << snack[2].calorie << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//struct pizza
//{
//	char company[40];
//	float diameter;
//	float weight;
//};
//int main()
//{
//	pizza dinner;
//	cout << "Enter the pizza's information: " << endl;
//	cout << "Pizza's company: ";
//	cin.getline(dinner.company,40);
//	cout << "pizza's diameter: ";
//	cin >> dinner.diameter;
//	cout << "Candybar's weight: ";
//	cin >> dinner.weight;
//	cout << "the lunch pizza is " << dinner.company << endl;
//	cout << "And its diameter is " << dinner.diameter << "inch,weight is" << dinner.weight;
//	cout << "pounds." << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//struct pizza
//	{
//		char company[40];
//		float diameter;
//		float weight;
//	};
//int main()
//{
//	pizza*ppizza = new pizza;
//	cout << "Enter the pizza's information: " << endl;
//	cout << "pizza's dimemter; ";
//	cin >> ppizza->diameter;
//	cin.get();//过滤空白符
//
//	cout << "pizza's Company: ";
//	cin.getline(ppizza->company, 40);
//
//	cout << "Candbar's weight: ";
//	cin >> ppizza->weight;
//
//	cout << "the lunch pizza is " << ppizza->company << endl;
//	cout << "And its diameter is " << ppizza->diameter << "inch,weight is" << ppizza->weight;
//	cout << "pounds." << endl;
//	delete ppizza;//释放new开辟的空间
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//struct CandyBar
//{
//	char brand[20];
//	float weight;
//	unsigned int calorie;
//};
//int main()
//{
//	CandyBar*pc = new CandyBar[3];//使用new 动态分配数组
//	strcpy(pc[0].brand, "Mocha Munch");
//	pc[0].weight = 2.3;
//	pc[0].calorie = 350;
//
//	strcpy(pc[1].brand, "Hershey bar");
//	(pc + 1)->weight = 4.2;//(pc+1)等价pc[1]
//	pc[1].calorie = 440;
//
//	strcpy(pc[2].brand, "Musketeers");
//	pc[2].weight = 4.2;
//	pc[2].calorie = 550;
//
//	cout << "My 1st Candybar is " << pc->brand << endl;
//	cout << "And its weight is" << pc->weight << ", calorie is" << pc->calorie << endl;
//
//	cout << "My 2ed Candybar is " << (pc + 1)->brand << endl;  //(pc+1)找到第二个元素
//	cout << "And its weight is " << (pc + 1)->weight << ", calorie is " << (pc + 1)->calorie << endl;
//
//	cout << "My 3th Candybar is " << (pc + 2)->brand << endl;
//	cout << "And its weight is " << (pc + 2)->weight << ", calorie is " << (pc + 2)->calorie << endl;
//	delete[] pc;//释放空间
//	return 0;
//}

//#include <array>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	array<float,3>record_list;/*定义array对象*/
//	float average;
//	cout << "Plaese input three record of 40 miles.\n";
//	cout << "First record:";
//	cin >> record_list[0];
//
//	cout << "Second record;";
//	cin >> record_list[1];
//
//	cout << "Third record:";
//	cin >> record_list[2];
//	//依次读取数据输入
//	cout << "Ok, you input:\n1." << record_list[0] << "\n2." << record_list[1] << "\n3.";
//	cout << record_list[2] << endl;
//
//	average = (record_list[0] + record_list[1] + record_list[2]) / 3;
//	cout << "Congratulate, you average performance is " << average << "." << endl;
//	
//	return 0;
//}

//#include <iostream>
//
//using namespace std;

//int main()
//{
//	cout << "Enter the staring countdown value: ";
//	int limit;
//	cin >> limit;
//	int i;
//	for (i = limit; i; i--)
//		cout << "i= " << i << "\n";
//	cout << "Done now that i=" << i << "\n";
//	return 0;
//}

//const int ArSize = 16;
//int main()
//{
//	long long factorials[ArSize];
//	factorials[1] = factorials[0] = 1LL;
//	for (int i = 2; i < ArSize; i++)
//		factorials[i] = i * factorials[i - 1];
//	for (int i = 0; i < ArSize; i++)
//		cout << i << "!= "<< factorials[i] << endl;
//	return 0;
//}

//int main()
//{  //循环
//	cout << "Enter a word:";
//	string word;
//	cin >> word;
//	for (int i = word.size() - 1; i >= 0; i--)
//		cout << word[i];
//	cout << "\nBye.\n";
//	return 0;
//}

//int main()
//{
//	int x = 20;
//	{
//		cout << x << endl;
//		int x = 100;/*在花括号内部声明的变量将变成新变量*/
//		cout << x << endl;
//	}
//	cout << x << endl;//旧变量依旧可见
//	return 0;
//}

//int main()
//{
//	string word = "?ate";
//	for (char ch = 'a'; word != "mate"; ch++)
//	{
//		cout << word << endl;
//		word[0] = ch;
//	}
//	cout << "After loop ends, word is " << word << endl;
//	return 0;
//}

//const int ArSize = 20;
//int main()
//{
//	char name[ArSize];
//	cout << "Your  first name, Please: ";
//	cin >> name;
//	cout << "Here is your name ,verticalized and ASCLLized:\n ";
//	int i = 0;
//	while (name[i])
//	{
//		cout << name[i] << ": " << int(name[i]) << endl;
//		i++;
//	}
//	for (int i = 0; name[i]; i++)
//	{
//		cout << name[i] << ": " << int(name[i]) << endl;
//	}
//	return 0;
//}

//int main()
//{ 
//	for (int x : {3, 4, 5, 2, 8})
//		cout << x << endl;
//	cout << '\n';
//	return 0;
//}

//int main()
//{
//	char ch;
//	int count = 0;
//	cout << "Enter characters; enter # to quit: \n";
//	cin >> ch;
//	while (ch != '#')//输入#后测试条件为false 停止循环并计数
//	{
//		cout << ch;
//		++count;
//		cin >> ch;//cin会忽略空格符和换行符
//	}
//	cout << endl << count << " characters reas\n";
//	return 0;
//}
//int main()
//{
//	char ch;
//	int count = 0;
//	cout << "Enter characters; enter # to quit: \n";
//	cin >> ch;
//	while (ch != '#')
//	{
//		cout << ch;
//		++count;
//		cin.get(ch);//空格和换行符记入
//	}
//	cout << endl << count << " characters reas\n";
//	return 0;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char ch;
//	int count = 0;
//	cin.get(ch);
//	while (cin.fail() == false)//ctrl+z+enter 模拟文件EOF 结束标志
//	{
//		cout << ch;
//		++count;
//		cin.get(ch);
//	}
//	while(cin.get(ch))//上个循环的优化，它可以检测到其他失败原因。
//	cout << endl << count << " charcters read \n";
//	return 0;
//}

//#include <iostream>
//using namespace std;

//int main()
//{
//	int maxtemps[4][5];//二维数组
//	for (int row = 0; row < 4; row++)
//	{
//		for (int col = 0; col < 5; ++col)
//		{
//			cout << "maxtemps[row][col]"<< "\t";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//const int Cities = 3;
//const int years = 3;
//int main()
//{
//	const char* cities[Cities]=
//	{
//		"Gribble City",
//		"Gribbletown",
//		"New Gribble"
//	};
//	int maxtemps[Cities][years]=
//	{
//		{32,45,56},
//		{23,45,76},
//		{43,56,98}
//	};
//	cout << "Maximum temperratures for 2008-2011\n\n";
//	for (int city = 0; city < Cities; ++city)
//	{
//		cout << cities[city] << ": \t";
//		for (int year = 0; year < years; year++)
//			cout << maxtemps[year][city] << "\t";
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
	/*int i;
	for (i = 0; i < 11; i++)
		cout << i;
	cout << endl<<i<<endl;*/
	/*int j = 5;
	while (++j < 9)
		cout << j++ << endl;*/
	/*int k = 8;
	do
		cout << "k=" << k << endl;
	while (k++ < 5);*/
	
	/*for (int i = 1; i <= 64; i*=2)
	{
		
		cout << i << endl;
	}*/
	/*int x = (1, 024);
	cout << x << endl;*/
	/*int y;
	y = 1, 024;
	cout << y;*/
//	return 0;
//}

#include <array>
#include <iostream>
using namespace std;

//int main()
//{	//2-9的和
//	int mix, max, sum = 0;
//	cout << "Enter the first numeral: ";
//	cin >> mix;
//	cout << "Enter the second numeral: ";
//	cin >> max;
//	for (int i = mix; i <= max; i++)
//	{
//		sum += i;
//	}
//	cout << "The sum of " << mix << " +...+ " << max << " is ";
//	cout << sum << endl;
//	return 0;
//}

//const int ArSizc = 101;
//int main()
//{
//	array<long double, ArSizc>factorials;
//	factorials[1] = factorials[0] = 1;
//	//初始化factorials第一和第二个元素为1
//	for (int i = 2; i < ArSizc; i++)
//		factorials[i] = i * factorials[i - 1];//计算阶乘
//	for (int i = 0; i < ArSizc; i++)
//		cout << i << "!= " <<factorials[i]<< endl;//循环打印阶乘结果
//	return 0;
//}

//int main()
//{
//	double count = 0;
//	double num;
//	do
//	{
//		cout << "Please input a numeral to add: ";
//		cin >> num;
//		count += num;
//	} while (num != 0);
//	cout << "Input end. \n" << "The count=" << count<<endl;
//	return 0;
//}
//const int DEPOSIT_BASE = 100;//定义基准常量
//int main()
//{
//	float Daphne = DEPOSIT_BASE;
//	float Cleo = DEPOSIT_BASE;
//	//初始化
//	int year = 0;
//	while (Daphne >= Cleo)
//	{
//		cout << "In " << year++ << " Year: Daphne =" << Daphne << endl;
//		cout << "\t    Cleo =" << Cleo << endl;
//		Daphne += 0.1*DEPOSIT_BASE;//计算利息
//		Cleo += 0.05*Cleo;
//	}
//	cout << "In " << year << " Year: Daphne =" << Daphne << endl;
//	cout << "\tCleo=" << Cleo << endl;
//	//输出循环结束后的数值
//	return 0;
//}

//int main()
//{
//	const string Month[] = {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC" };
//	int sale_amonth[12] = {};
//	//定义两个数组
//	unsigned int sum = 0;
//	for (int i = 0; i <12; i++)
//	{
//		cout << "Enter the sale amount of " << Month[i] << endl;
//		cin >> sale_amonth[i];
//		//读取每个月的数据
//	}
//	cout << "Input DONE!" << endl;
//	for (int i = 0; i <12; i++)
//	{
//		cout << Month[i] << " SALE :" << sale_amonth[i] << endl;
//		sum += sale_amonth[i];
//		//计算每个月加起来的总和
//	}
//	cout << "Total sale " << sum << "this year. " << endl;
//	return 0;
//}

//int main()
//{
//	const string Month[] = { "JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC" };
//	int sale_month[3][12] = {};
//	unsigned int sum = 0;
//	for (int i = 1; i <= 3; i++)
//	{
//		cout << "String " << i << " year's data. " << endl;
//		for (int j = 0; j < 12; j++)
//		{
//			cout << "Enter the sale amount of " << Month[j] << endl;
//			cin >> sale_month[i][j];
//		}
//	}
//	cout << "Input DONE! " << endl;
//	for (int i = 1; i <= 3; i++)
//	{
//		for (int j = 0; j < 12; j++)
//		{
//			cout << Month[i] << "SALE :" << sale_month[i][j] << endl;
//			sum += sale_month[i][j];
//		}
//		cout << "Total sale " << sum << " " << i << " year." << endl;
//	}
//	return 0;
//}


//struct car_info
//{
//	string manufacturer;
//	int data;
//};
//
//int main()
//{
//	int car_number;
//	car_info*pcar;
//	cout << "How many cars do you wish to catslog? ";
//	cin >> car_number;
//	cin.get();
//	pcar = new car_info[car_number];//开辟空间
//	for (int i = 0; i < car_number; i++)
//	{
//		cout << "Car #" << i + 1 << endl;
//		cout << "Please enter the make: ";
//		getline(cin,pcar[i].manufacturer);
//		cout << "Please enter the year made: ";
//		cin >> pcar[i].data;
//		cin.get();
//	}//循环读取信息
//	cout << "Here is your collection:\n";
//	for (int i = 0; i < car_number; i++)
//		cout << pcar[i].data << " " << pcar[i].manufacturer << endl;
//	return 0;
//}

//#include <cstring>
//
//const int SIZE = 20;
//const char FINISHED[] = "done";
//int main()
//{
//	int counter = 0;
//	char words[SIZE];
//	cout << "Enter words (to stop, type the word done): "<<endl;
//	while (strcmp(FINISHED, words) != 0)
//	{
//		counter++;
//		cin >> words;
//		cin.get();//过滤空白符
//	}
//	cout << "You entered a total of " << counter-1 << " words.";
//	return 0;
//}
//int main()
//{
//	int counter = 0;
//	string words;
//	cout << "Enter words (to stop, type the word done): " << endl;
//	while (words !=FINISHED)
//	{
//		counter++;
//		cin >> words;
//		cin.get();//过滤空白符
//	}
//	cout << "You entered a total of " << counter - 1 << " words.";
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int line;
//	cout << "Enter number of rows: ";
//	cin >> line;
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < line - i - 1; j++)
//		{
//			cout << ".";
//		}
//		//第一个内部循环负责输出句号，句号数量逐层递减，因此需要通过line-i-1 来控制每一行的句号数量
//		for (int j = 0; j <= i; j++)
//		{
//			cout << "*";
//		}
//		//第二个内部负责输出星号，星号数量逐层递增，因此需要使用 j<=i 来控制
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int line;
//	cout << "Enter number of rows: ";
//	cin >> line;
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < line - i - 1; j++)
//		{
//			cout << ".";
//		}
//		for (int j = 0; j <= i; j++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//	return 0;
//}


//#include <iostream>
//#include <cctype>
//#include <cstdio>
//using namespace std;

//int main()
//{
//	int line = 0;
//	char ch;
//	while (cin.get(ch) && ch != 'Q')
//	{
//		if (ch == '\n')
//			line++;
//	}
//	return 0;
//}

//int main()
//{//---6.11-1
//	char input;
//	cout << "Enter the character: ";
//	cin.get(input);
//	while (input != '@')
//	{
//		if (isdigit(input))
//		{
//			cin.get(input);
//			continue;
//		}
//		else if (islower(input))
//		{
//			input = toupper(input);
//		}
//		else if (isupper)
//		{
//			input = tolower(input);
//		}
//		cout << input;
//		cin.get(input);
//	}
//	return 0;
//}

//int main()
//{
//	array<double, 10>donation;//使用array模板定义数组长度
//	double input;
//	int counter = 0;
//	double average, sum = 0;
//	int bigger = 0;
//	//counter, averagae,sum,bigger分别记录和，平均值了，元素数与大于平均值的元素个数
//	cout << "Enter the double numerial: ";
//	cin >> input;
//	while (input != 0 && counter < 10)
//	{//当输入的非数字时或超过十个元素时退出循环
//		donation[counter++] = input;
//		cout << "No. "<<counter<< "Data input to Array." << endl;
//		cout << "Enter the double numerial: ";
//		cin >> input;
//	}
//	for (int i = 0; i < counter; i++)
//	{//记录和
//		sum += donation[i];
//	}
//	average = sum / counter;
//	for (int i = 0; i < counter; i++)
//	{
//		if (donation[i] > average)
//			bigger++;
//		//通过遍历计算大于平均数的元素个数
//	}
//	cout << "The Average is" << average << " and" << bigger;
//	cout << " data bigger than average. " << endl;
//	return 0;
//}

//void showmenu()
//{
//	cout << "Please enter one of the following choices:\n";
//	cout << "c) carnivore p) pianist\n";
//	cout << "t) tree g) game\n";
//}
//int main()
//{//---6.11-3
//	char choice;
//	showmenu();
//	cin.get(choice);
//	while (choice != 'c'&&choice != 'p'&&choice != 't'&&choice != 'g')
//	{
//		cin.get();
//		cout << "Please enter a c, p, t, or g: ";
//		cin.get(choice);
//	}
//	switch (choice)
//	{
//	case 'a':
//	case 'c':
//	case 'p':
//		break;
//	case 't':
//		cout << "A maple is a tree. ";
//		break;
//	case 'g':
//		break;
//	}
//	return 0;
//
//}

/*const int strsize = 40;
const int usersize = 40;
struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;

};
bop bop_user[usersize]=
{{"Wimp Macho","programmer","MIPS",0},
{"Raki Rhodes","Junior Programmer","",1},
{"Celia Laiter","","MIPS",2},
{"Hoppy Hipman","Analyst Trainee","",1},
{"Pat Hand","","LOOPY",2},
};

void showmenu();
void print_by_name();
void print_by_pref();
void print_by_title();
void print_by_bopname();
void create_info();

int main()
{//--6.11-4
	char choice;
	showmenu();
	cin.get(choice);
	while (choice !='q')
	{
		switch (choice)
		{
		case 'a':
			print_by_name();
			break;
		case 'd':
			print_by_pref();
			break;
		case 'b':
			print_by_title();
			break;
		case 'c':
			print_by_bopname();
			break;
		default:
			cout << "Please enter character a,b,c,d,or q: ";
		}
		cin.get();
		cout << "Next choice: ";
		cin.get(choice);
	}
	cout << "Bye!" << endl;
	return 0;
}
void showmenu()
{
	cout << "Benevolent Order of Programmers Report\n";
	cout << "a. display by name    " << "b. display by title\n";
	cout << "c. display by dopname " << "d.display by preference\n";
	cout << "q. quit\n";
	cout << "Enter your choice: ";
}
void print_by_name()
{//循环按名字输出信息
	for (int i = 0; i < usersize; i++)
	{
		if (strlen(bop_user[i].fullname) == 0)
			break;
		else
			cout << bop_user[i].fullname << endl;
	}
}
void print_by_pref()
{
	for (int i = 0; i < usersize; i++)
	{
		if (strlen(bop_user[i].fullname) == 0)
			break;
		else {
			switch (bop_user[i].preference)
			{
			case 0:
				cout << bop_user[i].fullname << endl;
				break;
			case 1:
				cout << bop_user[i].title << endl;
				break;
			case 2:
				cout << bop_user[i].bopname << endl;
				break;
			}
		}
	}
}
void print_by_title()
{
	按bop数组输出信息
	for (int i = 0; i < usersize; i++)
	{
		if (strlen(bop_user[i].fullname) == 0)
			break;
		else
			cout << bop_user[i].title << endl;
	}
}
void print_by_bopname()
{
	for (int i = 0; i < usersize; i++)
	{
		if (strlen(bop_user[i].fullname) == 0)
			break;
		else
			cout << bop_user[i].bopname << endl;
	}
} 
void create_info()
{
	for (int i = 0; i < usersize; i++) {
		cout << "Enter the user's full name: ";
		cin.getline(bop_user[i].fullname, strsize);
		cout << "Enter the user's title: ";
		cin.getline(bop_user[i].title, strsize);
		cout << "Enter the user's bopname: ";
		cin.getline(bop_user[i].bopname, strsize);
		cout << "Enter the user's preference: ";
		cin >> bop_user[i].preference;
		cout << "Next...(f for finished): ";
		cin.get();
		if (cin.get() == 'f')break;
	}//向数组添加Bop成员
}*/


//#include <iostream>
//using namespace std;
//
//int main()
//{//---6.11-5
//	double tax ,salary = 0.0;
//	cout << "Hello,enter your salary to calculate tax: ";
//	cin >> salary;
//	while (salary > 0)
//	{
//		if (salary <= 5000) {
//			tax = 0;
//		}
//		else if (salary <= 15000) {
//			tax = (salary - 5000)*0.10;
//		}
//		else if (salary <= 35000) {
//			tax = (salary - 5000)*0.10 + (salary - 15000)*0.15;
//		}
//		else if (salary > 35000) {
//			tax = 10000 * 0.10 + 20000 * 0.15 + (salary - 35000)*0.20;
//		}
//		cout << "Your salary is " << salary << " tvarps, and you should pay ";
//		cout << tax << " tvarps." << endl;
//		cout << "neter your salary to calculate tax: ";
//		cin >> salary;
//	}
//	cout << "Bye!" << endl;
//	return 0;
//}


//#include <string>
//#include <iostream>
//using namespace std;
//
//struct patrons {
//
//	string full_name;
//	double fund;
//};
//int main()
//{ //--6.11-6
//	int patrons_number;
//	patrons*ppatrons;
//	cout << "How many patrons? ";
//	cin >> patrons_number;
//	cin.get();
//	ppatrons = new patrons[patrons_number];
//	//建立动态数组
//	int id = 0;
//	bool empty = true;
//	cout << "Starting to input patrons' info: " << endl;
//	while (id < patrons_number)
//	{
//		cout << "Enter the full name of patrons: ";
//		getline(cin, ppatrons[id].full_name);
//		cout << "Enter the fund of " << ppatrons[id].full_name << " :";
//		cin >> ppatrons[id].fund;
//		cin.get();
//		id++;
//		cout << "Continue to input, or prees (f) to finished: ";
//		if (cin.get() == 'f') break;
//	}
//	//建立捐款人名单
//	cout << "Grand patrons " << endl;
//	for (int i = 0; i < patrons_number; i++)
//	{
//		if (ppatrons[i].fund >= 1000)
//		{
//			cout << ppatrons[i].full_name << " :" << ppatrons[i].fund << endl;
//			empty = false;
//		}
//	}//查询Grand patrons名单，如果tmpty为true,输出NONE
//	if (empty) cout << "NONE" << endl;
//	empty = false;
//	cout << "Patrons" <<  endl;
//	for (int i = 0; i < patrons_number; i++)
//	{
//		if (ppatrons[i].fund < 1000) {
//			cout << ppatrons[i].full_name << " :" << ppatrons[i].fund << endl;
//		}
//	}//查询patrons名单，如果empty为true,输出NONE。
//
//	if (empty) cout << "NONE" << endl;
//	return 0;
//}


//#include <iostream>
//#include <cctype>
//using namespace std;
//
//int main()
//{//6.11-7
//	char words[50];
//	int vowel, consonant, others;
//	vowel = consonant = others = 0;
//	cout << "Enter words (q to quit): ";
//	cin >> words;
//	while (strcmp(words, "q") != 0)
//	{
//		if (!isalpha(words[0]))//如果参数为字字母，该函数返回ture.这里取反为false
//		{
//			others++;
//		}
//		else
//		{
//			switch (words[0])
//			{
//			case 'a':
//			case 'e':
//			case 'i':
//			case 'o':
//			case 'u':
//				vowel++;
//				break;
//			default :
//				consonant++;
//			}
//		}
//		cin >> words;
//	}
//	cout << vowel << " words beginning with vowel" << endl;
//	cout << consonant << " words beginning with consonant" << endl;
//	cout << others << " others" << endl;
//	return 0;
//}


//#include <fstream>
//#include <iostream>
//using namespace std;
//
//int main()
//{//6.11-8
//	ifstream fin;
//	string file_name;
//	cout << "Enter the file name: ";
//	getline(cin, file_name);
//	fin.open(file_name);
//	if (!fin.is_open()) {
//		cout << "Error to open file. " << endl;
//		exit(EXIT_FAILURE);
//	}
//	char read_char;
//	int char_couter = 0;
//	while (!fin.eof()) {//通过eof函数判断是否到达文件末尾
//		fin >> file_name;
//		char_couter++;
//	}
//	cout << "The file" << file_name << " contains " << char_couter << " characters." << endl;
//	fin.close();//关闭文件
//	return 0;
//}


//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//struct patrons {
//	string full_name;
//	double fund;
//};
//int main()
//{//6.11-9
//	ifstream fin;//定义文件流对象
//	string file_name;//打开文件 
//	cout << "Enter the file name: ";
//	getline(cin, file_name);
//	fin.open(file_name);
//	if (!fin.is_open()) {
//		cout << "Error the open file." << endl;
//		exit(EXIT_FAILURE);
//	}
//	int patrons_number;
//	patrons*ppatrons;
//	int id = 0;
//	bool empty = true;
//
//	fin >> patrons_number;
//	if (patrons_number <= 0)
//	{
//		exit(EXIT_FAILURE);
//	}
//	ppatrons = new patrons[patrons_number];
//	fin.get();
//	//读取人数，创建动态数组
//	while (!fin.eof() && id < patrons_number)
//	{
//		getline(fin, ppatrons[id].full_name);
//		cout << "Read Name: " << ppatrons[id].full_name << endl;
//		fin >> ppatrons[id].fund;
//		cout << "Read fund: " << ppatrons[id].fund << endl;
//		fin.get();
//		id++;
//	}
//	fin.close();
//	cout << "Grand Patrons" << endl;
//	for (int i = 0; i < patrons_number; i++)
//	{
//		if (ppatrons[i].fund >= 10000) {
//			cout << ppatrons[i].full_name << " : " << ppatrons[i].fund << endl;
//			empty = false;
//		}
//		if (empty)cout << "NONE" << endl;
//		empty = false;
//		cout << "Patrons" << endl;
//		for (int i = 0; i < patrons_number; i++)
//		{
//			if (ppatrons[i].fund < 10000)
//			{
//				cout << ppatrons[i].full_name << " : " << ppatrons[i].fund << endl;
//			}
//		}
//		if (empty) cout << "NONE" << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//const int SIZE = 5;
//void display(const string sa[], int n);
//int main()
//{
//	string list[SIZE];
//	cout << "Enter your " << SIZE << " favorite astronomical sights: \n";
//	for (int i = 0; i < SIZE; i++)
//	{//循环输入string数组
//		cout << i + 1 << ": ";
//		getline(cin, list[i]);
//	}
//	cout << "Your list:\n";
//	display(list, SIZE);//显示string数组内容
//	return 0;
//}
//void display(const string sa[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << i + 1 << ": " << sa[i] << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//void countdown(int n);
//int main()
//{
//	countdown(4);
//	return 0;
//}
//void countdown(int n)
//{//递归
//	cout << "Counting down..." << n << endl;
//	if (n > 0)
//		countdown(n - 1);
//	cout << n << ": Kaboom!\n";
//}

//#include <iostream>
//using namespace std;
//递归实现刻度尺
//const int lon = 66;
//const int divs = 6;
//void sudbivide(char ar[], int low, int high, int level);
//int main()
//{
//	char ruler[lon];
//	for (int i = 0; i < lon - 2; i++)
//		ruler[i] = ' ';
//	ruler[lon - 1] = '\0';
//	int max = lon - 2;
//	int min = 0;
//	ruler[min] = ruler[max] = '|';
//	cout << ruler << endl;
//	for (int i = 0; i <= divs; i++)
//	{
//		sudbivide(ruler, min, max, i);
//		cout << ruler << endl;
//		for (int j = 1; j < lon - 2; j++)
//		{
//			ruler[j]=' ';
//		}
//	}
//	return 0;
//}
//void sudbivide(char ar[], int low, int high, int level)
//{
//	if (level == 0)
//	{
//		return;
//	}
//	int mid = (high + low) / 2;
//	ar[mid] = '|';
//	sudbivide(ar, low, mid, level - 1);
//	sudbivide(ar, mid, high, level - 1);
//}

#include <iostream>
#include <cstdio>
using namespace std;




//const int SIZE = 9;
//int main()
//{
//	float arr[SIZE];
//	int index=SIZE;
//	printf("请输入九个浮点型数字:\n");
//	for (int i = 0; i < 9; i++)
//	{
//		
//		printf("输入第%d个数字:",i+1);
//		scanf_s("%f", &arr[i]);
//	}
//	float n;
//	printf("输入需要查找的数字\n");
//	scanf_s("%f", &n);
//	for (int i = 0; i < 9; i++)
//	{
//		if (arr[i] == n)
//		{
//			index = i;
//			printf("找到了,下标是: %d ",index);
//		}
//	}
//	if (index == SIZE)
//		printf("NO");
//	return 0;
//}

//#include <iostream>
//using namespace std;

//int main()
//{
//	const double *pf(const double*, int n);//函数指针
//	const double *(*f1[3])(const double*, int n);//{ f2,f3,f4 };函数指针数组
//	
//	return 0;
//}


//inline--内联函数
//inline double square(double x) { return x * x; }
//int main()
//{
//	double a, b;
//	double c = 13;
//	a = square(5.0);
//	b = square(4.5 + 7.5);
//	cout << "a= " << a << "b= " << b << endl;
//	cout << "c= " << c<<endl;
//	//cout << "now c= " << square(c++) << endl;
//	cout << "now c=" << square(++c) << endl;
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//inline double square(double x) { return x * x; }
//int main()
//{
//	double a,b;
//	double c = 13;
//	a = square(5.0);
//	b = square(4.3 + 5.7);
//	cout << "a=" << a << " b=" << b << endl;
//	cout << "now c=" << square(++c) << endl;
//	cout << "now c=" << square(c++) << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
////引用函数
//int main()
//{
//	//std::cout;
//	//std::cin;
//	//std::endl;
//	int rats = 101;
//	int &rodents = rats;//引用函数与引用的数值共用一个地址
//	cout << "rats=" << rats << " rodents=" << rodents << endl;
//	cout << "rats address=" << &rats;
//	cout << " rodents address=" << &rodents << endl;
//
//	int bunnies = 50;
//	rodents = bunnies;
//	cout << "bunnies=" << bunnies;
//	cout << " rats=" << rats;
//	cout << " rodents=" << rodents << endl;
//	cout << "bunnies address= " << &bunnies;
//	cout << " rodents address=" << &rodents;
//	return 0;
//}


