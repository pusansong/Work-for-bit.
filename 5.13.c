//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//������� :
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int multiplication_table(int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%-2d*%-2d=%-3d ", i, j, i*j);
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("enter a number : \n");
//	scanf("%d", &n);
//	multiplication_table(n);
//	system("pause");
//	return 0;
//}
//���ֽ�����:����һ��������n, ���n�����ֽ�����.
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//	int main()
//{
//	int a = 0;
//	void pyramid(int a);//��������Ϊvoid,��ʾ�����ؽ��,�������п���ʡ��return;
//	scanf("%d", &a);
//	pyramid(a);
//	system("pause");
//	return 0;
//}
//	  void pyramid(int a)
//	  {
//		  int i, j;
//		  for (i = 1; i <= a; i++)//��Ҫ���������;
//		  {
//			  for (j = 1; j <= a - i; j++)//���ÿ����ߵĿո�;
//				  printf(" ");
//			  for (j = 1; j <= i; j++)//���ÿ�е�����;
//				  printf("%d ", i);
//			  putchar('\n');//�ַ����;
//		  }
//	  }
