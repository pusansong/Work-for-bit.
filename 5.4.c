<<<<<<< HEAD
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ
//float average(int a, int b) {
//	return ((a&b) + ((a^b) >> 1));
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("����������:");
//	scanf("%d,%d", &a, &b);
//	printf("a��b��ƽ��ֵ����%f", average(a, b));
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
//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ
//float average(int a, int b) {
//	return ((a&b) + ((a^b) >> 1));
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("����������:");
//	scanf("%d,%d", &a, &b);
//	printf("a��b��ƽ��ֵ����%f", average(a, b));
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
>>>>>>> 0965226a58c4f8f62ec7c046df783fe1c5eb1c1c
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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
//	printf("%u\n", ret);//�˴�һ��Ҫ��%u������%d�ģ���Ϊ�����λΪ1��ret��������з�����������Ϊ����
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
//	printf("%u\n", ret);//�˴�һ��Ҫ��%u������%d�ģ���Ϊ�����λΪ1��ret��������з�����������Ϊ����
//	system("pause");
//	return 0;
//}
>>>>>>> 0965226a58c4f8f62ec7c046df783fe1c5eb1c1c
