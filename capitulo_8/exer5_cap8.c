#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Usando a estrutura retângulo do exercício anterior, faça um programa que declare e leia uma estrutura retângulo e um ponto, 
e informe se esse ponto está ou não dentro do retângulo.*/

struct retangulo{
    float X; //Ponto superior esquerdo
    float Y; //Ponto inferior direito
    float ponto; //Ponto para verificarmos se esta dentro do triângulo ou não;
};



int main(void){
struct retangulo p1,p2, pontoC;

float baseR, alturaR, areaR;

    printf("\nDigite o ponto superior esquerdo do retangulo: ");
    scanf("%f", &p1.X);

    printf("\nDigite o ponto superior direito do retangulo: ");
    scanf("%f", &p2.X);

    printf("\nDigite o ponto inferior direito do retangulo: ");
    scanf("%f", &p2.Y);

   //Descobrindo a base do retângulo:
    baseR = pow(p2.X - p1.X, 2); 
    baseR = sqrt(baseR);

    //Descobrindo a altura do retângulo:
    alturaR = pow(p2.X - p2.Y, 2);
    alturaR = sqrt(baseR);

    areaR = baseR * alturaR;

    //Perguntando um ponto no plano cartesiano para verificarmos se está ou não dentro do retâgulo:
    printf("\nDigite um ponto para verificarmos se esta dentro do plano cartesiano do retangulo ou nao: ");
    scanf("%f", &pontoC.ponto);

    if(pontoC.ponto > p1.X && pontoC.ponto < p2.X && pontoC.ponto > p2.Y){
        printf("\nO ponto está dentro do plano cartesiano!\n");
    }
    else{
        printf("\nO ponto não esta dentro do plano cartesiano!\n");
    }


    return(0);
}