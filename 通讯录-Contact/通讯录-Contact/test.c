#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void menu()
{
	printf("********************************\n");
	printf("**** 1.add         2.del    ****\n");//增加，减少
	printf("**** 3.search      4.modify ****\n");//查看，更改
	printf("**** 5.show        6.sort   ****\n");//显示，排序
	printf("**** 7.save        0.exit   ****\n");
	printf("********************************\n");
}
int main()
{
	int input = 0;
	//创间通讯录
	struct Contact con;
	//初始化通讯录
	Initcontact(&con);
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;//add-增加
		case DEL:
			DelContact(&con);
			break;//del-减少
		case SEARCH:
			SearchContact(&con);
			break;//search-查看
		case MODIFY:
			ModifyContact(&con);
			break;//modify-更改
		case SHOW:
			ShowContact(&con);
			break;//show-显示
		case SORT:
			SortContact(&con);
			break;//sort-排序
		case SAVE:
			SaveContact(&con);
			break;//将数据储存到文件中
		case EXIT:
			//销毁通讯录-释放动态内存
			SaveContact(&con);
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;//exit
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}