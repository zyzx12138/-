#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(short*));
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//int*(p + 1)加一表示向后移动了四个字节
//	//char*(p + 1)加一表示向后移动了一个字节
//	*(p + 1) = 1;
//	return 0;
//}

//int main()
//{
//	//未初始化的指针
//	int* p;//局部的指针变量，就被初始化随机值
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		*(p++)=i;//超出部分成为野指针
//	}
//	return 0;
//}

//int* test()
//{
//	int i = 10;
//	return &i;
//}
//int main()
//{
//	int* p = test();//非法的指针
//	*p = 20;
//	return 0;
//}

//#include<windows.h>
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//初始化
//	//int* p = NULL;//NULL-用来初始化指针的，给指针赋值
//	//return 0;
//	int a = 10;
//	int *pa = &a;
//	*pa = 20;
//	//#include<windows.h>--NULL
//	pa = NULL;
//	if (pa!= NULL)
//	{
//
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p++);
//			//p = p + 1;
//	}
//	return 0;
//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	//printf("%d\n", &arr[9] - ch[0]);//非法代码
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* strlen = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - strlen;
//}
//int main()
//{
//	//
//	//strlen-求字符串长度
//	//递归-模拟实现strlen-计算器的方式1   递归的方式2
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#define N_VALUES 5 
//int main()
//{
//	int values[N_VALUES];
//	int* vp = &values[N_VALUES];
//	for (vp = &values[N_VALUES]; vp > &values[0];)//指针允许访问数组的最后一个元素的后一位指针，不允许访问第一个元素前一个元素的前一个指针
//	{
//		*--vp = 0;
//		printf("%d ", *vp);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//地址-首元素的地址
//	
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1.&arr-&数组名-数组名不是首元素的地址-数组名表示整个数组-&数组名  取出的是整个数组的地址
//	//2.sizeof(arr)-sizeof(数组名)-数组名代表的是整个数组-sizeof（数组名）计算的是整个数组的大小
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	//int*** pppa = &ppa;//三级
//	**ppa = 20;
//	printf("%d\n", a);
//	printf("%p\n", *pa);
//	printf("%p\n", **ppa);
//	return 0;
//}

//int main()//指针数组--数组--存放指针的数组
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//	//int arr[10];
//	int* arr2[3] = {&a,&b,&c};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}