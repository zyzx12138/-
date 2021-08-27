//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////void menu()
////{
////	printf("**********************************\n");
////	printf("****    1.play      0.exit    ****\n");
////	printf("**********************************\n");
////}
////void game()
////{
////	int red=0;
////	int guess=0;
////	red = rand() % 100 + 1;
////	printf("开始猜数字游戏\n");
////	while (1)
////	{
////		
////		printf("请输入数字>:");
////		scanf("%d", &guess);
////		//printf("%d\n", red);
////		if (guess > red)
////		{
////			printf("值大了\n"); 
////		}
////		else if (guess < red)
////		{
////			printf("值小了\n");
////		}
////		else
////		{
////			printf("猜对了\n"); break;
////		}
////			
////	}
////}
////int main()
////{
////	int n;
////	srand(( int)time(NULL));//利用时间戳生成随机数
////	menu();
////	do
////	{
////		printf("是否开始游戏（1/0）>:");
////		scanf("%d", &n);
////		if (n == 1)
////		{
////			game(); continue;//如果是break玩了一次后直接退出
////		}
////		if (n == 0)
////		{
////			printf("游戏结束\n"); break;
////		}
////		else
////			printf("输入错误\n");
////	} while (n);
////	return 0;
////}
//
//void menu()
//{
//	printf("************************\n");
//	printf("*** 1.play   0.exit  ***\n");
//	printf("************************\n");
//}
//void game()
//{
//	//生成一个随机数
//	int ret = 0;
//	//那时间戳来设置随机数的生成起点
//	//time_t time(time_t *timer)
//	//time_t
//	int guess = 0;
//	ret = rand() % 100 + 1;//生成1-100之间随机数
//	//printf("%d\n", ret);
//	printf("游戏开始\n");
//	while (1)
//	{
//		printf("请猜数字：> ");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n"); break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	menu();
//	do{
//		
//		printf("请选择是否开始游戏(1/0)>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game(); break;
//		case 0:
//			printf("退出游戏\n"); break;
//		default:
//			printf("选择错误\n"); break;
//		}
//	} while (input);
//	return 0;
//}