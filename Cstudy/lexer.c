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
			printf("�ҵ��ˣ��±���:%d\n", mid);
			break;
		}
		if (left > right)
			printf("�Ҳ���\n");
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
//		printf("��������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("����ɹ�\n");
//			break;
//		}
//		if (i == 3)
//			printf("������󣬼����˳�����\n");
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
//		printf("��������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("����ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//		if (i == 3)
//			printf("����ʧ�ܣ������˳�����\n");
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
//		printf("�ҵ����±���%d\n", mid);
//		break;
//		}
//		if (left > right)
//		printf("�Ҳ���\n");
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
//	for (n = 1; n <= 10; n++)//����׳����
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
//	printf("��ӭ\n");
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
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//			printf("��ϲ��¶���\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	srand ((unsigned int)time(NULL));
//	do
//	{
//		mean();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
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
//	printf("��λ������:%d\n", e);
//	printf("ʮλ������:%d\n", d);
//	printf("��λ������:%d\n", c);
//	printf("ǧλ������:%d\n", b);
//	printf("��λ������:%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	printf("��������������\n");
//	scanf_s("%d%d", &a, &b);
//
//	printf("������ǣ�%d", (a > b ? a : b));
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
//	printf("����������:> ");
//	scanf_s("%d", &num);
//	if ((num % 2 )== 0)
//	{
//		printf("%d��ż��\n", num);
//	}
//	else
//	{
//		printf("%d������\n", num);
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
//	// ����srcָ����ַ�����destָ��Ŀռ䣬����'\0';
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
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
//	assert(dest != NULL);//����д��һ
//	assert(src);//����д����
//	//�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
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

