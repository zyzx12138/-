#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//简单自定义函数的运用，函数分为库函数以及自定义函数
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int x = 100;
//	int y = 200;
//	sum = add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//!逻辑反操作
//-负值
//+正值
//&取地址
//sizeof操作符的类型长度（以字节为单位）
//~对一个数的二进制按位取反
//--前置，后置--
//++前置，后置++
//*间接访问操作符（解引用操作符）
//（类型）强制类型转换
//int main()
//{
//	int arr[10] = { 0 };//10个整形元素
//	int sz = 0;
//	//10*sizeof(int)=40
//	printf("%d\n", sizeof(arr));
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	return 0;
	//计算数组的元素个数
	//个数=数组总大小/每个元素的大小

	//int a = 10;
	////sizeof 计算的是变量/类型所占空间大小 单位是字节
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof a);//4
	//printf("%d\n", sizeof int);//错误
	//return 0;

//}

//单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+双目操作符
//	//c语言中表示真假
//	//0-假
//	//非0-真
//	int a =0;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	a = 20;//赋值 ==判断相等
//	//a = a + 10; 等价于a += 10;
//	//a = a - 20; 等价于a -= 10;
//	//a = a$2; 等价于a &= 2;
//	//复合赋值符
//	//+= -= *= /= %= >>= <<= &= |= ^=
//
//
//}

//int main()
//{
//	//(二进制)位操作//%按位与//|按位或//^按位异或
//	//011//101=001//%
//	//011//101=111//|
//	//011//101=110//^
//	int a = 3;
//	int b = 5;
//	int c = a&b;
//	
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	//移动是二进制操作位00000000000000000000000000000001向前00000000000000000000000000000010
//	//<<向前移动
//	//>>向后移动
//	int b = a << 4;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 定义一个存放十个整数的数组
//		//char ch[20];
//		//float arr2[5];
//	int i = 0;
//	while (i < 10){
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	
//		//printf("%d\n", arr[4]);//下标访问模式
//	return 0;
//}



//int main()//简单的while循环
//{
//	int line = 1;
//	printf("加入现代\n");
//	while (line < 20000)
//{
//	printf("敲一行代码：%d\n",line);
//	line++;
//}
//	if (line >= 20000)
//		printf("一个好的offer");
//	return 0;
//}

//int main()//选择函数
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>：");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("一个好的offer\n");
//	else printf("回家卖红薯\n");
//	return 0;
//}

//int main()
//{
//	int a =0;
//	a = 32;
//	printf("%c\n", '\132');
//	return 0;
//}

//int main()//strlen:读取字符串长度
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	printf("\%\d\n",a);
//	return 0;
//
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	char aee1[] = "abc";
//	char aee2[] = { 'a', 'b', 'c' };
//	printf("%s\n", aee1);
//	printf("%s\n", aee2);
//}

//int main()
//{
//	int a;
//	char b;
//	scanf("%d", &a);
//	printf("0x%x\n", a);
//	return 0;
//}