#include <stdio.h>

int main() {
    int idade = 25;
    float altura = 1.75;
    char opcao ='S';
    char nome[20] = "sergio";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c\n", opcao);
}

/* ---- ESPECIFICADOR DE FORMATO ----
    Diz como a mensagem deve aparecer na tela ou terminal do usuário. 
    Exemplo: %s %d %e %c

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica. 
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.

    printf("%formato1, %formato2", variavel1, variavel2)
*/