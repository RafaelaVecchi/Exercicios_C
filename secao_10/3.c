/*Faça um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética
de ponteiros, leia este array do teclado e imprima o dobro de cada valor lido.*/

#include <stdio.h>

int main(){
    int vetor[5];

    for(int i = 0; i < 5; i++){
        printf("Digite %d/5 numeros: ", (i + 1));
        scanf("%d", &vetor[i]);
    }

    // loop para imprimir o dobro.
    for(int i = 0; i < 5; i ++){
        printf("%d\n", (*(vetor + i) * *(vetor + i))); // vetor (nome_vetor) + i (posição)
    }
    return 0;
}