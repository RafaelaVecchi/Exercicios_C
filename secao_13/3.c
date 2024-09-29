/*Crie um programa que tenha uma função recursiva que receba um valor inteiro e converta este número
para binário.*/

#include <stdio.h>

int convertor(int valor){
    if (valor == 0) {
        return 0;
    }
    return (valor % 2) + 10 * convertor(valor / 2);
}

int main(){
    int valor = 5;
    printf("%d em binario: %d", valor, convertor(valor));
    return 0;
}