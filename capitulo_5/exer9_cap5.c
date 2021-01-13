#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor lido*/


int main(void){
    int num, maiorNum, menorNum, op = 0, ini = 0;

        do{
            printf("\nDigite dez valores e iremos exibir o menor valor lido: ");
            scanf("%d", &num);
            if(ini == 0){
                menorNum = num;
                maiorNum = num;
                ini++;
            }
            else if(num > maiorNum){
                maiorNum = num;
            }else if(num < menorNum){
                menorNum = num;
            }
            
            op++;
    
        }while(op <= 9);

    printf("\nMaior numero %d", maiorNum);
    printf("\nMenor numero %d", menorNum);

    return(0);
}