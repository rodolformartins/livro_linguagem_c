#include <stdio.h>
#include <stdlib.h>

/*Leia uma matriz de tamanho 3x3. Em seguida, imprima a soma dos valores contidos em sua diagonal secundária. */

int main(void){
    int matrizUser[3][3], aux1, aux2, soma;

    //Lendo os valores para a matriz.
    for(aux1 = 0; aux1 < 3; aux1++){
        for(aux2 = 0; aux2 < 3; aux2++){
            printf("\nDigite um valor para o indice [%d]-[%d]", aux1, aux2);
            scanf("%d", &matrizUser[aux1][aux2]);
        }
    }

    //Somandos os valores da diagonal secundária.
    for(aux1 = 0; aux1 < 3; aux1++){
        for(aux2 = 0; aux2 < 3; aux2++){
            if(aux1 + aux2 == 2){
                soma = soma + matrizUser[aux1][aux2];
            }
        }
    }

    printf("\nA soma dos valores contidos na diagonal secundaria e: %d", soma);


    return(0);
}



