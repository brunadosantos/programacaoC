#include <stdio.h>

int main() {
    int tempertura = 25;
    int resultado;

    resultado = tempertura > 30 ? 1 : 0;

    if (resultado == 1)
    {
        printf("Está calor!\n");
    } else {
        printf("Está frio!\n");
    }
    
    return 0;
}