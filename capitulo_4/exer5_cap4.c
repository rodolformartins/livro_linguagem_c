#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que leia um numero e, caso ele seja positivo, calcule e mostre: O numero digitado ao quadrado. a raiz quadrada do numero digitado.*/

int main(void){
    float num1, quadrado, raiz;

    printf("\nDigite um numero: ");
    scanf("%f", &num1);


    if (num1 > 1){
        printf("\nNumero ao quadrado: %.2f", pow(num1, 2));
        printf("\nRaiz quadrada do numero digitado %.2f", sqrt(num1));
    }
    else{
        printf("\nO numero digitado nao e positivo!");
    }
    return(0);
}

