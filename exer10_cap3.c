#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"");

    float primeiroGanhador, segundoGanhador, terceiroGanhador;

    printf("\nPrograma para calcular porcentagem de um prêmio dê R$780.000,00 dividido entre três ganhadores ");

    printf("\nsendo o primeiro recebe 46 por cento, o segundo recebe 32 por cento e o terceiro recebe o restante dê 22 por cento");

    primeiroGanhador = 0.46 * 780000.00;

    segundoGanhador = 0.32 * 780000.00;

    terceiroGanhador = 0.22 * 780000.00;

    printf("\n\nO primeiro ganhador recebeu: %.2f", primeiroGanhador);

    printf("\nO segundo ganhador recebeu: %.2f", segundoGanhador);

    printf("\nO terceiro ganhador recebeu: %.2f", terceiroGanhador);

    return(0);
}