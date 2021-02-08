#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faça um programa que leia uma string e a imprima na tela */


int main(void){
    char stringTeste[6];

    printf("\nDigite uma string com 5 caracteres: ");
    gets(stringTeste);


    printf("\nImprimindo a saida da string: %s", stringTeste);

    return(0);
}