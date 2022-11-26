#include <stdio.h>
#define  _CRT_SECURE_NO_WARNINGS 
//int 是整型的意思
//mian的前面的int表示maim函数调用返回一个整型值

//int main()//主函数-程序的入口-main函数有且仅有一个
//{
	//这里完成任务
	//在屏幕上输出
	//库函数 别人的东西用时打个招呼
	//#include
	//printf("holle.world\n");
//}
//%d--打印整型
//%c--打印字符
//%f--打印浮点数字-打印小数
//%p--以地址形式打印
//%x--打印十六进制数字
//%o...
//#include <stdio.h>
//int main()
//{
	//char ch = 'B';//申请内存
	//printf("%c\n", ch);%c --打印字符格式的数据
	//
	//short int-短整型
	//int -整形
	//int age = 20;
	//printf("%d\n",age );//%d--打印整型十进制数据
	//return 0;
//}
//#include <stdio.h>
//int main()
//{
	//long re = 100;
	//printf("%d\n", re);
	//return 0;
//}
//#include  <stdio.h>
//int main()
//{
	//float f = 5.0;单精度浮点数
	//printf("%f\n", f);
	//double d = 3.14;双精度浮点数
	//printf("%lf\n", d);
//}
//#include <stdio.h>
//int main()
//{
	//printf("%d\n", sizeof(char));1
	//printf("%d\n", sizeof(short));2
	//printf("%d\n", sizeof(int));4
	//printf("%d\n", sizeof(long));4
	//printf("%d\n", sizeof(long long));8
	//printf("%d\n", sizeof(float));4
	//printf("%d\n", sizeof(double));8 
	//以上输出数字为字节
//字节
//计算机中的单位 bit（比特位） 
//字节byte kb mb gb tb pb（一个字节八个比特位）
//kb=1024byte....
//计算机是硬件--通电：正电1 负电0
//二进制（0 1）十进制（0123456789）
//七进制（0123456）八进制（01234567）
//}
//include <stdio.h>
//int main()
//{
	//年龄20
	//short aeg = 20;//向内存申请2个字节=16个比特位，用来存放20
	//float weight = 99.6f;//向内存申请四个字节存放
	//}
//#include <stdio.h>
//int main()
//---extern声明外部 符号；
//{
	//{
		//局部变量的作用域
		//int unm = 0;
		//printf("unm=%d\n", unm);
	//}
	//return 0;
//}
//#include <stdio.h>
//int main()
//{
	//int unm1 = 55;
	//int unm2 = 11;

	//int sum = unm1 + unm2;

	//printf("sum=%d\n", sum);
//}
//#include <stdio.h>
//int main()
//{
	//计算两个数的和
	//int unm1 = 0;
	//int unm2 = 0;
	//int sum=0;
	/*scanf为国际标准
	scanf_s不是C语言提供的，不是标准C提供的而是VS提供的。
	scanf_s不能跨平台，不可移植。*/
	//scanf_s("%d%d", &unm1, &unm2);
	//-----scanf调用地址函数*
	//sum = unm1 + unm2;
	//printf("sum =%d\n", sum);

	//return 0;
//}
//一、C语言中的常量：字面常量；const修饰的常变量；
//#define定义的标识符常量；枚举常量。

//#include <stdio.h>
//---const修饰常变量
//int main()
//{
	//const int n = 10;
	//int ass[n] = { 0 };

//}
//#include <stdio.h>
////---#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int ass[MAX] = { 0 };
//	printf("%d\n", MAX);
//}
//---enum枚举常量
//枚举--列举
//
//性别：男 ，女 ，保密。
//三原色：红，黄，蓝。
//星期：1，2，3，4，5，6，7。

//#include <stdio.h>
//enum Color
//{
	//RED,
	//YELLOW,
	//BLUE
//};
//int main()
//{
	//enum Color color = RED;
	//printf("%d\n", RED);
	//printf("%d\n", YELLOW);
	//printf("%d\n", BLUE);
//}
//#include <stdio.h>
//int main()
//{计算两数和
//    int  eun1 = 0;
//	int  eun2 = 0;
//	int  sum = 0;
//	scanf_s("%d%d", &eun1, &eun2);
//    sum = eun1 + eun2;
//	printf("=%d\n", sum);
//
//}
//----字符串
//#include <stdio.h>
//int main()
//{
//	char aer1[] = { 'a','b','c' };//数组
//	//"abc"--'a','b','c','\0'\0的值为零
//	char aer2[] = { 'a','b','c',0 };//没有结束语(\0)会打印随机值随机
//	printf("%s\n", aer1);//输出abc 烫烫烫bc
//	printf("%s\n", aer2);//输出abc
//	//\0字符串的结束标志,对于字符串很重要
////\0转义字符---改变原来的意思
////\可以用来转义
//	
//
//}



