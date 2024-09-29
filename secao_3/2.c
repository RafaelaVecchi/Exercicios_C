// Leia um número e imprima o resultado do quadrado deste número.

#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    printf("O quadrado desse numero e: %d", numero * numero);
    return 0;
}