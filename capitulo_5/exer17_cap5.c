#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd*/

int main(void){
    int numUsuario, aux1 = 1, aux2 = 1, c = 0;

    printf("\nDigite um numero inteiro positivo, e iremos preencher o numero de linhas do triangulo de Floyd: ");
    scanf("%d", &numUsuario);



    for(aux1 = 1; aux1 <= numUsuario; aux1++){
        for(aux2 = 1; aux2 <= aux1; aux2++){
            c++;
            printf("%d ", c);
        }
        printf("\n");
    }
    return(0);
}