//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char asdd1[] = "abc";
//	char asdd2[] = { 'a','b','c' };
//	//strlen--string-计算字符串长度
//	----strlen 需要引进头文件<string.h>
//	printf("%d\n", strlen(asdd1));
//	printf("%d\n", strlen(asdd2));
//}
//#include <stdio.h>
//int main()
//{
	//printf("%c\n",'\'');\转义字符
	//printf("%c\n","\"");

//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{计算数值长度
//	printf("%d\n", strlen("c:\test\32\test.c"));
//
//}
//

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//数组下面有个下标，下标从0开始
//	//定义一个存放10个整数数字的数据
//	//0-9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[5]);
//	//char ch[20];//定义字符
//	//float arr2[10];//定义单精度数组
//
//	return 0;
//}

//int Add(int x, int y)//函数参数
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int muan1 = 10;
//	int muan2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//sum = muan1 + muan2;
//	sum = Add(muan1, muan2);
//	//sum=a+b
//	sum = Add(a, b);
//	//sum = Add(2, 3);
//	printf("sum= %d\n", sum);
//	return 0;
//}


//int main()
//{//-----while循环语句
//	int lien = 0;
//	printf("大专人\n");
//	while (lien < 20000)
//	{
//		printf("学C，学C:%d\n",lien);
//		lien++;
//	}
//	if (lien>= 20000)
//		printf("终于学会了\n");
//	return 0;
//}




//int main()
//{
//	int input = 0;
//	printf("大专人\n");
//	printf("你要好好学习哦！<1/0>:");
//	scanf_s("%d", &input);
//	if(input == 1)
//		printf("好朋友加油哟！\n");
//	else
//		printf("回家放牛吧，没救了\n");
//		return 0;
//}


//#include <stdio.h>
//int main()
//{-----	//(2进制)位操作
//	//&按位与  有0出0，全1出1
//	//|按位或   只要有一个1就出1，全1也是1
//	//^按位异或  
//	//异或运算规律：对应的二进制位相同，则为0；对应的二进制位相异，则为1
//
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);
//	
	//移（二进制）位操作符
	//<< 左移
	//>> 右移
	//int a = 1;
	//int b = a<<2;//二进制移动
	//printf("%d\n", b);
	//printf("%d\n", a);
	//return 0;

//}
//#include <stdio.h>
//#include <limits.h>
//int main()
//{	//交换两个整数变量,不加新变量
//	 int a = 3;
//	 int b = 5;
//	//空瓶
//	printf("交换前： a=%d, b=%d\n",a,b );
//	b = a ^ b;//^换位异或
//	a = a ^ b;
//	b = a ^ b;
//	
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;

//	//c = a;//1
//	//a = b;//2
//	//b = c;//3
//	printf("交换后：b=%d,a=%d\n ", a, b);
//	return 0;
//}


//int main()
//{	//打印函数----引用头文件<stdio.h>
//	printf("holle,world\n");
//	return 0;
//}

#include <stdio.h>
//int main()
//{	
//	//1^1^2^2^3^3^4^4^5=5;按位异或
//	//找出单身狗
//	int arr[] = { 1,2,3,4,5,1,2,3,4,5,7 };
//	int i = 0;
//	int ret = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//
//	}
//	printf("单身狗:%d\n", ret);
	//暴力求解
	//for (i=0;i<sz;i++)
	//{ //统计arr[i]在arr数组中出现了几次
	//	int count = 0;//计数器
	//	int j = 0;
	//	for (j = 0; j < sz; j++)
	//	{
	//		if (arr[i] == arr[j])
	//		{
	//			count++;
	//		}
	//	}
	//	if (count == 1)
	//	{
	//	printf("单身狗：%d\n", arr[i]);
	//	break;
	//}
	//}
	//}

//#include <stdio.h>
//#include <limits.h>
//#include <stdlib.h>//system头文件
//#include <string.h>//strcmp头文件
//
//int main()
//{
//	
//	char input[20] = { 0 };//储存数据
//	//关机
//	//system()--专门用来执行系统命令的
//	system("shutdown -s -t 60");//关机
//again:
//	printf("请注意，你的电脑即将在一分钟内关机，如果输入>:我是猪，就取消关机\n");
//	scanf_s("%s", input);//%s-字符串
//	if (strcmp(input, "我是猪") == 0)//判断input中放的是不是"我是猪"-strcmp--string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;//返回前面判断输入
//	}
//	return 0;
//}

 
//#include <string.h>
//int main()
//{
//	int lien = 0;
//	printf("大专人\n");
//	while (lien < 20000)
//	{
//		printf("学C，学C，每天都要加油！：%\n", lien);
//			lien++;
//	}
//	if (lien >= 20000)
//		printf("终于学会了\n");
//	return 0;
//}
//int main()
//{//-----while循环语句
//	int lien = 0;
//	printf("大专人\n");
//	while (lien < 20000)
//	{
//		printf("学C，学C:%d\n",lien);
//		lien++;
//	}
//	if (lien>= 20000)
//		printf("终于学会了\n");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("大专人\n");
//	again:
//	printf("你要好好学习哦！<1/0>:");
//	scanf_s("%d", &input);
//	if (input == 0)
//		printf("你会成功的！\n");
//	else
//		printf("没救了，回家放牛吧！\n");
//	goto again;
//	return 0;
//
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int lien = 0;
//	printf("大专人\n");
//	while (lien < 20000)
//	{
//		printf("每天敲一段代码：%d\n", lien);
//		lien++;
//	}
//	if (lien >= 20000)
//		printf("恭喜你毕业了！");
//		return 0;
//}

