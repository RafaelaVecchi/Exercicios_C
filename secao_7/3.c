// programa le um vetor de 10 posições aleatorias e atribui valor 0 para todos os elementos que
// possuírem valores negativos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int vetor[10];

    srand((unsigned)time(NULL)); // inicializa o gerador de numeros aleatórios.

    for(int i = 0; i < 10; i++){
        vetor[i] = (rand() % 201) - 100; // gera numeros aleatórios entre -100 e 100.
        
        // atribui valor 0 para todo elemento negativo.
        if(vetor[i] < 0){ 
            vetor[i] = 0;
        }
    }

    // printa o vetor
    printf("Vetor atualizado: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}