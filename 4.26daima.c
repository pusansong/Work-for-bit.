//模拟实现strcmp
//#include<stdio.h>  
//#include<stdlib.h>
//#include<assert.h>
//#include<string.h>
//int Strcmp(const char*str1, const char*str2) {
//	int i = 0;
//	for (i = 0; str1[i] != '\0'&&str2[i] != '\0'; i++) {
//		if (str1[i] < str2[i]) {
//			return -1;
//		}
//		else if (str1[i] > str2[i]) {
//			return 1;
//		}
//		else {
//			//啥都不干,直接比较下一个字符
//		}
//	}
//	下面的语句表示如果两字符长度不一样,表示短字符的
//	最后一位(第i位)'\0'与
//	长字符的第i位比较;例:arr1="aaa"与arr2="aaab",
//	即arr1的最后一位'\0'与arr2的第四位'b'作比较
//	if (str1[i] < str2[i]) {
//		return -1;
//	}
//	else if (str1[i] > str2[i]) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	char str1[1024] = "aaabb";
//	char str2[1024] = "aaa";
//	int ret = Strcmp(str1, str2);
//	if (ret == 0) {
//		printf("str1=str2\n");
//	}
//	else if (ret > 0) {
//		printf("str1>str2\n");
//	}
//	else if (ret < 0) {
//		printf("str1<str2\n");
//	}
//	system("pause");
//	return 0;
//}
//模拟实现strcat
//#include<stdio.h>  
//#include<stdlib.h>
//#include<assert.h>
//#include<string.h>
//void *mystrcat(char *arr, char *brr) {
//	char *ret = arr;
//	assert(arr != NULL);
//	assert(brr != NULL);
//	while (*arr != '\0') {
//		arr++;
//	}
//	while (*brr != '\0') {
//		*arr++ = *brr++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[50] = "shan xi ke";
//	char brr[15] = "ji da xue";
//	char *ret = mystrcat(arr, brr);
//	printf("%s\n", ret);//打印拼接后的字符串
//	printf("%d", strlen(ret));//打印字符串长度
//	system("pause");
//	return 0;
//}
<<<<<<< HEAD
//
=======
//
>>>>>>> f7359172706a0a201c46d5eae42f20a414704fcc
