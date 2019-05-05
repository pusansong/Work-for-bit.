//递归和非递归分别实现strlen
//非递归
//#include <stdio.h>
//#include <string.h>
//int mystrlenN(char*str) {
//	int i;
//	for (i = 0; str[i]; i++);//字符串遍历
//	return i;
//}
//int main()
//{
//	printf("%d\n", mystrlenN("shanxikejidaxue"));
//	system("pause");
//	return 0;
//}
//递归
//#include <stdio.h>
//#include <string.h>
//int mystrlen(char*str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	return 1 + mystrlen(str + 1);//传参不要++,尽量使用+1;
//}
//int main()
//{
//	printf("%d\n", mystrlen("shanxikejidaxue"));
//	system("pause");
//	return 0;
//}
//编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//#include <stdio.h>
//#include <string.h>
//void reverse_string(char * str)
//{
//	int len = strlen(str) - 1;
//	char tmp;
//
//	if (str[0] == '\0')
//	{
//		return;
//	}
//	tmp = str[0];
//	str[0] = str[len];
//	str[len] = '\0'; //保证下一次能找到尾部
//	reverse_string(str + 1);
//	str[len] = tmp;//出栈
//}
//int main()
//{
//	char test[] = "shanxikejidaxue";
//	reverse_string(test);
//	puts(test);
//	system("pause");
//	return 0;
//}
