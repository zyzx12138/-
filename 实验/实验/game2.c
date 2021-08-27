#define _CRT_SECURE_NO_WARNINGS 1

#include"game2.h"
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void printboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	printf("  ");
	int j = 0;
	for (j = 0; j < col; j++)
	{
		printf(" %d  ", j+1);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		j = 0;
		printf("%2d", i + 1);
		for (j = 0; j < col; j++)
		{
			if (j < col - 1)
			{
				printf(" %c |",board[i][j]);
			}
			else
			{
				printf(" %c ", board[i][j]);
			}
		}
		printf("\n ");
		printf(" ");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				if (j < col - 1)
				{
					printf("---|");
				}
				else
				{
					printf("---");
				}

			}
		printf("\n");
		}
	}
}