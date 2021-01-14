#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média. */

int main(void){
    int numUsuario, soma = 0, op = 0;


    do{
    printf("\nDigite dez numeros (iremos ignorar numeros nao positivos): ");
    scanf("%d", &numUsuario);
    op++;
    if(numUsuario >= 0){
    soma = numUsuario + soma;
    }
    }while(op <= 9);

    printf("\nMedia: %d", soma / op);

    return(0);
}