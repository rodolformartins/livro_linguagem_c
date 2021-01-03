#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois numeros forem iguais, imprima a mensagem: "Números iguais". */

int main(void){
    int num1, num2;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("\nO primeiro numero e maior: %d", num1);
    }
    if (num2 > num1){
        printf("\nO segundo numero e maior: %d", num2);
   
    }else{
        if(num1 == num2)
        printf("\nNumeros sao iguais");
    }
    return(0);
}