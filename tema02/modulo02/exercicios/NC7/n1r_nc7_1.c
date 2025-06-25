#include <stdio.h>

int main() {
    char variavel;

    printf("Digite um valor: ");
    scanf("%s", &variavel);

    switch (variavel){
    case 'a':
        printf("Código a ser executado se variável == a\n");
        printf("Teste do case 1");
    break;
    case 'b':
        printf("Código a ser executado se variável == b\n");
    break;
    default:
        printf("Código a ser executado se variável não for a ou b\n");
    }

    return 0;
}