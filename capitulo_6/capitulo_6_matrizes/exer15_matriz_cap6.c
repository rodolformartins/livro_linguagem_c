#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia uma matriz A de tamanho 5x5. Em seguida, calcule e imprima a matriz B, sendo que B = A²*/


int main(void){
    int matrizA[5][5], matrizB[5][5], aux1, aux2;

    
    
    //Lendo os dados da matriz
    for(aux1 = 0; aux1 < 5; aux1++){
        for(aux2 = 0; aux2 < 5; aux2++){
        printf("Digite o valor do indice [%d]-[%d] ", aux1, aux2);
        scanf("%d", &matrizA[aux1][aux2]);    
        }
    }

    
    
    //Elevando a matriz a potência de 2
    for(aux1 = 0; aux1 < 5; aux1++){
    for(aux2 = 0; aux2 < 5; aux2++){
    matrizB[aux1][aux2] = matrizA[aux1][aux2] * matrizA[aux1][aux2];
    }
    }
    
    //Imprimindo a matriz B
    for(aux1 = 0; aux1 < 5; aux1++){
    for(aux2 = 0; aux2 < 5; aux2++){
         printf("\nMatriz B no indice [%d]-[%d], contem: %d", aux1, aux2, matrizB[aux1][aux2]);
    }
    }

    return(0);
}