#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule e mostre na tela a quantidade de números negativos e a soma dos números positivos desse vetor*/

int main(void){
    int vetorUser[10], aux, numerosNegativos = 0, soma = 0;

    for(aux = 1; aux <= 10; aux++){
    printf("\nDigite 10 valores: ");
    scanf("%d", &vetorUser[aux]);

    if(vetorUser[aux] < 0){
        numerosNegativos++;
    }
    else{
        soma = vetorUser[aux] + soma;
    }
    }

    printf("\nA quantidade de numeros negativos e: %d", numerosNegativos);

    printf("\nA soma dos valores positovs e: %d", soma);

    return(0);
}