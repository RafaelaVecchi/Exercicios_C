/*programa que recebe do usuário o nome de um arquivo texto e um caractere. Mostre na tela
quantas vezes aquele caractere aparece dentro do arquivo.*/

#include <stdio.h>
#include <stdlib.h> // exit(1)

int contador_caractere(FILE* arquivo, int caractere_escolhido){
    char ch;
    int qnt_caractere = 0;
    while((ch = getc(arquivo)) != EOF){
        if(ch == caractere_escolhido){
            qnt_caractere++;
        }
    }
    return qnt_caractere;
}

int main(){
    char nome_arquivo[30];
    char caractere;

    printf("Insira o nome do arquivo texto: \n");
    scanf("%s", nome_arquivo);
    printf("Insira o caractere que deseja rastrear: \n");
    scanf(" %c", &caractere); // importante o espaço entre " %c" para não pegar o enter como caractere.

    FILE* arquivo;
    arquivo = fopen(nome_arquivo, "r");

    if(arquivo == NULL){
        perror("ERROR ao abrir o arquivo texto!");
        exit(1);
    }

    printf("O caractere %c aparece %d veze(s) nesse arquivo.", caractere, contador_caractere(arquivo, caractere));
    fclose(arquivo);
    return 0;
}