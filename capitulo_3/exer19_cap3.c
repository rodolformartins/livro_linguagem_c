#include <stdio.h>
#include <stdlib.h>

int main(void){
    /*Elabore um programa que leia dois números inteiros e exiba o resultado das operações de "ou exclusivo", "ou bit a bit" e "e bit a bit" entre eles */

    int num1, num2;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);

    printf("\nOperacao de ou exclusivo: %d", num1 ^ num2);

    printf("\n Operador ou bit a bit: %d", num1 | num2);

    printf("\n Operador e bit a bit: %d", num1 & num2);
    return(0);
}