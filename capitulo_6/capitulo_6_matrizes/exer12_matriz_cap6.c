#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia uma matriz de tamanho 6 x 6. Calcule e imprima a soma dos elementos dessa matriz que estão abaixo da diagonal principal*/

int main(void){
    int matrizUser[6][6], aux1, aux2, soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0, somaGeral = 0;

    
    //Lendo os dados da matriz.
    for(aux1 = 0; aux1 < 6; aux1++){
        for(aux2 = 0; aux2 < 6; aux2++){
        printf("\nDigite o valor da matriz no indice: [%d]-[%d] ", aux1, aux2);
        scanf("%d", &matrizUser[aux1][aux2]);
        }
    }

    //Somando os valores abaixo da diagonal principal
    for(aux1 = 0; aux1 < 6; aux1++){
        for(aux2 = 0; aux2 < 6; aux2++){
             if(aux1 == 1 && aux2 == 0){
                 soma1 = soma1 + matrizUser[aux1][aux2];
             }
             else if(aux1 == 2 && aux2 <= 1){
                 soma2 = soma2 + matrizUser[aux1][aux2];
             }
             else if(aux1 == 3 && aux2 <= 2){
                 soma3 = soma3 + matrizUser[aux1][aux2];
             }
             else if(aux1 == 4 && aux2 <= 3){
                 soma4 = soma4 + matrizUser[aux1][aux2];
             }
             else if(aux1 == 5 && aux2 <= 4){
                 soma5 = soma5 + matrizUser[aux1][aux2];
             }
        }
    }

    somaGeral = soma1 + soma2 + soma3 + soma4 + soma5;

    printf("\nA soma dos elementos que estao abaixo da diagonal principal e: %d", somaGeral);
    

    return(0);
}