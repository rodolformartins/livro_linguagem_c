#include <stdio.h>
#include <stdlib.h>

/*Usando o comando switch, escreva um programa que leia um inteiro 
entre 1 e 7 e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda se 2, e assim por diante */

int main(void){
    int numUsuario;

    printf("\nDigite um numero inteiro (entre 1 e 7) e iremos te dizer o dia da semana correspondente: ");
    scanf("%d", &numUsuario);

    switch(numUsuario){
        case 1: printf("\nDomingo");
        break;
        case 2: printf("\nSegunda-feira");
        break;
        case 3: printf("\nTerca-feira");
        break;
        case 4: printf("\nQuarta-feira");
        break;
        case 5: printf("\nQuinta-feira");
        break;
        case 6: printf("\nSexta-feira");
        break;
        case 7: printf("\nSabado");
        break;
    }
    return(0);
}