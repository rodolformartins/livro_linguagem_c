#include <stdio.h>
#include <stdlib.h>


int main(void){
/*Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit*/
int numero;

printf("\nLeia um número: ");
scanf("%d", &numero);

printf("%d", ~numero);
    return(0);
}