#include <stdio.h>
#include <stdlib.h>

/*Leia uma matriz de tamanho 10x3 com as notas de 10 alunos em três provas. 
Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2 
e o numero de alunos cuja pior nota foi na prova 3.*/

int main(void){
    int matrizUser[10][3], aux1, aux2, i = 0, menorNota, cont = 0, soma1 = 0, soma2 = 0, soma3 = 0, cont2 = 0, cont3 = 0;


    //Lendo nota dos alunos
    for(aux1 = 0; aux1 < 10; aux1++){
        for(aux2 = 0; aux2 < 3; aux2++){
            printf("\nDigite a nota do aluno para o indice [%d]-[%d] notas(entre 0 e 10): ", aux1, aux2);
            scanf("%d", &matrizUser[aux1][aux2]);
        }
    }


    //Analisando as piores notas da prova 1
    for(aux1 = 0; aux1 < 10; aux1++){
            aux2 = 0;
            if(matrizUser[aux1][aux2] < 5){
                cont++;
            }

            soma1 = soma1 + matrizUser[aux1][aux2];
            }
    //Analisando as piores notas da prova 2
    for(aux1 = 0; aux1 < 10; aux1++){
            aux2 = 1;
            if(matrizUser[aux1][aux2] < 5){
                cont2++;
            }

            soma2 = soma2 + matrizUser[aux1][aux2];
            }

    //Analisando as piores notas da prova 3
    for(aux1 = 0; aux1 < 10; aux1++){
            aux2 = 2;
            if(matrizUser[aux1][aux2] < 5){
                cont3++;
            }

            soma3 = soma3 + matrizUser[aux1][aux2];
            }

    printf("\nQuantidade de alunos com notas ruins na prova 1: %d", cont);
    printf("\nQuantidade de alunos com notas ruins na prova 2: %d", cont2);
    printf("\nQuantidade de alunos com notas ruins na prova 3: %d", cont3);

    printf("\nSoma da prova 1: %d", soma1);
    printf("\nSoma da prova 2: %d", soma2);
    printf("\nSoma da prova 3: %d", soma3);


    return(0);
}