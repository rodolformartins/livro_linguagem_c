#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que possua um array de nome A que armazene seis números inteiros. O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse array: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável a soma dos valores das posições A[0], A[1], A[5] do array e mostre na tela essa soma.
c) Modifique o array na posição 4, atribuindo a essa posição o valor 100.
d) Mostre na tela cada valor do array A, um em cada linha.
 */

int main(void){
    int arrayPrograma[6] = {1,0,5,-2,-5,7};
    int aux1, soma  = 0;

    for(aux1 = 0; aux1 <= 5; aux1++){
        if(aux1 == 0){
            soma = arrayPrograma[aux1];
            printf("\nsoma primeiro loop: %d", soma);
        }
          else if(aux1 == 1){
            soma = arrayPrograma[aux1];
            printf("\nsoma segundo loop: %d", soma);
        }
        else if(aux1 == 4){
            soma = arrayPrograma[aux1];
            printf("\nsoma terceiro loop: %d", soma);
        }

    }      

    printf("\nO valor da soma das posicoes 0, 1 e 5 e: %d", soma);

    arrayPrograma[4] = 100;

    for(aux1 = 0; aux1 <=5; aux1++){
        printf("\nValores do array: %d", arrayPrograma[aux1]);
    }

    return(0);
}