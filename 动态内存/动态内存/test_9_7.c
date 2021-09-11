#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//#include<stdio.h>
//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一种方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给空间
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//#include<stdio.h>
//
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用了释放动态空间
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//#include<stdio.h>
//
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节的空间
//	//假设20个字节的内存不够
//	//希望有四十个字节的空间
//	//使用realloc来调整动态空间
//	int* ptr = realloc(p, 40);
//	if (ptr == NULL)
//	{
//		printf("追加失败\n");
//	}
//	else
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	return 0;
//}

//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//#include<stdio.h>
//
//int main()
//{
//	//1.对NULL解引用操作
//	//int* p = (int*)malloc(40);
//	////不能直接*p解引用
//	//*p = 0;
//	//if (p == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 40; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	//free(p);
//	//p = NULL;

//	//2.对动态开辟内存的越界访问
//	/*int *p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;*/

//	int *p = 10;
//	*p = 20;
//	//3.对非动态内存的非法free
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	
//	int* p2 = relloc(p, 80);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//	int* p = realloc(NULL, 40);//=malloc(40)
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	//4.使用free释放动态开辟内存的一部分
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//使用free释放动态开辟内存的一部分
//	free(p);
//	p = NULL;
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<Windows.h>
//
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//free(p);
//	////5.对同一块内存多次释放
//	//p = NULL;//会防止系统崩坏
//	//free(p);
//
//	//6.动态开辟内存忘记释放
//	while(1)
//	{
//		malloc(1);
//		Sleep(10);
//	}
//	return 0;
//}




//#include<stdlib.h>
//#include<string.h>
//#include<stdio.h>
//
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
////1.运行代码程序会出现崩溃的现象
////2.程序存在内存泄露问题
//void Test()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
////str已值的形式给p
////p是GetMemory函数的形参，只能函数内部使用
////等GeyMemory函数返回之后，动态开辟内存尚未释放
////并且无法找到，所以会照成内存泄露
//int main()
//{
//	Test();
//	return 0;
//}

//改进1
//#include<stdlib.h>
//#include<string.h>
//#include<stdio.h>
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world\n");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

////改进2
//#include<stdlib.h>
//#include<string.h>
//#include<stdio.h>
//
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test()
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world\n");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//#include<stdlib.h>
//#include<stdio.h>
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//int* test()
//{
//	//static int a=10;   静态区------可以
//	int a = 10;//栈区
//	return &a;
//}
//
//int main()
//{
//	int*p = test();
//	*p = 20;
//	return 0;
//}

//int* test()
//{
//	int* ptr = malloc(100);//堆区
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//}

//#include<string.h>
//#include<stdio.h>
//#include<stdlib.h>
//
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//#include<string.h>
//#include<stdio.h>
//#include<stdlib.h>
//
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//struct S
//{
//	int n;
//	int arr[];//未知大小-柔性数组成员-数组的大小是可以调整的
//};

//int main()
//{
//	//struct S s;
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * (sizeof(int)));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);//44=sizeof(int-a)+10*sizeof(int)
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	//struct S s;
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	//赋值
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]); 
//	}
//	//调整空间大小
//	int* ptr = realloc(ps->arr, 44);//44=sizeof(int-a)+10*sizeof(int)
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//清除
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//#include<stdlib.h>
//struct S
//{
//	int n;
//	int arr[];
//};
//
//int main()
//{
//	int i = 0;
//	struct S *p = (struct S *)malloc(sizeof(struct S) + 10 * sizeof(int));
//	p->n = 100;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	p->arr[i] = i;
//	//}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", p->arr[i]);
//	//}
//	//free(p);
//	//p = NULL;
//	struct S* ps=(struct S*)realloc(p, 124);
//	if (ps != NULL)
//	{
//		p = ps;
//	}
//	for (i = 0; i < 40; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 40; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	return 0;
//}

//#include<stdlib.h>
//#include<stdio.h>
//
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* p = (struct S*)malloc(sizeof(struct S));
//	p->n = 100;
//	p->arr = (int*)malloc(10 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	//free(p->arr);
//	//p->arr = NULL;
//	//free(p);
//	//p = NULL;
//	int* ps = (int*)realloc(p->arr, 40 * sizeof(int));
//	if (ps != NULL)
//	{
//		p->arr = ps;
//	}
//	for (i = 0; i < 40; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 40; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p->arr);
//	p->arr = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}