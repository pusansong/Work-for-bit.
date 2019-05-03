//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include<assert.h>
//#include<string.h>
//void reverse_swap(char*left, char*right)
//{
//	assert(left != NULL);//断言不是空指针
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//char *reverse(char*p)
//{
//	int len = strlen(p);
//	char*start = p;
//	char*end = NULL;
//	char*ret = p;
//	reverse_swap(p, p + len - 1);//逆序整个字符串
//	while (*p)
//	{
//		start = p;
//		while ((*p != ' ') && (*p != '\0'))//找到一块单词
//		{
//			p++;
//		}
//		end = p - 1;
//		reverse_swap(start, end);//逆序单个单词
//		if (*p == ' ')//找到空格
//			p++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[] = "student a am i";
//	printf("交换前:%s\n", arr);
//	printf("交换后:%s\n", reverse(arr));
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	/*一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//		请找出这个数字。（使用位运算）*/
//	int i = 0;
//	int ret = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < len; i++) {
//		printf("%d ", arr[i]);//打印数组;
//	}
//	printf("\n");
//	for (i = 0; i < len; i++) {
//		ret = ret ^ arr[i];//依次异或,消去成对的数,留下单独的数;
//	}
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
