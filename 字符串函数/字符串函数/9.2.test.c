#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>
//int if_left_move(char* arr1, char* arr2)
//{
//	int len = strlen(arr1);
//	if (strcmp(arr1, arr2) == 0)
//		return 0;
//	strncat(arr1, arr1, len);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = if_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}

//#define row 10
//#define col 10
//
//#include<stdio.h>
//
//void Init(int arr[row][col])
//{
//	int i = 0;
//	int x = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			arr[i][j] = x++;
//		}
//	}
//}
//int if_be(int arr[row][col], int k,int* ROW,int* COL)
//{
//	int x = 0;
//	int y = col-1;
//	while (x < row&&y >= 0)
//	{
//		if (arr[x][y] == k)
//		{
//			*ROW = x;
//			*COL = y;
//			return 1;
//		}
//		else if (arr[x][y] < k)
//			x++;
//		else if (arr[x][y]>k)
//			y--;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[row][col] = { 0 };
//	Init(arr);
//	int k = 0;
//	int x = row;
//	int y = col;
//	scanf("%d", &k);
//	int ret = if_be(arr, k, &x, &y);
//	if (ret == 1)
//		printf("找到了，下标为%d %d\n", x, y);
//	else
//		printf("找不到\n");
//	return 0;
//}

//#include<assert.h>
//#include<stdio.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assrt(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串dest指向的空间，包含‘\0’
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<assert.h>
//#include<stdio.h>
//char* my_strcat(char* arr1,const char* arr2)
//{
//	//吧arr1改为dest   arr2改为src
//	assert(arr1&&arr2);
//	char* ret = arr1;
//	while (*arr1 !='\0')
//	{
//		arr1++;
//	}
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//		return (*str1-*str2);
//}

//对比两个字符串是否相等
//int my_str(char* dest, char* src)
//{
//	while (*dest++ == *src++&&*dest != '\0')
//	{
//		;
//	}
//	if (*dest == '\0'&&*src == '\0')
//		return 1;
//	else 
//		return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	//比较两个字符串的大小,从第一个字符开始比
//	//一样就下一个，依次类推
//	//>  1
//	//== 0
//	//<  -1
//	int ret=my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//void my_strncpy(char* str1,char* str2, int count)
//{
//	assert(str1 && str2);
//	while (count && (*str1++ = *str2++))
//	{
//		count--;
//	}
//	while (--count)
//	{
//		*str1++ = '\0';
//	}
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//void my_strncat(char* str1, const char* str2, int count)
//{
//	while (*str1 != '\0')
//		str1++;
//	while (count && (*str1++ = *str2++))
//		count--;
//	if (count == 0)
//		*str1 = '\0';
//}
//int main()
//{
//	char arr1[30] = "abcdefxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strncat(arr1, arr2, 4);
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<string.h>
//#include<stdio.h>
//
//int main()
//{
//	const char* p1 = "abcdef";
//	char* p2 =       "abcdqs";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 6);
//	printf("%d\n",ret);
//	return 0;
//}

//#include<string.h>
//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(char* p1, char* p2)
//{
//	assert(p1&&p2);
//	char* s1=p1;
//	char* s2=p2;
//	char* cur = p1;
//	if (*p2 == '\0')
//	{
//		return p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char *p1 = "abcddef";
//	char *p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("不存在\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//char arr[] = "zpw@bitde.tech";
//	char arr[] = "192.165.2.254";
//	char* p = ".";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	//0--  No error
//	//1--  Operation not permitted
//	//2--  No such file or directory
//
//	//errno 是全局的错误码的变量
//	//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，复制到errno中
//	//char *str = strerror(errno);
//	//printf("%s\n", str);
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

//#include<ctype.h>
//int main()
//{
//	//char ch = 'W';
//	////字母是否大写
//	//int ret=islower(ch);
//	//printf("%d\n", ret);
//
//	//char ch = tolower('W');
//	//char ch = toupper('a');
//	//putchar(ch);
//	return 0;
//}

#include<string.h>
#include<assert.h>
#include<stdio.h>
struct s
{
	char name[20];
	int age;
};
void* 	my_memcpy(void* dest,const void* src,int num)
{
	char *ret = dest;
	char* p1 = dest;
	char* p2 = src;
	assert(dest&&src);
	while (num--)
	{
		*(char*)dest = *(char*)p2;
		++(char*)dest;
		++(char*)p2;
	}
	return ret;
}
my_memmove(void* dest, void* src, int num)
{
	char* ret = dest;
	assert(dest&&src);
	if (dest<src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		num -= 1;
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main()
{
	struct s arr1[] = { { "zhangsan", 20 }, { "lisi", 30 } };
	struct s arr2[3] = { 0 };
	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//memcpy(arr3 + 2, arr3, 20);
	my_memmove(arr3 + 2, arr3, 20);//处理内存重叠的情况
	//my_memcpy(arr2, arr1, sizeof(arr1));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}