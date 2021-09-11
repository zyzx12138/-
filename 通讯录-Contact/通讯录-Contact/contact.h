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
	char name[MAX_NAME];//����
	int age;//����
	char sex[MAX_SEX];//�Ա�
	char tele[MAX_TELE];//�绰
	char addr[MAX_ADDR];//��ַ
}PeoInfo;
typedef struct Contact
{
	struct PeoInfo *data;
	int size;
	int capacity;//��ǰͨѶ¼���������
}Contact;

//��ʼ��ͨѶ¼
void Initcontact(struct Contact* ps);
//���ļ����Ѿ����ڵ�ͨѶ¼��Ϣ���ص�ͨѶ¼��
void LoadContact(Contact* ps);
//����һ����Ϣ��ͨѶ¼
void AddContact(struct Contact* ps);
//����һ����Ϣ
void DelContact(struct Contact* ps);
//�鿴һ����Ϣ
void SearchContact(const struct Contact* ps);
//����һ����Ϣ
void ModifyContact(struct Contact* ps);
//��ӡͨѶ¼
void ShowContact(const struct Contact* ps);
//����
void SortContact(struct Contact* ps);
//�������ݵ��ļ�
void SaveContact(struct Contact* ps);
//���ͨѶ¼
void DestroyContact(struct Contact*ps);