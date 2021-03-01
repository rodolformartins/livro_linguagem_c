#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior esquerdo e o ponto inferior direito do retângulo.
Cada ponto e definido por uma estrutura Ponto, a qual contem contém as posições X e Y. Faça um programa que declare e leia uma estrutura retângulo e exiba
a área e o comprimento diagonal e o perímetro desse retângulo*/

struct retangulo{
    float X; //PontoSupEsq
    float Y; //PontoInfDir
};


int main(void){
    struct retangulo ponto1, ponto2;
    float baseR, alturaR, diagonalR;

    //Lendo os dados do retangulo:
    printf("\nDigite o ponto superior esquerdo do retangulo: ");
    scanf("%f", &ponto1.X);

    printf("\nDigite o ponto superior direito do retangulo: ");
    scanf("%f", &ponto2.X);

    printf("\nDigite o ponto inferior direito do retangulo: ");
    scanf("%f", &ponto2.Y);

     

    
    //Descobrindo a base do retângulo:
    baseR = pow(ponto2.X - ponto1.X, 2); 
    baseR = sqrt(baseR);

    //Descobrindo a altura do retângulo:
    alturaR = pow(ponto2.X - ponto2.Y, 2);
    alturaR = sqrt(baseR);

    //Descobrindo a diagonal do retângulo
    diagonalR = pow(baseR,2) + pow(alturaR,2);
    diagonalR = sqrt(diagonalR);

    printf("\nA area do retangulo e: %.2f", baseR * alturaR);
    printf("\nComprimento diagonal do retangulo: %.2f", diagonalR);
    printf("\nPerimetro do retangulo: %.2f", 2 * (baseR + alturaR));

    return(0);
}