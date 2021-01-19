#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que leia do teclados seis valores inteiros e em seguida mostre na tela os valores lidos*/

int main(void){
    int numUsuario[6], aux1, aux2;

    for(aux1 = 1; aux1 <= 6; aux1++){
        printf("\nDigite um valor: ");
        scanf("%d", &numUsuario[aux1]);
    }


    for(aux2 = 1; aux2 <= 6; aux2++){
        printf("\nExibindo o vetor: %d", aux2);
    }

    return(0);
}