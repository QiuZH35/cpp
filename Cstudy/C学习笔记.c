#include <stdio.h>
#define  _CRT_SECURE_NO_WARNINGS 
//int �����͵���˼
//mian��ǰ���int��ʾmaim�������÷���һ������ֵ

//int main()//������-��������-main�������ҽ���һ��
//{
	//�����������
	//����Ļ�����
	//�⺯�� ���˵Ķ�����ʱ����к�
	//#include
	//printf("holle.world\n");
//}
//%d--��ӡ����
//%c--��ӡ�ַ�
//%f--��ӡ��������-��ӡС��
//%p--�Ե�ַ��ʽ��ӡ
//%x--��ӡʮ����������
//%o...
//#include <stdio.h>
//int main()
//{
	//char ch = 'B';//�����ڴ�
	//printf("%c\n", ch);%c --��ӡ�ַ���ʽ������
	//
	//short int-������
	//int -����
	//int age = 20;
	//printf("%d\n",age );//%d--��ӡ����ʮ��������
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
	//float f = 5.0;�����ȸ�����
	//printf("%f\n", f);
	//double d = 3.14;˫���ȸ�����
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
	//�����������Ϊ�ֽ�
//�ֽ�
//������еĵ�λ bit������λ�� 
//�ֽ�byte kb mb gb tb pb��һ���ֽڰ˸�����λ��
//kb=1024byte....
//�������Ӳ��--ͨ�磺����1 ����0
//�����ƣ�0 1��ʮ���ƣ�0123456789��
//�߽��ƣ�0123456���˽��ƣ�01234567��
//}
//include <stdio.h>
//int main()
//{
	//����20
	//short aeg = 20;//���ڴ�����2���ֽ�=16������λ���������20
	//float weight = 99.6f;//���ڴ������ĸ��ֽڴ��
	//}
//#include <stdio.h>
//int main()
//---extern�����ⲿ ���ţ�
//{
	//{
		//�ֲ�������������
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
	//�����������ĺ�
	//int unm1 = 0;
	//int unm2 = 0;
	//int sum=0;
	/*scanfΪ���ʱ�׼
	scanf_s����C�����ṩ�ģ����Ǳ�׼C�ṩ�Ķ���VS�ṩ�ġ�
	scanf_s���ܿ�ƽ̨��������ֲ��*/
	//scanf_s("%d%d", &unm1, &unm2);
	//-----scanf���õ�ַ����*
	//sum = unm1 + unm2;
	//printf("sum =%d\n", sum);

	//return 0;
//}
//һ��C�����еĳ��������泣����const���εĳ�������
//#define����ı�ʶ��������ö�ٳ�����

//#include <stdio.h>
//---const���γ�����
//int main()
//{
	//const int n = 10;
	//int ass[n] = { 0 };

//}
//#include <stdio.h>
////---#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int ass[MAX] = { 0 };
//	printf("%d\n", MAX);
//}
//---enumö�ٳ���
//ö��--�о�
//
//�Ա��� ��Ů �����ܡ�
//��ԭɫ���죬�ƣ�����
//���ڣ�1��2��3��4��5��6��7��

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
//{����������
//    int  eun1 = 0;
//	int  eun2 = 0;
//	int  sum = 0;
//	scanf_s("%d%d", &eun1, &eun2);
//    sum = eun1 + eun2;
//	printf("=%d\n", sum);
//
//}
//----�ַ���
//#include <stdio.h>
//int main()
//{
//	char aer1[] = { 'a','b','c' };//����
//	//"abc"--'a','b','c','\0'\0��ֵΪ��
//	char aer2[] = { 'a','b','c',0 };//û�н�����(\0)���ӡ���ֵ���
//	printf("%s\n", aer1);//���abc ������bc
//	printf("%s\n", aer2);//���abc
//	//\0�ַ����Ľ�����־,�����ַ�������Ҫ
////\0ת���ַ�---�ı�ԭ������˼
////\��������ת��
//	
//
//}



//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char asdd1[] = "abc";
//	char asdd2[] = { 'a','b','c' };
//	//strlen--string-�����ַ�������
//	----strlen ��Ҫ����ͷ�ļ�<string.h>
//	printf("%d\n", strlen(asdd1));
//	printf("%d\n", strlen(asdd2));
//}
//#include <stdio.h>
//int main()
//{
	//printf("%c\n",'\'');\ת���ַ�
	//printf("%c\n","\"");