#/*include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,1,2,3,4,5 };
	int i = 0;
	int ter = 0;
	int as = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < as; i++)
	{
		ter = ter ^ arr[i];
	}
	printf("单身狗%d\n", ter);
	return 0;
}*/

#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,6,5,4,3,2,1 };
//	int i = 0;
//	int ter = 0;
//	int dsa = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < dsa; i++)
//	{
//		ter = ter ^ arr[i];
//	}
//	printf("单身狗%d\n", ter);
//	return 0;
//}

//
//#include <stdio.h>

//int a=100;
//全局变量--在代码块（{}）之外的变量
//局内变量--在代码块（{}）之内的变量
//int main()
//{
//int a=10;
	//局部变量和全局变量的名字建议不要相同-容易误会，产生bug
	//当全局变量和局部变量名字相同时，局部变量优先
//printf("%d\n", a);
//}
//#include <stdio.h>
////求两个数较大值--函数法
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int aum1 = 10;
//	int aum2 = 20;
//	int max = 0;
//	max = MAX(aum1, aum2);
//	printf("max=%d\n", max);
//	return 0;
//
//}
//int main()数字比较法
//{
//	int aum1 = 10;
//	int aum2 = 20;
//	if (aum1 > aum2)
//		printf("较大值是：%d\n", aum1);
//	else
//		printf("较大值是：%d\n", aum2);
//	return 0;
//}
//----操作符：按位与&& 按位或||  exp1`?exp1:exp2:(a>b?a:b);a是否大于b是出a否出b
//-- :++ 前置先自增减再使用 后置先使用再自增减（a--,--a;++a,a++） 
//[]引用下标 （）调用函数
//#include <stdio.h>
//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);//()--函数调用操作符调用(int ADD(int x,int y));
//}
//
//#include <stdio.h>
//int main()
//{
//	//register int a = 10;建议把a定义成寄存器变量
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int;
//	//unsigned int num = 1;
//	//struct --结构体关键字；
//	//union--联合体/共用体
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{	//typedef--类型定义-类型重定义
//	//张三--小三--
//	//typedef unsigned int u_int;//重新把unsigned int定义一个名字
//	//unsigned int num = 20;
//	//u_int num2 = 20;
//
//
//}
//-----static 修饰局部变量
//局部变量的生命周期变长了
//static 修饰全局变量--外链接变成了内链接--外部无法调用
//#include <stdio.h>
//extern int ADD(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum= ADD(a, b);
//	printf("%d\n", sum);
//}
//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//}

//void sets()
//{	//static 修饰局部变量
//	//当它修饰局部变量的时候局部变量的生命周期变长了，不在销毁局部变量
//	static int a = 1;//创建局部变量a
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		sets();
//		i++;
//	}
//	return 0;
//
//}

#include <stdio.h>
//---#define --定义标识符常量
//#define MAX 100
//---#define 可以定义宏--带参数
//---宏的定义
//#define MAX(X,Y) (X>Y?X:Y)//三目运算
//int main()
//{
//	//int a = MAX;
//	int a = 20;
//	int b = 10;
//
//	int max = MAX(a, b);
//	//宏的用法--max=MAX(a,b);
//	printf("max=%d\n", max);
//	return 0;
//}



//只要是整数，内存中方储存的都是二进制的补码；
//正数--反码，原码 补码，相同
//原码---
//直接按照正负写出二进制序列
//反码---
//原码的符号位不变，其他位按位取反得到
//补码---
//反码加一
//-2
//10000000000000000000000000000010-原码
//11111111111111111111111111111101-反码
//11111111111111111111111111111110-补码

//#include <stdio.h>
////int
////float
//int main()
//{
//	int a = 0;//局部变量--自动auto int a=0;//一般省略auto
//}

//#include <stdio.h>
//------指针
//int main()
//{
//	int a = 10;
//	int*p=&a;//取地址
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p =20;//*--解引用操作符,对P解引用
//	printf("a=%d\n", a);
//	//有一种变量是用来存放地址的--指针
//	//&a;取a的地址
//	//printf("%p\n", &a);
//
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//	char ch ='w';
//	char*pc = &ch;
//	*pc = 'w';
//	//printf("%p\n", pc);
//	printf("%d\n", pc);
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{//变量的大小
//	char ch = 'w';
//	char*pc = &ch;
//	printf("%d\n", sizeof(pc));
// printf("%d\n",sizeof(char*));指针大小32位机器4个字节，64位8个字节
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int*p = &a;
//	*p = 20;
//	printf("%d\n", *p);
//	printf("%d\n", sizeof(int*));
//	printf("%p\n", p);
//
//}
//#include <stdio.h>
//int main()
//{
//	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
//	double b = 3.14;
//	double*bc = &b;
//	*bc = 23.11;
//	
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(bc));
//	printf("b= %d\n", *bc);
//}
//#define MAX(X,Y) (a>b?a:b)
//int main()
//{
//	int a = 20;
//	int b = 22;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//}


//#include <stdio.h>
//int main()
//{//变量的大小
//	char ch = 'w';
//	char*pc = &ch;
//	printf("%d\n", sizeof(pc));
//	printf("%d\n",sizeof(char*));//指针大小
//}
//#include <string.h>
////C复杂对象----结构体--我们自己创造出来的一种类型--struct
////----创建一个结构体
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;
//};

//int main()
//{	//利用结构体类型-创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计",55 };
//	//更改结构体名字
//	strcpy_s(b1.name,"C++");//strcop-string copy-字符串拷贝-库函数 要使用头文件string.h
//	printf("%s\n", b1.name);
	//struct Book *pb = &b1;
	// . 结构体变量.成员
	//-> 结构体变量->成员 --适用于指针
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);

	//printf("%s\n", (*pb).name);//利用指针
	//printf("%d\n", (*pb).price);
	/*printf("书名:%s\n", b1.name );
	printf("价格:%d元\n",b1. price);
	b1.price = 20;
	p*//*rintf("修改后的价格:%d元\n", b1.price);*/
	//return 0;	
