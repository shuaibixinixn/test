#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main1()
{
	//strlen-string length-字符串长度有关
	//strcpy-string copy-字符串拷贝
	char arr1[] = "bit";
	char arr2[20] = "###########";//防止溢出，要使源头小于目的字符串长度
	strcpy(arr2, arr1);//拷贝会把arr1中的'\0'拷贝过去 直接结束
	printf("%s\n", arr2);
	//memset-memory set-内存设置函数
	char arr[] = "hello world!";
	memset(arr,'*',5);//将前五个替换为*
	printf("%s\n", arr);
	return 0;
}