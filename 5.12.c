//实现一个函数,判断year是否为闰年
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int leap_year(int year)
//{
//	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//		printf("%d年是闰年", year);
//	else
//		printf("%d不是闰年", year);
//}
//
//int main()
//{
//	int year = 0;
//	printf("请输入一个年份:");
//	scanf("%d", &year);
//	leap_year(year);
//	system("pause");
//	return 0;
//}
//实现两个数的交换
//方式一:
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int exchange(int a, int b)
//{
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d", a, b);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("输入a,b的值\n");
//	scanf("%d %d", &a, &b);
//	exchange(a, b);
//	system("pause");
//	return 0;
//}
//方式二:
//#include<stdio.h>
//#include<stdlib.h>
//void swapArgs(int*i, int*j)
//{
//	int tmp;
//	tmp = *i;
//	*i = *j;
//	*j = tmp;
//
//}
//int main()
//{
//	int i = 4, j = 7;
//	swapArgs(&i, &j);
//	printf("i=%d,j=%d\n", i, j);
//	system("pause");
//	return 0;
//}