//}


//#include <stdio.h>
////-----if语句
//int main()
//{	//一对{}称为代码块
//	int age = 12;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//}
//	else
//		printf("成年\n");*/
//	int age = 25;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//	printf("壮年\n");
//}

#include <stdio.h>
/*int main()
{
	/*int num = 4;
	if (5 == num)
	{
		printf("hehe\n");
	}*/
	//if(num=5)//=赋值 ==判断
	//{
	//	printf("hehe\n");
	//}
	
//}

//#include <stdio.h>
//int main()
//{
//
//	//int i = 1;
//	//while (i <= 100)
//	//{
//	//	printf("%d\n", i);
//	//	i+= 2;
//	//}
//	/*int i = 1;
//	while (i <= 100)
//	{
//		if (i%2 !=0)
//			printf("%d\n", i);
//		i++;
//	}*/
//
//}

#include <stdio.h>
//---switch ----分支
//int main()
//{   a:
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)--整形表达句
//	{
//	case 1:--整形常量表达式  break可以省略
//		printf("星期一\n");  case1;
//		break;				 case2;	
//	case 2:					 case3;	
//		printf("星期二\n");  ......
//		break;				 printf("");	
//	case 3:					 dreak;
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
  /*  ------default: 处理非法输入
		printf("输入错误\n");
		dreak;*/

//	}
//	goto a;
//}

#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	//ctrl+z;
//	//EOF -end of file -> -1;文件结束标识
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//}
//int main()
//{ --stdout 输出流
//	int ch = getchar();//输入--接受键盘输入的一个字符
//	putchar(ch);//输出--跟printf差不多都是打印
//	printf("%c\n", ch);
//


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i ==5)
//			continue;//--继续--后面的代码不在执行直接跳转判断部分，进入下一个循环
//		printf("%d ", i);
//		//i++;
//	}
	/*while (i <= 10)
	{
		if (i == 5)
			break;//结束循环
		printf("%d ", i);
		i++;
	}*/
//}

//#include <stdio.h>
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码: > ");//输入密码，并存在password数组中
//	//缓冲区还剩余一个‘\n’
//	//读取一下'\n'
//	scanf("%s", password);//
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

#include <stdio.h>
#include <math.h> 
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ter = 1;
//	int sum = 0;
//	//scanf("%d", &n);
//	for (n = 1; n <= 10; n++)//计算阶乘相加
//	{
//		ter = ter * n;
//		/*ter = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ter = ter * i;
//		}*/
//		sum = sum +ter;
//	}
//	
//	printf("%d\n", ter);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n =0;
//	int ter = 1;
//	scanf("%d\n", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ter = ter * i;计算n的阶乘
//	}
//	printf("%d\n", ter);
//	return 0;
//}

