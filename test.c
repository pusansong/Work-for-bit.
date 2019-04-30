//#include <stdio.h>
//#include<stdlib.h>
////一个数组中只有两个数字是出现一次，
////其他所有数字都出现了两次。
////找出这两个数字，编程实现。
//void find(int arr[], int len) {
//	int a = 0;
//	int i = 0;
//	int b = 0;
//	int s1 = 0;
//	int s2 = 0;
//	for (i = 0; i < len; i++) {
//		a = a ^ (arr[i]);  //a为数组遍历异或后,s1和s2的异或值
//	}
//	for (i = 1; i <= 32; i++) {
//		if (1 & (a >> i) == 1) {  //求二进制数a最左边为1的时,右移的位数i的值
//			b = i;
//		}
//	}
//	for (i = 0; i < len; i++) {
//		if ((arr[i] >> b) & 1 == 1) {  //遍历出所有数组中第i位为1的数
//			s1 ^= arr[i];//
//		}
//		else { //遍历出所有数组中第i位为0的数
//			s2 ^= arr[i];
//		}
//	}
//	printf("s1=%d\n s2=%d\n", s1, s2);
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,4,3,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	find(arr, len);
//	system("pause");
//	return 0;
//}
//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
​
//#include <stdio.h>
//#include <string.h>
//#include<stdlib.h>
//char compare(char s1[], char s2[]) {
//	char tmp = 0;
//	int len = strlen(s1);
//	int i, j;
//	for (j = 1; j <= len; j++) {
//		tmp = s1[0];
//		for (i = 0; i < len - 1; i++) {
//			s1[i] = s1[i + 1];
//		}
//		s1[len - 1] = tmp;
//		if (strcmp(s1, s2) == 0) {   //判断旋转后的s1和s2是否相同
//			printf("左旋了%d次\n", j);
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char s1[] = "shanxikejidaxue";
//	char s2[] = "xikejidaxueshan";
//	printf("s1=%s\n", s1);
//	printf("s2=%s\n", s2);
//	if (compare(s1, s2) == 1) {
//		printf("s2是s1旋转后的字符");
//	}
//	else {
//		printf("s2不是s1旋转后的字符");
//	}
//	system("pause");
//	return 0;
//}