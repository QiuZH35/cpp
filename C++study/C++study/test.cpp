#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;//���߱�����ʹ��std�����ռ䡣 �����ռ���C++��һ������µĸ���

//int main()
//{
//	cout << "Hello World";//����Ļ��ʾ��Ϣ"hello world";
//	return 0;
//}

#include<iostream> 
#include<string> 
#include <limits> 
using namespace std;

//int main()
//{
//	cout << "type: \t\t" << "************size**************" << endl;
//	cout << "bool: \t\t" << "��ռ�ֽ�����" << sizeof(bool);
//	cout << "\t���ֵ��" << (numeric_limits<bool>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<bool>::min)() << endl;
//	cout << "char: \t\t" << "��ռ�ֽ�����" << sizeof(char);
//	cout << "\t���ֵ��" << (numeric_limits<char>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<char>::min)() << endl;
//	cout << "signed char: \t" << "��ռ�ֽ�����" << sizeof(signed char);
//	cout << "\t���ֵ��" << (numeric_limits<signed char>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<signed char>::min)() << endl;
//	cout << "unsigned char: \t" << "��ռ�ֽ�����" << sizeof(unsigned char);
//	cout << "\t���ֵ��" << (numeric_limits<unsigned char>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<unsigned char>::min)() << endl;
//	cout << "wchar_t: \t" << "��ռ�ֽ�����" << sizeof(wchar_t);
//	cout << "\t���ֵ��" << (numeric_limits<wchar_t>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<wchar_t>::min)() << endl;
//	cout << "short: \t\t" << "��ռ�ֽ�����" << sizeof(short);
//	cout << "\t���ֵ��" << (numeric_limits<short>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<short>::min)() << endl;
//	cout << "int: \t\t" << "��ռ�ֽ�����" << sizeof(int);
//	cout << "\t���ֵ��" << (numeric_limits<int>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<int>::min)() << endl;
//	cout << "unsigned: \t" << "��ռ�ֽ�����" << sizeof(unsigned);
//	cout << "\t���ֵ��" << (numeric_limits<unsigned>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<unsigned>::min)() << endl;
//	cout << "long: \t\t" << "��ռ�ֽ�����" << sizeof(long);
//	cout << "\t���ֵ��" << (numeric_limits<long>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<long>::min)() << endl;
//	cout << "unsigned long: \t" << "��ռ�ֽ�����" << sizeof(unsigned long);
//	cout << "\t���ֵ��" << (numeric_limits<unsigned long>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<unsigned long>::min)() << endl;
//	cout << "double: \t" << "��ռ�ֽ�����" << sizeof(double);
//	cout << "\t���ֵ��" << (numeric_limits<double>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<double>::min)() << endl;
//	cout << "long double: \t" << "��ռ�ֽ�����" << sizeof(long double);
//	cout << "\t���ֵ��" << (numeric_limits<long double>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<long double>::min)() << endl;
//	cout << "float: \t\t" << "��ռ�ֽ�����" << sizeof(float);
//	cout << "\t���ֵ��" << (numeric_limits<float>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<float>::min)() << endl;
//	cout << "size_t: \t" << "��ռ�ֽ�����" << sizeof(size_t);
//	cout << "\t���ֵ��" << (numeric_limits<size_t>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<size_t>::min)() << endl;
//	cout << "string: \t" << "��ռ�ֽ�����" << sizeof(string) << endl;
//	// << "\t���ֵ��" << (numeric_limits<string>::max)() << "\t��Сֵ��" << (numeric_limits<string>::min)() << endl; 
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
//	cout << "Line 1 - c ��ֵ�� " << c << endl;
//	c = a - b;
//	cout << "Line 2 - c ��ֵ�� " << c << endl;
//	c = a * b;
//	cout << "Line 3 - c ��ֵ�� " << c << endl;
//	c = a / b;
//	cout << "Line 4 - c ��ֵ�� " << c << endl;
//	c = a % b;
//	cout << "Line 5 - c ��ֵ�� " << c << endl;
//
//	int d = 10;   //  �����������Լ�
//	c = d++;
//	cout << "Line 6 - c ��ֵ�� " << c << endl;
//
//	d = 10;    // ���¸�ֵ
//	c = d--;
//	cout << "Line 7 - c ��ֵ�� " << c << endl;
//	return 0;
//}

//class Box
//{
//public:
//	double length;   // ����
//	double breadth;  // ���
//	double height;   // �߶�
//};

