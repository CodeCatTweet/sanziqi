#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

void menu();

void game();

void Initboard(char board[ROW][COL], int row, int col);//��ʼ������ ����λ�ö�Ϊ�ո�

void DisplayBoard(char board[ROW][COL],int row,int col);//��ӡ����

void PlayerMove(char board[ROW][COL],int row,int col);//�������

void ComputerMove(char board[ROW][COL],int row,int col);//��������

int IsWin(char board[ROW][COL], int row, int col);//�ж���Ӯ
