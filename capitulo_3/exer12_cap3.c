#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.141592

int main(void){
    /*Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O volume de um cilindro circular é calculado
    por meio da seguinte fórmula: V = PI * raio² * altura */
    float alturaCilindro, raioCilindro, volumeCilindro;
    printf("\nPrograma para calcular volume de um cilindro com base na altura e raio");

    printf("\nQual a altura do cilindro?");
    scanf("%f", &alturaCilindro);

    printf("\nQual o raio do cilindro?");
    scanf("%f", &raioCilindro);

    volumeCilindro = PI * (raioCilindro * raioCilindro) * alturaCilindro;

    printf("\nVolume do cilindro é: %.2f", volumeCilindro);

    return(0);
}