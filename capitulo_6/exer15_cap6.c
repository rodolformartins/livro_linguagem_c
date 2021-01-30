#include <stdio.h>
#include <stdlib.h>

/*Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela*/

int main(void){
    float vetorUser[10];
    int i;

    //Perguntar os dados do vetor:
    for(i = 0; i < 10; i++){
    printf("\nDigite o valor do elemento [%d]: ", i);
    scanf("%f", &vetorUser[i]);
    }

    
    //Fazer ordenação desse vetor
    int aux2;
    float temp;
    for(i = 10; i > 0; i--){
        for(aux2 = 1; aux2 <= i; aux2++){
                 if(vetorUser[aux2 - 1] > vetorUser[aux2]){
                    temp = vetorUser[aux2 - 1];
                    vetorUser[aux2 - 1] = vetorUser[aux2];
                    vetorUser[aux2] = temp;
                }
            }
        }
    



    //Exibir o vetor
    for(i = 0; i <= 10; i++){
    printf("\nO vetor ordenado e: %.2f", vetorUser[i]);
    }

    printf("\n");
    system("pause");
    return(0);
}