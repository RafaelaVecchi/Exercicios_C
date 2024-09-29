// usuário determina um vetor e uma função determina o maior valor do vetor
// contem função que qnd o usuário digita 0, ela encerra.

#include <stdio.h>

int maior_valor(int vetor[], int qnt){
    int maior = vetor[0];
    for(int i = 1; i < qnt; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

int main(){

    // inicializaei o vetor para não dar problema de lixo de memória.
    int vetor[10] = {0}, controle = 1, i = 0;

    /* i é usado para rastrear quantos numeros foramm inseridos no vetor,
     para cuidar do vetor menor que 10 elementos*/
    while(controle != 0 && i < 10){
        printf("Adicione o %d numero do vetor: \n"
            "[digite 0 para parar de adicionar] \n", i + 1);
        scanf("%d", &controle);

        // laço para não permitir que o 0 seja incluido no vetor.
        if(controle != 0){
            vetor[i] = controle;
            i++;
        }
    }

    int maior = maior_valor(vetor, i);
    printf("O vetor e: ");

    // função que printa apenas os numeros que o usuário determinou
    for(int j = 0; j < i; j ++){
        printf("%d ", vetor[j]);
    }
    printf("\nO maior valor e: %d\n", maior);
    return 0;
}
   