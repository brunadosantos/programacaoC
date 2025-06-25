#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 1;

    // 1º - a > 0 => Verdadeiro
    // 2º - b < 0 => Verdadeiro
    // 3º - Verdadeiro && Verdadeiro = Verdadeiro
    // 4º - Verdadeiro || c == 0
    // 5º - Verdadeiro || Falso => Verdadeiro

    // 1º - a > 0 => Verdadeiro
    // 2º - b < 0 => Falso
    // 3º - Verdadeiro && Falso = Falso
    // 4º - Falso || c == 0
    // 5º - Falso || Falso => Falso

    if (a > 0 && b < 0 || c == 0) {
        printf("A condição é verdadeira\n");
    } else {
        printf("A condição é falsa\n");
    }

    return 0;
}