// Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao
// valor que cada um deu para a realização da aposta. Faça um programa que leia quanto cada apostador
// apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base no valor investido.

#include <stdio.h>

float calculo_porcentagem(float aposta, float total_apostas){
    return aposta / total_apostas;
}

float premio_proporcional(float premio, float porcentagem){
    return premio * porcentagem;
}

int main(){
    float premio;
    float aposta[3];
    float total_apostas = 0.0;

    printf("Digite o valor do premio: ");
    scanf("%f", &premio);

    for(int i = 0; i < 3; i ++){
        printf("Digite sua aposta: ");
        scanf("%f", &aposta[i]);
        total_apostas += aposta[i];
    }

    // imprimir todos os elementos do array
    for(int i = 0; i < 3; i ++){
        float porcentagem = calculo_porcentagem(aposta[i], total_apostas);
        float calculo_premio = premio_proporcional(premio, porcentagem);
        printf("Jogador %d ganhou %.2f\n", i + 1,  calculo_premio);
    }
    return 0;
}