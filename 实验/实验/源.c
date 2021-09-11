//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int er(int arr[], int sz,int a)
//{
//	int i = 0;
//	int x = 0;
//	for (i = 0; i<sz; i++)
//	{
//		if (a == arr[i])
//		{
//			x=i;
//		}
//		else if(sz - 1 == i)
//		{
//			x=-1;
//		}
//	}
//	return x;
//}
//int main()
//{
//	int arr[] = { 1, 2, 4, 4, 5 };
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &a);
//	int ret = er(arr, sz,a);
//	printf("%d\n", ret);
//	return 0;
//}
#include<stdio.h>
#include<string.h>

void bullble(int* arr, int len)
{
	int i = 0;
	for (i = 0; i<len - 1; i++)
	{
		int j = 0;
		for (j = 0; j<len - i; j++)
		{
			if (*(arr)>*(arr + j + 1))
			{
				int tmp = *arr;
				*arr = *(arr + j + 1);
				*(arr + j + 1) = tmp;
			}

		}
	}
}
int main()
{
	int arr[5] = { 5, 2, 3, 1, 4 };
	int len = sizeof(arr);
	bullble(arr, len);
	return 0;
}