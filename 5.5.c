//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ǵݹ�
//#include <stdio.h>
//#include <string.h>
//int mystrlenN(char*str) {
//	int i;
//	for (i = 0; str[i]; i++);//�ַ�������
//	return i;
//}
//int main()
//{
//	printf("%d\n", mystrlenN("shanxikejidaxue"));
//	system("pause");
//	return 0;
//}
//�ݹ�
//#include <stdio.h>
//#include <string.h>
//int mystrlen(char*str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	return 1 + mystrlen(str + 1);//���β�Ҫ++,����ʹ��+1;
//}
//int main()
//{
//	printf("%d\n", mystrlen("shanxikejidaxue"));
//	system("pause");
//	return 0;
//}
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//#include <stdio.h>
//#include <string.h>
//void reverse_string(char * str)
//{
//	int len = strlen(str) - 1;
//	char tmp;
//
//	if (str[0] == '\0')
//	{
//		return;
//	}
//	tmp = str[0];
//	str[0] = str[len];
//	str[len] = '\0'; //��֤��һ�����ҵ�β��
//	reverse_string(str + 1);
//	str[len] = tmp;//��ջ
//}
//int main()
//{
//	char test[] = "shanxikejidaxue";
//	reverse_string(test);
//	puts(test);
//	system("pause");
//	return 0;
//}
