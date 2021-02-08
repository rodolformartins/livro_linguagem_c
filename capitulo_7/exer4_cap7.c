#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faça uma programa que leia uma string e a imprima de trás para a frente */

int main(void){
    char stringUser[10], aux1;

    printf("\nDigite uma string e iremos imprimir de tras pra frente: ");
    scanf("%s", stringUser);

    for(aux1 = 10; aux1 >= 0; aux1--){
        printf("%c", stringUser[aux1]);
    }


    return(0);
}