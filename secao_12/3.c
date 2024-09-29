/* programa usa struct, que recebe valores do usuário, calcula e imprime a soma de dois vetores.*/

#include <stdio.h>

typedef struct{
    float x, y, z;
}Vetor;

void receber_dados(Vetor* vetor){
    printf("Insira o valor de x: ");
    scanf("%f", &vetor -> x);
    printf("Insira o valor de y: ");
    scanf("%f", &vetor -> y);
    printf("Insira o valor de z: ");
    scanf("%f", &vetor -> z);
}

Vetor soma_vetores(Vetor vetor1, Vetor vetor2){
    Vetor resultado_vetor;
    resultado_vetor.x = vetor1.x + vetor2.x;
    resultado_vetor.y = vetor1.y + vetor2.y;
    resultado_vetor.z = vetor1.z + vetor2.z;
    return resultado_vetor;
}

void imprimir_dados(Vetor vetor){
    printf("Vetor[ %.2f, %.2f, %.2f ]\n", vetor.x, vetor.y, vetor.z); 
}

int main(){
    Vetor vetor1, vetor2, resultado_vetor;

    //receber os dados do usuário.
    printf("Vetor 1\n");
    receber_dados(&vetor1);

    printf("Vetor 2\n");
    receber_dados(&vetor2);

    // soma dos vetores.
    resultado_vetor = soma_vetores(vetor1, vetor2);

    // imprime os vetores 1 e 2.
    printf("\nvetor 1\n");
    imprimir_dados(vetor1);
    printf("\nvetor 2\n");
    imprimir_dados(vetor2);

    // imprime o resultado da soma dos vetores.
    printf("\nResultado das somas dos vetores:\n");
    imprimir_dados(resultado_vetor);

    return 0;
}