//int g_val = 20;
//static int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
#/*include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int as = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = as - 1;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是:%d\n", mid);
			break;
		}
		if (left > right)
			printf("找不到\n");
	} 

	return 0;
}*/
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登入成功\n");
//			break;
//		}
//		if (i == 3)
//			printf("密码错误，即将退出程序\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcom to bit";
//	char arr2[] = "#############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
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
//			printf("登入失败，即将退出程序\n");
//		return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit !!!!!!!";
//	char arr2[] = "######################";
//	int left = 0;
//	int right = (strlen(arr1) - 1);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//  printf("%s\n", arr2);
//
//}
//#include <stdio.h>
//int main()
//{
//	int  arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	int as = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = as - 1;
//	while (left <= right)
//	{	int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//		right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//		left = mid + 1;
//		}
//		else
//		{
//		printf("找到了下标是%d\n", mid);
//		break;
//		}
//		if (left > right)
//		printf("找不到\n");
//	}
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%s", &n, &m);
//	while (r=m%n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//}
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		int map = a;
//		a = b;
//		a = map ;
//	}
//	if (a < c)
//	{
//		int map = a;
//		a = c;
//		c = map ;
//	}
//	if (b < c)
//	{
//		int map = b;
//		a = c;
//		c = map;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount= %d\n", count);
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("\ncount = %d\n", count);
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <=9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int az = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < az; i++)
//	{
//		if (arr[i]> max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max= %d", max);
//	return 0;
//}

// #include <stdio.h>
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
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//void maen()
//{
//	printf("欢迎\n");
//	printf("######################\n");
//	printf("### 1.play 0.exit  ###\n");
//	printf("######################\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100+1;
//	while (1)
//	{
//		printf("请猜数字\n");
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
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		maen();
//		printf("请选择\n");
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
//			
//		}
//		
//	} while (input);
//	return 0;
//}
//#include <stdio.h >
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
#include <stdio.h>
//#include <string.h>
////int main()
////{
////	char arr[] = "12345655";
////	memset(arr, '*', 6);
////	printf("%s\n", arr);
////	return 0;
////}
//int main()
//{
//	char arr1[] = "how are you!";
//	char arr2[] = "##############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <time.h>
//#include <stdlib.h>
//void mean()
//{
//	printf("####################\n");
//	printf("####1.play  0.exit##\n");
//	printf("####################\n");
//
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//			printf("恭喜你猜对了\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	srand ((unsigned int)time(NULL));
//	do
//	{
//		mean();
//		printf("请选择\n");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//		}
//
//	} while (input);
//	return 0;
//
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "holle world";
//	char arr2[] = "#############";
//	strcpy(arr2,arr1);
//	printf("%s", arr2);
//}

//int main()
//{
//	int  num,a,b,c,d,e;
//	scanf_s("%d", &num);
//	a = num / 10000;
//	b = num / 1000 %10;
//	c = num / 100 % 10;
//	d = num / 10 % 10;
//	e = num % 10;
//	printf("个位数字是:%d\n", e);
//	printf("十位数字是:%d\n", d);
//	printf("百位数字是:%d\n", c);
//	printf("千位数字是:%d\n", b);
//	printf("万位数字是:%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	printf("请输入两个数：\n");
//	scanf_s("%d%d", &a, &b);
//
//	printf("最大数是：%d", (a > b ? a : b));
//
//	return 0;
//}

//int main()
//{
//	int i ;
//	int ret = 0;
//
//	for (i = 1; i <=100; i+=2)
//	{
//		ret += i;
//	}
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int num;
//	printf("请输入数字:> ");
//	scanf_s("%d", &num);
//	if ((num % 2 )== 0)
//	{
//		printf("%d是偶数\n", num);
//	}
//	else
//	{
//		printf("%d是奇数\n", num);
//	}
//	return 0;
//}

//double  My_Pow(int n, int m)
//{
//	if (m < 0)
//		return(1.0 / (Pow(n, m)));
//	if (m == 0)
//		return 1;
//	else
//		return n * Pow(n, m - 1);
//}

//int My_strlen(const char*arr)
//{
//	int count = 0;
//	assert(arr);
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}

//char* My_strcpy(char* dest, const char*src)
//{
//	char *ret = dest;
//	assert(dest);
//	assert(src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 7)
//	{
//		if (i % 3 == 0)
//			break;
//		printf("%d\n", i);
//		i++;
//	} 
//	printf("%d", i);
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
//int My_strlen(const char*arr)
//{
//	int count = 0;
//	assert(arr);
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
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


//#include <stdio.h>


//int Fac(int n)
//{	
//	if (n >= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	printf("%d\n",Fac(1));
//	return 0;
//}

