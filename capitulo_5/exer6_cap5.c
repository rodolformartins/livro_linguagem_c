#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostre uma mensagem "FIM" após a contagem*/

int main(void){
int num;

num  = 10;
while(num >= 0){
    printf("\n%d", num);
    num--;
}
printf("\nFIM");

    return(0);
}