#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	//shutdown -s -t 60
	//system() ִ��ϵͳ����
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1min�ڹػ� ������������kpyyds ��ȡ��\n ������:>");
	scanf("%s", arr);
	//�Ƚ������ַ���strcmp
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