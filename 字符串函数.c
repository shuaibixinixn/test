#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main1()
{
	//strlen-string length-�ַ��������й�
	//strcpy-string copy-�ַ�������
	char arr1[] = "bit";
	char arr2[20] = "###########";//��ֹ�����ҪʹԴͷС��Ŀ���ַ�������
	strcpy(arr2, arr1);//�������arr1�е�'\0'������ȥ ֱ�ӽ���
	printf("%s\n", arr2);
	//memset-memory set-�ڴ����ú���
	char arr[] = "hello world!";
	memset(arr,'*',5);//��ǰ����滻Ϊ*
	printf("%s\n", arr);
	return 0;
}