
#define _CRT_SECURE_NO_WARNINGS 

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//	int num = 100;
//	int *p1 = &num;
//
//	//char *p2 = p1;//c++ ���ͼ���ϸ񣬾�׼��ǿ������
//
//	int *p2(p1);//()��ʼ��  =��ֵ
//	return 0;
//}

//int main()
//{
//	int a[5]{ 1,2,3,4,5 };
//	for(int i=0;i<5;i++)
//	{
//		cout << a[i] << endl;
//	}
//	return 0;
//}

//int main()
//{
//	char arr[100]{ 0 };
//	cin >> arr;
//	cout << arr;
//	system(arr);
//	//C++�ض���   >��д  >>׷��    < <<����
//
//}


//add CPP ��������
//ģ�庯��������,ͨ�ã�����
//����ʱ���룬�����ò�����
//int add(int a, int b)
//{
//	cout << "int" << endl;
//	return a + b;
//}
//char add(char a, char b)
//{
//	return a + b;
//}
//template<class T>//ģ�庯��
//T add(T a, T b)
//{
//	cout << "T" << endl;
//	return a + b;
//}
//int main()
//{
//	cout << add(1, 2) << endl;//ԭ������������ģ�庯��
//	cout << add<int>(1, 2) <<endl;//Ҫʹ��ģ�庯����Ҫǿ��<>ָ������
//	cout << add('1', '2') << endl;
//	system("pause");
//}



#include <iostream>
using namespace std;
//namespace string1
//{
//	char str[10]{ "calc" };
//}
//namespace string2
//{
//	char str[10]{ "notepad" };
//}
////�����ռ���չ��������ͬ��ͬһ�������ռ�
////�ٲ�ʽ����
//namespace string2
//{
//	char cmd[10]{ "notepad" };
//	void show() {
//		cout << str << endl;
//	}
//}
//
////�����ռ� ����������Ƕ��
//namespace run
//{
//	namespace runit
//	{
//		namespace runintout
//		{
//			int num = 100;
//			void show()
//			{
//				cout << num << endl;
//			}
//		}
//	}
//}
//int main()
//{
//	//system(string2::str);
//	//string2::show;//�����ռ亯�������
//	run::runit::runintout::num = 199;
//	run::runit::runintout::show();
//	system("pause");
//}
//�����ռ�ʹ��using namespace ֱ�ӷ���ȫ�ֱ��������Ҷ���ȫ�ֱ�����Ҫ�������ռ䶨��֮��
//�ڲ������ⲿ
//namespace data
//{//�����ռ�û��˽�У�ȫ���������������ǹ��У����Է���
//	int num=100;
//	namespace run
//	{
//		int num = 10;
//		void show()
//		{
//			cout << num << endl;
//			//cout << :; num << endl;//::numֱ�ӷ���ȫ�ֱ����������ھ���0.
//			cout << data::num << endl;
//		}
//	}
//	
//}
//using namespace data;//ʹ�������ռ䣬ֱ�ӷ��ʵ���ȫ�ֱ���
//int main()
//{
//	num = 10;
//	run::show();
//	cin.get();
//	return 0;
//}


////���������ռ��ͬ��ȫ�ֱ����������ռ����ȫ�ֱ������ͻ
//namespace
//{
//	int x = 10;
//
//}
//int main()
//{
//
//	x = 4;
//	cout << x << endl;
//	cin.get();
//}