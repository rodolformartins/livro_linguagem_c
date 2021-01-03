#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia dois números e mostre qual deles é o maior*/
int main(void){
    int num1, num2;
    printf("\nDigite o primeiro número: ");
    scanf("%d", &num1);

    printf("\nDigite o primeiro número: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("\nO primeiro valor é maior: %d", num1);
    }
    else
    {
        printf("\nO segundo valor é maior: %d", num2);
    }
    
    return(0);
}