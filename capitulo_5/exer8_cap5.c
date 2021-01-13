#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia dez inteiros e imprima sua média*/

int main(void){
    int num, soma, media, op;

    soma = 0;

    for(op = 1; op <= 9; op++){
        printf("\nDigite dez numeros inteiros e iremos calcular sua media: ");
        scanf("%d", &num);
        soma = num + soma;
    }

    media = soma / op;
    printf("\nA media e: %d", media);

    return(0);
}