//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{������ֵ����
//	printf("%d\n", strlen("c:\test\32\test.c"));
//
//}
//

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//���������и��±꣬�±��0��ʼ
//	//����һ�����10���������ֵ�����
//	//0-9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[5]);
//	//char ch[20];//�����ַ�
//	//float arr2[10];//���嵥��������
//
//	return 0;
//}

//int Add(int x, int y)//��������
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
//{//-----whileѭ�����
//	int lien = 0;
//	printf("��ר��\n");
//	while (lien < 20000)
//	{
//		printf("ѧC��ѧC:%d\n",lien);
//		lien++;
//	}
//	if (lien>= 20000)
//		printf("����ѧ����\n");
//	return 0;
//}




//int main()
//{
//	int input = 0;
//	printf("��ר��\n");
//	printf("��Ҫ�ú�ѧϰŶ��<1/0>:");
//	scanf_s("%d", &input);
//	if(input == 1)
//		printf("�����Ѽ���Ӵ��\n");
//	else
//		printf("�ؼҷ�ţ�ɣ�û����\n");
//		return 0;
//}


//#include <stdio.h>
//int main()
//{-----	//(2����)λ����
//	//&��λ��  ��0��0��ȫ1��1
//	//|��λ��   ֻҪ��һ��1�ͳ�1��ȫ1Ҳ��1
//	//^��λ���  
//	//���������ɣ���Ӧ�Ķ�����λ��ͬ����Ϊ0����Ӧ�Ķ�����λ���죬��Ϊ1
//
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);
//	
	//�ƣ������ƣ�λ������
	//<< ����
	//>> ����
	//int a = 1;
	//int b = a<<2;//�������ƶ�
	//printf("%d\n", b);
	//printf("%d\n", a);
	//return 0;

//}
//#include <stdio.h>
//#include <limits.h>
//int main()
//{	//����������������,�����±���
//	 int a = 3;
//	 int b = 5;
//	//��ƿ
//	printf("����ǰ�� a=%d, b=%d\n",a,b );
//	b = a ^ b;//^��λ���
//	a = a ^ b;
//	b = a ^ b;
//	
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;

//	//c = a;//1
//	//a = b;//2
//	//b = c;//3
//	printf("������b=%d,a=%d\n ", a, b);
//	return 0;
//}


//int main()
//{	//��ӡ����----����ͷ�ļ�<stdio.h>
//	printf("holle,world\n");
//	return 0;
//}

#include <stdio.h>
//int main()
//{	
//	//1^1^2^2^3^3^4^4^5=5;��λ���
//	//�ҳ�����
//	int arr[] = { 1,2,3,4,5,1,2,3,4,5,7 };
//	int i = 0;
//	int ret = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������е�Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//
//	}
//	printf("����:%d\n", ret);
	//�������
	//for (i=0;i<sz;i++)
	//{ //ͳ��arr[i]��arr�����г����˼���
	//	int count = 0;//������
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
	//	printf("������%d\n", arr[i]);
	//	break;
	//}
	//}
	//}

