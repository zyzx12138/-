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
	printf("��Ϸ��ʼ\n");
	InitBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	do{
		menu();
		printf("��ѡ��(1/0):>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n"); break;
		default:printf("ѡ��Ƿ�������ѡ��\n"); break;
		}
	} while (input);
	

	return 0;
}