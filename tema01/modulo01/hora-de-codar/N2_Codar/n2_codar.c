#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matrícula: %d \n", nome, matricula);
    printf("Idade: %d - Altura: %.2f \n", idade, altura);

    return 0;
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