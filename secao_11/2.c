/*programa que recebe do usuário o nome de um arquivo texto e mostre na tela quantas linhas
este arquivo possui.*/

#include <stdio.h>
#include <stdlib.h> //para usar a função exit().

int contador_linhas(FILE* arquivo){
    int linhas = 0;

    // variável ch para armazenar cada caractere lido.
    char ch;
    while((ch = fgetc(arquivo)) != EOF){
        // laço para apenas incrementar qnd encontrar um caractere de quebra de linha '\n'.
        if(ch == '\n'){
        linhas++;
        }
    }
    return linhas;
}

int main(){
    char nome_arquivo[30];

    printf("Digite o nome de um arquivo texto: ");
    scanf("%s", nome_arquivo);

    FILE* arquivo;
    arquivo = fopen(nome_arquivo, "r");

    if(arquivo == NULL){
        perror("ERROR ao abrir o arquivo texto!");
        exit(1);
    }
    
    printf("Este arquivo tem %d linhas\n", contador_linhas(arquivo));

    fclose(arquivo);
    return 0;   
}