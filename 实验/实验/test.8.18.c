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
//	printf("��Ϸ��ʼ\n");
//	char arr[ROW][COL] = { 0 };
//	char ret;
//	Initboard(arr,ROW,COL);
//	printboard(arr,ROW,COL);//��ӡ����
//	while (1)
//	{
//		srand((unsigned int)time(NULL));	
//		gameboard(arr, ROW, COL);//�����
//		printboard(arr, ROW, COL);
//		ret = ifboard(arr, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		winboard(arr, ROW, COL);//������
//		printboard(arr, ROW, COL);
//		ret = ifboard(arr, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//	{
//		printf("���ʤ��\n");
//	}
//	else if (ret == '#')
//	{
//		printf("����ʤ��\n");
//	}
//	else if (ret == 'X')
//	{
//		printf("ƽ��\n");
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
//			printf("��Ϸ����\n"); break;
//		}
//		else
//		{
//			printf("�����������������:");
//		}
//	} while (a);
//	return 0;
//}