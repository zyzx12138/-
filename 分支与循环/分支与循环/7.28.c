#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>//strlen-读取字符串长度
//#include<windows.h>//Sleep（）-休息多少毫秒
//#include<stdlib.h>//system-执行系统命令的一个函数
//int main()
//{
//	int i = 0;
//	char passwode[20] = {};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码；>");
//		scanf("%s", &passwode);
//		if (strcmp(passwode, "123456")==0)//==不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		printf("密码错误\n");
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left =0;
//	//int sz = sizeof(arr1) / sizeof(arr1[0])-2;
//	int right =strlen(arr1)-1;
//	while (left <=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int mid = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else 
//		{
//			printf("找到了，下标是%d\n", mid); 
//			break; 
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//	
//	return 0;
//}
//int main()
//{
	//int i = 0, j = 0;
	//long long sum = 0, ret = 1;
	//for (i = 1; i <= 3; i++)
	//{
	//	ret = ret*i;
	//	sum = sum + ret;
	//}
	//printf("sum=%lld\n",sum);
	//int i = 0;
	//long long n = 1;
	//int m = 0;
	//scanf("%d", &m);
	//for (i = 1; i <= m; i++)
	//{
	//	n= n * i;
	//}
	//printf("%d！的值%lld\n",m,n);
	//return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i < 2);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 1; i++, k++)
//		k++;
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (j=0; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	//for (表达式1-初始化部分；表达式2-条件判断部分；表达式3-调整部分)
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
	//int ret = 0;
	//int ch=0;
	//char passwode[20] = { 0 };
	//printf("请输入密码：>");
	//scanf("%s", passwode);//缓冲区还剩余一个‘\n’
	////读取一下‘\n’
	//while ((ch = getchar() )!= '\n')
	//{
	//	;
	//}
	//printf("请输入(Y/N)");
	//ret = getchar();//Y/N
	//
	//if (ret == 'Y')
	//{
	//	printf("确认成功\n");
	//}
	//else 
	//{
	//	printf("放弃确认\n");
	//}
//	return 0;
//}
//int main()
//{
//	int ch=0;
//	while ((ch = getchar()) != EOF)//文件结束标志
//	{
//		putchar(ch);
//	}
//	return 0;
//}