#include <stdio.h>
//-----二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int as = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = as - 1;//右下标
//
//	while (left <= right)//需注意只有满足条件才能继续下去
//	{
//		int mid = (left + right) / 2;//二分查找
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n",mid);
//			break;
//		}
//		if (left > right)
//			printf("找不到\n");
//	} 
//	return 0;
//
//}

/*#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib*///.h>
//int main()
//{  两数组交换
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//---int right = sizeof arr() / sizeof(arr[0]) - 2;
//	int right = strlen(arr1) - 1;// 求字符串长度
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//停留一秒
//		Sleep(1000);
//		system--执行系统命令的一个函数
//		system("cls");//清空屏幕---cls
//		left++;
//		right--;
//		
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if(strcmp(password,"123456")==0)  ---strcmp用来判断是否相等
//		{
//			printf("登入成功\n");
//			break;
//		}
//		else 
//		{
//			printf("密码错误\n");
//		}
//	}
//		if (i == 3)
//			printf("输入错误，退出程序\n");
//	
//	return 0;
//}

#include <stdio.h>
//----do while循环，至少执行一次
//int main()
//{
//	int i = 1;
//	//1-10
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

#include <stdio.h>
//int main()
//{  计算n的阶乘
//	int i = 0;
//	int n = 0;
//	int tre = 1;
//	scanf("%d\n", &n);
//	for (i = 1; i <= n; i++)
//	{
//		tre = tre * i;
//
//	}
//	printf("%d ", tre);
//
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i <3; i++)
//	{
//		printf("输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456")== 0)
//		{
//			printf("登入成功\n");
//			break;
//		}
//		if(i==3)
//			printf("认证失败，即将退出程序\n");
//	}
//	return 0;
//}

#include <stdio.h>
//int main()
//{  //排列顺序
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a> b)
//	{
//		int tmp = a;
//		a=b ;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n",a,b,c);//注意%d中的空格
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 3) == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//--从大到小输出
//int main()
//{
//	int m = 18;
//	int n = 24;
//	int r = 0;
//	scanf("%s", &n, &m);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

#include <stdio.h>
//----计算闰年
//int main()
//{	
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year<= 2000; year++)
//	{
	/*			if (year % 4 == 0 && year % 100 != 0)
			{
				printf("%d ", year);
				count++;
			}
			else if (year % 400 == 0)
			{
				printf("%d ", year);
				count++;
			}*/
	/*	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount =%d\n", count);
	return 0;
}*/

//#include <stdio.h>
//#include <math.h>//----bug 代码
//int main()
//{
//	int i = 0;
//	for (i=100;1<= 200;i++)
//	{
//		//素数判断的规则
//		//1- 试除法---产生2->i-1
//		int j = 0;
//		for (j = 2;j<i;j++)
//		{
//			if (i%j==0)
//			{
//				break;
//			}
//		}
//		if (j>i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}

//#include <stdio.h>
//---计算100内有九的数字
//int main()
//{
//	int i = 0;
//	int count=0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i%10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("\ncount= %d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{//----//分数求和
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };  //{-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,}
//	int max = arr[0];//最大值----这里要注意
//	int i = 0;
//	int az = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < az; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//		printf("max= %d\n", max);
//	return 0;
//}


//#include <stdio.h>
////---打印九九乘法表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//%-2d--打印两个位置且向左对齐
//		}
//		printf("\n");打印完换行
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= 9; j++)
//		{
//			while (j < i)
//			{
//				printf("\t");
//				j++;
//			}
//			printf("%d*%d=%-2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= 9; j++)
//		{
//			if (j >= i)
//				printf("%d*%d=%-2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
 
//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= 9 - i; j++)
//		{
//			printf("\t");
//		}
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>//猜数字游戏
//#include <stdlib.h>
//#include <time.h>
//void mean()
//{
//	printf("*************************\n");
//	printf("***** 1.play  0.exit*****\n");
//	printf("*************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	//调用时间戳生成随机数字
//	ret = rand()%100+1;
//	//printf("%d\n",ret);
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else 
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));  //NULL空指针，不让他起作用，
//	do
//	{
//		mean();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
// 		}
//	} while (input);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//----strcpy 拷贝字符串。
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#########";
//					"bit\0"
//	strcpy(arr2, arr1);//...（arr2---拷贝目的，arr1---拷贝来源）还会把'\0'拷贝进去
// -----如果源头过长，则目的地会溢出。
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//#include <windows.h>
////memset
////memory -内存 set--设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//(arr--数组，'*'--要设置的那个值，5---设置几个字符) 没有主动放进"\0")
//	printf("%s\n", arr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double S = 0.0;
//	double T = 0.0;
//	scanf("%lf", &S);
//	T = (S - 32) / 1.8;
//	printf("华氏度为： %lf\n", T);
//}
 
