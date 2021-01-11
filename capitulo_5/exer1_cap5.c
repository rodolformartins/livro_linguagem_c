#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem cresente */

int main(void){
    int numUsuario, in;

    printf("\nDigite um numero, e o programa ira imprimir todos os numeros naturais ate ele em ordem crescente: ");
    scanf("%d", &numUsuario);

    for(in = 1; in <= numUsuario; in++){
        printf("\n%d", in);
    }
    return(0);
}