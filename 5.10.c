//ʵ��һ���������ж�һ�����ǲ�������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int judge(int n)
//{
//	int i, tmp;
//	tmp = sqrt(n);//��ƽ����
//	for (i = 2; i <= tmp; i++)
//	{
//		if (n%i == 0)
//		{
//			printf("%d��������\n", n);
//			return 0;//���ľ���ֱ�ӷ���0
//		}
//	}
//	return 1;//������������1
//}
//int main()
//{
//	int i = 0;
//	printf("����һ������1������:");
//	scanf("%d", &i);
//	if (judge(i))//������return 1�ʹ�ӡ
//	{
//		printf("%d������\n", i);
//	}
//	system("pause");
//	return 0;
//}
//����һ�����飬  ʵ�ֺ���init������ʼ�����顢  ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//#include<stdio.h>
//#include<stdlib.h>
//void init(int in[], int data[], int n)//����int data[], int n,Ϊ���,int in[]Ϊ����;
//{
//	int i;
//	for (i = 0; i <= n; i++)
//	{
//		in[i] = data[i];
//	}
//}
//void empty(int data[], int n)
//{
//	int i;
//	for (i = 0; i <= n; i++)
//	{
//		data[i] = 0;
//	}
//}
//void reverse(int data[], int n)
//{
//	int tmp;
//	int i, j;
//	for (i = 0, j = n - 1; i < j; i++, j--)
//	{
//		tmp = data[i];
//		data[i] = data[j];
//		data[j] = tmp;
//	}
//}
//void printArray(int data[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", data[i]);
//	}
//	putchar('\n');
//}
//int main()
//{
//	int a[10] = { 0 };
//	int b[10] = { 1, 2, 3, 4, 5, 6 };
//	init(a, b, 10);
//	printArray(a, 10);
//	reverse(a, 10);
//	printArray(a, 10);
//	empty(a, 10);
//	printArray(a, 10);
//	system("pause");
//	return 0;
//}
