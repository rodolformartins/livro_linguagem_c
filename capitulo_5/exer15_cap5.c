#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. O programa tem de retornar o maior e o menor número lido */

int main(void){

    int numUsuario, maiorNum = 0, menorNum = 0, aux = 0;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numUsuario);

    while(numUsuario >= 0){
        if(numUsuario > aux){
            maiorNum = numUsuario;
            aux = maiorNum;
        }
        else{
            menorNum = numUsuario;
        }

        printf("\nDigite um numero inteiro: ");
        scanf("%d", &numUsuario);

        }
      

    printf("\nMaior numero: %d", maiorNum);

    printf("\nMenor numero: %d", menorNum);

    return(0);
}