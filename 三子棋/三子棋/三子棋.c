#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"
//�˵�
void menu()
{
	printf("------------------------------\n");
	printf("------------------------------\n");
	printf("------1.play      0.exit------\n");
	printf("------------------------------\n");
	printf("------------------------------\n");
}
//��Ϸ
void game()
{
	char ret = 0;
	printf("��Ϸ��ʼ\n");
	char board[ROW][COL];
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	Dispalyboard(board, ROW, COL);
	while (1)
	{//��Ҳ���
		Playermove(board, ROW, COL);
		//�ж���Ӯ
		ret = Ifwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Dispalyboard(board, ROW, COL);
		//��������
		Computermove(board, ROW, COL);
		ret = Ifwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Dispalyboard(board, ROW, COL);
		
	}
	if (ret == '*')
	{
		printf("��һ�ʤ��\n");
		Dispalyboard(board, ROW, COL);
	}
	if (ret == '#')
	{
		printf("ϵͳ��ʤ��\n");
		Dispalyboard(board, ROW, COL);
	}
	if (ret == 'Q')
	{
		printf("ƽ��\n");
		Dispalyboard(board, ROW, COL);
	}
}	



int main()
{
	srand((unsigned int)time(NULL));
	int a = 0;
	do
{
		menu();
	scanf("%d", &a);
	switch (a)
	{case 1:
		
		game();
		break;
	case 0:
		break;
	default:
		printf("����������������룺\n");
		break;
	}
	} while (a);
	return 0;
}