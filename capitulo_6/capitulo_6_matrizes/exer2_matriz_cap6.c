#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia uma matriz de tamanho 4x4. Imprima na tela o maior valor contido nessa matriz e a sua localização (linha e coluna)*/

int main(void){
    int matrizUser[4][4], aux1, aux2, maior, menor, i;

    
    //Lendo os valores da matriz
    for(aux1 = 0; aux1 < 4; aux1++){
        for(aux2 = 0; aux2 < 4; aux2++){
        printf("\nDigite o valor da posicao [%d][%d]: ", aux1, aux2);
        scanf("%d", &matrizUser[aux1][aux2]);
        }
    }

    //Imprimindo o maior numero
    for(aux1 = 0; aux1 < 4; aux1++){
        for(aux2 = 0; aux2 < 4; aux2++){
            if(i == 0){
                maior = matrizUser[aux1][aux2];
                menor = matrizUser[aux1][aux2];
                i++;
            }
            else if(matrizUser[aux1][aux2] > maior){
                maior = matrizUser[aux1][aux2];
            }
            else if(matrizUser[aux1][aux2] < menor){
                menor = matrizUser[aux1][aux2];
            }
        }
    }

    printf("\nmaior numero:%d", maior);

    for(aux1 = 0; aux1 < 4; aux1++){
        for(aux2 = 0; aux2 < 4; aux2++){
            if(maior == matrizUser[aux1][aux2]){
                printf("\nA posicao do maior numero e: [%d]-[%d]", aux1, aux2);
            }
            continue;
        }
    }



    return(0);
}