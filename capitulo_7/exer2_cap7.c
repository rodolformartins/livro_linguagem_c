#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Faça um programa que leia uma string e imprima as quatro primeiras letras dela*/

int main(void){
    char stringTeste[10];

    printf("\nDigite uma string que tenha acima de 5 caracteres e iremos imprimir os 4 primeiros caracteres: ");
    gets(stringTeste);


    printf("%.4s", stringTeste);

    return(0);
}