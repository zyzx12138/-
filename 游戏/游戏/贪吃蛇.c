#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#define width 60
#define hight 25
#define SNAKESIZE 200//蛇身的最长长度



int key = 72;//初始化蛇的运动方向，向上
int changeflag = 1;//用来标识是否生成食物，1表示蛇还没吃到食物，0表示吃到食物
int speed = 0;//时间延迟
struct {

	int len;
	//用来记录蛇身每个方块的坐标
	int x[SNAKESIZE];
	int y[SNAKESIZE];
	int speed;
}snake;

struct
{
	int x; int y;
}food;
void gotoxy(int x, int y)//调用Windows的API函数，可以在控制台的指定位置直接操作，这里可暂时不用深究
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//■○
void drawmap()
{
	//打印图框
	for (int _y = 0; _y < hight; _y++)
	{
		for (int x = 0; x < width; x += 2)
		{
			if (x == 0 || _y == 0 || _y == hight - 1 || x == width - 2)
			{
				gotoxy(x, _y);
				printf("■");
			}
		}
	}
	//打印蛇头
	snake.len = 3;
	snake.x[0] = width / 2;
	snake.y[0] = hight / 2;
	gotoxy(snake.x[0], snake.y[0]);
	printf("■");
	//打印蛇身
	for (int i = 1; i<snake.len; i++)
	{
		snake.x[i] = snake.x[i - 1];
		snake.y[i] = snake.y[i - 1] + 1;
		gotoxy(snake.x[i], snake.y[i]);
		printf("■");
	}
	//初始化食物的位置
	food.x = 20;
	food.y = 20;
	gotoxy(food.x, food.y);
	printf("○");
}

/*
*控制台按键所代表的数字
*“↑”：72
*“↓”：80
*“←”：75
*“→”：77
*/
void snake_move()//按键处理函数
{
	int history_key = key;
	if (_kbhit())
	{
		fflush(stdin);
		key = _getch();
		key = _getch();
	}
	if (changeflag == 1)//还没吃到食物，把尾巴擦掉
	{
		gotoxy(snake.x[snake.len - 1], snake.y[snake.len - 1]);
		printf("  ");
	}
	for (int i = snake.len - 1; i>0; i--)
	{
		snake.x[i] = snake.x[i - 1];
		snake.y[i] = snake.y[i - 1];
	}
	if (history_key == 72 && key == 80)	key = 72;
	if (history_key == 80 && key == 72)	key = 80;
	if (history_key == 75 && key == 77)	key = 75;
	if (history_key == 77 && key == 75)	key = 77;
	switch (key)
	{
	case 72:snake.y[0]--; break;
	case 75:snake.x[0] -= 2; break;
	case 77:snake.x[0] += 2; break;
	case 80:snake.y[0]++; break;
	}
	gotoxy(snake.x[0], snake.y[0]);
	printf("■");
	gotoxy(0, 0);
	changeflag = 1;
}
void creatfood()
{
	if (snake.x[0] == food.x && snake.y[0] == food.y)//只有蛇吃到食物，才能生成新食物
	{
		changeflag = 0;
		snake.len++;
		if (speed <= 100)speed += 10;
		while (1)
		{
			srand((unsigned int)time(NULL));
			food.x = rand() % (width - 6) + 2;//限定食物的x范围不超出围墙，但不能保证food.x为偶数
			food.y = rand() % (hight - 2) + 1;
			for (int i = 0; i<snake.len; i++)
			{
				if (food.x == snake.x[i] && food.y == snake.y[i])//如果产生的食物与蛇身重合则退出
					break;
			}
			if (food.x % 2 == 0)	break;//符合要求，退出循环
		}
		gotoxy(food.x, food.y);	printf("○");
	}
}

int Gameover()
{
	//碰到围墙，OVER
	if (snake.x[0] == 0 || snake.x[0] == width - 2)return 0;
	if (snake.y[0] == 0 || snake.y[0] == hight - 1)  return 0;
	//蛇身达到最长，被迫OVER
	if (snake.len == SNAKESIZE)			  return 0;
	//头碰到蛇身，OVER
	for (int i = 1; i<snake.len; i++)
	{
		if (snake.x[0] == snake.x[i] && snake.y[0] == snake.y[i])
			return 0;
	}
	return 1;
}
int main()
{
	system("mode con cols=60 lines=27");
	drawmap();
	while (Gameover())
	{
		snake_move();
		creatfood();
		Sleep(200 - speed);//蛇的移动速度
	}
	return 0;
}
