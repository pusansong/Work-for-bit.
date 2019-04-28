//#include<stdio.h>  
//#include<stdlib.h>
//void Mystrcpy(char arr[], char brr[], int sz)            //模拟实现strcpy(拷贝)
//{
//	int i = 0;
//	for (; i <= sz; i++)                   //这里的 i 取值范围可以等于 sz 目的就是将'\0'赋值到目标字符串中
//	{
//		arr[i] = brr[i];
//	}
//}
//int main()
//{
//	char arr[100];
//	char brr[] = "shan xi ke ji da xue";
//	int sz = strlen(brr);
//	printf("%d\n", sz);       //打印出brr的字符串长度
//	Mystrcpy(arr, brr, sz);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include<stdlib.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 20; i > 1; i /= 2) {
//		sum += i - i % 2;
//		i += i % 2;
//	}
//	printf("%d", sum + 1);
//	system("pause");
//	return 0;
//}