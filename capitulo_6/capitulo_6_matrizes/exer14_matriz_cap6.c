#include <stdio.h>
#include <stdlib.h>


/*Faça um programa que leia uma matriz de tamanho 5x5. Calcule a soma dos elementos dessa matriz que pertencem à diagonal principal ou secundária. 
Calcule também a soma dos elementos que não pertencem a nenhuma das diagonais. Imprima na tela a diferença entre os dois valores.*/

int main(void){
    int matrizUser[5][5], aux1, aux2, soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0, somaDiagonal = 0, somaRestante = 0;

    
    
    //Lendo os dados da matriz
    for(aux1 = 0; aux1 < 5; aux1++){
        for(aux2 = 0; aux2 < 5; aux2++){
        printf("\nDigite os dados da matriz no indice: [%d]-[%d] ", aux1, aux2);
        scanf("%d", &matrizUser[aux1][aux2]);
        }
    }

    
    //Calculando os elementos da diagonal principal
     for(aux1 = 0; aux1 < 5; aux1++){
        for(aux2 = 0; aux2 < 5; aux2++){
        if(aux1 == aux2){
            somaDiagonal = somaDiagonal + matrizUser[aux1][aux2];
        }
        }
    }

    //Calculando os elementos que não pertencem a nenhuma das diagonais
    for(aux1 = 0; aux1 < 5; aux1++){
        for(aux2 = 0; aux2 < 5; aux2++){
        //Calculando o valor da primeira linha
        if(aux1 == 0 && aux2 > 0 && aux2 < 4){
            soma1 = soma1 + matrizUser[aux1][aux2];
        }
        //Calculando o valor da segunda linha
        if(aux1 == 1 && aux2 != 1 && aux2 != 3){
            soma2 = soma2 + matrizUser[aux1][aux2];
        }
        //Calculando o valor da terceira linha
        if(aux1 == 2 && aux2 != 2){
            soma3 = soma3 + matrizUser[aux1][aux2];
        }
        //Calculando o valor da quarta linha
        if(aux1 == 3 && aux2 != 1 && aux2 != 3){
            soma4 = soma4 + matrizUser[aux1][aux2];
        }
        //Calculando o valor da quinta linha
        if(aux1 == 4 && aux2 != 0 && aux2 != 4){
            soma5 = soma5 + matrizUser[aux1][aux2];
        }

        }
    }


    printf("\nValor total da linha 1: %d", soma1);
    printf("\nValor total da linha 2: %d", soma2);
    printf("\nValor total da linha 3: %d", soma3);
    printf("\nValor total da linha 4: %d", soma4);
    printf("\nValor total da linha 5: %d", soma5);

    somaRestante = soma1 + soma2 + soma3 + soma4 + soma5;


    printf("\nValor total da diagonal principal: %d", somaDiagonal);

    printf("\nValor total dos indices que nao pertencem a nenhuma diagonal: %d", somaRestante);

    printf("\nA diferenca entre o restante da matriz e a diagonal e: %d", somaRestante - somaDiagonal);



    


    return(0);
}