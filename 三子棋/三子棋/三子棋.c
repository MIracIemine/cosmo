#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"
//菜单
void menu()
{
	printf("------------------------------\n");
	printf("------------------------------\n");
	printf("------1.play      0.exit------\n");
	printf("------------------------------\n");
	printf("------------------------------\n");
}
//游戏
void game()
{
	char ret = 0;
	printf("游戏开始\n");
	char board[ROW][COL];
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	Dispalyboard(board, ROW, COL);
	while (1)
	{//玩家操作
		Playermove(board, ROW, COL);
		//判断输赢
		ret = Ifwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Dispalyboard(board, ROW, COL);
		//电脑下棋
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
		printf("玩家获胜！\n");
		Dispalyboard(board, ROW, COL);
	}
	if (ret == '#')
	{
		printf("系统获胜！\n");
		Dispalyboard(board, ROW, COL);
	}
	if (ret == 'Q')
	{
		printf("平局\n");
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
		printf("输入错误，请重新输入：\n");
		break;
	}
	} while (a);
	return 0;
}