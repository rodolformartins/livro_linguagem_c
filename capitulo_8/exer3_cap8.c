#include <stdio.h>
#include <stdlib.h>


/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles */

struct coordenadas{
    int X;
    int Y;
};

int main(void){
    int X1, Y1;

    //Lendo os dados da estrutura
    struct coordenadas c;
    printf("\nDigite o primeiro valor de X: ");
    scanf("%d", &c.X);

    printf("\nDigite o primeiro valor de Y: ");
    scanf("%d", &c.Y);

    printf("\nDigite o segundo valor de X: ");
    scanf("%d", &X1);

    printf("\nDigite o segundo valor de Y: ");
    scanf("%d", &Y1);

    //Exibindo a distância entre os dois pontos:
    printf("\nDistância entre o ponto X: %d", c.X - X1);

    printf("\nDistância entre o ponto X: %d", c.Y - Y1);


    return(0);
}