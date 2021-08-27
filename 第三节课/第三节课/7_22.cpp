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
//	int* p = &a;//取a的地址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p=20;//*-解引用操作符
//	printf("a=%d\n",a);
//	//有一种变量是用来存放地址的-指针变量
//	//printf("%p\n", &a);
//	//return 0;
//}
//宏的定义
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

//define 定义标识符常量
//#define MAX 100;
////#define 可以定义宏-带参数
//int amin()
//{
//	int a = MAX;
//	return 0;
//}

//声明外部函数
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//static 修饰局部变量
//局部变量的生命周期变长
//static 修饰全局变量
//改变了变量的作用域-让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没法使用了
//static修饰函数 
//也是改变了函数的定义域
//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;//a 是一个静态的局部变量
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
//	//typedef-类型定义-类型重定义
//	typedef unsigned int u_int;
//	//unsigned int num = 20; == u_int num = 20;
//	return 0;
//}

//int 
//float
//auto-自动break-退出case-选择char-字符类型const-长变量continue-继续default-默认enum-枚举extern-引入外部符号register-寄存器关键字
//int main()
//{
//	//register int a = 10;//建议把a定义成寄存器变量
//	//int 定义的变量是有符号的-signed int
//	//ussigned int num=1;无符号
//	//struct-结构体关键字
//	//union-联合体/共用体
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
//	//&&-逻辑与
//	//||-逻辑或
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
//	int b = a++;//++后置先使用再加一//++前置先加一再使用
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	//~- 二进制位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//正数的原码，反码，补码相同
//	//负数：
//	//原码      ------------反码     ------------补码
//	//直接按照正负			原码的符号位不变	反码加一
//	//写出的二进制序列		其他为=位取反得到
//	//-2的原码1000000000000000000000000010
//	//反码11111111111111111111111111111101
//	//补码11111111111111111111111111111110
//	//有符号位的首位是符号位1表示负数0表示正数
//	//1(负数)0000000000000000000000000000001---- 1
//	//0(正数)0000000000000000000000000000001---- -1
//	//负数在内存中存储的时候是二进制的补码
//	//11111111111111111111111111111111//补码//相反得到补码
//	//11111111111111111111111111111110//补码减一得反码
//	//10000000000000000000000000000001//反码符号位不变其他取相反的原码
//	printf("%d\n", b);//使用的，打印的是这个数的原码
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
//	//EOF-end of file-文件结束标志  -1
//	return 0;
//}