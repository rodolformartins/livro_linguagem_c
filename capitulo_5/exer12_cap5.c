#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número
 com exceção dele próprio. Exemplo: A soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78*/

int main(void){
    int numUsuario, op = 1, soma = 0;


    printf("\nDigite um numero e iremos apresentar todos seus divisores menores do que ele mesmo, e em seguida calcular a soma de todos eles: ");
    scanf("%d", &numUsuario);

    while(op < numUsuario){
        if(numUsuario % op == 0){
            soma = soma + op;
            op++;
        }
        else if(numUsuario % op != 0){
            op++;
        }

    }

    printf("\nA soma de todos os valores e: %d", soma);
    return(0);
}