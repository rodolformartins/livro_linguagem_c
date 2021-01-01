#include <stdio.h>
#include <stdlib.h>


int main(void){
int num;

/* Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão desse número por dois (utilize os operadores de deslocamento de bits) */

printf("\nDigite um numero inteiro: ");
scanf("%d", &num);


    num = num << 1;
    printf("%d", num);



    num  = num >> 1;
    printf("\n%d", num);


    return(0);
}