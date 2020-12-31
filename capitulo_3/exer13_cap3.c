#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    /*Sejam a e b os catetos de um triângulo cuja hipotenusa h é obitida pela equação: h = √a² + b² 
    Faça um programa que leia os valores de A e B, e calcule o valor da hipotenusa através da fórmula dada. Imprima o resultado.
    */
    float ladoA, ladoB, hipotenusa;

    printf("\nDigite o valor do lado A do triângulo: ");
    scanf("%f", &ladoA);

    printf("\nDigite o valor do lado B do triângulo: ");
    scanf("%f", &ladoB);

    hipotenusa = sqrt((ladoA * ladoA) + (ladoB * ladoB));

    printf("\nA hipotenusa é: %.2f", hipotenusa);

    return(0);
}