//#include <stdio.h>
//--交换两数的值。须用指针解决。
//void Swap1(int *pa, int *pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa =*pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a= %d, b= %d\n", a, b);
//---传址调用
//	Swap1(&a, &b);
//	printf("a= %d ,b= %d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
////----输出素数.素数只能被1和它本身整除
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 ==0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount= %d\n", count);
//}
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{	
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//			printf("%d ", year);
//	}
//	return 0;
//}

//#include <stdio.h>
////--二分查找
//int binary_search(int arr[], int k, int as)
//{
//	
//	int left = 0;
//	int right = as - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right  = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;找不到的情况下返回-1
//}
//int main()
//{ 
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int as = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k,as);
//	if (ret == -1)
//	{
//		printf("找不到要找数字 :%d\n" );
//	}
//	else
//	{
//		printf("找到了，下标是 :%d\n",ret );
//	}
//	return 0;
//}

//#include <stdio.h>
//void Add(int *p)
//{
//	//*p++;//错误写法--++作用于P
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	//Add(&num);
//	//printf("num= %d\n", num);
//	//Add(&num);
//	//printf("num= %d\n", num);
//	Add(&num);
//	printf("num= %d\n", num);
//	return 0;
//
//}

//#include <stdio.h>
////----函数的嵌套调用
//int main()
//{
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
////----链式调用
//int main()
//{
//	int len = 0;
//	// 1
//	/*len = strlen("abc");
//	printf("%d\b", len);*/
//	// 2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321  第二个printf打印两个数字 第一个打印一个数字
//	return 0;
//}

//#include <stdio.h>
//#include "add.h"//自己写的头文件用双引号
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int sum = 0;
//	//调用函数
//	sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}



//
////---函数递归
#include <stdio.h>
#include <string.h>
//int main()
//{
//	printf("hehe\n"); //调用函数在栈区开辟空间。Stack overflow --栈溢出
//	main();
//	return 0;
//}

//print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{	//输入数字，把数字分开
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	print(num);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//---递归的方法
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0；
//3
//int my_strlen(const char*srt)
//{
//	if (*srt != '\0')
//	{
//		return 1 + my_strlen(srt+1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//求字符串长度不包含--\0
//	//printf("%d ", len);
//	//--模拟实现了一个strlen 函数
//	int len = my_strlen(arr);
//	printf("len= %d\n", len);
//
//	return 0

//int my_strlen(const char* str)
//{--//递归实现函数strlen
//	if (*str != '\0')
//	{
//		return 1+my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//int Facl(int n)
//{//迭代计算num的阶乘
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Facl(n - 1);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	int ret = Facl(num);
//	printf("%d ",ret);
//	return 0;
//}




#include <stdio.h>

//int Facl(int n)
//{		循环的方法
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Facl2(int n)
//{	//迭代的方法
//	if (n <= 1)
//		return 1;
//	else
//		return n * Facl2(n - 1);
//}
//int main()
//{
//	//计算n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	//ret =Facl(n);//循环的方式
//	ret = Facl2(n);//迭代的方式
//	printf("%d\n", ret);
//	return 0;
//}

#include <stdio.h>
////描述第n个斐波那契数列
//迭代效率低
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-测试驱动开发
//	ret = Fib(n);//--先设想在实现
//	printf("ret= %d\n", ret);
//	return 0;
////}

#include <stdio.h>
//int main()
//{
	//数组创建
	//int arr[10] = { 1,2,3 };//不完全初始化，后面的元素默认初始化为0
	//char arr1[5] = { 's','b' };
	//char arr2[5] = "abc";//ok  存在\0
	//char arr3[] = "abcdef";//会根据元素的个数决定数组的大小
	//printf("%d\n", sizeof(arr3));
	//sizeof 计算 arr3所占的空间
	//7个元素-char 7*1=7
	//printf("%d\n", strlen(arr3));
	//strlen 求字符串的长度--'\0'之前的字符个数
	//[a,b,c,d,e,f,\0]
	// 6
	//return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", arr[i]);//数组的访问 
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int az = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < az; i++)
//	{
//		printf("&arr[%d]=  %p\n", i, &arr[i]);
//	}
//	return 0;
//
//}

//int main()
//{//----二维数组 行列
//	int arr[3][4] = { {1,2,3,4},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{	//---二维数组的储存方式
//	int arr[3][4] = { {1,2,3,4},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]= %p\n",i ,j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//void bubble_sort(int *arr, int sz)
//
//{
//	//确定冒泡排序的趟数
//	int i = 0;//假设这一趟要排序的数据已经有序
//	//int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{   //要知道元素个数时要在外面求
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//			/*if (flag == 1)
//			{
//				break;
//			}*/
//		}
//	}
//}
//int main()
//{	//冒泡排序
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2.3,4,5,6,7 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);//增加了一整个数组的长度
//	return 0;
//}

