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
//////void reverse_string(char arr[])//ѭ������ʵ������
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
//void reverse_string(char arr[])//�ݹ鷽��ʵ������
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
//int DigitSum(unsigned int num)//(�ݹ�ʵ���������ֵõ�����֮��ĺ�)
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

//double Pow(int n, int k)//���ݹ�ʵ��n��k�η���
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
//�˷��ھ���
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
//	{//����ѭ���漰��ջ�����򣬷Ƿ�Խ����ʡ�
//	//����ջ���������Խ����ʻ�����i��
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

#include <stdio.h>
#include <assert.h>
//void my_strcpy(char *dest, char*src)
//{//����һ
//		while (*src !='\0')
//		{
//			*dest =*src;
//			*dest++;
//			*src++;
//		}
//		*dest = *src;
//}
//void my_strcpy(char *dest, char*src)
//{//������
//	if (*dest != NULL && *src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//void my_strcpy(char *dest, char*src)
//{//������
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//char* my_strcpy(char *dest,const char*src)
//{//������ ��ѷ���
//	char*ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);
// //��srcָ����ַ�������destָ��Ŀռ䣬������\0���ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{//srtcpy --����
////ʵ��һ��strcpy����
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
//	assert(str != NULL);//��ָ֤�����Ч��
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{//ʵ��strlen����
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
//	//����һС��
//	//����0���
//	return*(char*)&a;
//}
//int main()
//{
//	//дһ�δ���������ǵ�ǰ�������ֽ���		
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
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
//		printf("С��\n");
//	else
//		printf("���\n");
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
//		printf("С��\n");
//	else
//		printf("���\n");
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
//	printf("n��ֵΪ:%d\n", n);
//	printf("*float��ֵΪ:%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}

//int main()
//{
//	//char*p = "abcdef";//�������ɸı�
//	const char*p = "abcdef";
//	*p = 'w';
//	printf("%s\n", p);
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcedf";
//	const char *p1 = "abcdef";//�����ַ�����ͬ���ÿ����¿ռ�
//	const char *p2 = "abcdef";
//}

//int main()
//{	//ָ������----�����÷�
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int *arr[] = { &a,&b,&c,&d };
//	return 0;
//}

//int main()
//{//ָ�������÷�
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
//{//����ָ��-ָ��
//	//int *p = NULL;//p������ָ�� - ָ�����ε�ָ�� - ���Դ����������
//	//char*pc = NULL;//pc ���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ���ָ��
//	//				//	����ָ�� - ָ�������ָ�� - ��������ָ��
//	int(*p)[10];
//	//p�ȸ�*��ϣ�˵��P��һ��ָ�������Ȼ��ָ��ָ��һ����СΪ10���εĵ����飬����p
//	//��һ��ָ�룬ָ��һ�����飬������ָ��
//	//����[]���ȼ�����*
//	return 0;
//}

//int main()
//{//---����ָ��д��
//	char*arr[5];
//	char*(*p)[5] = &arr;
//	int arr1[10] = { 0 };
//	int(*pa)[10] = &arr1;
//	return 0;
//}
//void print(int arr[3][5], int x, int y)//�������������ʽ
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
//void print1(int(*p)[5], int x, int y)//������ָ�����ʽ
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
//{//----	����ָ������ڶ�ά��������
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6,},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	print1(arr, 3, 5);
//	return 0;
//}

#include <stdio.h>
//---����ָ��
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
//	//&������ �� ������ ���Ǻ����ĵ�ַ
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
//{//----����ָ��ĵ�ַ���
//	void(*p)(char*)=Print;
//	(*p)("hello bit");
//	return 0;
//}

//siganl ��һ������������
//siganl�����Ĳ�����������һ����int ,һ���Ǻ���ָ֮�룬�ú���ָ��ָ��ĺ���������int,����������void.
//siganl �����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ���������int������������void.
//void(*siganl(int, void(*)(int))(int);
////��
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
//{   //--ָ������
//	int *arr[5];
//	//----	����ָ������
//	int(*parr[4])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//---������
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
//	//pfarr ��һ������ָ������ --ת�Ʊ�
//	int(*pfarr[])(int, int) = { 0,add,Sub,mul,div,Xor};
//
//	do 
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfarr[input](x,y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	} while (input);
//	
//
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int(*p)[10] = &arr;//ȡ�������ַ
//	int(*pf)(int, int);//����ָ��
//	int(*pfarr[4])(int, int);//pfarr��һ������--����ָ������
//	//ppfarr��һ��ָ��[����ָ������]��ָ��
//	int(*(*ppfarr)[4])(int, int) = &pfarr;
//	return 0;
//}

//qsort �����÷� ���ٱȽ�
//��һ�������� �������������Ԫ�ص�ַ
//�ڶ��������� �����������Ԫ�ظ���
//������������ �����������ÿ��Ԫ�صĴ�С -��λ���ֽ�
//���ĸ������� �Ǻ���ָ�룬�Ƚ�����Ԫ�����õ�ַ--�������ʹ�����Լ�ʵ��
//				����ָ������������ǣ� ���Ƚϵ�����������ַ


#include <stdio.h>
#include <string.h>

//int  is_left_move(char*str1, char*str2)
//{
//	int len = strlen(str1);
//	int len1 = strlen(str2);
//	if (len != len1)
//		return 0;
//	//1.��srt1�ַ�����׷��һ��str1�ַ���
//	//strcat(str1,str1)//err
//	strncat(str1, str1, 6);
//	//2.�ж�arr2ָ����ַ����Ƿ���arr1ָ����ַ���
//	//strstr ���ִ���
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
//	//������arr1��arr2�������Ƿ���arr1����
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
//	�Ҳ���
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
//	//�Ҳ���
//	return 0;
//}
//int main()
//{   //�ھ��ξ�������һ����
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	//�����Ͳ���
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±���: %d %d", x, y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
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
//int main()
//{   // ����ʵ��strcpy����
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
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
//char* my_strcat1(char*dest,const char*src)
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
//int main()
//{   //����ʵ��strcat ׷�Ӻ���
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
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;//С��
//	
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
//int main()
//{	//ʵ��strcmp �ȽϺ���
//	char* p1 = "abcde";
//	char* p2 = "abcde";
//	int ret = My_strcmp(p1, p2);
//	if(ret==0)
//	printf("������ͬ\n");
//	else
//	printf("���߲���ͬ\n");
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
//			return cur;//�ҵ��Ӵ�
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
// }
//int main()
//{	//ʵ��strstr �����ִ�����
//	char*p1="abcdef";
//	char*p2="def";
//	int ret = my_strstr(p1,p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret); 
//	}
//	return 0;
//}

//int main()
//{   //strtok �ָ����ָ���÷�
//	//char arr[] = "zpw@bitedu.tech";
//	//char*p = "@.";
//
//	//���ʮ���Ƶı�ʾ����
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
//	assert(dest);//����
//	assert(src);
//	if (dest < src)
//	{
//		//ǰ->��
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (count--)
//		{
//			*((char*)dest + count)= *((char*)src + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	//ʵ�� memmove �����ڴ��ص�����
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
//	printf("90������     :A\n");
//	printf("80��90(��80) :B\n");
//	printf("70��80(��70) :C\n");
//	printf("60��70(��60) :D\n");
//	printf("60����       :E\n");
//}
//int main()
//{
//	maue();
//	int i, input;
//	printf("������ɼ�:>\n");
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
//		printf("��������Ч����\n");
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
//{	//��������
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
//{	//��������
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
//{//����
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
//{	//��������
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