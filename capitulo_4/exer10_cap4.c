#include <stdio.h>
#include <stdio.h>

/* Faça um programa que leia três numero inteiros positivos e efetue o cálculo de uma das seguintes médias 
de acordo com um valor numérico digitado pelo usuário e mostrado na seguinte tabela a seugir:  */

int main(void){
int num10, num1, num2, num3, op1, op2, op3, op4;


printf("\nDigite o primeiro valor: ");
scanf("%d", &num1);

printf("\nDigite o segundo valor: ");
scanf("%d", &num2);

printf("\nDigite o terceiro valor: ");
scanf("%d", &num3);

printf("\nDigite o tipo de operacaoo desejada: 1-Geometrica  2-Ponderada 3-Harmonica 4- Aritmetica: ");
scanf("%d", &num10);


switch(num10) {
    case 1: {
        op1 = num1 * num2 * num3;
        printf("\nVoce escolheu operacao aritmetica %d", op1);
        break;
    }
    case 2: {
        op2 = (num1 + 2 * num2 + 3 * num3) / 6;
        printf("\nVoce escolheu operacao ponderada %d", op2);
        break;
    }
    case 3: {
        op3 = 1 / ((1/num1) + (1/num2) + (1/num3));
        printf("\nVoce escolheu operacao harmonica %d", op3);
        break;
    }
    case 4: {
        op4 = (num1 + num2 + num3) / 3;
        printf("\nVoce escolheu operacao aritmetica %d", op4);
        break;
    }
}

    return(0);
}