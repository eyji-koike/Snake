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
    Sts = false; //false
    Dir = DirIni;
    X = Lar /2;
    Y = Alt /2;
    Pts = 0;
    srand(time(&t));
    FrtX = rand() % Lar + 1;
    FrtY = rand() % Alt + 1;
}

//This Function Draws the Board
void Desenha(int Lar, int Alt, int x, int y, int FrutaX, int FrutaY){
    int i, j;
    std::string Muro = "\u2588";
    std::string Cobra = "\u23C3";
    std::string Fruta = "\u22C4";
    ClearScreen();// clear the screen and rolls back scrolling cache
    for (i =0;i<=(Lar+2); i++){ //print the first line
        std::cout << Muro;
    };
    
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
    for (i =0;i<=(Lar+2); i++){ //print the last line
        std::cout << Muro;
    };
    std::cout << std::endl;
}

//This function gather user input
void Entrada(){
    //w para cima
    //a para esquerda
    //d para direita
    //s para baixo
    //x para terminar o jogo
    
        
    
}