#include <stdio.h>
//int main()
//{//右移
//	int a = -1;
//	int b = a  >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{//左移
//	int a = 5;
//	int b= a << 1;
//	printf("%d\n", b);
//	return 0;
//}

#include <stdio.h>
//int main()
//{//两数交换
	//创建临时变量法
	/*int a = 3;
	int b = 5;
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	printf("a= %d b= %d", a, b);*/
	//加减法
	/*int a = 3;
	int b = 5;
	a = a + b;
	b = a - b;
	a = a - b;*/
	//异或法--执行效率低，代码可读性低
	/*int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;
	a = b ^ a;
	printf("%d %d", a, b);*/
	//return 0;
//}

#include<stdio.h>
//int main()
//{//求补码中的1
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i)&1))//右移符
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{//复合赋值符
//	int a = 10;
//	a = a + 1;
//	a += 1;
//
//	a = a & 1;
//	a &= 1;
//
//	a = a % 1;
//	a %= 1;
//}
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));//~ 按位取反
//	printf("%d\n", a);
//	return 0;
//
//}
//int main()
//{
//	int i = 0, a = 1 , b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//只要a 为假后面就不用算了
//	//i = a++ || ++b || d++; //只要a为真就不用算后面的了
//	printf("a= %d, b= %d, c= %d, d= %d", a, b, c, d);
//	return 0;
//}

//#include <stdio.h>
//struct stu
//{    //创建一个结构体类型
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct stu s1 = { "张三",2,"202030040" };
//	struct stu *ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//结构体指针->成员名
//	/*printf("%s\n", s1.name );
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int * pa = &a;
//	char *pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	return 0;
//}
//int main()
//{//-----//指针相减
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &arr[0]);
//
//	return 0;
//}

//int my_strlen(const char*str)
//{
//	char*start = str;
//	char*end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int My_strlen(const char*str)
//{
//	char*start = str;
//	char*end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "better";
//	int len = My_strlen(arr);
//	printf("%d", len);
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;//数组指针
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d\n", arr[i]);
//		//printf("%d ", *(p + i));指针方式  两者等价
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p ===== %p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}

