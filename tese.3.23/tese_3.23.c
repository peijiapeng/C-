#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char password[20] = { 0 };
	printf("请输入密码：>");
	scanf("%s", password);
	printf("请确认（Y/N):>");
	getchar();
	int ch = getchar();
	if (ch == 'Y')
		printf("确认成功\n");
	else
		printf("放弃确认\n");
	return 0;
}