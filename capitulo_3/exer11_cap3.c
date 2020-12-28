#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.141

int main(void){
    float raioDoCirculo, areaDoCirculo;
    printf("\nQual o valor do raio do circulo?");
    scanf("%f", &raioDoCirculo);

    areaDoCirculo = PI * (raioDoCirculo * raioDoCirculo);

    printf("\nA área do circulo é: %.2f", areaDoCirculo);

    return(0);
}