#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1()
{
	int ch = 0;
	////EOF=end of file�ļ�������־
	//while ((ch = getchar())!=EOF)//�����ַ�
	//{
	//	//����ַ� ����ctrl+zʱ�ͻ�ͣ��
	//	putchar(ch);
	//}
	int ret = 0;
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", &password);//�������룬�������password������
	//��������ʣ��һ����\n��
	//getchar();//���������Ǹ���\n��ȡ�� ����пո����������ַ����ֳ�bug
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�ϣ�Y/N��:>");
	ret = getchar();//Y/N
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ���\n");
	}
	else
	{
		printf("����ȷ�ϣ�\n");
	}
	return 0;
}