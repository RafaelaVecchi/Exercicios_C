/*Crie um programa que tenha uma função recursiva que receba um número inteiro positivo N e calcula e
apresente o somatório dos números de 1 a N.*/

#include <stdio.h>

// função chama ela mesma.
int soma(int numero){

    // laço de parada, vai identificar o último número.
    if(numero <= 1){
        return numero;
    }
    return numero + soma(numero - 1);
}

int main(){
    int numero;

    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &numero);
    printf("A soma do numero %d ate 1 e: %d", numero, soma(numero));
    return 0;
}