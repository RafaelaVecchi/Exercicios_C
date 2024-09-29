/*programa cria um arquivo texto, 
Permite que o usuário grave caracteres, até que entre com o caractere‘0’ e
printa todos os caracteres armazenados.*/

#include <stdio.h>
#include <stdlib.h> // para usar a função exit().

int main(){
    FILE* arquivo;
    arquivo = fopen("arq.txt", "wa");
    char caractere = 'a';

    // condição para evitar erro na criação do arquivo.
    // NULL significa erro ao criar ou abrir o arquivo.
    // exit(1) termina o programa.
    if (arquivo == NULL) { perror("ERROR ao criar arquivo texto!"); exit(1); }

    // loop que o usuário da os caracteres e os dados são colocados no arquivo.
    while(caractere !='0'){
        printf("Digite um caractere: [digite 0 para sair]\n");
        
        /* importante o espaço entre "%c"
        Isso faz com que scanf ignore qualquer espaço em branco (incluindo o caractere de nova linha)
        antes do caractere de entrada.
        scanf lê o caractere de entrada e também o caractere de nova linha (Enter). */ 
        scanf(" %c", &caractere);

        if(caractere != '0'){
            // add os caracteres no arquivo.
            fputc(caractere, arquivo);
        }
    }

    fclose(arquivo);
    arquivo = fopen("arq.txt", "r");

    if(arquivo == NULL){perror("ERROR ao abrir o arquivo texto"); exit(1);}

    // fgetc() lê o próximo caractere do arquivo.
    printf("Os caracteres digitados foram: \n");
    while((caractere = fgetc(arquivo)) != EOF){
        printf("%c\n", caractere);
    }

    fclose(arquivo);
    return 0;
}