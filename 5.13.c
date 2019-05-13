//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//程序代码 :
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int multiplication_table(int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%-2d*%-2d=%-3d ", i, j, i*j);
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("enter a number : \n");
//	scanf("%d", &n);
//	multiplication_table(n);
//	system("pause");
//	return 0;
//}
//数字金字塔:输入一个正整数n, 输出n行数字金字塔.
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//	int main()
//{
//	int a = 0;
//	void pyramid(int a);//函数类型为void,表示不返回结果,函数体中可以省略return;
//	scanf("%d", &a);
//	pyramid(a);
//	system("pause");
//	return 0;
//}
//	  void pyramid(int a)
//	  {
//		  int i, j;
//		  for (i = 1; i <= a; i++)//需要输出的行数;
//		  {
//			  for (j = 1; j <= a - i; j++)//输出每行左边的空格;
//				  printf(" ");
//			  for (j = 1; j <= i; j++)//输出每行的数字;
//				  printf("%d ", i);
//			  putchar('\n');//字符输出;
//		  }
//	  }
