//ģ��ʵ��strcmp
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
//			//ɶ������,ֱ�ӱȽ���һ���ַ�
//		}
//	}
//	���������ʾ������ַ����Ȳ�һ��,��ʾ���ַ���
//	���һλ(��iλ)'\0'��
//	���ַ��ĵ�iλ�Ƚ�;��:arr1="aaa"��arr2="aaab",
//	��arr1�����һλ'\0'��arr2�ĵ���λ'b'���Ƚ�
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
//ģ��ʵ��strcat
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
//	printf("%s\n", ret);//��ӡƴ�Ӻ���ַ���
//	printf("%d", strlen(ret));//��ӡ�ַ�������
//	system("pause");
//	return 0;
//}
<<<<<<< HEAD
//
=======
//
>>>>>>> f7359172706a0a201c46d5eae42f20a414704fcc
