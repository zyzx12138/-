#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//#include<stdio.h>
//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ�ַ�ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û����ռ�
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
//	//�ͷſռ�
//	//free�����������ͷŶ�̬�ռ�
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
//	//������ʹ��malloc���ٵ�20���ֽڵĿռ�
//	//����20���ֽڵ��ڴ治��
//	//ϣ������ʮ���ֽڵĿռ�
//	//ʹ��realloc��������̬�ռ�
//	int* ptr = realloc(p, 40);
//	if (ptr == NULL)
//	{
//		printf("׷��ʧ��\n");
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
//	//1.��NULL�����ò���
//	//int* p = (int*)malloc(40);
//	////����ֱ��*p������
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

//	//2.�Զ�̬�����ڴ��Խ�����
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
//	//3.�ԷǶ�̬�ڴ�ķǷ�free
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
//	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
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
//	//ʹ��free�ͷŶ�̬�����ڴ��һ����
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
//	////5.��ͬһ���ڴ����ͷ�
//	//p = NULL;//���ֹϵͳ����
//	//free(p);
//
//	//6.��̬�����ڴ������ͷ�
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
////1.���д���������ֱ���������
////2.��������ڴ�й¶����
//void Test()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
////str��ֵ����ʽ��p
////p��GetMemory�������βΣ�ֻ�ܺ����ڲ�ʹ��
////��GeyMemory��������֮�󣬶�̬�����ڴ���δ�ͷ�
////�����޷��ҵ������Ի��ճ��ڴ�й¶
//int main()
//{
//	Test();
//	return 0;
//}

//�Ľ�1
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

////�Ľ�2
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
//	//static int a=10;   ��̬��------����
//	int a = 10;//ջ��
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
//	int* ptr = malloc(100);//����
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
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
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
//	int arr[];//δ֪��С-���������Ա-����Ĵ�С�ǿ��Ե�����
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
//	//��ֵ
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]); 
//	}
//	//�����ռ��С
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
//	//���
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