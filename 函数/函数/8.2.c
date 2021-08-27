#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned long long num = 0;
//	scanf("%lld", &num);
//	print(num);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	char arr[] = {0};
//	scanf("%c", arr);
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}

//int fac1(int n)
//{
//	int i = 1;
//	int ret = 1;
//	for (i = 2; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac1(n);
//	printf("%d\n", ret);
//	ret = fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}

//描述第n个斐波那契
//1,1,2,3,5,8,13,21,34,55
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return n;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}//递归
//Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}//递代
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	TDD-测试驱动开发
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("count=%d\n", count);
//	return 0;
//}

//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//塔问题，A三个盘子借助B移动到C，要大的盘子在下面
//void Hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//		printf("%c->%c ", A, C);
//	else{
//		Hanoi(n - 1, A, C, B);
//		printf("%c->%c ", A, C);
//		Hanoi(n - 1, B, A, C);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Hanoi(n,'A','B','C');
//	return 0;
//}

//#include<stdio.h>
//void Hanoi(int n, char A, char B, char C)
//
//{
//	if (n == 1)
//	{
//		printf("%c->%c ", A, C);
//	}
//	else
//	{
//		Hanoi(n - 1, A, C, B);
//		printf("%c->%c ", A, C);
//     	Hanoi(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Hanoi(n, 'A', 'B', 'C');
//	return 0;
//}

//int main()
//{
//	int arrA[] = { 1, 2, 3 };
//	int arrB[3] = { 0 };
//	int arrC[3] = { 0 };
//	int x = 1;
//	int i = 0,j=0;
//	for (i = 0; i < 3; i++)
//	{
//		if (arrA[i] - arrC[j]==1);
//		{
//			arrC[j] = arrA[i];
//			arrA[i] = 0;
//		}
//		else if (arrA[i] >arrC[j])
//		{
//			if (arrA[i] < arrB[j])
//			{
//				arrB[j] = arrA[i];
//				arrA[i] = 0;
//			}
//		}
//	}
//		
//	return 0;
//}

//青蛙跳台阶，他一次跳一节或两节，跳到n节有多少种方法
//1,2,3,5,8,13

int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int tiao(int n)
{
	if (n <= 2)
		return  n;
	else
		return tiao(n - 1) + tiao(n - 2);
}
int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	i = tiao(n);
	printf("i=%d\n",i);
	return 0;
}