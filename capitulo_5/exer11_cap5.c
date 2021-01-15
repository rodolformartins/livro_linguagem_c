#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia um número positivo e imprima seus divisores. 
Exemplos: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66 */

int main(void){
    int numUsuario, op = 1;

    printf("\nDigite um numero inteiro positivo, e iremos te mostrar os divisores dele: ");
    scanf("%d", &numUsuario);


    while(op <= numUsuario){
        if(numUsuario % op == 0){
            printf("\nDivisores do numero: %d, sao: %d", numUsuario, op);
            op++;
        }
        else if(numUsuario % op != 0){
            op++;
        }
    }    
    return(0);
}