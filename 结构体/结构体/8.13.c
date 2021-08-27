#define _CRT_SECURE_NO_WARNINGS 1

//描述一个学生-数据
//名字
//年龄
//电话
//性别

//struct 结构体关键字  stu-结构体标签   struct  stu-结构体类型
//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//上面定义一个结构体类型
//}s1,s2,s3;//s1,s2,s3 是三个全局结构体变量
//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//上面定义一个结构体类型
//}stu;//s1,s2,s3 是三个全局结构体变量
//
//int main()
//{
//	struct stu s1 = {"张三"，20,"15458544544","男"};
//	stu s2 = {"狗",30,"5","它"};//创建局部结构体变量
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
	Stu s= { "张三",40,"15179440301", "男" };
	print1(s);
	print2(&s);
	return 0;
}