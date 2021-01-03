#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar*/

int main(void){
    int num1, resto;

    printf("\nDigite um numero e iremos verificar se ele e par ou impar: ");
    scanf("%d", &num1);

    resto = num1 % 2;

    if(resto == 0){
        printf("\nNumero e par!");
    }else{
        printf("\nNumero e impar!");
    }
    
    return(0);
}