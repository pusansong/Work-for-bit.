//#include<stdio.h>  
//#include<stdlib.h>
//void Mystrcpy(char arr[], char brr[], int sz)            //ģ��ʵ��strcpy(����)
//{
//	int i = 0;
//	for (; i <= sz; i++)                   //����� i ȡֵ��Χ���Ե��� sz Ŀ�ľ��ǽ�'\0'��ֵ��Ŀ���ַ�����
//	{
//		arr[i] = brr[i];
//	}
//}
//int main()
//{
//	char arr[100];
//	char brr[] = "shan xi ke ji da xue";
//	int sz = strlen(brr);
//	printf("%d\n", sz);       //��ӡ��brr���ַ�������
//	Mystrcpy(arr, brr, sz);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include<stdlib.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 20; i > 1; i /= 2) {
//		sum += i - i % 2;
//		i += i % 2;
//	}
//	printf("%d", sum + 1);
//	system("pause");
//	return 0;
//}