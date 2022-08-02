#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1()
{
	int ch = 0;
	////EOF=end of file文件结束标志
	//while ((ch = getchar())!=EOF)//输入字符
	//{
	//	//输出字符 遇到ctrl+z时就会停下
	//	putchar(ch);
	//}
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", &password);//输入密码，并存放在password数组中
	//缓冲区还剩余一个‘\n’
	//getchar();//将缓冲区那个‘\n’取走 如果有空格输入两个字符串又出bug
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认（Y/N）:>");
	ret = getchar();//Y/N
	if (ret == 'Y')
	{
		printf("确认成功！\n");
	}
	else
	{
		printf("放弃确认！\n");
	}
	return 0;
}