#include <stdio.h>

int main() {
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o numero 1: ");
    scanf("%d", &numero1);

    printf("Entre com o numero 2:");
    scanf("%d", &numero2);

    soma = numero1 + numero2; // operação soma
    subtracao = numero1 - numero2; // operação subtração
    multiplicacao = numero1 * numero2; // operação multiplicação
    divisao = numero1 / numero2; // operação divisão

    printf("O resultado da soma é: %d\n", soma);
    printf("O resultado da subtração é: %d\n", subtracao);
    printf("O resultado da multiplicação é: %d\n", multiplicacao);
    printf("O resultado da divisão é: %d\n", divisao);

}