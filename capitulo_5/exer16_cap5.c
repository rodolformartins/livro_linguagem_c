#include <stdio.h>
#include <stdlib.h>

/*Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica, ou seja:
Hn = 1 + (1/2) + (1/3) + (1/4)... + (1/n) 
Apresente um programa que calcule o valor de qualquer Hn*/

int main(void){
    float Hn, numUsuario, aux, op = 1, divisor = 2, soma;

    printf("\nPrograma para calcular numero harmonico Hn, digite um valor e iremos calcular o numero harmonico: ");
    scanf("%f", &numUsuario);

    for(aux = 1; aux <= numUsuario; aux++){
        Hn = (1 + (op / divisor)); 
        soma = Hn + soma;
        divisor++;
        printf("\n%f", Hn);
    }

    printf("\nO valor de Hn e: %.2f", soma);


    return(0);
}
