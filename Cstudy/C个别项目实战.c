#include <stdio.h>
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//////void reverse_string(char arr[])//循环方法实现逆序
////{
////	int left = 0;
////	int right = my_strlen(arr) - 1;
////	while (left < right)
////	{
////		int tmp = arr[left];
////		arr[left] = arr[right];
////		arr[right] = tmp;
////		left++;
////		right--;
////	}
////}
//void reverse_string(char arr[])//递归方法实现逆序
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

#include <stdio.h>
//int DigitSum(unsigned int num)//(递归实现输入数字得到数字之间的和)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//
//	}
//	else
//	{
//		return num;
//	}
//}

//int Digitsum(unsigned int num)
//{
//	if (num > 9)
//		return Digitsum(num / 10) + num % 10;
//	else
//		return num;
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//double Pow(int n, int k)//（递归实现n的k次方）
//{
//	if (k < 0)
//		return(1.0 / (Pow(n, k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//double Pow(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / (Pow(n, k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("ret =%lf\n", ret);
//	return 0;
//}

//#include <stdio.h>
//乘法口诀表
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{//该死循环涉及到栈区排序，非法越界访问。
//	//根据栈区储存规律越界访问会遇到i。
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

#include <stdio.h>
#include <assert.h>
//void my_strcpy(char *dest, char*src)
//{//方法一
//		while (*src !='\0')
//		{
//			*dest =*src;
//			*dest++;
//			*src++;
//		}
//		*dest = *src;
//}
//void my_strcpy(char *dest, char*src)
//{//方法二
//	if (*dest != NULL && *src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//void my_strcpy(char *dest, char*src)
//{//方法三
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//char* my_strcpy(char *dest,const char*src)
//{//方法四 最佳方案
//	char*ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);
// //把src指向的字符拷贝进dest指向的空间，包括‘\0’字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{//srtcpy --拷贝
////实现一个strcpy函数
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

#include <stdio.h>
#include <assert.h>
//int my_strlen(const char*str)
//{
//	int count = 0;
//	assert(str != NULL);//保证指针的有效性
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{//实现strlen函数
//	char arr[] = "abcdef";
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int My_strlen(const char*str)
//{
//	
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = My_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	//返回一小端
//	//返回0大端
//	return*(char*)&a;
//}
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序		
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);a=-1 ,b=-1 ,c=255
//	return 0;
//}

#include <string.h>

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float *pFloat = (float*)&n;
//	printf("n的值为:%d\n", n);
//	printf("*float的值为:%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}

//int main()
//{
//	//char*p = "abcdef";//常量不可改变
//	const char*p = "abcdef";
//	*p = 'w';
//	printf("%s\n", p);
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcedf";
//	const char *p1 = "abcdef";//常量字符串相同不用开辟新空间
//	const char *p2 = "abcdef";
//}

//int main()
//{	//指针数组----错误用法
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int *arr[] = { &a,&b,&c,&d };
//	return 0;
//}

//int main()
//{//指针数组用法
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int *parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{//数组指针-指针
//	//int *p = NULL;//p是整形指针 - 指向整形的指针 - 可以存放整形数组
//	//char*pc = NULL;//pc 是字符指针 - 指向字符的指针 - 可以存放字符的指针
//	//				//	数组指针 - 指向数组的指针 - 存放数组的指针
//	int(*p)[10];
//	//p先跟*结合，说明P是一个指针变量，然后指针指向一个大小为10整形的的数组，所以p
//	//是一个指针，指向一个数组，叫数组指针
//	//这里[]优先级高于*
//	return 0;
//}

//int main()
//{//---数组指针写法
//	char*arr[5];
//	char*(*p)[5] = &arr;
//	int arr1[10] = { 0 };
//	int(*pa)[10] = &arr1;
//	return 0;
//}
//void print(int arr[3][5], int x, int y)//参数是数组的形式
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print1(int(*p)[5], int x, int y)//参数是指针的形式
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *((*p + i) + j));
//			printf("%d ", p[i][j]);
//			printf("%d ", *(p[i] + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{//----	数组指针多用于二维以上数组
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6,},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	print1(arr, 3, 5);
//	return 0;
//}

