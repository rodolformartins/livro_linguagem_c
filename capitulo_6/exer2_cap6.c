#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tea os valores lidos na ordem inversa*/

int main(void){
    int numUsuario[6], aux1, aux2;

    
    for(aux1 = 1; aux1 <= 6; aux1++){
    printf("\nDigite o valor: ");
    scanf("%d", &numUsuario[aux1]);
    }
    
    for(aux2 = 6; aux2 > 0; aux2--){
        printf("\nValor: %d", numUsuario[aux2]);
    }


    return(0);
}