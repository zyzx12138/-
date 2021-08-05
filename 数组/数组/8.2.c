#define _CRT_SECURE_NO_WARNINGS 1

//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int arr1[10] = {1,2,3};//不完全初始化，剩下的值默认初始
//	//char arr2[n];//错误方式
//	//char arr3[5] = { 'a', 98 };
//	//char arr4[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", strlen(arr4));
// 	return 0;
//}

//int main()
//{
//	int arr[5][4] = {0};
//	int i = 0;
//	for (i =0; i<5; i++);
//	{	
//		int j = 0;
//		for (j = 0; j <4; j++)
//		{
//			printf("&arr[%d][%d]=%p ", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int tmp = 0;
//			if (arr[j]>arr[j+1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//			
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.sizeof(数组名）--数组名表示整个数组  sizeof(数组名）计算整个数组的大小 单位字节
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	//2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	return 0;
//}
