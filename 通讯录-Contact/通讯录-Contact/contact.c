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
	//把文件中已经存在的通讯录信息加载到通讯录中
	LoadContact(ps);
}

void CheckCapacity(struct Contact* ps);
//把文件中已经存在的通讯录信息加载到通讯录中
void LoadContact(Contact* ps)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact:%s\n", strerror(errno));
		return;
	}
	//读取文件放到通讯录
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfRead);
	pfRead = NULL;
}

//增容函数
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
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

//增加函数
void AddContact(struct Contact* ps)
{
	CheckCapacity(ps);
	
	{
		printf("请输入姓名；>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄；>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别；>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话；>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址；>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}


//查找是否有name
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

//减少函数
void DelContact(struct Contact* ps)
{
	//查找这个人
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		char name[MAX_NAME];
		printf("请输入要删除的名字:>");
		scanf("%s", name);
		int pos = FindByName(ps, name);

		//删除
		if (pos==-1)
		{
			printf("没有这个人\n");
		}
		else
		{
			int j = 0;
			for (j = pos; j < ps->size-1; j++)
			{
				ps->data[j] = ps->data[j + 1];
			}
			ps->size--;
			printf("%s已删除成功\n", name);
		}
	}
}

//查找函数
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的姓名;>");
	scanf("%s", name);
	
	int pos=FindByName(ps,name);
	if (pos == -1)
	{
		printf("没有这个人\n");
	}
	else
	{
		printf("查找成功:>\n");
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

//更改某个人的信息
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要更改的人的姓名:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("没有这个人\n");
	}
	else
	{
		printf("请输入姓名；>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄；>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别；>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话；>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址；>");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功\n");
	}
}

//打印通讯录
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("开始打印\n");
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
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

//排序
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
	printf("排序成功\n");
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
	printf("存储成功\n");
	fclose(pfWrite);
	pfWrite = NULL;
}
void DestroyContact(struct Contact*ps)
{
	free(ps->data);
	ps->data = NULL;
}