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
//	//���ļ�test.txt
//	//���·��
//	//. ��ʾ��ǰ·��
//	//..��ʾ��һ��·�� ../../���ϼ�
//	//fopen("../test.txt","r")
//
//	//����·��
//	//fopen("������ϸ���ļ�·��--\-Ҫ�ı䶨��--\\")��
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
//  //д��
//	fputc('a', pfWrite);
//	fputc('R', pfWrite);
//	fputc('r', pfWrite);
//
//  //�ر�
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
//	//д��
//	//fputc('b', pf);
//	//fputc('i', pf);
//	//fputc('t', pf);
//	
//	//д��һ���ַ�
//	//fputs("hello\n", pf);
//	//fputs("world", pf);
//
//	//��ȡһ���ַ�
//	//fgetc(ch)
//	//ch = fgetc(pf);
//	//printf("%c", ch);
//	//ch = fgetc(pf);
//	//printf("%c", ch);
//
//	//��ȡһ���ַ�
//	//fgets(ch, 100, pf);
//	//printf("%s", ch);
//	//fgets(ch, 100, pf);
//	//printf("%s", ch);
//	//fgets(ch, 100, pf);
//	//printf("%s\n", ch);
//
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	//char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
//	//fputs(buf, stdout);//�������׼�����
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
//	//��ʽ��������ݵ��ļ���
//	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	
//	//��ʽ�����뺯����ָ��
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
//	//scanf/printf--����Ա�׼����/������ĸ�ʽ������������
//	//fscanf/fprintf--�������������/������ĸ�ʽ������������
//	//sscanf--���ַ����ж�ȡ��ʽ������
//	//sprintf--�ǰѸ�ʽ������������洢�����ַ���
//	struct S s = { 100,3.14,"abcdef"};
//	struct S tmp = { 0 };
//	char buf[1021] = { 0 };
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n\n", buf);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
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
//	struct S s = { "����",20, 55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//�����Ƶ���ʽ���ļ�
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
//	//��λ�ļ���λ��-CUR-ͷ  END-��  ����-���� ����-��ǰ
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
//	//�����ʵλ�õ�ƫ����
//	//int ch = ftell(pf);
//    //printf("%d\n", ch);
//	
//	//���ļ�ָ��ص���ʼλ��
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
//	//feof(); EOF - end of file - �ļ�������־
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
//		//��Ѵ�����Ϣ��ӡ����
//		perror("open file test2.txt");
//		return 0;
//	}
//	//ferror-�Ƿ���Ϊ���ʴ���ֹͣ
//	//feof-����EOF �Ƿ���Ϊ���ʽ����˳�
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