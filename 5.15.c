//编写一个程序，可以一直接收键盘字符， 如果是小写字符就输出对应的大写字符， 
//如果接收的是大写字符，就输出对应的小写字符， 如果是数字不输出
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char number;
//	while (1)
//	{
//		scanf("%c", &number);      //输入一个键盘字符
//		if (number  >= 'A' && number  <= 'Z')
//			printf("%c\n", number  + 32);
//		if (number  >= 'a' && number  <= 'z')
//			printf("%c\n", number  - 32);
//		if (number  >= 0 && number  <= 9)
//		{
//			;
//		}
//	}
//	system("pause");
//	return 0;
//}
//让电脑随机生成一个整数, 完成猜数字游戏, 并打印猜的次数;
//#define _CRT_SECURE_NO_WARNINGS    
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int number  = rand() % 100 + 1;//rand()是产生一个随机整数的函数,它除以100取余加1,表示一个1-100的数;
//	int a;
//	int count  = 0;
//	do
//	{
//		printf("输入一个1-100内的整数:\n");
//		scanf("%d", &a);
//		count ++;
//		if (a  > number)
//			printf("你猜的数大了\n");
//		if (a  < number)
//			printf("你猜的数小了\n");
//	} while (a  != number);
//	printf("恭喜你答对了\n");
//	printf("你一共答了%d次\n", count);
//	system("pause");
//	return 0;
//}