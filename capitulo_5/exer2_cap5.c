#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem descresente. */

int main(void){
    int numUsuario, op;

    printf("\nDigite um numero e iremos apresentar a sequencia dele de 0 ate ele em ordem descrescente: ");
    scanf("%d", &numUsuario);

    for(op = 0; op <= numUsuario; numUsuario--){
        printf("\n%d", numUsuario);
    }
    return(0);
}
