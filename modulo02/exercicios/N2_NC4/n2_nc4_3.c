#include <stdio.h>

int main(){
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float.

    printf("Resultado: %.2f\n", resultado); // retorna uma variavel de ponto flutuante.

    // conversão implicita pode resultar na perda de dados.
    // O double é mais preciso que o float

    return 0;
}