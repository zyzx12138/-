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
//	//int*(p + 1)��һ��ʾ����ƶ����ĸ��ֽ�
//	//char*(p + 1)��һ��ʾ����ƶ���һ���ֽ�
//	*(p + 1) = 1;
//	return 0;
//}

//int main()
//{
//	//δ��ʼ����ָ��
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		*(p++)=i;//�������ֳ�ΪҰָ��
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
//	int* p = test();//�Ƿ���ָ��
//	*p = 20;
//	return 0;
//}

//#include<windows.h>
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//��ʼ��
//	//int* p = NULL;//NULL-������ʼ��ָ��ģ���ָ�븳ֵ
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
//	//printf("%d\n", &arr[9] - ch[0]);//�Ƿ�����
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
//	//strlen-���ַ�������
//	//�ݹ�-ģ��ʵ��strlen-�������ķ�ʽ1   �ݹ�ķ�ʽ2
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
//	for (vp = &values[N_VALUES]; vp > &values[0];)//ָ�����������������һ��Ԫ�صĺ�һλָ�룬��������ʵ�һ��Ԫ��ǰһ��Ԫ�ص�ǰһ��ָ��
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
//	printf("%p\n", arr+1);//��ַ-��Ԫ�صĵ�ַ
//	
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1.&arr-&������-������������Ԫ�صĵ�ַ-��������ʾ��������-&������  ȡ��������������ĵ�ַ
//	//2.sizeof(arr)-sizeof(������)-���������������������-sizeof�������������������������Ĵ�С
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	//int*** pppa = &ppa;//����
//	**ppa = 20;
//	printf("%d\n", a);
//	printf("%p\n", *pa);
//	printf("%p\n", **ppa);
//	return 0;
//}

//int main()//ָ������--����--���ָ�������
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