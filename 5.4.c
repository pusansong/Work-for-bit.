<<<<<<< HEAD
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//不使用（a + b） / 2这种方式，求两个数的平均值
//float average(int a, int b) {
//	return ((a&b) + ((a^b) >> 1));
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("输入两个数:");
//	scanf("%d,%d", &a, &b);
//	printf("a和b的平均值等于%f", average(a, b));
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
=======
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//不使用（a + b） / 2这种方式，求两个数的平均值
//float average(int a, int b) {
//	return ((a&b) + ((a^b) >> 1));
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("输入两个数:");
//	scanf("%d,%d", &a, &b);
//	printf("a和b的平均值等于%f", average(a, b));
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
>>>>>>> 0965226a58c4f8f62ec7c046df783fe1c5eb1c1c
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
<<<<<<< HEAD
//2550136832
//
//unsigned int reverse_bit(unsigned int value) {
//	int sum = 0;
//	int b = 0;
//	int i;
//	for (i = 0; i < 32; i++) {
//		b = ((value >> i) & 1)*pow(2, (31 - i));
//		sum += b;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 25;
//	int ret = 0;
//	ret = reverse_bit(a);
//	printf("%u\n", ret);//此处一定要用%u而不是%d的，因为若最高位为1，ret代表的是有符号数，其结果为负数
//	system("pause");
//	return 0;
//}
=======
//2550136832
//
//unsigned int reverse_bit(unsigned int value) {
//	int sum = 0;
//	int b = 0;
//	int i;
//	for (i = 0; i < 32; i++) {
//		b = ((value >> i) & 1)*pow(2, (31 - i));
//		sum += b;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 25;
//	int ret = 0;
//	ret = reverse_bit(a);
//	printf("%u\n", ret);//此处一定要用%u而不是%d的，因为若最高位为1，ret代表的是有符号数，其结果为负数
//	system("pause");
//	return 0;
//}
>>>>>>> 0965226a58c4f8f62ec7c046df783fe1c5eb1c1c
