#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*10)A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que: 
i. O primeiro ganhador receberá 46% do total
ii. O segundo receberá 32% do total
iii. O terceiro receberá o restante.

Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/


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