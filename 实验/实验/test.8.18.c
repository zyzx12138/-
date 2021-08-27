//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include"game.h"
//void test()
//{
//	printf("*************************\n");
//	printf("**** 1.play   0.exit ****\n");
//	printf("*************************\n");
//}
//void game()
//{
//	printf("游戏开始\n");
//	char arr[ROW][COL] = { 0 };
//	char ret;
//	Initboard(arr,ROW,COL);
//	printboard(arr,ROW,COL);//打印棋盘
//	while (1)
//	{
//		srand((unsigned int)time(NULL));	
//		gameboard(arr, ROW, COL);//玩家下
//		printboard(arr, ROW, COL);
//		ret = ifboard(arr, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		winboard(arr, ROW, COL);//电脑下
//		printboard(arr, ROW, COL);
//		ret = ifboard(arr, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//	{
//		printf("玩家胜利\n");
//	}
//	else if (ret == '#')
//	{
//		printf("电脑胜利\n");
//	}
//	else if (ret == 'X')
//	{
//		printf("平局\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	do
//	{
//		test();
//		scanf("%d", &a);
//		if (a == 1)
//		{
//			game();
//		}
//		else if (a == 0)
//		{
//			printf("游戏结束\n"); break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入:");
//		}
//	} while (a);
//	return 0;
//}