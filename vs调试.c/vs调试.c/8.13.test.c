#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//void test3()
//{
//	test4();
//}
//void test2()
//{
//	test3();
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}//错误的--ret在for循环中没有初始化

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("%dhehe\n",i);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//void my_strcpy(char* dest, char* str)
//{
//	while (*str != '\0')
//	{
//		*dest = *str;
//		dest++;
//		str++;
//	}
//	*dest = *str;
//}6分

//void my_strcpy(char* dest, char* str)
//{
//	while (*dest++ = *str++)
//	{
//		;
//	}
//}//7分

//void my_strcpy(char* dest, char* str)
//{
//	if (dest != NULL&&str != NULL)
//	{
//		while (*dest++ = *str++)
//		{
//			;
//		}
//	}
//}

//#include<assert.h>
//
//void my_strcpy(char* dest, char* str)
//{
//	assert(dest != NULL);//断言
//	assert(str != NULL);
//	while (*dest++ = *str++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	int a = 10;//a是分数
//	scanf("%d", &a);
//	return 0;
//}

//void my_strcpy(char* dest,const char* str)
//{
//	assert(dest != NULL);//断言
//	assert(str != NULL);
//	while (*dest++ = *str++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	const int *p = &num;
//	//const 放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p（num）的值
//	//const 放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变
//	*p = 20;
//	int n = 100;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}

#include<assert.h>
//char * my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdfe";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}