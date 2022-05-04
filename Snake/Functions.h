//
//  Header.h
//  Snake
//
//  Created by Eyji Koike Cuff on 4/17/22.
//

//libraries
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <term.h>
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
void Desenha(int Lar, int Alt, int x, int y, int FrutaX, int FrutaY);

//This function clears the screen on mac
int ClearScreen();