//#include <stdio.h>
//#include <limits.h>
//#include <stdlib.h>//systemͷ�ļ�
//#include <string.h>//strcmpͷ�ļ�
//
//int main()
//{
//	
//	char input[20] = { 0 };//��������
//	//�ػ�
//	//system()--ר������ִ��ϵͳ�����
//	system("shutdown -s -t 60");//�ػ�
//again:
//	printf("��ע�⣬��ĵ��Լ�����һ�����ڹػ����������>:��������ȡ���ػ�\n");
//	scanf_s("%s", input);//%s-�ַ���
//	if (strcmp(input, "������") == 0)//�ж�input�зŵ��ǲ���"������"-strcmp--string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;//����ǰ���ж�����
//	}
//	return 0;
//}

 
//#include <string.h>
//int main()
//{
//	int lien = 0;
//	printf("��ר��\n");
//	while (lien < 20000)
//	{
//		printf("ѧC��ѧC��ÿ�춼Ҫ���ͣ���%\n", lien);
//			lien++;
//	}
//	if (lien >= 20000)
//		printf("����ѧ����\n");
//	return 0;
//}
//int main()
//{//-----whileѭ�����
//	int lien = 0;
//	printf("��ר��\n");
//	while (lien < 20000)
//	{
//		printf("ѧC��ѧC:%d\n",lien);
//		lien++;
//	}
//	if (lien>= 20000)
//		printf("����ѧ����\n");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("��ר��\n");
//	again:
//	printf("��Ҫ�ú�ѧϰŶ��<1/0>:");
//	scanf_s("%d", &input);
//	if (input == 0)
//		printf("���ɹ��ģ�\n");
//	else
//		printf("û���ˣ��ؼҷ�ţ�ɣ�\n");
//	goto again;
//	return 0;
//
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int lien = 0;
//	printf("��ר��\n");
//	while (lien < 20000)
//	{
//		printf("ÿ����һ�δ��룺%d\n", lien);
//		lien++;
//	}
//	if (lien >= 20000)
//		printf("��ϲ���ҵ�ˣ�");
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
	printf("����%d\n", ter);
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
//	printf("����%d\n", ter);
//	return 0;
//}

//
//#include <stdio.h>

//int a=100;
//ȫ�ֱ���--�ڴ���飨{}��֮��ı���
//���ڱ���--�ڴ���飨{}��֮�ڵı���
//int main()
//{
//int a=10;
	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-������ᣬ����bug
	//��ȫ�ֱ����;ֲ�����������ͬʱ���ֲ���������
//printf("%d\n", a);
//}
//#include <stdio.h>
////���������ϴ�ֵ--������
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
//int main()���ֱȽϷ�
//{
//	int aum1 = 10;
//	int aum2 = 20;
//	if (aum1 > aum2)
//		printf("�ϴ�ֵ�ǣ�%d\n", aum1);
//	else
//		printf("�ϴ�ֵ�ǣ�%d\n", aum2);
//	return 0;
//}
//----����������λ��&& ��λ��||  exp1`?exp1:exp2:(a>b?a:b);a�Ƿ����b�ǳ�a���b
//-- :++ ǰ������������ʹ�� ������ʹ������������a--,--a;++a,a++�� 
//[]�����±� �������ú���
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
//	int sum = ADD(a, b);//()--�������ò���������(int ADD(int x,int y));
//}
//
//#include <stdio.h>
//int main()
//{
//	//register int a = 10;�����a����ɼĴ�������
//	int a = 10;
//	a = -2;
//	//int ����ı������з��ŵ�
//	//signed int;
//	//unsigned int num = 1;
//	//struct --�ṹ��ؼ��֣�
//	//union--������/������
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{	//typedef--���Ͷ���-�����ض���
//	//����--С��--
//	//typedef unsigned int u_int;//���°�unsigned int����һ������
//	//unsigned int num = 20;
//	//u_int num2 = 20;
//
//
//}
//-----static ���ξֲ�����
//�ֲ��������������ڱ䳤��
//static ����ȫ�ֱ���--�����ӱ����������--�ⲿ�޷�����
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
//{	//static ���ξֲ�����
//	//�������ξֲ�������ʱ��ֲ��������������ڱ䳤�ˣ��������پֲ�����
//	static int a = 1;//�����ֲ�����a
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
//---#define --�����ʶ������
//#define MAX 100
//---#define ���Զ����--������
//---��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)//��Ŀ����
//int main()
//{
//	//int a = MAX;
//	int a = 20;
//	int b = 10;
//
//	int max = MAX(a, b);
//	//����÷�--max=MAX(a,b);
//	printf("max=%d\n", max);
//	return 0;
//}



//ֻҪ���������ڴ��з�����Ķ��Ƕ����ƵĲ��룻
//����--���룬ԭ�� ���룬��ͬ
//ԭ��---
//ֱ�Ӱ�������д������������
//����---
//ԭ��ķ���λ���䣬����λ��λȡ���õ�
//����---
//�����һ
//-2
//10000000000000000000000000000010-ԭ��
//11111111111111111111111111111101-����
//11111111111111111111111111111110-����

//#include <stdio.h>
////int
////float
//int main()
//{
//	int a = 0;//�ֲ�����--�Զ�auto int a=0;//һ��ʡ��auto
//}

//#include <stdio.h>
//------ָ��
//int main()
//{
//	int a = 10;
//	int*p=&a;//ȡ��ַ
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p =20;//*--�����ò�����,��P������
//	printf("a=%d\n", a);
//	//��һ�ֱ�����������ŵ�ַ��--ָ��
//	//&a;ȡa�ĵ�ַ
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
//{//�����Ĵ�С
//	char ch = 'w';
//	char*pc = &ch;
//	printf("%d\n", sizeof(pc));
// printf("%d\n",sizeof(char*));ָ���С32λ����4���ֽڣ�64λ8���ֽ�
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
//{//�����Ĵ�С
//	char ch = 'w';
//	char*pc = &ch;
//	printf("%d\n", sizeof(pc));
//	printf("%d\n",sizeof(char*));//ָ���С
//}
//#include <string.h>
////C���Ӷ���----�ṹ��--�����Լ����������һ������--struct
////----����һ���ṹ��
//struct Book
//{
//	char name[20];//C���Գ������
//	short price;
//};

//int main()
//{	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������",55 };
//	//���Ľṹ������
//	strcpy_s(b1.name,"C++");//strcop-string copy-�ַ�������-�⺯�� Ҫʹ��ͷ�ļ�string.h
//	printf("%s\n", b1.name);
	//struct Book *pb = &b1;
	// . �ṹ�����.��Ա
	//-> �ṹ�����->��Ա --������ָ��
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);

	//printf("%s\n", (*pb).name);//����ָ��
	//printf("%d\n", (*pb).price);
	/*printf("����:%s\n", b1.name );
	printf("�۸�:%dԪ\n",b1. price);
	b1.price = 20;
	p*//*rintf("�޸ĺ�ļ۸�:%dԪ\n", b1.price);*/
	//return 0;	
