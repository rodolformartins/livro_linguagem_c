#include <stdio.h>
#include <stdlib.h>

/*Leia um conjunto de números reais, armazenando-o em vetor. 
Em seguida, calcule o quadrado de cada elemento desse vetor, armazenando esse resultado em outro vetor. Os conjuntos têm no máximo 20 elementos. 
imprima os dois conjuntos de números  */

int main(void){
    int vetor[5], aux, vetor2[5];

    for(aux = 1; aux <=5; aux++){
    printf("\nDigite um numero para o vetor: ");
    scanf("%d", &vetor[aux]);
    vetor2[aux] = vetor[aux] * vetor[aux];
    }

    //Exibindo cada indice do vetor.
    for(aux = 1; aux <= 5; aux++){
        printf("\nValor do vetor: %d", vetor[aux]);
    }

    //Exibindo o vetor que indica os resultados ao quadrado
    for(aux = 1; aux <= 5; aux++){
        printf("\nValor do vetor ao quadrado: %d", vetor2[aux]);
    }


    return(0);
}