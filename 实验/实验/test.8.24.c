#define _CRT_SECURE_NO_WARNINGS 1

#include"game2.h"
void game()
{
	printf("��Ϸ��ʼ\n");
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);
	printboard(board, ROW, COL);//��ӡ����
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:printf("�����������������\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}