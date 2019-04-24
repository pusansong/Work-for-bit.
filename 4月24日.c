#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//练习二分查找
//int Find(int* arr,int len,int a) {
//	int left = 0;
//	int right = len - 1;
//	while (left<=right){
//	int	m = (left + right) >>1 ;
//		if (arr[m] == a) {
//			return 1;
//		}
//		else if (arr[m] > a) {
//			right = m - 1;
//		}
//		else {
//			left = m + 1;
//		}
//	}
//		return -1;
//
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr)/sizeof(arr[0]);
//	int a = 71;
//	int b=Find(arr,len,a);
//	if (b== 1) {
//		printf("找到了\n");
//	}
//	else if(b==-1){
//		printf("没找到\n");
//	}
//	printf("%d", len);
//	system("pause");
//	return 0;
//}
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
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
