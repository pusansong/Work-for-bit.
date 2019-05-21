//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i  = 1;
//	int j  = 1;
//	for (i  = 1; i  <= 7; i++)
//	{
//		for (j  = 1; j  <= 2 * i  - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i  = 1; i  <= 6; i++)
//	{
//		for (j  = 1; j  <= 13 - 2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//利用数组计算裴波那契数列的前10个数,
//即1, 1, 2, 3, 5, 8, 13, 21, 34, 55.并按每行打印5个数的格式输出.
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a[10] = { 1, 1 };//定义一个数组,包含10个数,前两项为1,后8位系统默认为0
//	int i;
//	for (i = 2; i < 10; i++)
//		a[i] = a[i - 1] + a[i - 2];//定义后8项的值
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d    ", a[i]);
//		if ((i + 1) % 5 == 0)
//			printf("\n");
//	}
//	system("pause");
//	return 0;
//}
