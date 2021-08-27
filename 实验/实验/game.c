//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include"game.h"
//
//void Initboard(char arr[ROW][COL],int row,int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			arr[i][j] = ' ';
//		}
//	}
//}
//void printboard(char arr[ROW][COL],int row,int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (j < col - 1)
//				printf(" %c |", arr[i][j]);
//			else
//				printf(" %c ", arr[i][j]);
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				if (j < col - 1)
//					printf("---|", arr[i][j]);
//				else
//					printf("---", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//}
//
//void gameboard(char arr[ROW][COL],int row,int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("玩家下:>\n");
//	while (1)
//	{
//		scanf("%d %d", &i, &j);
//		if (i >= 1 && i <= 3 && j >= 1 && j <= 3)
//		{
//			if (arr[i-1][j-1] == ' ')
//			{
//				arr[i-1][j-1] = '*'; break;
//			}
//			else
//			{
//				printf("该位置已被占用，请重新输入:>");
//			}
//		}
//		else
//		{
//			printf("超出范围，请重新输入:>");
//		}
//	}
//}
//
//int iffull(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			if (arr[i][j] == ' ')
//				return 0;
//		}
//	}
//	return 1;
//}
//
//
//char ifboard(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
//		{
//			return arr[i][0];
//		}
//		else if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != ' ')
//		{
//			return arr[0][i];
//		}
//		else if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
//		{
//			return arr[1][1];
//		}
//		else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' ')
//		{
//			return arr[1][1];
//		}
//	}
//	if (1 == iffull(arr,row,col))
//	{
//		return 'X';
//	}
//	else
//	{
//		return 'C';
//	}
//}
//
//void winboard(char arr[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("电脑下:>\n");
//	while (1)
//	{
//		x = rand() % row;
//		y = rand() % col;
//		if (arr[x][y] == ' ')
//		{
//			arr[x][y] = '#'; break;
//		}
//	}
//	
//}