//}


//#include <stdio.h>
////-----if���
//int main()
//{	//һ��{}��Ϊ�����
//	int age = 12;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//}
//	else
//		printf("����\n");*/
//	int age = 25;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//	printf("׳��\n");
//}

#include <stdio.h>
/*int main()
{
	/*int num = 4;
	if (5 == num)
	{
		printf("hehe\n");
	}*/
	//if(num=5)//=��ֵ ==�ж�
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
//---switch ----��֧
//int main()
//{   a:
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)--���α���
//	{
//	case 1:--���γ������ʽ  break����ʡ��
//		printf("����һ\n");  case1;
//		break;				 case2;	
//	case 2:					 case3;	
//		printf("���ڶ�\n");  ......
//		break;				 printf("");	
//	case 3:					 dreak;
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
  /*  ------default: ����Ƿ�����
		printf("�������\n");
		dreak;*/

//	}
//	goto a;
//}

#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	//ctrl+z;
//	//EOF -end of file -> -1;�ļ�������ʶ
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//}
//int main()
//{ --stdout �����
//	int ch = getchar();//����--���ܼ��������һ���ַ�
//	putchar(ch);//���--��printf��඼�Ǵ�ӡ
//	printf("%c\n", ch);
//


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i ==5)
//			continue;//--����--����Ĵ��벻��ִ��ֱ����ת�жϲ��֣�������һ��ѭ��
//		printf("%d ", i);
//		//i++;
//	}
	/*while (i <= 10)
	{
		if (i == 5)
			break;//����ѭ��
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
//	printf("����������: > ");//�������룬������password������
//	//��������ʣ��һ����\n��
//	//��ȡһ��'\n'
//	scanf("%s", password);//
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
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
//int main()
//{
//	int i = 0;
//	int n =0;
//	int ter = 1;
//	scanf("%d\n", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ter = ter * i;����n�Ľ׳�
//	}
//	printf("%d\n", ter);
//	return 0;
//}

#include <stdio.h>
//-----���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int as = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = as - 1;//���±�
//
//	while (left <= right)//��ע��ֻ�������������ܼ�����ȥ
//	{
//		int mid = (left + right) / 2;//���ֲ���
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
//			break;
//		}
//		if (left > right)
//			printf("�Ҳ���\n");
//	} 
//	return 0;
//
//}

/*#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib*///.h>
//int main()
//{  �����齻��
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//---int right = sizeof arr() / sizeof(arr[0]) - 2;
//	int right = strlen(arr1) - 1;// ���ַ�������
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//ͣ��һ��
//		Sleep(1000);
//		system--ִ��ϵͳ�����һ������
//		system("cls");//�����Ļ---cls
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
//		printf("����������:>");
//		scanf("%s", password);
//		if(strcmp(password,"123456")==0)  ---strcmp�����ж��Ƿ����
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
//			printf("��������˳�����\n");
//	
//	return 0;
//}

