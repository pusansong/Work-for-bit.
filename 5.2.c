<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int find(int arr[][3], int*pi, int*pj, int key) {
//	int i = 0;
//	int j = *pj;
//	while ((j >= 0) && (i <= 2)) {
//		if (arr[i][j] == key) {
//			*pi = i;
//			*pj = j;
//			return;//找到了直接返回
//		}
//		else if (arr[i][j] > key) {
//			j--;
//		}
//		else {
//			i++;
//		}
//	}
//	*pi = -1;
//	*pj = -1;
//}
//int main() {
//	int arr[][3] = { 1,2,3,2,3,4,3,4,5 };
//	int i = 2;
//	int j = 2;
//	int key = 0;
//	scanf("%d", &key);
//	find(arr, &i, &j, key);
//	if ((i != -1) && (j != -1))
//		printf("找到了,下标为%d,%d\n", i, j);
//	else
//		printf("没找到\n");
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
////输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分。
//void adjust(int arr[], int len) {
//	int swp = 0;
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//		while (arr[left] % 2 == 1) {
//			left++;
//		}
//		while (arr[right] % 2 == 0) {
//			right--;
//		}
//		if (left < right) {
//			swp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = swp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 9,14,25,33,56,74,13,69,45,73,81 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	adjust(arr, len);
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}


=======
#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int find(int arr[][3], int*pi, int*pj, int key) {
//	int i = 0;
//	int j = *pj;
//	while ((j >= 0) && (i <= 2)) {
//		if (arr[i][j] == key) {
//			*pi = i;
//			*pj = j;
//			return;//找到了直接返回
//		}
//		else if (arr[i][j] > key) {
//			j--;
//		}
//		else {
//			i++;
//		}
//	}
//	*pi = -1;
//	*pj = -1;
//}
//int main() {
//	int arr[][3] = { 1,2,3,2,3,4,3,4,5 };
//	int i = 2;
//	int j = 2;
//	int key = 0;
//	scanf("%d", &key);
//	find(arr, &i, &j, key);
//	if ((i != -1) && (j != -1))
//		printf("找到了,下标为%d,%d\n", i, j);
//	else
//		printf("没找到\n");
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
////输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分。
//void adjust(int arr[], int len) {
//	int swp = 0;
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//		while (arr[left] % 2 == 1) {
//			left++;
//		}
//		while (arr[right] % 2 == 0) {
//			right--;
//		}
//		if (left < right) {
//			swp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = swp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 9,14,25,33,56,74,13,69,45,73,81 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	adjust(arr, len);
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}


>>>>>>> 0bd45015e2baaa6ce889ad7100cb65d29de5f139
