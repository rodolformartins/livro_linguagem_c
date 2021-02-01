#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que declare uma matriz de tamanho 5x5. Preencha com 1 a diagonal principal e com 0 os demais elementos. 
Ao final, escreva a matriz obitida na tela */

int main(void){
    int matrizUser[5][5], aux1, aux2;

    printf("\nPreenchendo uma matriz de 5x5:");

    //Preenchendo somente a diagonal com 1:
    for(aux1 = 0; aux1 < 5; aux1++){
        for(aux2 = 0; aux2 < 5; aux2++){
            if(aux1 == aux2){
                matrizUser[aux1][aux2] = 1;
            }
            else{
                matrizUser[aux1][aux2] = 0;
            }
        }
    }

 for(aux1 = 0; aux1 < 5; aux1++){
        for(aux2 = 0; aux2 < 5; aux2++){
        printf("\nMatriz no indice[%d]-[%d]: %d", aux1, aux2, matrizUser[aux1][aux2]);
        }
 }


    return(0);
}