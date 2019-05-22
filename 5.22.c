//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a;
//	double b  = 0;
//	int c  = 1;
//	for (a  = 1; a  <= 100; a++)
//	{
//		b  = b + (1.0*c) / a;
//		c  = -c;
//	}
//	printf("%.3f", b);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr1[5] = { 0, 1, 2, 3, 4 };
//	int arr2[5] = { 5, 6, 7, 8, 9 };
//	int len;
//	int i;
//	int j  = 0;
//	len  = (sizeof (arr1) / sizeof (arr1[0]));//计算数组的长度
//	for (i  = 0; i  < len; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i  = 0; i  < len; i++)//注意:数组内的字符是从0开始的
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	for (i  = 0; i  < len; i++)
//	{
//		j  = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = j;
//	}
//	for (i  = 0; i  < len; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i  = 0; i  < len; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
