#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	char ch = 'w';
	char* p = &ch;
	*p = 'a';
	printf("%d\n", sizeof(p));
	//printf("%c\n", ch);
	//printf("%p\n", &ch);
	//printf("%p\n", p);
	return 0;
}
//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡa�ĵ�ַ
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p=20;//*-�����ò�����
//	printf("a=%d\n",a);
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	//printf("%p\n", &a);
//	//return 0;
//}
//��Ķ���
//#define MAX(x,y) (x>y?x:y)
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else 
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//define �����ʶ������
//#define MAX 100;
////#define ���Զ����-������
//int amin()
//{
//	int a = MAX;
//	return 0;
//}

//�����ⲿ����
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//static ���ξֲ�����
//�ֲ��������������ڱ䳤
//static ����ȫ�ֱ���
//�ı��˱�����������-�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û��ʹ����
//static���κ��� 
//Ҳ�Ǹı��˺����Ķ�����
//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;//a ��һ����̬�ľֲ�����
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}





//int main()
//{
//	//typedef-���Ͷ���-�����ض���
//	typedef unsigned int u_int;
//	//unsigned int num = 20; == u_int num = 20;
//	return 0;
//}

//int 
//float
//auto-�Զ�break-�˳�case-ѡ��char-�ַ�����const-������continue-����default-Ĭ��enum-ö��extern-�����ⲿ����register-�Ĵ����ؼ���
//int main()
//{
//	//register int a = 10;//�����a����ɼĴ�������
//	//int ����ı������з��ŵ�-signed int
//	//ussigned int num=1;�޷���
//	//struct-�ṹ��ؼ���
//	//union-������/������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = (a > b ? a : b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	//&&-�߼���
//	//||-�߼���
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	int d = a&&c;
//	int e = a || c;
//	printf("d=%d\ne=%d\n", d, e);
//	return 0;
//
//}
//int main()
//{
//	char a = 96;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//++������ʹ���ټ�һ//++ǰ���ȼ�һ��ʹ��
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	//~- ������λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//������ԭ�룬���룬������ͬ
//	//������
//	//ԭ��      ------------����     ------------����
//	//ֱ�Ӱ�������			ԭ��ķ���λ����	�����һ
//	//д���Ķ���������		����Ϊ=λȡ���õ�
//	//-2��ԭ��1000000000000000000000000010
//	//����11111111111111111111111111111101
//	//����11111111111111111111111111111110
//	//�з���λ����λ�Ƿ���λ1��ʾ����0��ʾ����
//	//1(����)0000000000000000000000000000001---- 1
//	//0(����)0000000000000000000000000000001---- -1
//	//�������ڴ��д洢��ʱ���Ƕ����ƵĲ���
//	//11111111111111111111111111111111//����//�෴�õ�����
//	//11111111111111111111111111111110//�����һ�÷���
//	//10000000000000000000000000000001//�������λ��������ȡ�෴��ԭ��
//	printf("%d\n", b);//ʹ�õģ���ӡ�����������ԭ��
//	return 0;
//}
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max1;
//	max1 = max(num1, num2);
//	printf("%d\n", max1);
//	return 0;
//}
//int main()
//{
//	//EOF-end of file-�ļ�������־  -1
//	return 0;
//}