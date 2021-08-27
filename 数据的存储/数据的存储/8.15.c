#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 10;
//	float f = 10.0;
// 	char c = 'c';
//	//unsigned cahr/short/int/long;//无符号
//	//signed cahr/short/int/long//有符号
//	return 0;
//}

//#include<stdio.h>
//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int a = 20;//四个字节-32比特位
//	//00000000000000000000000000010100-原码
//	//00000000000000000000000000010100-反码
//	//00000000000000000000000000010100-补码
//	//0x00000014
//	int b = -10;
//	//10000000000000000000000000001010-原码
//	//11111111111111111111111111110101-反码
//	//11111111111111111111111111110110-补码
//	//0xffffffe6
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	//00000000000000000000000000000001
//	int b = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	int c = a + b;
//	//1+-1;
//	//00000000000000000000000000000001
//	//11111111111111111111111111111111
//	//000000000000000000000000000000000
//	//00000000000000000000000000000000
//	//a+b=0;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a + b);
//	return 0;
//}

#include<stdio.h>

//int cheak_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//int cheak_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = cheak_sys();//返回1，小端 返回0，大端
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	//%d-打印十进制的有符号数字
//	//%u-打印十进制无符号数字
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	unsigned int i;
//	//srand((unsigned int)time(NULL));
//	//int ret = rand() % 100 + 1;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}

//int main()
// {
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}

//#include<stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("%d\n", a++);
//	printf("%d\n", ++a);
//	printf("%d\n", ++b);
//	printf("%d\n", b++);
//	printf("%d %d %d %d", a++, ++a, ++b, b++);
//	return 0;
// }

#include<stdio.h>
//9.0
//1001.0
//(-1)^0 * 1.001 * 2^3
//(-1)^s * M * 2 ^ E
//9.0- s = 0;M = 1.001;E = 3

//0.5
//0.1
//(-1)^0 * 1.0 * 2^-1
//S = 0
//M = 1.0
//E = -1
//E + 127 =126//float存入内存中要加中间数127

int main()
{
	int n = 9;
	//00000000000000000000000000001001
	//0 0000000 000000000000000000001001	
	float* pFloat = (float*)&n;
	printf("n的值：%d\n", n);
	printf("*pFloat的值：%f\n", *pFloat);
	//(-1)^0 * 0.000000000000000000001001 * 2^-126
	*pFloat = 9.0;
	//1001.0
	//1.001 * 2^3
	//(-1)^0 * 1.001 * 2^3
	//0 10000010 001000000000000000000000
	//01000001000100000000000000000000
	printf("num的值：%d\n", n);
	printf("*pFloat的值：%f\n", *pFloat);
	return 0;
}

//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0 * 1.011*2^2
//	//S = 0
//	//M = 1.011
//	//E = 2
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//0x40b00000
//	return 0;
//}