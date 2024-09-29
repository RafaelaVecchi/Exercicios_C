// Leia quantas notas o usuário quiser, calcule a média aritmética e imprima o resultado.

#include <stdio.h>
#include <string.h> // obtem as funções strcpy e strcmp
#include <ctype.h> // obtem a função toupper

// função para colocar as letras em maiúsculo .upper()
// void significa que a função não retorna nenhum valor
void to_upper(char* str){
    while(*str){
        *str = toupper((unsigned char) *str);
        str ++;
    }
}

// função para calcular a Média Aritmética
float media_arit(float soma, int contador){
    return soma / contador;
}

int main(){
    char start[4];

    // strcpy copia strings
    // strcpy(destino, origem)
    // segundo argumento (a string de origem) para o local apontado pelo primeiro argumento (a string de destino).
    strcpy(start, "SIM"); 
    float nota = 0, soma_notas = 0;
    int contador = 0;

    // função para inicializar o programa
    // para eu comparar string (start) com operadores (==), eu preciso usar strcmp()
    while(strcmp(start,"SIM") == 0){ 
        printf("Digite sua nota: ");
        scanf("%f", &nota);
        soma_notas += nota;
        contador += 1;

        printf("Deseja adicionar mais uma nota? [SIM] [NAO]");
        scanf("%s", start);
        to_upper(start);
    }
    float media = media_arit(soma_notas, contador);
    printf("Sua Media Aritmetica e: %.3f\n", media);
    printf("Obrigada por usar a calculadora de Medias Aritmeticas!");
    return 0;
}