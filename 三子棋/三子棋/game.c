#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"
//��ʼ������
void Initboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
			board[i][j] = ' ';
	}
}

//��ӡ����
void Dispalyboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row;i++)
	{
		int j = 0;
		for (j = 0;j < col;j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < col-1 )
			printf("---|---|---\n");
	}
}

//�������
void Playermove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		printf("������������꣺");
		int x, y = 0;
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			
			if (board[x-1][y-1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("��λ���������ӣ����������壺\n");
		}
		else
			printf("�Ƿ����꣬���������룡\n");
	}
}

//��������
void Computermove(char board[ROW][COL], int row, int col)
{
	printf("��������:>\n");
	while (1)
	{
		
		int x, y = 0;
		x = rand() % row;
		y = rand() % col;
		if (x >= 0 && x < row && y >= 0 && y < col)
		{
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
		}
	}
}

//�ж���Ӯ
//���ӮΪ*
//����ӮΪ#
//ƽ��ΪQ
//����ΪC

int Isfull(char board[ROW][COL], int row, int col)
{
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char Ifwin(char board[ROW][COL], int row, int col)
{
	//��
	
	for (int i = 0;i < row;i++)
	{
		int count = 1;
		for (int j = 0;j < col;j++)
		{
			if (j != 0 && board[i][j] == board[i][j - 1] && board[i][j]!=' ')
			{
				count++;
			}
			if (count == col)
				return board[i][j];
		}
	}
	//��
	for (int i = 0;i < col;i++)
	{
		int count = 1;
		for (int j = 0;j < row;j++)
		{
			if (j != 0 && board[j][i] == board[j-1][i] && board[j][i] != ' ')
			{
				count++;
			}
			if (count == row)
			return board[j][i];
		}
	}
	//�Խ���
	int count1 = 1;
	for (int i = 0;i < col;i++)
	{		
			if (i!=0&& board[i][i] == board[i- 1][i-1]&&board[i][i]!=' ')
			{
				count1++;
			}
			if(count1==row)
			return board[i][i];
	}
	int count2 = 1;
	for (int i = 0;i <row ;i++)
	{
		    if (i != 0 && board[i][row-1-i] == board[i - 1][row-i] && board[i][row - 1 - i] != ' ')
			{
				count2++;
			}
			if(count2==row)
			return board[i][row - 1 - i];
		
	}
	//ƽ��
	if (Isfull(board, ROW, COL))
	 {
		return 'Q';
	 }
 	  return 'C';
 }