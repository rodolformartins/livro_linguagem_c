#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na mesma variável. Em seguida, imprima a string invertida */


int main(void){
    char stringUser[10];
    int c, aux2, tam;

    //Lê a string do usuário
    printf("\nDigite uma string e iremos inverter ela e armazenar na mesma variavel, em seguida iremos imprimir a string invertida: ");
    gets(stringUser);

    //variavel somente para definir o tamanho da string
    tam = strlen(stringUser);


    //Invertendo a string
    for(aux2 = 0; aux2 < tam/2; aux2++){
        c = stringUser[aux2];
        stringUser[aux2] = stringUser[tam - 1 - aux2];
        stringUser[tam - 1 - aux2] = c;
    }

    printf("\nString invertida: %s", stringUser);


    return(0);
}