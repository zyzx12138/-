//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////void menu()
////{
////	printf("**********************************\n");
////	printf("****    1.play      0.exit    ****\n");
////	printf("**********************************\n");
////}
////void game()
////{
////	int red=0;
////	int guess=0;
////	red = rand() % 100 + 1;
////	printf("��ʼ��������Ϸ\n");
////	while (1)
////	{
////		
////		printf("����������>:");
////		scanf("%d", &guess);
////		//printf("%d\n", red);
////		if (guess > red)
////		{
////			printf("ֵ����\n"); 
////		}
////		else if (guess < red)
////		{
////			printf("ֵС��\n");
////		}
////		else
////		{
////			printf("�¶���\n"); break;
////		}
////			
////	}
////}
////int main()
////{
////	int n;
////	srand(( int)time(NULL));//����ʱ������������
////	menu();
////	do
////	{
////		printf("�Ƿ�ʼ��Ϸ��1/0��>:");
////		scanf("%d", &n);
////		if (n == 1)
////		{
////			game(); continue;//�����break����һ�κ�ֱ���˳�
////		}
////		if (n == 0)
////		{
////			printf("��Ϸ����\n"); break;
////		}
////		else
////			printf("�������\n");
////	} while (n);
////	return 0;
////}
//
//void menu()
//{
//	printf("************************\n");
//	printf("*** 1.play   0.exit  ***\n");
//	printf("************************\n");
//}
//void game()
//{
//	//����һ�������
//	int ret = 0;
//	//��ʱ�����������������������
//	//time_t time(time_t *timer)
//	//time_t
//	int guess = 0;
//	ret = rand() % 100 + 1;//����1-100֮�������
//	//printf("%d\n", ret);
//	printf("��Ϸ��ʼ\n");
//	while (1)
//	{
//		printf("������֣�> ");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess<ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n"); break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	menu();
//	do{
//		
//		printf("��ѡ���Ƿ�ʼ��Ϸ(1/0)>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game(); break;
//		case 0:
//			printf("�˳���Ϸ\n"); break;
//		default:
//			printf("ѡ�����\n"); break;
//		}
//	} while (input);
//	return 0;
//}