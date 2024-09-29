/*Crie um programa que tenha uma função recursiva que calcule e retorne o fatorial de um número inteiro N.*/

#include <stdio.h>

int fatorial(int numero){
    if(numero <= 1){
        return numero;
    }
    return numero * fatorial(numero - 1); 
}

int main(){
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("O fatorial de %d e: %d", numero, fatorial(numero));
    return 0;
}