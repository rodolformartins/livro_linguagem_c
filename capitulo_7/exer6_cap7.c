#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um caractere (vogal ou consoante) 
e substitua todas as vogais da palavra dada por esse caractere. Ao final final imprima nova string e o numero de vogais que ela possui.*/

int main(void){
    char stringUser[10];
    int aux1, tam, cont = 0;

    
    //Lendo a string
    for(aux1 = 0; aux1 <= tam; aux1++){
    printf("\nDigite uma string e iremos contar quantas vogais ela possui: ");
    scanf("%s", stringUser);
    }


    tam = strlen(stringUser);
    printf("Tamanho da string: %d", tam);

    //Contando as vogais
    for(aux1 = 0; aux1 < tam; aux1++){
        if(stringUser[aux1] == 'a' || stringUser[aux1] == 'e' || stringUser[aux1] == 'i' || stringUser[aux1] == 'o' || stringUser[aux1] == 'u'){
            printf("\nPosicao %d contem %c", aux1, stringUser[aux1]);
            cont++;  
    }
    }

    //Inserindo novos caracteres no local da vogal
    for(aux1 = 0; aux1 < tam; aux1++){
        if(stringUser[aux1] == 'a' || stringUser[aux1] == 'e' || stringUser[aux1] == 'i' || stringUser[aux1] == 'o' || stringUser[aux1] == 'u'){
            printf("\nDigite um novo caractere para a posicao com vogal: ");
            scanf("\n%c", &stringUser[aux1]);
    }
    }

    printf("\nQuantidade de vogais nessa string: %d", cont);

    printf("\nImprimindo a nova string modificada: %s", stringUser);



    return(0);
}