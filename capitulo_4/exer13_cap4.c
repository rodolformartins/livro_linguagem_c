#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). 
O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado. */

int main(void){
    int opcao;

    printf("\nEscolha uma opcao de operacao matematica: 1- adicao 2- subtracao 3-multiplicacao 4-divisao (Digite uma opcao): ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: {
            int num1, num2, soma;
            printf("\nDigite o primeiro valor: ");
            scanf("%d", &num1);
            printf("\nDigite o segundo valor: ");
            scanf("%d", &num2);
            soma = num1 + num2;
            printf("\nO resultado da soma entre os dois numeros e: %d", soma);
        }
        break;
        case 2: {
            int num1, num2, subtracao;
            printf("\nDigite o primeiro valor: ");
            scanf("%d", &num1);
            printf("\nDigite o segundo valor: ");
            scanf("%d", &num2);
            subtracao = num1 - num2;
            printf("\nO resultado da subtracao entre os dois numeros e: %d", subtracao);
        }
        break;
        case 3: {
            int num1, num2, multiplicacao;
            printf("\nDigite o primeiro valor: ");
            scanf("%d", &num1);
            printf("\nDigite o segundo valor: ");
            scanf("%d", &num2);
            multiplicacao = num1 * num2;
            printf("\nO resultado da multiplicacao entre os dois numeros e: %d", multiplicacao);
        }
        break;
        case 4: {
            int num1, num2, divisao;
            printf("\nDigite o primeiro valor: ");
            scanf("%d", &num1);
            printf("\nDigite o segundo valor: ");
            scanf("%d", &num2);
            divisao = num1 / num2;
            printf("\nO resultado da divisao entre os dois numeros e: %d", divisao);
        }
        break;
    }
    return(0);
}