#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()-执行系统命令的
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在60秒后关机，输入‘我是猪’停止关机\n请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
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
		//生成一个随机数
	int ret = 0;
		//那时间戳来设置随机数的生成起点
		//time_t time(time_t *timer)
		//time_t
	int guess=0;
	ret = rand() % 100 + 1;//生成1-100之间随机数
		//printf("%d\n", ret);
	printf("游戏开始\n");
	while (1)
	{
		printf("请猜数字：> ");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n"); break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); break;
		case 0:
			printf("退出游戏\n"); break;
		default:
			printf("选择错误\n"); break;
		}
	} while (input);
	return 0;
}

//#include<string.h>
//#include<math.h>//平方开跟
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