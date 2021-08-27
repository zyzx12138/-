//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	//利用结构体类型-创建一个该类型的结构体变量
//	//.			结构体变量.成员
//	//->		结构体指针->成员
//	struct Book b1={ "c语言程序设计",55 };
//	printf("书名:%s\n", b1.name);
//	printf("价格:%d\n", b1.price);
//	return 0;
//}
////int main()
////{
////	double d = 3.14;
////	double* pd=&d;
////	printf("%d\n", sizeof(pd));
////	//int a = 10;//申请了4个字节
////	//int* p = &a;//p是一个变量-指针变量
////	//*p = 20;//*-解引用操作符、间接访问操作符
////	//printf("a=%d\n", a);
////	return 0;
////}
////int main()
////{
////	int i= 0;
////	while (i < 7)
////	{
////		int a = 0;
////		i++;
////		while (a<i){
////			a++;
////			printf("*");
////		}
////		printf("\n");
////	}
////	int a = 10;
////	return 0;
////}