//递归和非递归分别实现求第n个斐波那契数。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//非递归方法:(循环)
//int main()
//{
//	int n = 0;
//	printf("enter a number:");
//	scanf("%d", &n);
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	if (n <= 2)
//		printf("1");
//	for (int i = 0; i < n - 2; i++) {
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	printf("%d", c);
//	system("pause");
//	return 0;
//}
//递归
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int fib(int n)
//{
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("enter a number:");
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	system("pause");
//	return 0;
//}
//在屏幕上打印杨辉三角
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i, j;
//	int arr[10][10];
//	for (i = 0; i < 10; i++) {
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//		for (j = 0; j <= i; j++) {
//			if (j >= 1 && j <= i - 1) {
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j <= i; j++) {
//			printf("%-5d", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
