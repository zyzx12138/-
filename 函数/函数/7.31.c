#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;//��ӡ***** world
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(50, 49);
//	printf("max=%d\n", max);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else return y;
//}

//void Swap1(int x, int y)//�д���
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�
//void Swap2(int* pa, int* pb)//�β�pa pb-��ʽ�ϵĲ���
//{
//	int temp=0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//emp=*pa;
//	//a = *pb;
//	//b = emp;
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);ʵ��//������������
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	swap1(a,b);//��ֵ����
//	printf("a=%d,b=%d\n", a, b);
//	swap2(&a,&b);//��ַ����
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//	//scanf("%d", &i);
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0)|| (x % 400 == 0))
//		return 1;
//	else return 0;
//}
//int main()
//{
//	int year = 0;
//	//scanf("%d", &year);
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int binary_search(int arr[],int k,int sz)
//{    //          ��������һ��ָ��
//	
//	int left = 0;
//	int right = sz-1;
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else{
//			return mid;
//		}
//			
//	}
//	return -1;
//}
//int main()
//{
//	int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);//���ݹ�ȥ�����׸�Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ������");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//void Add(int* p)
//{
//	(*p)++;//++���ȼ�����*
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);	
//	Add(&num);
//	printf("num=%d\n", num);	
//	Add(&num);
//	printf("num=%d\n", num);	
//	Add(&num);
//	printf("num=%d\n", num);	
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//#include<stdio.h>
////#include<string.h>
//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("%d\n", sum);
//	return 0;
//}

