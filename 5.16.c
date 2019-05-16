//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和
//其中a是一个数字， 例如：2 + 22 + 222 + 2222 + 22222
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int Sn = 0;
//	int sum = 0;
//	int i, a;
//	printf("请输入一个0到9的正整数:");
//	scanf("%d/n", &a);
//	for (i = 0; i < 5; i++)
//	{
//		sum = sum * 10 + a;
//		Sn = Sn + sum;
//	}
//	printf("%d", Sn);
//
//
//	system("pause");
//	return 0;
//}
//求出100～999之间的所有“水仙花数”并输出。 
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，
//如；153＝1＋5＋3 
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a  = 0;
//	int i, j, k;
//	for (i  = 0; i  <= 9; i++)
//	{
//		for (j  = 0; j  <= 9; j++)
//		{
//			for (k  = 0; k  <= 9; k++)
//			{
//				a  = i * i*i  + j * j*j  + k * k*k;
//				if (a  >= 100 && a  <= 999 && a  == i * 100 + j * 10 + k)
//					printf("%d ", a);
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}
