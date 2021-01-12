#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que calcule e mostre a soma dos 50 primeiros números pares*/

int main(void){
    int num, op, total;

   num = 1;

   total = 0;

    while(num <= 50){
        if(num % 2 == 0){
            total = num + total;
        }
        num++;
    }
    printf("\n%d", total);

    return(0);
}


/*Preciso passar um laço que separe todos os numeros pares ate 50, e armazene em uma variavel. */