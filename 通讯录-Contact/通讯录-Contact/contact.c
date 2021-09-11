#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void Initcontact(struct Contact* ps)
{	
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//���ļ����Ѿ����ڵ�ͨѶ¼��Ϣ���ص�ͨѶ¼��
	LoadContact(ps);
}

void CheckCapacity(struct Contact* ps);
//���ļ����Ѿ����ڵ�ͨѶ¼��Ϣ���ص�ͨѶ¼��
void LoadContact(Contact* ps)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact:%s\n", strerror(errno));
		return;
	}
	//��ȡ�ļ��ŵ�ͨѶ¼
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfRead);
	pfRead = NULL;
}

//���ݺ���
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		ps->capacity += 2;
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 2)*sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

//���Ӻ���
void AddContact(struct Contact* ps)
{
	CheckCapacity(ps);
	
	{
		printf("������������>");
		scanf("%s", ps->data[ps->size].name);
		printf("���������䣻>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰��>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ��>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}


//�����Ƿ���name
static int FindByName(const struct Contact *ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

//���ٺ���
void DelContact(struct Contact* ps)
{
	//���������
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		char name[MAX_NAME];
		printf("������Ҫɾ��������:>");
		scanf("%s", name);
		int pos = FindByName(ps, name);

		//ɾ��
		if (pos==-1)
		{
			printf("û�������\n");
		}
		else
		{
			int j = 0;
			for (j = pos; j < ps->size-1; j++)
			{
				ps->data[j] = ps->data[j + 1];
			}
			ps->size--;
			printf("%s��ɾ���ɹ�\n", name);
		}
	}
}

//���Һ���
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����;>");
	scanf("%s", name);
	
	int pos=FindByName(ps,name);
	if (pos == -1)
	{
		printf("û�������\n");
	}
	else
	{
		printf("���ҳɹ�:>\n");
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

//����ĳ���˵���Ϣ
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ĵ��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("û�������\n");
	}
	else
	{
		printf("������������>");
		scanf("%s", ps->data[pos].name);
		printf("���������䣻>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰��>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ��>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}

//��ӡͨѶ¼
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("��ʼ��ӡ\n");
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name, 
				ps->data[i].age, 
				ps->data[i].sex, 
				ps->data[i].tele, 
				ps->data[i].addr);
		}
	}
}

//����
void SortContact(struct Contact* ps)
{
	int i = 0;
	for (i = 0; i < ps->size-1; i++)
	{
		int j = 0;
		for (j = i; j < ps->size - 1 - i; j++)
		{
			if (1 == strcmp(ps->data[j].name, ps->data[j + 1].name))
			{
				struct PeoInfo tmp[10] = { 0 };
				tmp[1]=ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = tmp[1];
			}
		}
	}
	printf("����ɹ�\n");
}

void SaveContact(struct Contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact:%s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pfWrite);
	}
	printf("�洢�ɹ�\n");
	fclose(pfWrite);
	pfWrite = NULL;
}
void DestroyContact(struct Contact*ps)
{
	free(ps->data);
	ps->data = NULL;
}