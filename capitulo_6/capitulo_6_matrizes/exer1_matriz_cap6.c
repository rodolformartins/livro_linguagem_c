#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia uma matriz de tamanho 3 x 3. Imprima na tela o menor valor contido nessa matriz*/

int main(void){
int matrizUser[3][3], aux1, aux2, menor, maior;


//Pedindo os dados da matriz
for(aux1 = 0; aux1 < 3; aux1++){
    for(aux2 = 0; aux2 < 3; aux2++){
        printf("\nDigite o valor do indice [%d]-[%d] da matriz: ", aux1, aux2);
        scanf("%d", &matrizUser[aux1][aux2]);
}
}

//Imprimindo os dados da matriz
for(aux1 = 0; aux1 < 3; aux1++){
    for(aux2 = 0; aux2 < 3; aux2++){
        printf("\nDados da matriz na posicao [%d],[%d] = %d", aux1, aux2, matrizUser[aux1][aux2]);
    }
}

//Imprimindo o menor e maior valor contido na matriz
int i = 0;
for(aux1 = 0; aux1 < 3; aux1++){
    for(aux2 = 0; aux2 < 3; aux2++){
        if(i == 0){
            menor = matrizUser[aux1][aux2];
            maior = matrizUser[aux1][aux2];
            i++;
        }
        else if(matrizUser[aux1][aux2] > maior){
            maior = matrizUser[aux1][aux2];
        }
        else if(matrizUser[aux1][aux2] < menor){
            menor = matrizUser[aux1][aux2];
        }
    }
}

printf("\nMaior valor: %d", maior);
printf("\nMenor valor: %d", menor);

    return(0);
}