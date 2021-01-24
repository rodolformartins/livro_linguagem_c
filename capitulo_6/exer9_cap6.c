#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada 
crie um novo array C calculando C = A - B. Mostre na tela os dados do array C */


int main(void){
    int arrayA[10], arrayB[10], arrayC[2] = {0,0}, aux1, aux2, soma1 = 0, soma2 = 0, aux3;


    //Pede os numeros do primeiro array
    for(aux1 = 1; aux1 <= 10; aux1++){
    printf("\nDigite 10 valores para o primeiro array: ");
    scanf("%d", &arrayA[aux1]);
    soma1 = soma1 + arrayA[aux1];
    }

    //Pede os numeros do segundo array
    for(aux2 = 1; aux2 <= 10; aux2++){
    printf("\nDigite 10 valores para o segundo array: ");
    scanf("%d", &arrayB[aux2]);
    soma2 = soma2 + arrayB[aux2];
    }


    for(aux3 = 0; aux3 <= 1; aux3++){
    if (aux3 == 0){
        arrayC[aux3] = arrayC[aux3] + soma1;
    }
    else{
        arrayC[aux3] = arrayC[aux3] + soma2;
    }

    }

    printf("\nO valor do array C e: C = A - B: %d", arrayC[0] - arrayC[1]);


    return(0);
}