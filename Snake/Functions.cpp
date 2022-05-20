//
//  Functions.cpp
//  Snake
//
//  Created by Eyji Koike Cuff on 4/17/22.
//

#include "Functions.h"

//This function clears the screen on mac
int ClearScreen(){
    //printf("\033[H\033[J");
    system("Clear");
    return 0;
    
}
//This function starts the game
void Inicializa(bool Sts, int &Dir, int DirIni, int Lar, int Alt, int &X, int &Y, int &Pts, int &FrtX, int &FrtY){
    time_t t;
    Sts = false; //End game == false
    Dir = DirIni;
    X = Lar /2;
    Y = Alt /2;
    Pts = 0;
    srand(time(&t));
    FrtX = rand() % Lar + 1;
    FrtY = rand() % Alt + 1;
    
}

//This Function Draws the Board
void Desenha(int Lar, int Alt, int x, int y, int FrutaX, int FrutaY, int Pts){
    //var init
    int i, j;
    std::string Muro = "\u2588";
    std::string Cobra = "\u23C3";
    std::string Fruta = "\u22C4";
    //clear screen
    ClearScreen();// clear the screen and rolls back scrolling cache
    //drawing loop
    for (i =0;i<=(Lar+2); i++){ //print the first line
        std::cout << Muro;
    };
    //print a wall or the snake or the fruit
    for (j = 1; j <= Alt +1; j++){
        std::cout << "\n";
        for (i=0; i <= Lar + 2; i++) {
            if (i== 0 || i== Lar + 2){
                std::cout << Muro;
            }
            else {
                if (i==x && j ==y){
                    std::cout << Cobra;
                }
                else if (i== FrutaX && j == FrutaY){
                    std::cout << Fruta;
                }
                else{
                    std::cout <<" ";
                }
            }
        }
    };
    std::cout << std::endl; //new line
    //print the last line
    for (i =0;i<=(Lar+2); i++){ //print the last line
        std::cout << Muro;
    };
    std::cout << std::endl;
    std::cout << Pts << std::endl;
}

//This function reads user inputs
void Entrada(int &dir, int &fimdojg){
    //w para cima
    //a para esquerda
    //d para direita
    //s para baixo
    //x para terminar o jogo
    if(std::cin.get()){
        //init
        int ESQ = 1;
        int DIR = 2;
        int CIM = 3;
        int BAI = 4;
        
        //transform the characters into integer commands
        switch (std::cin.get()){
            case 'w':
                dir = CIM;
                break;
            case 'W':
                dir = CIM;
                break;
            case 's':
                dir = BAI;
                break;
            case 'S':
                dir = BAI;
                break;
            case 'd':
                dir = DIR;
                break;
            case 'D':
                dir = DIR;
                break;
            case 'a':
                dir = ESQ;
                break;
            case 'A':
                dir = ESQ;
                break;
            case 'x':
                fimdojg =1;
                break;
            case 'X':
                fimdojg =1;
                break;
        }
    }
}

//This function exceutes the game logic
void logica(int &dir, int &Y, int &X, int lar, int alt, int &fimdojg, int &FrtX, int &FrtY, int &pts){
    
    switch (dir){
        case 3:
            Y--;
            break;
        case 1:
            X--;
            break;
        case 2:
            X++;
            break;
        case 4:
            Y++;
            break;
        case 0:
            dir = rand() % 4 + 1;
            break;
    }
    //game over when we hit a wall
    if (X==0|| X == lar + 2 || Y == 0 || Y == alt + 2){
        fimdojg = 1;
    }
    //add points whe we eat a fruit
    if ( X == FrtX || Y == FrtY){
        pts = pts + 10;
        FrtX = rand() % lar +1;
        FrtY = rand() % alt +1;
    }
}

//this function finalizes the game
void finaliza(int pts){
    ClearScreen();
    std::cout << "\n\n\n**** FIM DE JOGO ***\n\n\n\nSua pontuação foi: " << pts << std::endl;
}
