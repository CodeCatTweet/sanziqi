#pragma once

#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<time.h>
#define ROW 3
#define COL 3

void Initboard(char board[ROW][COL], int row, int col);//初始化棋盘 棋子位置都为空格

void DisplayBoard(char board[ROW][COL],int row,int col);//打印棋盘

void PlayerMove(char board[ROW][COL],int row,int col);//玩家下棋

void ComputerMove(char board[ROW][COL],int row,int col);//电脑下棋

int IsWin(char board[ROW][COL], int row, int col);//判断输赢
