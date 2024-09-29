// programa cria um vetor de 10 posições de forma aleatoria e mostra seus valores pares

#include <stdio.h>
#include <stdlib.h> // usa a função rand() e srand()
#include <time.h> // usa a função time(NULL)

int main(){
    int vetor[10];
    int pares = 0;

    srand((unsigned)time(NULL)); // inicializa o gerador de numeros aleatórios

    for(int i = 0; i < 10; i++){
        vetor[i] = (rand() % 100); // Gera um número aleatório entre 0 e 99  
        
        if(vetor[i] % 2 == 0){ // verifica se o valor é par
            printf("O valor %d e par\n", vetor[i]);
            pares ++;
        }
    }
    printf("Vetor: ");
    for(int i = 0; i < 10; i++){ // imprime o vetor inteiro
        printf("%d ", vetor[i]);
    }
    printf("\nTotal de pares = %d", pares);
    return 0;
}
