#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void menu()
{
	printf("********************************\n");
	printf("**** 1.add         2.del    ****\n");//���ӣ�����
	printf("**** 3.search      4.modify ****\n");//�鿴������
	printf("**** 5.show        6.sort   ****\n");//��ʾ������
	printf("**** 7.save        0.exit   ****\n");
	printf("********************************\n");
}
int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	Initcontact(&con);
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;//add-����
		case DEL:
			DelContact(&con);
			break;//del-����
		case SEARCH:
			SearchContact(&con);
			break;//search-�鿴
		case MODIFY:
			ModifyContact(&con);
			break;//modify-����
		case SHOW:
			ShowContact(&con);
			break;//show-��ʾ
		case SORT:
			SortContact(&con);
			break;//sort-����
		case SAVE:
			SaveContact(&con);
			break;//�����ݴ��浽�ļ���
		case EXIT:
			//����ͨѶ¼-�ͷŶ�̬�ڴ�
			SaveContact(&con);
			DestroyContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;//exit
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}