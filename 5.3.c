//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include<assert.h>
//#include<string.h>
//void reverse_swap(char*left, char*right)
//{
//	assert(left != NULL);//���Բ��ǿ�ָ��
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//char *reverse(char*p)
//{
//	int len = strlen(p);
//	char*start = p;
//	char*end = NULL;
//	char*ret = p;
//	reverse_swap(p, p + len - 1);//���������ַ���
//	while (*p)
//	{
//		start = p;
//		while ((*p != ' ') && (*p != '\0'))//�ҵ�һ�鵥��
//		{
//			p++;
//		}
//		end = p - 1;
//		reverse_swap(start, end);//���򵥸�����
//		if (*p == ' ')//�ҵ��ո�
//			p++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[] = "student a am i";
//	printf("����ǰ:%s\n", arr);
//	printf("������:%s\n", reverse(arr));
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	/*һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//		���ҳ�������֡���ʹ��λ���㣩*/
//	int i = 0;
//	int ret = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < len; i++) {
//		printf("%d ", arr[i]);//��ӡ����;
//	}
//	printf("\n");
//	for (i = 0; i < len; i++) {
//		ret = ret ^ arr[i];//�������,��ȥ�ɶԵ���,���µ�������;
//	}
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
