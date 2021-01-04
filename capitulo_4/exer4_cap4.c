#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que leia o salário de um trabalhador e o valor da prestação de um emprestimo. Se a prestação: 
- For maior qye 20% do salário, imprima: "Empréstimo não concedido"
- Caso contrário, imprima: "Empréstimo concedido" */

int main(void){
    float salario, prestacao, porcentagem;
    printf("\nDigite seu salario: ");
    scanf("%f", &salario);

    printf("\nDigite o valor da prestacao: ");
    scanf("%f", &prestacao);

    porcentagem = (prestacao / salario) * 100;

    if(porcentagem > 20){
        printf("\nEmprestimo nao concedido");
    }
    else{
        printf("\nEmprestimo concedido");
    }
    return(0);
}