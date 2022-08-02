#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char arr[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
void DisplayBoard(char arr[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//1.打印一行的数据
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		/*printf(" %c | %c | %C \n", arr[i][0], arr[i][1], arr[i][2]);*/
		//2.打印分隔行
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			//printf("---|---|---\n");
		}
		printf("\n");
	}
}
void PlayerMove(char arr[ROW][COL], int row, int col)
{
	int x = 0; int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入您要下的坐标:>");
		scanf("%d%d", &x, &y);
		//判断x.y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}
void ComputerMove(char arr[ROW][COL], int row, int col)
{
	int x = 0; int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '$';
			break;
		}
	}
}
//返回1表示棋盘满了 0表示棋盘没满
int IsFull(char arr[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
//判断输赢 4种返回值状态 玩家赢‘*’ 电脑赢‘$’ 平局‘Q’ 继续‘C’
char IsWin(char arr[ROW][COL], int row, int col)
{
	//行
	for (int i = 0; i < row; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
		{
			return arr[i][1];
		}
	}
	//列
	for (int i = 0; i < col; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != ' ')
		{
			return arr[1][i];
		}
	}
	//斜着
	if (arr[0][0] == arr[1][1] == arr[2][2] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	if (arr[2][0] == arr[1][1] == arr[0][2] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	//判断是否平局
	if (1 == IsFull(arr, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}