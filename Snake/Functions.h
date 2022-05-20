//
//  Header.h
//  Snake
//
//  Created by Eyji Koike Cuff on 4/17/22.
//

//libraries
#pragma once
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <term.h>
#include <curses.h>
#include <ncurses.h>
#include <string.h>
#include <string>
#include <iostream>
#include <ctime>
#include <random>
#include <math.h>
#include <stdio.h>
#include <sys/select.h>
#include <termios.h>


//Functions
//This function initializes the game
void Inicializa(bool Sts, int &Dir, int DirIni, int Lar, int Alt, int &X, int &Y, int &Pts, int &FrtX, int &FrtY);

//This Function Draws the Board
void Desenha(int Lar, int Alt, int x, int y, int FrutaX, int FrutaY, int Pts);

//This function clears the screen on mac
int ClearScreen();

//This function reads user inputs
void Entrada(int &dir, int &fimdojg);

//This function exceutes the game logic
void logica(int &dir, int &Y, int &X, int lar, int alt, int &fimdojg, int &FrtX, int &FrtY, int &pts);

//this function finalizes the game
void finaliza(int pts);
