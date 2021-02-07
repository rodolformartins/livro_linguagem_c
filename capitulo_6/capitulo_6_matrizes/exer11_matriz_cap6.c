#include <stdio.h>
#include <stdlib.h>


/*Faça um programa que leia uma matriz 5x5. Calcule e imprima a soma dos elementos dessa matriz que estão acima da diagonal principal*/


int main(void){
    int matrizUSer[5][5], aux1, aux2, soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, somageral;

    
    //Pede os dados da matriz para o usuário
    for(aux1 = 0; aux1 < 5; aux1++){
    for(aux2 = 0; aux2 < 5; aux2++){
        printf("\nDigite o valor da matriz no indice: [%d]-[%d]", aux1, aux2);
        scanf("%d", &matrizUSer[aux1][aux2]);
        }
    }


    //Soma os elementos acima da diagonal principal:
    for(aux1 = 0; aux1 < 5; aux1++){
    for(aux2 = 0; aux2 < 5; aux2++){
       if(aux1 == 0 && aux2 >= 1){
           soma1 = soma1 + matrizUSer[aux1][aux2];
       }
       else if(aux1 == 1 && aux2 >= 2){
           soma2 = soma2 + matrizUSer[aux1][aux2];
       }
       else if(aux1 == 2 && aux2 >= 3){
           soma3 = soma3 + matrizUSer[aux1][aux2];
       }
        else if(aux1 == 3 && aux2 >= 4){
           soma4 = soma4 + matrizUSer[aux1][aux2];
       }
    }
    }

    printf("\nO valor da primeira linha e: %d", soma1);
    printf("\nO valor da segunda linha e: %d", soma2);
    printf("\nO valor da terceira linha e: %d", soma3);
    printf("\nO valor da quarta linha e: %d", soma4);

    somageral = soma1 + soma2 + soma3 + soma4;

    printf("\nSoma geral: %d", somageral);
   
    return(0);
}