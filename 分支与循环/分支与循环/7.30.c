#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()-ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//again:
//	printf("���Խ���60���ػ������롮������ֹͣ�ػ�\n������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
void menu()
{
	printf("************************\n");
	printf("*** 1.play   0.exit  ***\n");
	printf("************************\n");
}
void game()
{
		//����һ�������
	int ret = 0;
		//��ʱ�����������������������
		//time_t time(time_t *timer)
		//time_t
	int guess=0;
	ret = rand() % 100 + 1;//����1-100֮�������
		//printf("%d\n", ret);
	printf("��Ϸ��ʼ\n");
	while (1)
	{
		printf("������֣�> ");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n"); break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); break;
		case 0:
			printf("�˳���Ϸ\n"); break;
		default:
			printf("ѡ�����\n"); break;
		}
	} while (input);
	return 0;
}

//#include<string.h>
//#include<math.h>//ƽ������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			int x = i*j;
//			printf("%d*%d=%2d ", i,j, x);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flang = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flang*1.0 / i;
//		flang = -flang;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <=100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}