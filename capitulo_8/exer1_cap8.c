#include <stdio.h>
#include <stdlib.h>

/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma estrutura. 
Em seguida, imprima na tela os dados da estrutura lida */

struct cadastro{
    char nome[20];
    int idade;
    char endereco[30];
};

int main(){
    struct cadastro c;

    printf("\nDigite o nome do cadastro: ");
    gets(c.nome);

    printf("\nDigite o endereco do cliente: ");
    gets(c.endereco);

    printf("\nDigite a idade do cliente: ");
    scanf("%d", &c.idade);

    


    printf("\nNome: %s", c.nome);
    printf("\nIdade: %d", c.idade);
    printf("\nEndereco: %s", c.endereco);

    return(0);
}