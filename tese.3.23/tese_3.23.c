#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char password[20] = { 0 };
	printf("���������룺>");
	scanf("%s", password);
	printf("��ȷ�ϣ�Y/N):>");
	getchar();
	int ch = getchar();
	if (ch == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("����ȷ��\n");
	return 0;
}