//编写代码模拟三次密码输入的场景。 最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a  = 123456;
//	int b  = 0;
//	int i  = 0;
//	for (i  = 1; i  <= 3; i++)
//	{
//		printf("请输入您的六位密码:");
//		scanf("%d", &b);
//		if (b  == a)
//		{
//			printf("恭喜您!登录成功");
//			break;
//		}
//else
//{
//printf("密码错误");
//printf("\n");
//}
//	}
//	if (i  > 3)
//		printf("密码输错三次,登陆失败");
//	printf("\n");
//	system("pause");
//	return 0;
//}
//写代码可以在整型有序数组中查找想要的数字， 
//找到了返回下标，找不到返回 - 1.（折半查找）
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 23, 34, 45, 56, 67, 78, 89, 90 };
//	int k  = 23;
//	int left  = 0;//左下标
//	int right  = sizeof(arr) / sizeof (arr[0]) - 1;//右下标
//	while (left  <= right) //当左下标小于等于右下标的时候，可以进入while循环进行查找
//	{
//		int mid  = (right  + left) / 2; //我们所想要找的中间数的下标
//		if (arr[mid] == k)  // 如果找的中间值是我们所期望的7，则找到了，并且打印出这个中间值的下标
//		{
//			printf("找到了:%d\n", mid);
//			break;
//		}
//		else if (arr[mid] > k)// 如果找到的中间值大于我们要找的数字23；
//		{
//			right  = mid  - 1; //重新定义一个右下标（中间值往左推一位，缩小范围）；
//		}
//		else // 如果找的中间值小于要找的数字；
//		{
//		left  = mid  + 1; //就重新定义一个左下标（中间值向右走一步，成为新定义的左下标，靠近所找的数，同样是缩小范围）；
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	system("pause");
//	return 0;
//}



