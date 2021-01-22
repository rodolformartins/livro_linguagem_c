#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um vetor de 8 posições. Em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor.
 Seu programa deverá exibir a soma dos valores encontrados nas respectivas posições X e Y*/

int main(void){
    int arrayUser[8];
    int aux1, soma;

    //Lendo todos os valores do vetor
    for(aux1 = 0; aux1 <=8; aux1++){
    printf("\nDigite os valores do vetor: ");
    scanf("%d", &arrayUser[aux1]);
    }

    //Lendo dois valores quaisquer do vetor
    for(aux1 = 1; aux1 <=2; aux1++){
    printf("\nDigite mais dois valores para preenchermos duas posicoes do vetor: ");
    scanf("%d", &arrayUser[aux1]);
    }

    soma = arrayUser[1] + arrayUser[2];

    printf("\nA soma dos dois vetores e: %d", soma);

    return(0);
}