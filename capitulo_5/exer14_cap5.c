#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. 
Essa sequência começa no termo de ordem zero, e a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. 
Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34*/


int main(void){
  int a, i=1, n, ant1, ant2=0;

  printf("\nDigite a posicao do termo de fibonnaci: ");
  scanf("%d", &n);

  for(a = 0; a < n; a++){
      ant1 = i;
      i = ant1 + ant2;
      ant2=ant1;
  }
  printf("\nO termo da posicao %d da sequencia de fibonnaci: %d", n, ant1);

  return(0);
}


   
