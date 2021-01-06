#include <stdio.h>
#include <stdlib.h>

/*Uma empresa vende o mesmo produto para quatro diferentes estados. 
Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor
e o estado de destino do produto e o programa retorne o preço final do produto acresido do imposto do estado em que ele será vendido. 
Se o estado digitado não for válido, mostrará uma mensagem de erro*/

int main(void){
    float valorProduto;
    float impostoEstado;
    int escolherEstado;

    printf("\nEntre com o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("\nEm qual estado voce comprou o produto? MG = 7, SP = 12, RJ = 15, MS = 8 (digite apenas o valor correspondente ao estado)");
    scanf("%d", &escolherEstado);

    
    switch(escolherEstado) {
    case 7: {
        impostoEstado = valorProduto * 0.07 + valorProduto;
        printf("\nVoce comprou o produto em Minas gerais, imposto de 7 por cento, valor total do produto: %.2f", impostoEstado);
    }
    break;
   case 12: {
        impostoEstado = valorProduto * 0.12 + valorProduto;
        printf("\nVoce comprou o produto em sao paulo, imposto de 12 por cento, valor total do produto: %.2f", impostoEstado);
    }
    break;
    case 15: {
            impostoEstado = valorProduto * 0.15 + valorProduto;
            printf("\nVoce comprou o produto no rio de janeiro, imposto de 12 por cento, valor total do produto: %.2f", impostoEstado);
    }
    break;
    case 8: {
        impostoEstado = valorProduto * 0.08 + valorProduto;
        printf("\nVoce comprou o produto no mato grosso do sul, imposto de 12 por cento, valor total do produto: %.2f", impostoEstado);
    }
    break;
    }
    return(0);
}