//int main()
//{
//	Box Box1;        // ���� Box1������Ϊ Box
//	Box Box2;        // ���� Box2������Ϊ Box
//	double volume = 0.0;     // ���ڴ洢���
//
//	// box 1 ����
//	Box1.height = 5.0;
//	Box1.length = 6.0;
//	Box1.breadth = 7.0;
//
//	// box 2 ����
//	Box2.height = 10.0;
//	Box2.length = 12.0;
//	Box2.breadth = 13.0;
//
//	// box 1 �����
//	volume = Box1.height * Box1.length * Box1.breadth;
//	cout << "Box1 �������" << volume << endl;
//
//	// box 2 �����
//	volume = Box2.height * Box2.length * Box2.breadth;
//	cout << "Box2 �������" << volume << endl;
//	return 0;
//}

//���м̳У�public������һ���������Թ��л���ʱ������Ĺ��г�ԱҲ��������Ĺ��г�Ա������ı�����ԱҲ��������ı�����Ա�������˽�г�Ա����ֱ�ӱ���������ʣ����ǿ���ͨ�����û���Ĺ��кͱ�����Ա�����ʡ�
//�����̳У�protected���� ��һ���������Ա�������ʱ������Ĺ��кͱ�����Ա����Ϊ������ı�����Ա��
//˽�м̳У�private������һ����������˽�л���ʱ������Ĺ��кͱ�����Ա����Ϊ�������˽�г�Ա��--ֻ�����Լ�ʹ��
//class <��������> :<�̳з�ʽ1><������1>, <�̳з�ʽ2><������2>, ��
//{
//	<����������>
//};
// ���� Shape
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

// ���� PaintCost
class PaintCost
{
public:
	int getCost(int area)
	{
		return area * 70;
	}
};

// ������
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

	// �����������
	cout << "Total area: " << Rect.getArea() << endl;

	// ����ܻ���
	cout << "Total paint cost: $" << Rect.getCost(area) << endl;

	return 0;
}*/


/*class printData
{
public:
	void print(int i) {
		cout << "����Ϊ��" << i << endl;
	}
	void print(double f) {
		cout << "������Ϊ��" << f << endl;
	}
	void print(char c[]) {
		cout << "�ַ���Ϊ��" << c << endl;
	}

};
int main()
{
	printData pd;
	pd.print(5);//�������
	pd.print(500.263);//���������
	char c[] = "hello C++";//����ַ���
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
//	const string spaces(greeting.size(), ' ');//����greeting���ո�
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
//{---//δ���
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
using namespace std;//���������÷�,��̵ĳ���ʹ�á�
//int main()
//{
//	//����һ������Ȼ��ת��Ϊ�루һLong����220�룩
//	int Long;
//	cout << "plaese input is Long:";
//	cin >> Long;
//	int ma = (Long * 220);
//	cout << ma << "��";
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
//	cout << int('o');//ǿ������ת��
//	return 0;
//}


//#include <iostream>
//using namespace std;
//const int FOOT_TO_INCH = 12;//����const���ų���ת������
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
//const float KILOGRAM_TO_POUND = 2.2;//����const�����ַ�ת������
//const float INCH_TO_METER = 0.0254;
//int main()
//{
//	int height_foot, height_inch;
//	//�û����������
//	float weight_pound, height, weight, BMI;
//	//ת����ı�������
//	cout << "Enter your height foot: ";
//	cin >> height_foot;
//	cout << "Enter your height inch: ";
//	cin >> height_inch;
//	cout << "Enter your weight in pounds: ";
//	cin >> weight_pound;
//	height = (height_foot *FOOT_TO_INCH + height_inch)*INCH_TO_METER;//����height����ֵ
//	weight = weight_pound / KILOGRAM_TO_POUND;//����weight����ֵ
//	BMI = weight / (height*height);//����BMI
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
//	//�������ݵı���
//	cout << "Enter a latitude in Degree ,Minute and Second :"<<endl;
//	cout << "First,Enter the degree; ";
//	cin >> degree;
//	cout << "Next, Enter the minute: ";
//	cin >> minute;
//	cout << "Finally,Enter the second: ";
//	cin >> second;
//	//��ȡ�û�����
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
//	//����֮���ת��
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
//	//���崢�����
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
//	//����
//	cout << "the fuel consume is " << _consume << "mpg(mile/gallon)." << endl;
//	cout << "Enter the in km: ";
//	cin >> in_km;
//	cout << "Enter the in_liter: ";
//	cin >> in_litre;
//	_consume = (in_litre / in_km) * 100;
//	//����
//	cout << "the fule consume is " << _consume << "L/100KM." << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;

//int main()
//{
//	cout << R"(Jim "king" Tutt uses "\n" instead of endl;)" << '\n';//ԭʼ����(raw)�ַ�������ӡ��\n��֮��Ĳ���ת���
//	cout<<R"+*(Jim "king" Tutt uses "\n" instead of endl;)+*"<<'\n';
//	return 0;
//}

//#include <iostream>
//struct inflatable
//{
//	//�ṹ�崴��
//	char name[20];
//	float volume;
//	double price;
//};
//struct first
//{
//	char mune;
//	float vulmue;
//	double array;
//}perks;//�ӽṹ��������
//struct second
//{
//	int key_number;
//	char car[12];
//}mr_glitz =
//{
//	7,
//	"Packard"
//};//��ʼ����ʽ����
//struct //�����ƵĽṹ������---ʡ������
//{
//	int x;
//	int y;
//}position;//����һ����Ϊposition �Ľṹ�����
//int main()
//{
//	using namespace std;
//	inflatable guest =
	//{	//��������C++�������������Բ���struct�ؼ���
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
	//pal = guest;//�ṹ����Գ�Ա֮�丳ֵ
	//perks.array = 888.99;//�ṹ����ʲ���ֵ
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
//	char arr[] = "cheeseburger";����һ��char ���鲢��ʼ��
//	string st = "Waldorf Salad";����һ��string���󲢳�ʼ��
//	return 0;
//}

//struct flsh {
//
//	char kind[20];
//	int weight;
//	float length;
//}petes = {"BigFish",12,3.4};//�����ṹ�岢��ʼ��

//enum Response
//{
//	NO=0,
//	Yes=1,
//	Maybe=2
//};
//enum Response{No=0,Yes=1,Maybe=2};����ö�ٲ���ֵ

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
//	/*cout << (int*)"home of the jolly bytes";*///����ǿ������ת��charת����int ����������ʾ���Ǹ����ݵĵ�ַ
//	return 0;
//}


