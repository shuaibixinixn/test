#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//��������
void InitBoard(char arr[ROW][COL], int row, int col);
void DisplayBoard(char arr[ROW][COL], int row, int col);
void PlayerMove(char arr[ROW][COL], int row, int col);
void ComputerMove(char arr[ROW][COL], int row, int col);
//�ж���Ӯ 4�ַ���ֵ״̬ ���Ӯ��*�� ����Ӯ��$�� ƽ�֡�Q�� ������C��
char IsWin(char arr[ROW][COL], int row, int col);