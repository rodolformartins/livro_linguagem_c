#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa*/

int main(void){
float altura, peso;

printf("\nDigite sua altura: ");
scanf("%f", &altura);

printf("\nDigite seu peso: ");
scanf("%f", &peso);

if(altura <= 1.20 && peso <= 60){
    printf("\n/Voce esta na categoria A!");
}
else if(altura >= 1.20 && altura <= 1.70 && peso <= 60){
    printf("\nVoce esta na categoria B!");
}
if(altura > 1.70 && peso <= 60){
    printf("\nVoce esta na categoria C!");
}
else if(altura <= 1.20 && peso >= 60 && peso <= 90){
    printf("\nVoce esta na categoria D!");
}
if(altura >= 1.20 && altura <= 1.70 && peso >= 60 && peso <= 90){
    printf("\nVoce esta na categoria E!");
}
else if(altura > 1.70 && peso >= 60 && peso <= 90){
    printf("\nVoce esta na categoria F!");
}
if(altura <= 1.20 && peso > 90){
    printf("\nVoce esta na categoria G");
}
else if(altura >= 1.20 && altura <= 1.70 && peso > 90){
    printf("\nVoce esta na categoria H");
}
if(altura > 1.70 && peso > 90){
    printf("\nVoce esta na categoria I");
}

    return(0);
}