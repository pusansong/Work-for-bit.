#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//模拟实现strstr
//4.实现strchr
//5.实现strcmp
//6.实现memcpy
//7.实现memmove
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
//			//啥都不干,直接比较下一个字符
//		}
//	}
//	//下面的语句表示如果两字符长度不一样,表示短字符的
//	//最后一位(第i位)'\0'与
//	//长字符的第i位比较;例:arr1="aaa"与arr2="aaab",
//	//即arr1的最后一位'\0'与arr2的第四位'b'作比较
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
//	//黑指针功能世纪路从哪个位置找字符串子串
//	char* black_ptr = str1;
//	while (*black_ptr != '\0') {
//		//红指针帮我们完成具体的子串比较
//		char*red_ptr = black_ptr;
//		char*sub_ptr = str2;
//		while (*red_ptr != '\0' && *black_ptr != '\0'
//			&& *red_ptr == *sub_ptr) {
//			++sub_ptr;
//			++red_ptr;
//		}
//		if (*sub_ptr == '\0') {
//			//找到了
//			return black_ptr;
//		}
//		++black_ptr;
//	}
//	return NULL;
//}
//int main() {
//	char str1[] = "abcdef";
//	char str2[] = "bcd";
//	//ret指向了str1中第一处str2字串的位置
//	//如果没找到,返回一个空指针
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