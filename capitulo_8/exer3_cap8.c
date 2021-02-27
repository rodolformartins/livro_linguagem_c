#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles */

struct coordenadas{
    float X;
    float Y;
};

int main(void){
    struct coordenadas P1, P2;
    float resultado;


    //Perguntando as coordenadas do P1
    printf("\nDigite a coordenada X do ponto 1: ");
    scanf("%f", &P1.X);

    printf("\nDigite a coordenada Y do ponto 1: ");
    scanf("%f", &P1.Y);

    //Perguntando as coordenadas do P2
    printf("\nDigite a coordenada X do ponto 2: ");
    scanf("%f", &P2.X);

    printf("\nDigite a coordenada Y do ponto 2: ");
    scanf("%f", &P2.Y);

    //Processando a distância entre os dois pontos:
    resultado = pow(P1.X - P2.X,2) + pow(P2.X - P2.Y,2);

    printf("Distância entre as duas coordenadas: %.2f\n", sqrt(resultado));

    return(0);
}