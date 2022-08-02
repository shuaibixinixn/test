#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	//shutdown -s -t 60
	//system() 执行系统命令
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1min内关机 如果不想就输入kpyyds 就取消\n 请输入:>");
	scanf("%s", arr);
	//比较两个字符串strcmp
	if (strcmp(arr, "kpyyds") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}