#pragma once
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int board[4][4];
int dirLine[] = { 1, 0, -1, 0 };
int dirColumn[] = { 0,1,0,-1 };

pair<int, int>generateUnoccupiedPosition();
void addPiece();
void newGame();
void printUI();
bool canDoMove(int line, int column, int nextLine, int nextColumn);
void applyMove(int direction);