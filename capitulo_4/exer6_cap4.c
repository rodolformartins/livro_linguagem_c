#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faça um programa que receba a altura e o sexo de uma pessoal e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (em que "h" corresponde á altura):
Homens (72,7 * h) - 58
Mulheres (62,1 * h) - 44,7 */

int main(void){
    float altura, pesoIdeal;
    char sexo;

    printf("\nQual sua altura? ");
    scanf("%f", &altura);

    printf("\nDigite seu sexo: (m ou f)");
    scanf("%s", &sexo);

   if(sexo == 'm'){
        pesoIdeal = (72.7 * altura) - 58;
        printf("\nPeso ideal para voce homem e: %.2f", pesoIdeal);
    }
    else{
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("\nPeso ideal para voce mulher e: %.2f", pesoIdeal);
    }
    return(0);
}