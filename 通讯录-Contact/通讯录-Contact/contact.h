#define _CRT_SECURE_NO_WARNINGS 1

//#define MAX 1000
#define DEFAULT_SZ 3

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};

typedef struct PeoInfo
{
	char name[MAX_NAME];//姓名
	int age;//年龄
	char sex[MAX_SEX];//性别
	char tele[MAX_TELE];//电话
	char addr[MAX_ADDR];//地址
}PeoInfo;
typedef struct Contact
{
	struct PeoInfo *data;
	int size;
	int capacity;//当前通讯录的最大容量
}Contact;

//初始化通讯录
void Initcontact(struct Contact* ps);
//把文件中已经存在的通讯录信息加载到通讯录中
void LoadContact(Contact* ps);
//增加一个信息到通讯录
void AddContact(struct Contact* ps);
//减少一个信息
void DelContact(struct Contact* ps);
//查看一个信息
void SearchContact(const struct Contact* ps);
//更改一个信息
void ModifyContact(struct Contact* ps);
//打印通讯录
void ShowContact(const struct Contact* ps);
//排序
void SortContact(struct Contact* ps);
//储存数据到文件
void SaveContact(struct Contact* ps);
//清空通讯录
void DestroyContact(struct Contact*ps);