// Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>

int main(){
    int numero, soma = 0;

    for(int i = 0; i < 3; i ++){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
    }
    printf("a soma e: %d", soma);
    return 0;
}
