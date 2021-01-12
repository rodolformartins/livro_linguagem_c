#include <stdio.h>
#include <stdlib.h>

/*Faça um porgrama que determine e mostre os cinco primeiros múltiplos de 3 consideerando números maiores que 0*/

int main(void){
    int num, multiplo;

multiplo = 3;

 for(num = 1; multiplo <= 15; multiplo++){
     if(multiplo % 3 == 0){
     printf("\n%d", multiplo);
     }
     num * multiplo;
 }
    return(0);
}