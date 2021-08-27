#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void menu()
{
	printf("*******************************\n");
	printf("****   1.play     0.exit   ****\n");
	printf("*******************************\n");
}
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	printf("游戏开始\n");
	InitBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	do{
		menu();
		printf("请选择(1/0):>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n"); break;
		default:printf("选择非法，重新选择\n"); break;
		}
	} while (input);
	

	return 0;
}