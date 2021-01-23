#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela quantos valores pares foram armazenados nesse vetor.*/

int main(void){
int numUsuario[10], aux1, par = 0, impar = 0;

for(aux1 = 1; aux1 <= 10; aux1++){
    printf("\nDigite um valor: ");
    scanf("%d", &numUsuario[aux1]);

    if(numUsuario[aux1] % 2 == 0){
            par++;
        }
        else{
            impar++;
        }
}
    
    printf("\nQuantidade de numeros par e: %d", par);


    return(0);
}