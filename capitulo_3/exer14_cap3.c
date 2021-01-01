#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso. */

int main (void){
char a = 'A';
int A_minusculo;

A_minusculo = a + 32;

printf("%c", A_minusculo);
    return(0);
}