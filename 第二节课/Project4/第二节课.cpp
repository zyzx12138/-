#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//���Զ��庯�������ã�������Ϊ�⺯���Լ��Զ��庯��
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int x = 100;
//	int y = 200;
//	sum = add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//!�߼�������
//-��ֵ
//+��ֵ
//&ȡ��ַ
//sizeof�����������ͳ��ȣ����ֽ�Ϊ��λ��
//~��һ�����Ķ����ư�λȡ��
//--ǰ�ã�����--
//++ǰ�ã�����++
//*��ӷ��ʲ������������ò�������
//�����ͣ�ǿ������ת��
//int main()
//{
//	int arr[10] = { 0 };//10������Ԫ��
//	int sz = 0;
//	//10*sizeof(int)=40
//	printf("%d\n", sizeof(arr));
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	return 0;
	//���������Ԫ�ظ���
	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С

	//int a = 10;
	////sizeof ������Ǳ���/������ռ�ռ��С ��λ���ֽ�
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof a);//4
	//printf("%d\n", sizeof int);//����
	//return 0;

//}

//��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+˫Ŀ������
//	//c�����б�ʾ���
//	//0-��
//	//��0-��
//	int a =0;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	a = 20;//��ֵ ==�ж����
//	//a = a + 10; �ȼ���a += 10;
//	//a = a - 20; �ȼ���a -= 10;
//	//a = a$2; �ȼ���a &= 2;
//	//���ϸ�ֵ��
//	//+= -= *= /= %= >>= <<= &= |= ^=
//
//
//}

//int main()
//{
//	//(������)λ����//%��λ��//|��λ��//^��λ���
//	//011//101=001//%
//	//011//101=111//|
//	//011//101=110//^
//	int a = 3;
//	int b = 5;
//	int c = a&b;
//	
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	//�ƶ��Ƕ����Ʋ���λ00000000000000000000000000000001��ǰ00000000000000000000000000000010
//	//<<��ǰ�ƶ�
//	//>>����ƶ�
//	int b = a << 4;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // ����һ�����ʮ������������
//		//char ch[20];
//		//float arr2[5];
//	int i = 0;
//	while (i < 10){
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	
//		//printf("%d\n", arr[4]);//�±����ģʽ
//	return 0;
//}



//int main()//�򵥵�whileѭ��
//{
//	int line = 1;
//	printf("�����ִ�\n");
//	while (line < 20000)
//{
//	printf("��һ�д��룺%d\n",line);
//	line++;
//}
//	if (line >= 20000)
//		printf("һ���õ�offer");
//	return 0;
//}

//int main()//ѡ����
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>��");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("һ���õ�offer\n");
//	else printf("�ؼ�������\n");
//	return 0;
//}

//int main()
//{
//	int a =0;
//	a = 32;
//	printf("%c\n", '\132');
//	return 0;
//}

//int main()//strlen:��ȡ�ַ�������
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	printf("\%\d\n",a);
//	return 0;
//
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	char aee1[] = "abc";
//	char aee2[] = { 'a', 'b', 'c' };
//	printf("%s\n", aee1);
//	printf("%s\n", aee2);
//}

//int main()
//{
//	int a;
//	char b;
//	scanf("%d", &a);
//	printf("0x%x\n", a);
//	return 0;
//}