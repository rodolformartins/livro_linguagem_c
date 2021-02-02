#include <stdio.h>
#include <stdlib.h>

/*Leia uma matriz de tamanho 4x4. Em seguida, conte e escreva na tela quantos valores maiores do que 10 ela possui.*/ 


int main(void){
    int matrizUser[4][4], aux1, aux2, cont = 0;

    //Lendo os valores da matriz
    for(aux1 = 0; aux1 < 4; aux1++){
        for(aux2 = 0; aux2 < 4; aux2++){
            printf("\nDigite um valor para o indice: [aux1][aux2]", aux1, aux2);
            scanf("%d", &matrizUser[aux1][aux2]);
    }
    }


    //Condição: contar e escrevar na tela valores maiores do que 10 que possuem nessa matriz.
    for(aux1 = 0;aux1 < 4; aux1++){
        for(aux2 = 0; aux2 < 4; aux2++){
            if(matrizUser[aux1][aux2] > 10){
                cont++;
                printf("\nEste valor e maior que 10: %d", matrizUser[aux1][aux2]);
            }  
        }
    }

    printf("\nQuantidade de numeros maiores que 10: %d", cont);


    return(0);
}