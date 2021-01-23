#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse vetor.*/

int main(void){
    int vetorUser[10], aux1 = 0, menor, maior, ini = 0;

   do{
        printf("\nDigite 10 valores: ");
        scanf("%d", &vetorUser[aux1]);
    
        if (ini == 0){
            menor = vetorUser[aux1];
            maior = vetorUser[aux1];
            ini++;
        }
        else if(vetorUser[aux1] > maior){
            maior = vetorUser[aux1];
        }
        else if(vetorUser[aux1] < menor){
            menor = vetorUser[aux1];
        }
        
        aux1++;

    }while(aux1 <= 9);

    printf("\nMaior numero e: %d", maior);

    printf("\nMenor numero e: %d", menor);

    return(0);
}