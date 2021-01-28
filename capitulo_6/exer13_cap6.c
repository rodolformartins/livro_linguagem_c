#include <stdio.h>
#include <stdlib.h>

/*Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números devem ser armazenados no vetor
na ordem que forem lidos, sendo que, caso o usário digite um número que já foi digitado, o programa deve pedir ele para digitar outro número.
Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. 
Exiba na tela o vetor final que foi digitado.*/

int main(void){
    int vetorUser[10], aux, aux2;

    
    //loop para ler 10 numeros do usuario.
        for(aux = 0; aux < 10; aux++){
            printf("\nDigite 10 valores: ");
            scanf("%d", &vetorUser[aux]);
        for(aux2 = 0; aux2 < aux; aux2++){
            if(vetorUser[aux]==vetorUser[aux2]){
                printf("\nNumero repetido, digite outro! ");
                aux--;

                continue;
            }
        }
        }

    //Imprimir o vetor
    for(aux = 0; aux < 10; aux++){
    printf("\nIndice: -> %d, contem o valor: [%d] ", aux, vetorUser[aux]);
    }

    system("pause");

    return(0);
}