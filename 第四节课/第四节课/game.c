#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void InitBoard(Board, row, col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", Board[i][j]);
			if (i < col - 1)
				printf("|");
		}
	}
}