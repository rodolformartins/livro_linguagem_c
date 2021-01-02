#include <stdio.h>
#include <stdlib.h>

int main(void){
/* Elabore um programa que leia dois número inteiros e exiba o deslocamento, á esquerda e a á direita, do primeiro número pelo segundo número*/

int num1, num2;

printf("\nDigite o primeiro numero inteiro: ");
scanf("%d", &num1);

printf("\nDigite o segundo numero inteiro: ");
scanf("%d", &num2);

printf("\n%d", num1 << num2);

printf("\n%d", num1 >> num2);
    return(0);
}