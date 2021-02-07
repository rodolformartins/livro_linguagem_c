#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia uma matriz de tamanho 5x5. 
Calcule e imprima a soma dos elementos dessa matriz que não pertencem á diagonal principal nem á diagonal secundária*/

int main(void){
    int matrizUser[5][5], aux1, aux2, soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0, somaGeral = 0;

   
   //Pedindo os dados do indice.
    for(aux1 = 0; aux1 < 5; aux1++){
    for(aux2 = 0; aux2 < 5; aux2++){
        printf("\nDigite um valor para o indice: [%d]-[%d]: ", aux1, aux2);
        scanf("%d", &matrizUser[aux1][aux2]);
        }
    }

    //Somandos os elementos da matriz que não pertencem a diagonal principal nem á diagonal secundária.
    for(aux1 = 0; aux1 < 5; aux1++){
    for(aux2 = 0; aux2 < 5; aux2++){
        if(aux1 == 0 && aux2 >= 1 && aux2 <= 3){
            soma1 = soma1 + matrizUser[aux1][aux2];
        }
        else if(aux1 == 1 && aux2 != 1 && aux2 != 3){
            soma2 = soma2 + matrizUser[aux1][aux2];
        }
        else if(aux1 == 2 && aux2 != 2){
            soma3 = soma3 + matrizUser[aux1][aux2];
        }
        else if(aux1 == 3 && aux2 != 1 && aux2 != 3){
            soma4 = soma4 + matrizUser[aux1][aux2];
        }
        else if(aux1 == 4 && aux2 != 0 && aux2 != 4){
            soma5 = soma5 + matrizUser[aux1][aux2];
        }
    }
    }
  
    printf("\nValor da linha 1: %d", soma1);
    printf("\nValor da linha 2: %d", soma2);
    printf("\nValor da linha 3: %d", soma3);
    printf("\nValor da linha 4: %d", soma4);
    printf("\nValor da linha 5: %d", soma5);

    somaGeral = soma1 + soma2 + soma3 + soma4 + soma5;

    printf("\nA soma dos elementos da matriz que não pertencem a diagonal principal nem a diagonal secundaria = %d", somaGeral);

    return(0);
}