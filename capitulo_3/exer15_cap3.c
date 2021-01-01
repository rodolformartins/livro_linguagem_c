#include <stdio.h>
#include <stdlib.h>

int main(void){
/* Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido. 
Exemplo: Número lido = 123, número gerado = 321*/

int numLido, num1, num2, num3;

printf("\nDigite um número inteiro positivo com 3 digitos: ");
scanf("%d", &numLido);

num1 = numLido%10;
numLido = numLido / 10;
num2 = numLido%10;
numLido = numLido / 10;
num3 = numLido%10;

printf("\n%d%d%d", num1, num2, num3);

    return(0);
}