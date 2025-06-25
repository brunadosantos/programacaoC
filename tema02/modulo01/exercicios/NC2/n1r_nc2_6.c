#include <stdio.h>

int main() {
    int numero = 193, resultado;

    resultado = numero % 2;

    printf("O resto da divisão é %d\n", resultado);

    if (resultado == 0) {
        printf("O número é par\n");
    }

    return 0;
}