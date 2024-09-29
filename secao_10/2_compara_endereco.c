/* programa le duas variáveis do usuário, e em seguida,
compara seus endereços de memória e exibe o conteúdo do maior endereço.*/

#include <stdio.h>

// função que recebe ponteiros como parâmetro.
void comparar_endereco(int* primeira, int* segunda){

    /* int maior precisa ser um ponteiro porque estou comparando endereços de memória,
    para armazenar o endereço de memória, ela precisa ser ponteiro.*/
    int* maior = 0;
    if (primeira > segunda){
        maior = primeira;
    }else{
        maior = segunda;
    }
    printf("A variavel de maior endereco de memoria tem o valor: %d\n", *maior);
    printf("Endedreco de primeira: %p\n", primeira);
    printf("Endereco de segunda: %p\n", segunda);
}

int main(){
    int primeira, segunda;

    for(int i = 0; i < 2; i++){
        printf("Digite um numero: ");
        if(i == 0){
            scanf("%d", &primeira);
        }else{
            scanf("%d", &segunda);
        }  
    }
    comparar_endereco(&primeira, &segunda);
    return 0;
}