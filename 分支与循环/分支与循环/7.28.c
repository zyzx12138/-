#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>//strlen-��ȡ�ַ�������
//#include<windows.h>//Sleep����-��Ϣ���ٺ���
//#include<stdlib.h>//system-ִ��ϵͳ�����һ������
//int main()
//{
//	int i = 0;
//	char passwode[20] = {};
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룻>");
//		scanf("%s", &passwode);
//		if (strcmp(passwode, "123456")==0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		printf("�������\n");
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left =0;
//	//int sz = sizeof(arr1) / sizeof(arr1[0])-2;
//	int right =strlen(arr1)-1;
//	while (left <=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int mid = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else 
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid); 
//			break; 
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//	
//	return 0;
//}
//int main()
//{
	//int i = 0, j = 0;
	//long long sum = 0, ret = 1;
	//for (i = 1; i <= 3; i++)
	//{
	//	ret = ret*i;
	//	sum = sum + ret;
	//}
	//printf("sum=%lld\n",sum);
	//int i = 0;
	//long long n = 1;
	//int m = 0;
	//scanf("%d", &m);
	//for (i = 1; i <= m; i++)
	//{
	//	n= n * i;
	//}
	//printf("%d����ֵ%lld\n",m,n);
	//return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i < 2);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 1; i++, k++)
//		k++;
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (j=0; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	//for (���ʽ1-��ʼ�����֣����ʽ2-�����жϲ��֣����ʽ3-��������)
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
	//int ret = 0;
	//int ch=0;
	//char passwode[20] = { 0 };
	//printf("���������룺>");
	//scanf("%s", passwode);//��������ʣ��һ����\n��
	////��ȡһ�¡�\n��
	//while ((ch = getchar() )!= '\n')
	//{
	//	;
	//}
	//printf("������(Y/N)");
	//ret = getchar();//Y/N
	//
	//if (ret == 'Y')
	//{
	//	printf("ȷ�ϳɹ�\n");
	//}
	//else 
	//{
	//	printf("����ȷ��\n");
	//}
//	return 0;
//}
//int main()
//{
//	int ch=0;
//	while ((ch = getchar()) != EOF)//�ļ�������־
//	{
//		putchar(ch);
//	}
//	return 0;
//}