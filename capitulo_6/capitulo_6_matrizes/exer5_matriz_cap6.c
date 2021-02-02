#include <stdio.h>
#include <stdlib.h>

/* Leia uma matriz de tamanho 4x4. Em seguida, conte e escreva na tela quantos valores negativos ela possui. */

int main(void){
    int matrizUser[4][4], aux1, aux2, cont = 0;

    //Le a matriz de tamanho 4x4
    for(aux1 = 0; aux1 < 4; aux1++){
        for(aux2 = 0; aux2 < 4; aux2++){
            printf("\nDigite o valor da matriz no indice [%d][%d]: ", aux1, aux2);
            scanf("%d", &matrizUser[aux1][aux2]);
        }
    }

    //Contando e escrevendo na tela quantos valores negativos a matriz tem.
    for(aux1 = 0; aux1 < 4; aux1++){
        for(aux2 = 0; aux2 < 4; aux2++){
            if(matrizUser[aux1][aux2] < 0){
                printf("\nO numero e negativo: %d", matrizUser[aux1][aux2]);
                cont++;
            }
        }
    }

    printf("\nA quantidade de numeros negativos e: %d", cont);


    return(0);
}