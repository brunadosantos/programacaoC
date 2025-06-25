#include <stdio.h>

int main(){
    int idade = 17;
    float altura = 1.75;

    // 1º - idade >= 18 => Verdadeiro
    // 2º - idade <= 30 => Verdadeiro
    // 3º - Verdadeiro && Verdadeiro = Verdadeiro
    // 4º - Verdadeiro && altura > 1.70
    // 5º - Verdadeiro && Verdadeiro => Verdadeiro

    // 1º - idade >= 18 => Falso
    // 2º - idade <= 30 => Verdadeiro
    // 3º - Falso && Verdadeiro = Falso
    // 4º - Falso && altura > 1.70
    // 5º - Falso && Verdadeiro => Falso

    if (idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("Você está na faixa estária e tem a altura adequada\n");
    } else {
        printf("Você não atende aos critérios\n");
    }

    return 0;
}