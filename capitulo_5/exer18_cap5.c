#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido e primo ou não*/

int main(void){
    int numUsuario, aux, resultado = 0;

    printf("\nDigite um numero inteiro maior do que 1: ");
    scanf("%d", &numUsuario);

    for(aux = 2; aux <= numUsuario; aux++){
        if(numUsuario % aux == 0){
             resultado++;
            break;
        }
       
        }      

        if (resultado == 0){
            printf("\nO numero e primo %d", numUsuario);
        }
        else {
            printf("\nO numero nao e primo! %d", numUsuario);
        }

    return(0);
}