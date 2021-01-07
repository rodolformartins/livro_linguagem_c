#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*Escreva um programa que, dada a idade de um nadador, classifique-o em uma da seguintes categorias: 
infantil A: 5-7, infantil B: 8-10 Juvenil A: 11-13 Juvenil B: 14-17 Sênior: maior de 18 */

int main(void){
int idade;

printf("\nQual sua idade? para classificarmos sua categoria de nadador: ");
scanf("%d", &idade);

if (idade >= 5 && idade <= 7){
    printf("\nSua categoria de nadador e: infantil A");
}
else if(idade >= 8 && idade <= 10){
    printf("\nSua categoria de nadador e: infantil B");
}
if (idade >= 11 && idade <= 13){
    printf("\nSua categoria de nadador e: Juvenil A");
}
else if (idade >= 14 && idade <= 17){
    printf("\nSua categoria de nadador e: Juvenil B");
}
if(idade >= 18){
    printf("\nSua categoria de nadador e: Senior");
}
    return(0);
}