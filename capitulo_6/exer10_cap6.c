#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são multiplos de 7. Ao final, imprima esse vetor na tela.*/

int main(void){
    int vetor7[100], aux1, aux2 = 0, aux3;


   for(aux1 = 0; aux1 <= 100; aux1++){
        vetor7[aux1] = + aux2;
        aux2 = aux2 + 7;
    }
    

    for(aux1 = 0; vetor7[aux1] < 100; aux1++){
    printf("\nNumeros do vetor: %d", vetor7[aux1]);
    }

    return(0);
}


   