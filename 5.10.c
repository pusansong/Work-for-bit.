//实现一个函数，判断一个数是不是素数
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int judge(int n)
//{
//	int i, tmp;
//	tmp = sqrt(n);//开平方根
//	for (i = 2; i <= tmp; i++)
//	{
//		if (n%i == 0)
//		{
//			printf("%d不是素数\n", n);
//			return 0;//除的尽就直接返回0
//		}
//	}
//	return 1;//除不尽进返回1
//}
//int main()
//{
//	int i = 0;
//	printf("输入一个大于1正整数:");
//	scanf("%d", &i);
//	if (judge(i))//出现了return 1就打印
//	{
//		printf("%d是素数\n", i);
//	}
//	system("pause");
//	return 0;
//}
//创建一个数组，  实现函数init（）初始化数组、  实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//#include<stdio.h>
//#include<stdlib.h>
//void init(int in[], int data[], int n)//定义int data[], int n,为入参,int in[]为出参;
//{
//	int i;
//	for (i = 0; i <= n; i++)
//	{
//		in[i] = data[i];
//	}
//}
//void empty(int data[], int n)
//{
//	int i;
//	for (i = 0; i <= n; i++)
//	{
//		data[i] = 0;
//	}
//}
//void reverse(int data[], int n)
//{
//	int tmp;
//	int i, j;
//	for (i = 0, j = n - 1; i < j; i++, j--)
//	{
//		tmp = data[i];
//		data[i] = data[j];
//		data[j] = tmp;
//	}
//}
//void printArray(int data[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", data[i]);
//	}
//	putchar('\n');
//}
//int main()
//{
//	int a[10] = { 0 };
//	int b[10] = { 1, 2, 3, 4, 5, 6 };
//	init(a, b, 10);
//	printArray(a, 10);
//	reverse(a, 10);
//	printArray(a, 10);
//	empty(a, 10);
//	printArray(a, 10);
//	system("pause");
//	return 0;
//}
