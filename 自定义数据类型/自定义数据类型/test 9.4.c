#define _CRT_SECURE_NO_WARNINGS 1


//����һ���ṹ�����

//struct stu
//{
//	char name[20];
//	char sex[10];
//	char id[20];
//	int age;
//};
//int main()
//{
//	//�������� �Զ�������-�ṹ��-ö��-������
//	struct stu s1;
//	struct stu s2;
//	return 0;
//}


//�ṹ���������
//struct node
//{
//	int date;
//	struct node* next;
//};

//�ṹ��������--typedef
//typedef struct node
//{
//	int date;
//	struct node* next;
//}node;
//
//int main()
//{
//	struct node s1;
//	node s2;
//	return 0;
//}


//#include<stdio.h>
////�ṹ���ʼ��
//
//struct s
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//
//struct T
//{
//	int x;
//	struct s s;
//};
//int main()
//{
//	struct s s = { 'c', 100, 3.14, "hello world" };
//	struct T st = { 10, { 'c', 100, 3.14, "hello world" } };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%d\n",st.s.a );
//	return 0;
//}

//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct s2
//{
//	double d;
//	char c2;
//	int a;
//};
//struct s3
//{
//	char c1;
//	struct s2 s2;
//	double d;
//};
//int main()
//{
//	struct s1 s1 = { 0 };
//	struct s2 s2 = { 0 };
//	struct s3 s3 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	printf("%d\n", sizeof(s2));//16
//	printf("%d\n", sizeof(s3));//32
//	return 0;
//}

////����Ĭ�϶�����Ϊ4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////ȡ��Ĭ�϶�����
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#include<stddef.h>
//#include<stdio.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* p)
//{
//	p->a = 100;
//	p->c = 'c';
//	p->d = 3.14;
//}
////��ֵ
//void print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
////��ַ
//void print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	print1(s);
//	print2(&s);
//	return 0;
//}

//λ��--�ṹ���һ������
//������λ
//

//#include<stdio.h>
//
//struct S
//{
//	int a : 1;//1-32
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
//

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

////ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ-����
//	MALE=2,  //=3  0    0
//	FEMALE=4,// 4  =5   1
//	SECRET=8 // 5  6    2
//};
//
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	//enum Sex s = MALE;
//	//s = FEMALE;
//	//enum Color c = RED;
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}

//����-������-������

//union Un
//{
//	char c;
//	int i;
//};

//int main()
//{
//	//srand((unsigned int)(time(NULL)));
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//����1 С��
//����0 ���
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//����1 С��
//	//����0 ���
//	return u.c;
//}

//int main()
//{
//	int ret = check_sys();
//
//	if (1 ==ret )
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//enum U
//{
//	MALE
//};
//
//int main()
//{
//	enum U u = MALE;
//	printf("%d\n", sizeof(u));
//	return 0;
//}


union Un
{
	int a;//4
	char arr[5];//1  
	//���ֽ�����������������ֽ���
	//���ֽ���Ҫ�����������ı���
};
int main()
{
	union  Un u;
	printf("%d\n", sizeof(u));
	return 0;
}