#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include<string.h>
//#include<errno.h>
//#include<stdio.h>

//int main()
//{
//	//打开文件test.txt
//	//相对路径
//	//. 表示当前路径
//	//..表示上一级路径 ../../上上级
//	//fopen("../test.txt","r")
//
//	//绝对路径
//	//fopen("输入详细的文件路径--\-要改变定义--\\")；
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//#include<string.h>
//#include<errno.h>
//#include<stdio.h>
//
//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//  //写入
//	fputc('a', pfWrite);
//	fputc('R', pfWrite);
//	fputc('r', pfWrite);
//
//  //关闭
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//#include<string.h>
//#include<errno.h>
//#include<stdio.h>
//
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	printf("%c ", fgetc(pfRead));
//	printf("%c ", fgetc(pfRead));
//	printf("%c ", fgetc(pfRead));
//	
//	//
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}


//#include<Windows.h>
//#include<string.h>
//#include<stdio.h>
//
//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

//#include<Windows.h>
//#include<string.h>
//#include<stdio.h>
//
//int main()
//{
//	char ch[100] = "abcdefghijk";
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写入
//	//fputc('b', pf);
//	//fputc('i', pf);
//	//fputc('t', pf);
//	
//	//写入一行字符
//	//fputs("hello\n", pf);
//	//fputs("world", pf);
//
//	//读取一个字符
//	//fgetc(ch)
//	//ch = fgetc(pf);
//	//printf("%c", ch);
//	//ch = fgetc(pf);
//	//printf("%c", ch);
//
//	//读取一行字符
//	//fgets(ch, 100, pf);
//	//printf("%s", ch);
//	//fgets(ch, 100, pf);
//	//printf("%s", ch);
//	//fgets(ch, 100, pf);
//	//printf("%s\n", ch);
//
//	//从键盘读取一行文本信息
//	//char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//从标准输入流读取
//	//fputs(buf, stdout);//输出到标准输出流
//	//
//	//gets(buf);
//	//puts(buf);
//
//	//fclose(pf);
//	//pf = NULL;
//	return 0;
//}


//#include<stdlib.h>
//#include<stdio.h>
//#include<Windows.h>
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化输出数据到文件里
//	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	
//	//格式化输入函数到指针
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//
//	//fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	//fprintf(stdout, "%d %.2f %s\n", s.n, s.score, s.arr);
//	
//	//scanf/printf--是针对标准输入/输出流的格式化输入输出语句
//	//fscanf/fprintf--是针对所有输入/输出流的格式化输入输出语句
//	//sscanf--从字符串中读取格式化数据
//	//sprintf--是把格式化数据输出（存储到）字符串
//	struct S s = { 100,3.14,"abcdef"};
//	struct S tmp = { 0 };
//	char buf[1021] = { 0 };
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n\n", buf);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//struct S
//{
//	char name[100];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "张三",20, 55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//二进制的形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//fputs("abcdefgi", pf);
//	//定位文件的位置-CUR-头  END-后  正数-往后 负数-往前
//	fseek(pf, -4, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fseek(pf, -3, SEEK_END);
//	//相对其实位置的偏移量
//	//int ch = ftell(pf);
//    //printf("%d\n", ch);
//	
//	//把文件指针回到起始位置
//	rewind(pf);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include<stdlib.h>
//#include<errno.h>
//#include<string.h>
//#include<stdio.h>
//
//int main()
//{
//	//feof(); EOF - end of file - 文件结束标志
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	int ch = fgetc(pf);
//	printf("%d\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include<errno.h>
//#include<stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		//会把错误信息打印出来
//		perror("open file test2.txt");
//		return 0;
//	}
//	//ferror-是否因为访问错误停止
//	//feof-返回EOF 是否因为访问结束退出
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file test.txt");
		return 0;
	}
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}