#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//ģ��ʵ��strstr
//4.ʵ��strchr
//5.ʵ��strcmp
//6.ʵ��memcpy
//7.ʵ��memmove
//char strcap(char*dest, const char*src) {
//	int i = 0;
//	for (; src[i] != '\0'; i++) {
//		dest[i] = src[i];
//	}   
//	dest[i] = '\0';
//	return dest;
//}
//int  main()
//{
//	char*p = "abcdef";
//	char str[7] = { 0 };
//	strcpy(str, p);
//	printf("%s", str);
//	system("pause");
//	return 0;
//}
//char* Strcat(char* dest, const char* src) {
//	int i = 0;
//	for (; dest[i] != '\0';i++);
//	for (int j = 0; src[j] != '\0'; j++, i++) {
//		dest[i] = src[j];
//	}
//	dest[i] = '\0';
//	return dest;
//}
//int main() {
//	char str1[1024] = "aaa";
//	char str2[1024] = "bbb";
//	Strcat(str1, str2);
//	printf("%s\n", str1);
//	system("pause");
//	return 0;
//}
//char *strcmp(char*dest, const char*src) {
//
//}
//int Strcmp(const char*str1, const char*str2) {
//	int i = 0;
//	for (i = 0; str1[i] != '\0'&&str2[i] != '\0'; i++) {
//		if (str1[i] < str2[i]) {
//			return -1;
//	}
//		else if (str1[i] > str2[i]) {
//			return 1;
//		}
//		else {
//			//ɶ������,ֱ�ӱȽ���һ���ַ�
//		}
//	}
//	//���������ʾ������ַ����Ȳ�һ��,��ʾ���ַ���
//	//���һλ(��iλ)'\0'��
//	//���ַ��ĵ�iλ�Ƚ�;��:arr1="aaa"��arr2="aaab",
//	//��arr1�����һλ'\0'��arr2�ĵ���λ'b'���Ƚ�
//	if (str1[i] < str2[i]) {
//		return -1;
//}
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
//	else if (ret> 0) {
//		printf("str1>str2\n");
//	}
//	else if (ret< 0) {
//		printf("str1<str2\n");
//	}
//	system("pause");
//	return 0;
//}
//char* Strstr(const char*str1, const char*str2) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	if (*str2 == NULL) {
//		return 0;
//	}
//	//��ָ�빦������·���ĸ�λ�����ַ����Ӵ�
//	char* black_ptr = str1;
//	while (*black_ptr != '\0') {
//		//��ָ���������ɾ�����Ӵ��Ƚ�
//		char*red_ptr = black_ptr;
//		char*sub_ptr = str2;
//		while (*red_ptr != '\0' && *black_ptr != '\0'
//			&& *red_ptr == *sub_ptr) {
//			++sub_ptr;
//			++red_ptr;
//		}
//		if (*sub_ptr == '\0') {
//			//�ҵ���
//			return black_ptr;
//		}
//		++black_ptr;
//	}
//	return NULL;
//}
//int main() {
//	char str1[] = "abcdef";
//	char str2[] = "bcd";
//	//retָ����str1�е�һ��str2�ִ���λ��
//	//���û�ҵ�,����һ����ָ��
//	char *ret = Strstr(str1, str2);
//	printf("%p\n", str1);
//	printf("%p\n", ret);
//	system("pause");
//	return 0;
//}
//void *Memcpy(void *dest, const void*src,
//	size_t num) {
//	const char* psrc = (const char*)src;
//	char* pdest = (char*)dest;
//	for (size_t i = 0; i < num; i++) {
//		pdest[i] = psrc[i];
//	}
//	return dest;
//}
//int main() {
//	int arr1[4] = { 0 };
//	int arr2[4] = { 1,2,3,4 };
//	Memcpy(arr1, arr2, 16);
//	for (int i = 0; i < 4; i++) {
//		printf("%d\n", arr1[i]);
//	}
//	system("pause");
//	return 0;
//}
//
//void *Movecpy(void *dest, const void*src,
//	size_t num) {
//	const char* psrc = (const char*)src;
//	char* pdest = (char*)dest;
//	for (size_t i = 0; i < num; i++) {
//		pdest[i] = psrc[i];
//	}
//	return dest;
//}
//int main() {
//	int arr1[4] = { 0 };
//	int arr2[4] = { 1,2,3,4 };
//	Movecpy(arr1, arr2, 16);
//	for (int i = 0; i < 4; i++) {
//		printf("%d\n", arr1[i]);
//	}
//	system("pause");
//	return 0;
//}
//struct Test {
//	int a;
//	int b;
//	int c;
//	int d;
//};
//int main() {
//	struct Test t;
//	printf("&t=%p\n", &t);
//		printf("&t.a=%p\n", &t.a);
//		printf("&t.b=%p\n", &t.b);
//		printf("&t.c=%p\n", &t.c);
//		printf("&t.d=%p\n", &t.d);
//	system("pause");
//	return 0;
//}
#pragma pack(1)
struct Test {
	char a;
	short b;
	int c;
	double d;
	int e;
	short f;
	char g;
};
int main() {
	printf("%d\n",sizeof(struct Test));
	system("pause");
	return 0;
}
//int main(){
//
//	system("pause");
//	return 0;
//}