//int main()
//{
//	struct fish {
//		char kind[20];
//		int weight;
//		long length;
//	};
//	fish* pd = new fish;//���䶯̬�ڴ�
//	cout << "Enter the kind of fish: ";
//	cin >> pd->kind;//��ȡ��̬�ڴ�
//	return 0;
//}

 /*#include <vector>
 #include <array>
 #include <string>*/
//{const int size = 10;
// std::vector <std::string> vest(size);//һ������string�����vectorģ����
// std::array <std::string, size> arst;//һ������string�����arrayģ����
// vector<int>vi;//����һ��vector ����
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char first_name[20], last_name[20];
//	char greda;
//	int ega;
//	����������������䣬�������ɼ���
//	cout << "What is your first name?: ";
//	cin.getline(first_name, 20);
//	��getline������ȡ�������ַ�����20������
//	cout << "What is your last name?: ";
//	cin.getline(last_name, 20);
//	cout << "What letter greda do you deserve?: ";
//	cin >> greda;
//	cout << "What is your ega?: ";
//	cin >> ega;
//	cout << "name" << first_name << "," << last_name << endl;
//	cout << "greda: " << char(greda + 1) << endl;
//	cout << "ega: " << ega << endl;
//	����������Ϣ
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string name;
//	string dessert;
//	//ʹ��string���޸ĺ��4.4�����嵥	
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
//	strcpy(full_name,last_name);//�����ַ�
//	strcat(full_name,",");//׷���ַ�
//	strcat(full_name,first_name);
//	//ͬ��strcpy()������strcat()�������������ַ������ƺ����
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
//	//ʹ��string����ͷ�ļ�string
//	cout << "Enter your first name: ";
//	getline(cin,first_name);
//	cout << "Enter your last name: ";
//	getline(cin,last_name);
//	full_name = last_name + "," + first_name;//string�����ֱ��׷��
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
//	CandyBar snack = {"Mocha Munch",2.3,350};//����һ����Ϊsnack��Candybar�ı�������ֵ
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
//	//�ṹ���Ա����.�����±���㿪ʼ
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
//	cin.get();//���˿հ׷�
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
//	delete ppizza;//�ͷ�new���ٵĿռ�
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
//	CandyBar*pc = new CandyBar[3];//ʹ��new ��̬��������
//	strcpy(pc[0].brand, "Mocha Munch");
//	pc[0].weight = 2.3;
//	pc[0].calorie = 350;
//
//	strcpy(pc[1].brand, "Hershey bar");
//	(pc + 1)->weight = 4.2;//(pc+1)�ȼ�pc[1]
//	pc[1].calorie = 440;
//
//	strcpy(pc[2].brand, "Musketeers");
//	pc[2].weight = 4.2;
//	pc[2].calorie = 550;
//
//	cout << "My 1st Candybar is " << pc->brand << endl;
//	cout << "And its weight is" << pc->weight << ", calorie is" << pc->calorie << endl;
//
//	cout << "My 2ed Candybar is " << (pc + 1)->brand << endl;  //(pc+1)�ҵ��ڶ���Ԫ��
//	cout << "And its weight is " << (pc + 1)->weight << ", calorie is " << (pc + 1)->calorie << endl;
//
//	cout << "My 3th Candybar is " << (pc + 2)->brand << endl;
//	cout << "And its weight is " << (pc + 2)->weight << ", calorie is " << (pc + 2)->calorie << endl;
//	delete[] pc;//�ͷſռ�
//	return 0;
//}

