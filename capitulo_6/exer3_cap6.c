#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os valores lidos juntamente com a média dos valores.*/

int main(void){
    int numUsuario[5], soma, aux1, media;


    //Perguntando valores ao usuário
    for (aux1 = 1; aux1 <=5; aux1++){
    printf("\nDigite um valor: ");
    scanf("\n%d", &numUsuario[aux1]);
    }

    //Somando os valores do vetor
    for(aux1 = 1; aux1 <=5; aux1++){
        soma = numUsuario[aux1] + soma;
    }

    //Exibindo os valores lidos do vetor
    for(aux1 = 1; aux1 <= 5; aux1++){
        printf("\nOs valores lidos sao: %d", numUsuario[aux1]);
    }

    media = soma / 5;

    printf("\nA media e: %d", media);

    printf("\nteste");
    
    return(0);
}