#include <stdio.h>
//----do whileѭ��������ִ��һ��
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
//{  ����n�Ľ׳�
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
//		printf("��������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456")== 0)
//		{
//			printf("����ɹ�\n");
//			break;
//		}
//		if(i==3)
//			printf("��֤ʧ�ܣ������˳�����\n");
//	}
//	return 0;
//}

#include <stdio.h>
//int main()
//{  //����˳��
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
//	printf("%d %d %d\n",a,b,c);//ע��%d�еĿո�
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
//--�Ӵ�С���
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
//----��������
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
//#include <math.h>//----bug ����
//int main()
//{
//	int i = 0;
//	for (i=100;1<= 200;i++)
//	{
//		//�����жϵĹ���
//		//1- �Գ���---����2->i-1
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
//---����100���оŵ�����
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
//{//----//�������
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
//	int max = arr[0];//���ֵ----����Ҫע��
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
////---��ӡ�žų˷���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//%-2d--��ӡ����λ�����������
//		}
//		printf("\n");��ӡ�껻��
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


//#include <stdio.h>//��������Ϸ
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
//	//����ʱ��������������
//	ret = rand()%100+1;
//	//printf("%d\n",ret);
//	while (1)
//	{
//		printf("�������:>");
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
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));  //NULL��ָ�룬�����������ã�
//	do
//	{
//		mean();
//		printf("��ѡ��>:");
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
// 		}
//	} while (input);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//----strcpy �����ַ�����
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#########";
//					"bit\0"
//	strcpy(arr2, arr1);//...��arr2---����Ŀ�ģ�arr1---������Դ�������'\0'������ȥ
// -----���Դͷ��������Ŀ�ĵػ������
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//#include <windows.h>
////memset
////memory -�ڴ� set--����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//(arr--���飬'*'--Ҫ���õ��Ǹ�ֵ��5---���ü����ַ�) û�������Ž�"\0")
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
//	printf("���϶�Ϊ�� %lf\n", T);
//}
 
//#include <stdio.h>
//--����������ֵ������ָ������
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
//---��ַ����
//	Swap1(&a, &b);
//	printf("a= %d ,b= %d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
////----�������.����ֻ�ܱ�1������������
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
////--���ֲ���
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
//	return -1;�Ҳ���������·���-1
//}
//int main()
//{ 
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int as = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k,as);
//	if (ret == -1)
//	{
//		printf("�Ҳ���Ҫ������ :%d\n" );
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��� :%d\n",ret );
//	}
//	return 0;
//}

//#include <stdio.h>
//void Add(int *p)
//{
//	//*p++;//����д��--++������P
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
////----������Ƕ�׵���
//int main()
//{
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
////----��ʽ����
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
//	printf("%d", printf("%d", printf("%d", 43)));//4321  �ڶ���printf��ӡ�������� ��һ����ӡһ������
//	return 0;
//}

//#include <stdio.h>
//#include "add.h"//�Լ�д��ͷ�ļ���˫����
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int sum = 0;
//	//���ú���
//	sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}



//
////---�����ݹ�
#include <stdio.h>
#include <string.h>
//int main()
//{
//	printf("hehe\n"); //���ú�����ջ�����ٿռ䡣Stack overflow --ջ���
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
//{	//�������֣������ַֿ�
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
//---�ݹ�ķ���
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0��
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
//	//int len = strlen(arr);//���ַ������Ȳ�����--\0
//	//printf("%d ", len);
//	//--ģ��ʵ����һ��strlen ����
//	int len = my_strlen(arr);
//	printf("len= %d\n", len);
//
//	return 0

