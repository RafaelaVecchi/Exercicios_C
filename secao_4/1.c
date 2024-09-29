// Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores lidos.

#include <stdio.h> 

// funçaõ que calcula o quadrado
int quadrado(int num){
    return num * num;
}

int main(){
    int numero, soma_quadrado = 0;

    for(int i = 0; i < 3; i ++){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        // adicionamos os quadrados dos numeros numa variavel
        soma_quadrado += quadrado(numero);
    }
    printf("A soma dos quadrados e: %d", soma_quadrado);
    return 0;
}
