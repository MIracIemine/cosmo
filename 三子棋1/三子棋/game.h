#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3 
#define COL 3
//��ʼ������
void Initboard(char board[ROW][COL], int row, int col);
//��ӡ����
void Dispalyboard(char board[ROW][COL], int row, int col);
//�������
void Playermove(char board[ROW][COL], int row, int col);
//��������
void Computermove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char Ifwin(char board[ROW][COL], int row, int col);
