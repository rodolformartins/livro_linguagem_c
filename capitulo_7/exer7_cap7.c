#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palindromo ou não.
 Um palíndromo é uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. 
 Exemplos: ovo, arara, rever, asa, osso etc.*/


int main(void){
    char stringUser[20];
    int aux1, cont = 0, tam, aux;


    //Lendo a string
    printf("\nDigite uma palavra e iremos verificar se ela e um palindromo: ");
    scanf("%s", stringUser);

    tam = strlen(stringUser);

    aux = tam;

   //Verificar se a palavra e um palindromo.
    for(aux1 = 0; aux1 < tam; aux1++){
            if(stringUser[aux1] == stringUser[aux - 1]){
                aux--;
                cont++;
            }
    }

    if(cont == tam){
        printf("\nA palavra e palindromo!");
    }
    else{
        printf("\nA palavra nao e palindromo!");
    }

    return(0);
}