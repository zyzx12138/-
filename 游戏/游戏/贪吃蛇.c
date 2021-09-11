#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#define width 60
#define hight 25
#define SNAKESIZE 200//����������



int key = 72;//��ʼ���ߵ��˶���������
int changeflag = 1;//������ʶ�Ƿ�����ʳ�1��ʾ�߻�û�Ե�ʳ�0��ʾ�Ե�ʳ��
int speed = 0;//ʱ���ӳ�
struct {

	int len;
	//������¼����ÿ�����������
	int x[SNAKESIZE];
	int y[SNAKESIZE];
	int speed;
}snake;

struct
{
	int x; int y;
}food;
void gotoxy(int x, int y)//����Windows��API�����������ڿ���̨��ָ��λ��ֱ�Ӳ������������ʱ�����
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//����
void drawmap()
{
	//��ӡͼ��
	for (int _y = 0; _y < hight; _y++)
	{
		for (int x = 0; x < width; x += 2)
		{
			if (x == 0 || _y == 0 || _y == hight - 1 || x == width - 2)
			{
				gotoxy(x, _y);
				printf("��");
			}
		}
	}
	//��ӡ��ͷ
	snake.len = 3;
	snake.x[0] = width / 2;
	snake.y[0] = hight / 2;
	gotoxy(snake.x[0], snake.y[0]);
	printf("��");
	//��ӡ����
	for (int i = 1; i<snake.len; i++)
	{
		snake.x[i] = snake.x[i - 1];
		snake.y[i] = snake.y[i - 1] + 1;
		gotoxy(snake.x[i], snake.y[i]);
		printf("��");
	}
	//��ʼ��ʳ���λ��
	food.x = 20;
	food.y = 20;
	gotoxy(food.x, food.y);
	printf("��");
}

/*
*����̨���������������
*��������72
*��������80
*��������75
*��������77
*/
void snake_move()//����������
{
	int history_key = key;
	if (_kbhit())
	{
		fflush(stdin);
		key = _getch();
		key = _getch();
	}
	if (changeflag == 1)//��û�Ե�ʳ���β�Ͳ���
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
	printf("��");
	gotoxy(0, 0);
	changeflag = 1;
}
void creatfood()
{
	if (snake.x[0] == food.x && snake.y[0] == food.y)//ֻ���߳Ե�ʳ�����������ʳ��
	{
		changeflag = 0;
		snake.len++;
		if (speed <= 100)speed += 10;
		while (1)
		{
			srand((unsigned int)time(NULL));
			food.x = rand() % (width - 6) + 2;//�޶�ʳ���x��Χ������Χǽ�������ܱ�֤food.xΪż��
			food.y = rand() % (hight - 2) + 1;
			for (int i = 0; i<snake.len; i++)
			{
				if (food.x == snake.x[i] && food.y == snake.y[i])//���������ʳ���������غ����˳�
					break;
			}
			if (food.x % 2 == 0)	break;//����Ҫ���˳�ѭ��
		}
		gotoxy(food.x, food.y);	printf("��");
	}
}

int Gameover()
{
	//����Χǽ��OVER
	if (snake.x[0] == 0 || snake.x[0] == width - 2)return 0;
	if (snake.y[0] == 0 || snake.y[0] == hight - 1)  return 0;
	//����ﵽ�������OVER
	if (snake.len == SNAKESIZE)			  return 0;
	//ͷ��������OVER
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
		Sleep(200 - speed);//�ߵ��ƶ��ٶ�
	}
	return 0;
}
