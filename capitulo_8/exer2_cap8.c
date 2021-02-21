#include <stdio.h>
#include <stdlib.h>

/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição (0,0)*/

struct coordenadas{
    int X;
    int Y;
};

int main(void){
    struct coordenadas c;
    
    c.X = 26;
    c.Y = 32;

    int A, B, distancia1, distancia2;

    printf("\nDigite a posicao do plano no eixo X: ");
    scanf("%d", &A);

    printf("\nDigite a posicao do plano no eixo Y: ");
    scanf("%d", &B);

   //Exibindo a distância do ponto lido anteriormente até a origem das coordenadas declaradas na estrutura.
    distancia1 = (A - c.X);
    distancia2 = (B - c.Y);

    printf("\nDistancia entre a origem: %d - %d", distancia1, distancia2);


    return(0);
}