#include <stdio.h>
//-----二级指针
//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	int **ppa = &pa;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	/*int *pa = &a;
//	int *pb = &b;
//	int *pc = &c;*/
//	int *arr[3] = { &a,&b,&c };//指针数组 - 存放指针
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//#include <stdio.h>
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		printf("%-2d  ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);把数组初始化0；
//	Print(arr, sz);
//	Reverse(arr, sz);//倒序
//	Print(arr, sz);//打印
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int count_bit_one2(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_bit_one3(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	//写一个函数求二进制中（补码）有几个1,(大多二进制都是转为补码形式储存，除负数以外)
//	int count = count_bit_one(a);//方法一 存在问题输入一个负数无法正常计算 添加一个unsigned无符号数
//	//int count = count_bit_one2(a);//方法二
//	//int count =count_bit_one3(a);//方法三
//	printf("count = %d", count);
//	//system("pause");system库函数-执行系统命令-pause（暂停）
//	return 0;
//}

#include <stdio.h>
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int get_diff_bit(int n, int m)
//{
//	int tmp = m ^ n;  
//	int count = 0;
//	//return count_bit_one(tmp);//方法一
//	while (tmp)//方法二
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf_s("%d%d", &n, &m);
//	int count = get_diff_bit(m, n);
//	printf("count= %d", count);
//	return 0;
//}

#include <stdio.h>
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf_s("%d", &m);
//	print(m);
//	return 0;
//} 
//void print(int m)
//{
//	int i = 0;
//	int count = 0;
//	int counts = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		if ((m >> i & 1) == 1)
//			count++;
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("奇位数为一的有：%d位", count);
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		if ((m >> i & 1) == 1)
//			counts++;
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位为一的有：%d位", counts);
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf_s("%d", &m);
//	print(m);
//	return 0;
//}

#include <stdio.h>
//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ", *(p + i));//与arr[i] 等价
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

#include <stdio.h>
//----结构体
//typedef struct Stu  //typedef 重新取名
//{    写法一
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//Stu 类型
//int main()
//{
//	Stu s1 = { "张三",20,"12343455632","男" };//局部变量
//	struct Stu s2 = { "旺财",30,"1212334455","保密" };
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double b;
//};
//struct t
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct t d = { "hehe",{100,'w',"hello world",3.14},arr };//嵌套式结构体
//	printf("%s\n", d.ch);//hehe
//	printf("%s\n", d.s.arr);//hello world
//	printf("%lf\n", d.s.b);//3.14
//	printf("%s\n", d.pc);//hello bit
//
//	return 0;
//}

#include <stdio.h>
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void Print1(Stu tmp)
//{	
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//void Print2(Stu*ps)//不用开辟新空间
//{   ->指针使用 ->指向成员
//	printf("name: %s\n", ps ->name);
//	printf("age: %d\n", ps ->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "李四",40,"1234554321","男" };
//	//Print2更优。
//	Print1(s);//临时拷贝系统空间有额外开销
//	Print2(&s);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{//阶乘相加
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int i, n;
//	int sum = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{//阶乘相加。
//	int i, j;
//	int n;
//	int ret=1;
//	int sum=0;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
#include <stdio.h>
//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//
//};
//struct s2
//{
//	char c1;
//	char c2;
//	int a;
//
//};
//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//int main()
//{	//涉及对齐数内容
//	struct s1 d1 = { 0 };
//	printf("%d\n", sizeof(d1));//12
//	struct s2 d2 = { 0 };
//	printf("%d\n", sizeof(d2));//8
//	struct s3 f1 = { 0 };
//	printf("%d\n", sizeof(f1));//16
//	return 0;
//}


//设置默认对齐数
//#pragma pack(4)
//struct S
//{	char c1;//1
//	
//	double d;//8
//
//};
////#pragma pack()
////取消设置的默认对齐数
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int s = 0;
//	scanf_s("%d %d", &a, &b);
//	s = a + b;
//	printf("%d\n", s);
//	return 0;
//}

#include <stdlib.h>
//动态内存分配 ， malloc  ,realloc,  calloc
//calloc 会在返回地址之前把申请的空间初始化为零，
//realloc 可以调整动态内存开辟，有足够的空间则追加，没有足够的内存则会寻找一块足够的空间开辟，把内容拷贝到新的空间，自动释放旧空间
//struct S
//{
//	int n;
//	int arr[];//柔性数组  ---可调整大小的数组
//};
//int main()
//{
//	int i = 0;
//	struct S*p=(struct S*)malloc(sizeof(struct S) + 10*sizeof(int));//开辟柔性数组空间
//	p->n = 100;
//	//用法
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",p->arr[i]);
//	}
//	free(p);//释放空间
//	p = NULL;
//	return 0;
//}
//struct s
//{
//	int i;
//	int arr[];
//};
//int main()
//{
//	struct s*p = (struct s*)malloc(sizeof(struct s) + 10 * sizeof(int));
//	for (int i = 0; i < 10; i++)
//		p->arr[i] = i;
//	for (int i = 0; i < 10; i++)
//		printf("%d ", p->arr[i]);
//	free(p);
//	p = NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	int*arr;//柔性数组
//};
//int main()
//{
//	int i = 0;
//	struct S*p=(struct S*)malloc(sizeof(struct S));//开辟空间 
//	p->n = 100;
//	p->arr =(int*) malloc(10 * sizeof(struct S));
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//
//	}
//	//释放内存---两次开辟空间，释放时注意先后顺序
//	free(p->arr);
//	p->arr = NULL;
//	free(p);
	/*p = NULL;
	return 0;
}*/

#include <stdio.h>
//#define DOUBLE(X) ((X)+(X))		//宏
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	printf("%d\n", ret);
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is:%d\n",X) //#插入字符
//int main()
//{
//	/*printf("hello world\n");
//	printf("hello ""world\n");
//	printf("hel""lo " "world\n");*///所处同一环境的字符会自动连接
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//} 
//#define CTA(X,Y) X##Y
//int main()
//{
//	int Class84 = 100;
//	printf("%d\n", Class84);
//	printf("%d\n", CTA(Class, 84));//##可以把位于它两边的符号合成一个符号。它允许宏定义从分离的文本片段创建标识符。
//
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	char c1;
//	int c2;
//	char c3;
//
//};
//#define OFFSETOF(struct_name,meber_name) (int)&(((struct_name*)0)->meber_name)
//int main()
//{	//自编实现宏运算偏移量
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	printf("%d\n", OFFSETOF(struct S, c3));
//	return 0;
//}


//#include <stdio.h>
//struct s
//{
//	char c1;
//	int a;
//	char c2;
//};
//#define OFFSETOF(struct_name,meber_name) (int)&( ( (struct_name*) 0)-> meber_name )//先把起始地址强制类型转换为结构体指针，指向第一个成员，然后取地址并强制类型转换为int类型
//int main()
//{
//	printf("%d\n", OFFSETOF(struct s, c1));
//	printf("%d\n", OFFSETOF(struct s, a));
//	printf("%d\n", OFFSETOF(struct s, c2));
//	return 0;
//}