//int my_strlen(const char* str)
//{--//�ݹ�ʵ�ֺ���strlen
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
//{//��������num�Ľ׳�
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
//{		ѭ���ķ���
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Facl2(int n)
//{	//�����ķ���
//	if (n <= 1)
//		return 1;
//	else
//		return n * Facl2(n - 1);
//}
//int main()
//{
//	//����n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	//ret =Facl(n);//ѭ���ķ�ʽ
//	ret = Facl2(n);//�����ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//}

#include <stdio.h>
////������n��쳲���������
//����Ч�ʵ�
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
//	//TDD-������������
//	ret = Fib(n);//--��������ʵ��
//	printf("ret= %d\n", ret);
//	return 0;
////}

#include <stdio.h>
//int main()
//{
	//���鴴��
	//int arr[10] = { 1,2,3 };//����ȫ��ʼ���������Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	//char arr1[5] = { 's','b' };
	//char arr2[5] = "abc";//ok  ����\0
	//char arr3[] = "abcdef";//�����Ԫ�صĸ�����������Ĵ�С
	//printf("%d\n", sizeof(arr3));
	//sizeof ���� arr3��ռ�Ŀռ�
	//7��Ԫ��-char 7*1=7
	//printf("%d\n", strlen(arr3));
	//strlen ���ַ����ĳ���--'\0'֮ǰ���ַ�����
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
//		printf("%c ", arr[i]);//����ķ��� 
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
//{//----��ά���� ����
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
//{	//---��ά����Ĵ��淽ʽ
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
//	//ȷ��ð�����������
//	int i = 0;//������һ��Ҫ����������Ѿ�����
//	//int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{   //Ҫ֪��Ԫ�ظ���ʱҪ��������
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//			/*if (flag == 1)
//			{
//				break;
//			}*/
//		}
//	}
//}
//int main()
//{	//ð������
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
//	printf("%p\n", &arr + 1);//������һ��������ĳ���
//	return 0;
//}

#include <stdio.h>
//int main()
//{//����
//	int a = -1;
//	int b = a  >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{//����
//	int a = 5;
//	int b= a << 1;
//	printf("%d\n", b);
//	return 0;
//}

#include <stdio.h>
//int main()
//{//��������
	//������ʱ������
	/*int a = 3;
	int b = 5;
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	printf("a= %d b= %d", a, b);*/
	//�Ӽ���
	/*int a = 3;
	int b = 5;
	a = a + b;
	b = a - b;
	a = a - b;*/
	//���--ִ��Ч�ʵͣ�����ɶ��Ե�
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
//{//�����е�1
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i)&1))//���Ʒ�
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{//���ϸ�ֵ��
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
//	a = a & (~(1 << 2));//~ ��λȡ��
//	printf("%d\n", a);
//	return 0;
//
//}
//int main()
//{
//	int i = 0, a = 1 , b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//ֻҪa Ϊ�ٺ���Ͳ�������
//	//i = a++ || ++b || d++; //ֻҪaΪ��Ͳ�����������
//	printf("a= %d, b= %d, c= %d, d= %d", a, b, c, d);
//	return 0;
//}

//#include <stdio.h>
//struct stu
//{    //����һ���ṹ������
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct stu s1 = { "����",2,"202030040" };
//	struct stu *ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//�ṹ��ָ��->��Ա��
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
//{//-----//ָ�����
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
//	int *p = arr;//����ָ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d\n", arr[i]);
//		//printf("%d ", *(p + i));ָ�뷽ʽ  ���ߵȼ�
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p ===== %p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}

