//ģ��ʵ��memcap
//#include<stdio.h>  
//#include<stdlib.h>
//#include<string.h>
//void *Memcpy(void *dest, const void*src,
//	size_t num) {
//	//void*����ı�����֪������,���Բ��ܽ�����,���Եý�������ת��
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
//ģ��ʵ��strstr
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
//	printf("%p\n", str1);//str1��һ���ַ���λ��
//	printf("%p\n", ret); ����ҵ���, ��ʾstr2�еĵ�һ���ַ���str1�е�λ��, û�ҵ��ͷ��ؿ�ָ��
//		system("pause");
//	return 0;
//}
