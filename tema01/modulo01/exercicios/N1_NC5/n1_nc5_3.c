#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];
    //sintaxe scanf 
    // scanf("formato1" "formato2, &variavel1, variavel2, ...);

    printf("Digite sua idade: ");
    scanf("%d", &idade); //lê o valor digitado pelo usuário
    printf("A idade é: %d\n", idade); //imprime o valor digitado pelo usuário

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);

    printf("Digite a opção: ");
    scanf(" %c", &opcao);
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