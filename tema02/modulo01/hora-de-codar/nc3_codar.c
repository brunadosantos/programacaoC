#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    printf("Digite a umidade: ");
    scanf("%f", &umidade);

    printf("Digite o estoque: ");
    scanf("%u", &estoque);

    if (temperatura > 30) {
        printf("Temperatura alta\n");
    } else {
        printf("Temperatura dentro dos parâmetros\n");
    }

    if (umidade > 50){
        printf("Umidade Elevada\n");
    } else {
        printf("Umidade dentro dos parâmetros\n");
    }

    if (estoque < estoqueMinimo) {
        printf("Estoque abaixo do mínimo\n");
    } else {
        printf("Estoque normal!\n");
    }

    return 0;
}