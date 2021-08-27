#define _CRT_SECURE_NO_WARNINGS 1

#include"game2.h"
void game()
{
	printf("游戏开始\n");
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);
	printboard(board, ROW, COL);//打印棋盘
}
void mecu()
{
	printf("**************************\n");
	printf("***   1.play  0.exit   ***\n");
	printf("**************************\n");
}
void test()
{
	int input = 0;
	do
	{
		mecu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:printf("输入错误，请重新输入\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}