#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição (0,0)*/

struct coordenadas{
    int X;
    int Y;
};

int main(void){
    struct coordenadas c;
    
    float calc;

    printf("\nDigite a posicao do plano no eixo X: ");
    scanf("%d", &c.X);

    printf("\nDigite a posicao do plano no eixo Y: ");
    scanf("%d", &c.Y);

   //Exibindo a distância do ponto lido anteriormente até a origem das coordenadas declaradas na estrutura.
   //(x1-x2)² + (y1-y2)² desse resultado tira raiz quadrada.

    calc = pow(c.X - 0,2) + pow(c.Y - 0,2);
        

    printf("\nDistancia até origem: %.2f\n", sqrt(calc));

    return(0);
}
