#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que permita ao usuário entrar em com uma matriz de tamanho 3x3 de números inteiros. 
Em seguida, calcule um vetor contendo três posições, em que cada posição deverá armazenar a soma dos números de cada coluna da matriz. Exiba na tela esse array. 
*/

int main(void){
    int matrizUser[3][3], vetorUser[3], aux1, aux2, soma[3] = {0,0,0};

    //Leitura da matriz 3x3
    for(aux1 = 0; aux1 < 3;aux1++){
        for(aux2 = 0; aux2 < 3; aux2++){
            printf("\nDigite o valor para o indice [%d]-[%d]: ", aux1, aux2);
            scanf("%d", &matrizUser[aux1][aux2]);
        }
    }

    //calculando o valor de cada coluna da matriz
    for(aux1 = 0; aux1 < 3;aux1++){
        for(aux2 = 0; aux2 < 3; aux2++){
            //Calculando valor da coluna 1
            if(aux2 == 0){
                soma[0] = soma[0] + matrizUser[aux1][aux2];
            }
            //calculando valor da coluna 2
            if(aux2 == 1){
                soma[1] = soma[1] + matrizUser[aux1][aux2];
            }
            //calculando valor da coluna 3
            if(aux2 == 2){
                soma[2] = soma[2] + matrizUser[aux1][aux2];
            }
        }
    }

    printf("\nSoma da coluna 1: %d", soma[0]);
    printf("\nSoma da coluna 2: %d", soma[1]);
    printf("\nSoma da coluna 3: %d", soma[2]);

    return(0);
}