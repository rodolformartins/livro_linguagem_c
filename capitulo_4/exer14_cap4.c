#include <stdio.h>
#include <stdlib.h>

/*Faça um programa para verificar se determinado numero inteiro lido e divisivel por 3 ou 5, mas não simultaneamente pelos dois*/

int main(void){
    int numUsuario;

    printf("\nDigite um numero e iremos verificar se ele e divisivel por 3 ou por 5, mas nao simultaneamente: ");
    scanf("%d", &numUsuario);

    if(numUsuario % 3 == 0 && numUsuario % 5 == 0){
        printf("\nO numero e divisivel simultaneamente pelos dois");
    }
    else if(numUsuario % 3 == 0){
        printf("\nNumero e divisivel por 3 com resto zero");
    }
    else if(numUsuario % 5 == 0){
        printf("\nNumero e divisivel por 5 com resto zero");
    }
    else if(numUsuario % 3 != 0 && numUsuario % 5 != 0){
        printf("\nO numero nao e divisivel nem por 3 e nem por 5 com resto zero");
    }
    return(0);
}