#include <stdio.h>
//---函数指针
//int Cdd(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//&函数名 和 函数名 都是函数的地址
//	/*printf("%p\n", &Cdd);
//	printf("%p\n", Cdd);*/
//	//int(*pa)(int, int) = Cdd;
//	//printf("%d\n", (pa)(2, 3));//5
	//printf("%d\n", (*pa)(2, 3));
	//printf("%d\n", Cdd(2, 3));
//	return 0;
//}

//void Print(char *str)
//{
//	printf("%s\n", str);
//}
//int main()
//{//----函数指针的地址存放
//	void(*p)(char*)=Print;
//	(*p)("hello bit");
//	return 0;
//}

//siganl 是一个函数声明，
//siganl函数的参数有两个，一个是int ,一个是函数之指针，该函数指针指向的函数参数是int,返回类型是void.
//siganl 函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int，返回类型是void.
//void(*siganl(int, void(*)(int))(int);
////简化
//typedef void(*pfun_t)(int);
//pfun_t siganl(int, pfun_t);
//typedef unsined int uint;

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	
//	return x/y;
//}
//int main()
//{   //--指针数组
//	int *arr[5];
//	//----	函数指针数组
//	int(*parr[4])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//---计算器
//void menu()
//{
//	printf("***************************\n");
//	printf("**** 1.add      2.Sub   ***\n");
//	printf("**** 3.mul      4.div   ***\n");
//	printf("**** 5.Xor      0.exit  ***\n");
//	printf("***************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfarr 是一个函数指针数组 --转移表
//	int(*pfarr[])(int, int) = { 0,add,Sub,mul,div,Xor};
//
//	do 
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfarr[input](x,y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	} while (input);
//	
//
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int(*p)[10] = &arr;//取出数组地址
//	int(*pf)(int, int);//函数指针
//	int(*pfarr[4])(int, int);//pfarr是一个数组--函数指针数组
//	//ppfarr是一个指向[函数指针数组]的指针
//	int(*(*ppfarr)[4])(int, int) = &pfarr;
//	return 0;
//}

//qsort 函数用法 快速比较
//第一个参数： 待排序数组的首元素地址
//第二个参数： 待排序数组的元素个数
//第三个参数： 待排序数组的每个元素的大小 -单位是字节
//第四个参数： 是函数指针，比较两个元素所用地址--这个函数使用者自己实现
//				函数指针的两个参数是： 待比较的两个函数地址


#include <stdio.h>
#include <string.h>

