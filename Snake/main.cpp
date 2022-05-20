//
//  main.cpp
//  Snake
//
//  Created by Eyji Koike Cuff on 4/17/22.
//

#include "Functions.h"
#define STOP 0

//Global variables
int FimDoJogo;
const int Largura = 20;
const int Altura = 20;
int X, Y, FrutaX, FrutaY, Pontos, Direcao;
//Main
int main() {
    //This function initializes the game
    Inicializa(FimDoJogo, Direcao, STOP, Largura, Altura, X, Y, Pontos, FrutaX, FrutaY);
    while (!FimDoJogo){
        //This Function Draws the Board
        Desenha(Largura, Altura, X, Y, FrutaX, FrutaY, Pontos);
        //This function reads user inputs
        Entrada(Direcao, FimDoJogo);
        //This function exceutes the game logic
        logica(Direcao, Y, X, Largura, Altura, FimDoJogo, FrutaX, FrutaY, Pontos);
        
    }
    //this function finalizes the game
    finaliza(Pontos);
    return 0;
}
