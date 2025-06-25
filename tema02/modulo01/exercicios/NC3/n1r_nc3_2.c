#include <stdio.h>

int main() {
    int numero = 10;
    int resultado;

    resultado = numero % 2;

    if (resultado == 0) {
        printf("O número é PAR\n");
    } else {
        printf("O número é IMPAR\n");
    }

    return 0;
}