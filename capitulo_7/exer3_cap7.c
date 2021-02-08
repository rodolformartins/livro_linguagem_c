#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos caracteres ela possui*/

int main(void){
    char stringTeste[10];
    int aux1, cont = 0;

    printf("\nDigite uma string e iremos verificar quantos caracteres ela possui: ");
    scanf("%s", stringTeste);

    for(aux1 = 0; stringTeste[aux1] != '\0' ; aux1++){
        cont++;
    }

    printf("\nQuantidade de caracteres da string: %d", cont);

    return(0);
}