#include <stdio.h>
//-----����ָ��
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
//	int *arr[3] = { &a,&b,&c };//ָ������ - ���ָ��
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
//	//Init(arr, sz);�������ʼ��0��
//	Print(arr, sz);
//	Reverse(arr, sz);//����
//	Print(arr, sz);//��ӡ
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
//	//дһ��������������У����룩�м���1,(�������ƶ���תΪ������ʽ���棬����������)
//	int count = count_bit_one(a);//����һ ������������һ�������޷��������� ���һ��unsigned�޷�����
//	//int count = count_bit_one2(a);//������
//	//int count =count_bit_one3(a);//������
//	printf("count = %d", count);
//	//system("pause");system�⺯��-ִ��ϵͳ����-pause����ͣ��
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
//	//return count_bit_one(tmp);//����һ
//	while (tmp)//������
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
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
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
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		if ((m >> i & 1) == 1)
//			count++;
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("��λ��Ϊһ���У�%dλ", count);
//	printf("\n");
//	printf("ż��λ��\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		if ((m >> i & 1) == 1)
//			counts++;
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λΪһ���У�%dλ", counts);
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
//		printf("%d ", *(p + i));//��arr[i] �ȼ�
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
//----�ṹ��
//typedef struct Stu  //typedef ����ȡ��
//{    д��һ
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//Stu ����
//int main()
//{
//	Stu s1 = { "����",20,"12343455632","��" };//�ֲ�����
//	struct Stu s2 = { "����",30,"1212334455","����" };
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
//	struct t d = { "hehe",{100,'w',"hello world",3.14},arr };//Ƕ��ʽ�ṹ��
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
//void Print2(Stu*ps)//���ÿ����¿ռ�
//{   ->ָ��ʹ�� ->ָ���Ա
//	printf("name: %s\n", ps ->name);
//	printf("age: %d\n", ps ->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "����",40,"1234554321","��" };
//	//Print2���š�
//	Print1(s);//��ʱ����ϵͳ�ռ��ж��⿪��
//	Print2(&s);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{//�׳����
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
//{//�׳���ӡ�
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
//{	//�漰����������
//	struct s1 d1 = { 0 };
//	printf("%d\n", sizeof(d1));//12
//	struct s2 d2 = { 0 };
//	printf("%d\n", sizeof(d2));//8
//	struct s3 f1 = { 0 };
//	printf("%d\n", sizeof(f1));//16
//	return 0;
//}


//����Ĭ�϶�����
//#pragma pack(4)
//struct S
//{	char c1;//1
//	
//	double d;//8
//
//};
////#pragma pack()
////ȡ�����õ�Ĭ�϶�����
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
//��̬�ڴ���� �� malloc  ,realloc,  calloc
//calloc ���ڷ��ص�ַ֮ǰ������Ŀռ��ʼ��Ϊ�㣬
//realloc ���Ե�����̬�ڴ濪�٣����㹻�Ŀռ���׷�ӣ�û���㹻���ڴ����Ѱ��һ���㹻�Ŀռ俪�٣������ݿ������µĿռ䣬�Զ��ͷžɿռ�
//struct S
//{
//	int n;
//	int arr[];//��������  ---�ɵ�����С������
//};
//int main()
//{
//	int i = 0;
//	struct S*p=(struct S*)malloc(sizeof(struct S) + 10*sizeof(int));//������������ռ�
//	p->n = 100;
//	//�÷�
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",p->arr[i]);
//	}
//	free(p);//�ͷſռ�
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
//	int*arr;//��������
//};
//int main()
//{
//	int i = 0;
//	struct S*p=(struct S*)malloc(sizeof(struct S));//���ٿռ� 
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
//	//�ͷ��ڴ�---���ο��ٿռ䣬�ͷ�ʱע���Ⱥ�˳��
//	free(p->arr);
//	p->arr = NULL;
//	free(p);
	/*p = NULL;
	return 0;
}*/

#include <stdio.h>
//#define DOUBLE(X) ((X)+(X))		//��
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	printf("%d\n", ret);
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is:%d\n",X) //#�����ַ�
//int main()
//{
//	/*printf("hello world\n");
//	printf("hello ""world\n");
//	printf("hel""lo " "world\n");*///����ͬһ�������ַ����Զ�����
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
//	printf("%d\n", CTA(Class, 84));//##���԰�λ�������ߵķ��źϳ�һ�����š�������궨��ӷ�����ı�Ƭ�δ�����ʶ����
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
//{	//�Ա�ʵ�ֺ�����ƫ����
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
//#define OFFSETOF(struct_name,meber_name) (int)&( ( (struct_name*) 0)-> meber_name )//�Ȱ���ʼ��ַǿ������ת��Ϊ�ṹ��ָ�룬ָ���һ����Ա��Ȼ��ȡ��ַ��ǿ������ת��Ϊint����
//int main()
//{
//	printf("%d\n", OFFSETOF(struct s, c1));
//	printf("%d\n", OFFSETOF(struct s, a));
//	printf("%d\n", OFFSETOF(struct s, c2));
//	return 0;
//}