//#include <array>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	array<float,3>record_list;/*����array����*/
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
//	//���ζ�ȡ��������
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
//{  //ѭ��
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
//		int x = 100;/*�ڻ������ڲ������ı���������±���*/
//		cout << x << endl;
//	}
//	cout << x << endl;//�ɱ������ɿɼ�
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
//	while (ch != '#')//����#���������Ϊfalse ֹͣѭ��������
//	{
//		cout << ch;
//		++count;
//		cin >> ch;//cin����Կո���ͻ��з�
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
//		cin.get(ch);//�ո�ͻ��з�����
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
//	while (cin.fail() == false)//ctrl+z+enter ģ���ļ�EOF ������־
//	{
//		cout << ch;
//		++count;
//		cin.get(ch);
//	}
//	while(cin.get(ch))//�ϸ�ѭ�����Ż��������Լ�⵽����ʧ��ԭ��
//	cout << endl << count << " charcters read \n";
//	return 0;
//}

//#include <iostream>
//using namespace std;

//int main()
//{
//	int maxtemps[4][5];//��ά����
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
//{	//2-9�ĺ�
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
//	//��ʼ��factorials��һ�͵ڶ���Ԫ��Ϊ1
//	for (int i = 2; i < ArSizc; i++)
//		factorials[i] = i * factorials[i - 1];//����׳�
//	for (int i = 0; i < ArSizc; i++)
//		cout << i << "!= " <<factorials[i]<< endl;//ѭ����ӡ�׳˽��
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
//const int DEPOSIT_BASE = 100;//�����׼����
//int main()
//{
//	float Daphne = DEPOSIT_BASE;
//	float Cleo = DEPOSIT_BASE;
//	//��ʼ��
//	int year = 0;
//	while (Daphne >= Cleo)
//	{
//		cout << "In " << year++ << " Year: Daphne =" << Daphne << endl;
//		cout << "\t    Cleo =" << Cleo << endl;
//		Daphne += 0.1*DEPOSIT_BASE;//������Ϣ
//		Cleo += 0.05*Cleo;
//	}
//	cout << "In " << year << " Year: Daphne =" << Daphne << endl;
//	cout << "\tCleo=" << Cleo << endl;
//	//���ѭ�����������ֵ
//	return 0;
//}

