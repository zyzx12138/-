#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 5 / 2;//��2��1
//	int b = 5 % 2;//��1
//	double c = 5.0 / 2;
//	printf("a=%d,b=%d,c=%lf\n", a, b,c);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	//>>--���Ʋ�����
//	//�����ƺ���һλ
//	//00000000000000000000000000010000
//	//00000000000000000000000000001000
//	a=a >> 1;
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//�����Ķ����Ʊ�ʾ�У�ԭ�룬���룬����
//	//�洢�ൺ�ڴ���ǲ���
//	//1000000000000000000000000000001--ԭ��
//	//1111111111111111111111111111110--����
//	//1111111111111111111111111111111--����
//	//
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a << 1;//a*2
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//&-��2����λ��
//	//int a = 3;
//	//int b = 5;
//	//int c = a&b;//1
//	//printf("%d\n", c);
//
//	//|-��2����λ��
//	//int a = 3;
//	//int b = 5;
//	//int c = a | b;//7
//	//printf("%d\n", c);
//	
//	//��2����λ���
//	//��ͬΪ0������Ϊ1
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d,b=%d\n", a, b);
//	//���
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//}
//int main()
//{
//	//!--���߼���--�ٱ����--���ɼ�
//	//int a = 10;
//	//int b = 0;
//	//a = a + 2;
//	//a += 2;
//
//	//a = a >> 1;
//	//a >>= 1;
//
//	//a = a & 1;
//	//a &= 1;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p=&a;//ȡ��ַ������
//	*p = 20;//�����ò�����
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(int*));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));
//
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", aizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	//~��2����λȡ��
//	//000000000000000000000000001
//	//111111111111111111111111110
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//ǰ��++����++����ʹ��
//	printf("%d\n", a++);//����++����ʹ�ã���++
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 2;
//	int c = a&&b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3,d = 4;
//	//i = a++&&++b&&d++;//a++Ϊ�ٺ���ľͲ�����
//	i = a++ || ++b || d++;//a++Ϊ�����Ͳ�����
//	printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	//int b = 0;
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//	//b = (a > 5 ? 3 : -3);
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

int get_max(int x, int y)
{
	return x > y ? x: y;
}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���ú���ʱ()�Ǻ������ò�����
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//ѧ��
//int float
//
//������һ���ṹ������-struct stu
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//ʹ��struct stu������ʹ�����һ��ѧ������s1������ʼ��
//	struct stu s1 = { "����",20,"2001202020" };
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);
//	//�ṹ��ָ��->��Ա��
//	//printf("%s\n", (*ps).name);
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//�ṹ�����.��Ա��
//	return 0;
//}