//int  is_left_move(char*str1, char*str2)
//{
//	int len = strlen(str1);
//	int len1 = strlen(str2);
//	if (len != len1)
//		return 0;
//	//1.在srt1字符串中追加一个str1字符串
//	//strcat(str1,str1)//err
//	strncat(str1, str1, 6);
//	//2.判断arr2指向的字符串是否是arr1指向的字符串
//	//strstr 找字串的
//	char*ret = strstr(str1, str2);
//	if(ret==NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	//两数组arr1，arr2中内容是否是arr1左旋
//
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//int FindNum(int arr[3][3],int k,int row,int col)
//{
//	int x = 0;
//	int y = col- 1;
//	while (x<=row-1 && y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//		
//	}
//	找不到
//	return 0;
//}
//int FindNum(int arr[3][3], int k, int* px, int*py)
//{
//	int x = 0;
//	int y =  *py- 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//
//	}
//	//找不到
//	return 0;
//}
//int main()
//{   //在矩形矩阵中找一个数
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	//返回型参数
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是: %d %d", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//char* my_strcpy(char*dest,const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char*ret = dest;
//	// 拷贝src指向的字符串到dest指向的空间，包含'\0';
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{   // 自我实现strcpy函数
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* My_strcat(char*dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言写法一
//	assert(src);//断言写法二
//	//找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//char* my_strcat1(char*dest,const char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言写法一
//	assert(src);//断言写法二
//	//找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{   //自我实现strcat 追加函数
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	My_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//} 

#include <stdio.h>
#include <assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;//小于
//	
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{	//实现strcmp 比较函数
//	char* p1 = "abcde";
//	char* p2 = "abcde";
//	int ret = My_strcmp(p1, p2);
//	if(ret==0)
//	printf("两者相同\n");
//	else
//	printf("两者不相同\n");
//	return 0;
//}
//
//int My_strcmp(const char*str1, const char*str2)
//{
//	assert(*str1&&*str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
#include <stdio.h>
#include <assert.h>
//
//char* my_strstr(const char*p1, const char*p2)
//{
//	assert(p1);
//	assert(p2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
// }
//int main()
//{	//实现strstr 查找字串函数
//	char*p1="abcdef";
//	char*p2="def";
//	int ret = my_strstr(p1,p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret); 
//	}
//	return 0;
//}

//int main()
//{   //strtok 分隔符分割函数用法
//	//char arr[] = "zpw@bitedu.tech";
//	//char*p = "@.";
//
//	//点分十进制的表示方法
//	char arr[] = "192.168.31.121";
//	char*p = ".";
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest);//断言
//	assert(src);
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest + count)= *((char*)src + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	//实现 memmove 拷贝内存重叠函数
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, sizeof(arr));
//	return 0;
//}


//int main()
//{
//
//
//	return 0;
//}

//void maue()
//{
//	printf("90分以上     :A\n");
//	printf("80到90(含80) :B\n");
//	printf("70到80(含70) :C\n");
//	printf("60到70(含60) :D\n");
//	printf("60以下       :E\n");
//}
//int main()
//{
//	maue();
//	int i, input;
//	printf("请输入成绩:>\n");
//	scanf_s("%d", &input);
//	i = input / 10;
//	switch (i)
//	{
//	case 10:
//		printf("A\n");
//		break;
//	case 9:
//		printf("A\n");
//		break;
//	case 8:
//		printf("B\n");
//		break;
//	case 7:
//		printf("C\n");
//		break;
//	case 6:
//		printf("D\n");
//		break;
//	case 5:
//		printf("E\n");
//		break;
//	default :
//		printf("请输入有效数字\n");
//		break;
//	}
//
//	return 0;
//}

#include <math.h>

//int main()
//{
//	int  i,j=1, sum, n = 0;
//	sum = 0;
//	printf("please input n(n<10): \n");
//	scanf_s("%d", &n);
//	for (i=1;i<=n;i++)
//	{
//		j = pow(i, 3);
//		sum += j;
//	}
//	
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>
//main()
//{
//	short i = 65537;
//	int j = i + 1;
//	printf("i = %d, j = %d\n", i, j);
//}





//#include <stdio.h>
//int main()
//{	//右上三角
//	int i,j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			while (j < i)
//			{
//				printf("\t");
//				j++;
//			}
//			printf("%d*%d=%2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{	//左上三角
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			if (j >= i)
//				printf("%d*%d=%2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{//左上
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			if (j >= i)
//				printf("%d*%d=%-2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{	//右下三角
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9 - i; j++)
//		{
//			printf("\t");
//		}
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9-i; j++)
//		{
//			printf("\t");
//		}
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include <stdio.h>
// 
//int main()
//{
//	int arr[50];
//	int i, n;
//	int j = 0;
//	int l = 0;
//	printf("Please input the size of array:\n ");
//	scanf_s("%d", &n);
//	printf("Please input the element of the array one by one: \n");
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, j, a = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		}
//		a++;
//	}
//	printf("%d", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("%d", sizeof(int*));
//	return 0;
//}