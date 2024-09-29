/* programa possui struct, le e armazena os dados em uma
struct e imprime. */

#include <stdio.h>

typedef struct{
    char nome[30];
    int idade;
    char endereco[100];
}Pessoa;

// -> acessa um membro de uma estrutura através de um ponteiro.
void ler_dados(Pessoa* pessoa){
    printf("Insira seu nome: \n");
    scanf("%29s", pessoa -> nome);  // Limita a entrada a 29 caracteres
    printf("Insira sua idade: \n");
    scanf("%d", &pessoa -> idade);
    printf("Insira seu endereco: \n");
    scanf(" %99[^\n]", pessoa -> endereco); // Lê até uma nova linha
}

void imprimir(Pessoa* pessoa){
    printf("nome: %s\n", pessoa -> nome);
    printf("idade: %d\n", pessoa -> idade);
    printf("endereco: %s\n", pessoa -> endereco);
}

int main(){
    int numero_pessoas = 3; // determinei quantas pessoas vou ter no struct.
    Pessoa pessoa[numero_pessoas];
    
    for(int i = 0; i < numero_pessoas; i++){
        printf("\nPessoa %d:\n", i+1);
        ler_dados(&pessoa[i]);
    }

    for(int i = 0; i < numero_pessoas; i++){
        printf("\nDados da Pessoa %d:\n", i+1);
        imprimir(&pessoa[i]);
    }
    
    return 0;
}