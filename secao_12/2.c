/*. Crie um programa que tenha uma struct chamada aluno contendo nome, número de matrícula e curso.
Leia do usuário a informação de 5 alunos, armazene em um vetor desta estrutura e imprima os dados na
tela. */

#include <stdio.h>

typedef struct{
    char nome[50];
    int numero_matricula;
    char curso[50];
}Aluno;

void ler_dados(Aluno* aluno){
    printf("Insira seu nome: \n");
    scanf("%s", aluno -> nome);
    printf("Insira seu numero de matricula: \n");
    scanf("%d", &aluno -> numero_matricula);
    printf("Insira seu curso: \n");
    scanf("%s", aluno -> curso);
}

void imprimir_dados(Aluno* aluno){
    printf("nome: %s\n", aluno -> nome);
    printf("numero de matricula: %d\n", aluno -> numero_matricula);
    printf("curso: %s\n", aluno -> curso);
}

int main(){
    int numero_alunos = 5;
    Aluno aluno[numero_alunos];

    for(int i = 0; i < numero_alunos; i++){
        printf("\nAluno %d \n", (i + 1));
        ler_dados(&aluno[i]);
    }

    for(int i = 0; i < numero_alunos; i++){
        printf("\nDados do aluno %d\n", (i + 1));
        imprimir_dados(&aluno[i]);
    }
    return 0;
}