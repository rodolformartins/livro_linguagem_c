#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares*/

int main(void){
    int numUsuario, op;

    printf("\nDigite um numero e iremos imprimir os primeiros numeros impares ate ele: ");
    scanf("%d", &numUsuario);

   do{
       if(numUsuario % 2 != 0){
        printf("\n%d", numUsuario);
       }
       numUsuario--;
   }while(numUsuario >= 0);
      
    return(0);
}