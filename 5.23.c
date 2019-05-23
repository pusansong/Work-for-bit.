//求十个整数的最大值
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 2,3,5,7,4,6,8,1,9,0 };
//	int max = arr[0];
//	int n = 0;
//	for (n = 0; n <= 9; n++)
//	{
//		if (arr[n] > max)
//		{
//			max = arr[n];
//		}
//	}
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}
//给定两个整型变量的值，将两个值进行交换。
//1.
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a, b, c;
//	printf("输入两个整形变量的值：");
//	scanf("%d %d", &a, &b);
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}
//2.
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 9;
//	int b = 3;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n ", a, b);
//	system("pause");
//	return 0;
//}
//3.
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a = 7;
//	int b = 10;
//	int tmp;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}
