#define _CRT_SECURE_NO_WARNINGS 1

//����һ��ѧ��-����
//����
//����
//�绰
//�Ա�

//struct �ṹ��ؼ���  stu-�ṹ���ǩ   struct  stu-�ṹ������
//struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//���涨��һ���ṹ������
//}s1,s2,s3;//s1,s2,s3 ������ȫ�ֽṹ�����
//typedef struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//���涨��һ���ṹ������
//}stu;//s1,s2,s3 ������ȫ�ֽṹ�����
//
//int main()
//{
//	struct stu s1 = {"����"��20,"15458544544","��"};
//	stu s2 = {"��",30,"5","��"};//�����ֲ��ṹ�����
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
////};
//
//int main()
//{
//	char arr[] = "hello world";
//	struct T t = { "hehe", { 100, 'W', "hello bit", 3.14 }, arr };
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.pc);//hello world
//	printf("%c\n", t.s.c);//W
//	printf("%d\n", t.s.a);//100
//	printf("%s\n", t.s.arr);//hello bit
//	printf("%lf\n", t.s.d);//3.14
//	return 0;
//}

typedef struct Stu
{
	char name[20];
	short age;
	char tyle[12];
	char sex[5];
}Stu;

void print1(Stu s)
{
	printf("name:%s\n", s.name);
	printf("age:%d\n", s.age);
	printf("tele:%s\n", s.tyle);
	printf("sex:%s\n", s.sex);
}
void print2(Stu* s)
{
	printf("name:%s\n", s->name);
	printf("age:%d\n", s->age);
	printf("tele:%s\n", s->tyle);
	printf("sex:%s\n", s->sex);
}

int main()
{
	Stu s= { "����",40,"15179440301", "��" };
	print1(s);
	print2(&s);
	return 0;
}