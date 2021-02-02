#include <stdio.h>
#include <stdlib.h>

/*Leia uma matriz de tamanho 3x3. Em seguida, imprima a soma dos valores contidos em sua diagonal principal*/


int main(void){
    int matrizUser[3][3], aux1, aux2, soma = 0;

    //Lendo uma matriz 3x3
    for(aux1 = 0; aux1 < 3; aux1++){
        for(aux2 = 0; aux2 < 3; aux2++){
            printf("\nDigite o valor do indice [%d][%d]: ", aux1, aux2);
            scanf("%d", &matrizUser[aux1][aux2]);
        }
    }


    //Somando os valores contidos na diagonal principal e imprimindo.
    for(aux1 = 0; aux1 < 3; aux1++){
        for(aux2 = 0; aux2 < 3; aux2++){
            if(aux1 == aux2){
                soma = soma + matrizUser[aux1][aux2];
            }
        }
    }

    printf("\nA soma dos valores contidos na diagonal principal e: %d", soma);

    return(0);
}