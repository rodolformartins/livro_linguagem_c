#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa peça ao usuário paga digitar 10 valores. Some esses valores e apresente o resultado na tela*/

int main(void){
    int soma, num, op;

    soma = 0;

    for(op = 0; op < 10; op++){
        printf("Digite 10 numeros numero, iremos somar todos eles: ");
        scanf("%d", &num);
        soma = num + soma;
    }
printf("O valor total e: %d", soma);
    return(0);
}