#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais e os escreva na tela*/

int main(void){
int vetorUser[10], aux, aux2;

    //Lê os valores do usuário.
    for(aux = 0; aux < 10; aux++){
        printf("\nDigite o elemento [%d]: ", aux);
        scanf("%d", &vetorUser[aux]);
        }


    //Execução do algoritmo
    for(aux = 0; aux < 10; aux++){
        for(aux2 = aux + 1; aux2 < 10; aux2++){
            if(vetorUser[aux] == vetorUser[aux2]){
                printf("\nO valor %d, se repete!", vetorUser[aux]);
            }
            else{}
        }
    }
    
    return(0);
}