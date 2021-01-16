#include <stdio.h>
#include <stdlib.h>


/*Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5 */

int main(void){
    int num = 1000, soma = 0, i;

    for(i = num - 1; i >= 0; i--){
        if(i % 5 == 0 || i % 3 == 0){
            soma = soma + i;
        }
    }

    printf("Soma de todos os numeros naturais abaixo de 3 ou 5: %d", soma);

    return(0);
}