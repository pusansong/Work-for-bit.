//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//��ϰ���ֲ���
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
//		printf("�ҵ���\n");
//	}
//	else if(b==-1){
//		printf("û�ҵ�\n");
//	}
//	printf("%d", len);
//	system("pause");
//	return 0;
//}
//��ϰð������
#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[] = { 9,8,7,6,5,4,3,2,1,0};
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", len);
	int i, j;
	int ret = 0;
	for (i = 0; i < len-1; i++) {
		for (j = 0; j < len - i-1; j++) {
			if (arr[j] > arr[j + 1]) {
				ret = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = ret;
			}
		}
	}
	for (i = 0; i < len; i++) {
		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}