//int main()
//{
//	const string Month[] = {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC" };
//	int sale_amonth[12] = {};
//	//������������
//	unsigned int sum = 0;
//	for (int i = 0; i <12; i++)
//	{
//		cout << "Enter the sale amount of " << Month[i] << endl;
//		cin >> sale_amonth[i];
//		//��ȡÿ���µ�����
//	}
//	cout << "Input DONE!" << endl;
//	for (int i = 0; i <12; i++)
//	{
//		cout << Month[i] << " SALE :" << sale_amonth[i] << endl;
//		sum += sale_amonth[i];
//		//����ÿ���¼��������ܺ�
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
//	pcar = new car_info[car_number];//���ٿռ�
//	for (int i = 0; i < car_number; i++)
//	{
//		cout << "Car #" << i + 1 << endl;
//		cout << "Please enter the make: ";
//		getline(cin,pcar[i].manufacturer);
//		cout << "Please enter the year made: ";
//		cin >> pcar[i].data;
//		cin.get();
//	}//ѭ����ȡ��Ϣ
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
//		cin.get();//���˿հ׷�
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
//		cin.get();//���˿հ׷�
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
//		//��һ���ڲ�ѭ�����������ţ�����������ݼ��������Ҫͨ��line-i-1 ������ÿһ�еľ������
//		for (int j = 0; j <= i; j++)
//		{
//			cout << "*";
//		}
//		//�ڶ����ڲ���������Ǻţ��Ǻ������������������Ҫʹ�� j<=i ������
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
//	array<double, 10>donation;//ʹ��arrayģ�嶨�����鳤��
//	double input;
//	int counter = 0;
//	double average, sum = 0;
//	int bigger = 0;
//	//counter, averagae,sum,bigger�ֱ��¼�ͣ�ƽ��ֵ�ˣ�Ԫ���������ƽ��ֵ��Ԫ�ظ���
//	cout << "Enter the double numerial: ";
//	cin >> input;
//	while (input != 0 && counter < 10)
//	{//������ķ�����ʱ�򳬹�ʮ��Ԫ��ʱ�˳�ѭ��
//		donation[counter++] = input;
//		cout << "No. "<<counter<< "Data input to Array." << endl;
//		cout << "Enter the double numerial: ";
//		cin >> input;
//	}
//	for (int i = 0; i < counter; i++)
//	{//��¼��
//		sum += donation[i];
//	}
//	average = sum / counter;
//	for (int i = 0; i < counter; i++)
//	{
//		if (donation[i] > average)
//			bigger++;
//		//ͨ�������������ƽ������Ԫ�ظ���
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
{//ѭ�������������Ϣ
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
	��bop���������Ϣ
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
	}//���������Bop��Ա
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
//	//������̬����
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
//	//�������������
//	cout << "Grand patrons " << endl;
//	for (int i = 0; i < patrons_number; i++)
//	{
//		if (ppatrons[i].fund >= 1000)
//		{
//			cout << ppatrons[i].full_name << " :" << ppatrons[i].fund << endl;
//			empty = false;
//		}
//	}//��ѯGrand patrons���������tmptyΪtrue,���NONE
//	if (empty) cout << "NONE" << endl;
//	empty = false;
//	cout << "Patrons" <<  endl;
//	for (int i = 0; i < patrons_number; i++)
//	{
//		if (ppatrons[i].fund < 1000) {
//			cout << ppatrons[i].full_name << " :" << ppatrons[i].fund << endl;
//		}
//	}//��ѯpatrons���������emptyΪtrue,���NONE��
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
//		if (!isalpha(words[0]))//�������Ϊ����ĸ���ú�������ture.����ȡ��Ϊfalse
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
//	while (!fin.eof()) {//ͨ��eof�����ж��Ƿ񵽴��ļ�ĩβ
//		fin >> file_name;
//		char_couter++;
//	}
//	cout << "The file" << file_name << " contains " << char_couter << " characters." << endl;
//	fin.close();//�ر��ļ�
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
//	ifstream fin;//�����ļ�������
//	string file_name;//���ļ� 
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
//	//��ȡ������������̬����
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
//	{//ѭ������string����
//		cout << i + 1 << ": ";
//		getline(cin, list[i]);
//	}
//	cout << "Your list:\n";
//	display(list, SIZE);//��ʾstring��������
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
//{//�ݹ�
//	cout << "Counting down..." << n << endl;
//	if (n > 0)
//		countdown(n - 1);
//	cout << n << ": Kaboom!\n";
//}

//#include <iostream>
//using namespace std;
//�ݹ�ʵ�̶ֿȳ�
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
//	printf("������Ÿ�����������:\n");
//	for (int i = 0; i < 9; i++)
//	{
//		
//		printf("�����%d������:",i+1);
//		scanf_s("%f", &arr[i]);
//	}
//	float n;
//	printf("������Ҫ���ҵ�����\n");
//	scanf_s("%f", &n);
//	for (int i = 0; i < 9; i++)
//	{
//		if (arr[i] == n)
//		{
//			index = i;
//			printf("�ҵ���,�±���: %d ",index);
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
//	const double *pf(const double*, int n);//����ָ��
//	const double *(*f1[3])(const double*, int n);//{ f2,f3,f4 };����ָ������
//	
//	return 0;
//}


//inline--��������
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
////���ú���
//int main()
//{
//	//std::cout;
//	//std::cin;
//	//std::endl;
//	int rats = 101;
//	int &rodents = rats;//���ú��������õ���ֵ����һ����ַ
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


