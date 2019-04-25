//模拟实现memcap
//#include<stdio.h>  
//#include<stdlib.h>
//#include<string.h>
//void *Memcpy(void *dest, const void*src,
//	size_t num) {
//	//void*后面的变量不知道类型,所以不能解引用,所以得进行类型转换
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
//模拟实现strstr
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>  
//#include<stdlib.h>
//#include<assert.h>
//#include<string.h>
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
//	printf("%p\n", str1);//str1第一个字符的位置
//	printf("%p\n", ret); 如果找到了, 表示str2中的第一个字符在str1中的位置, 没找到就返回空指针
//		system("pause");
//	return 0;
//}
