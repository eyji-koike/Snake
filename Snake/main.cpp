//
//  main.cpp
//  Snake
//
//  Created by Eyji Koike Cuff on 4/17/22.
//

#include "Functions.h"
#define STOP 0
#define ESQR 1
#define DIRT 2
#define CIMA 3
#define BAIX 4


//Global variables
int FimDoJogo;
const int Largura = 20;
const int Altura = 20;
int X, Y, FrutaX, FrutaY, Pontos, Direcao;
//Main
int main() {
    Inicializa(FimDoJogo, Direcao, STOP, Largura, Altura, X, Y, Pontos, FrutaX, FrutaY);
    while (!FimDoJogo){
        Desenha(Largura, Altura, X, Y, FrutaX, FrutaY);
        //Entrada();
        //Logica();
    }
    //Finaliza();
    return 0;
}
