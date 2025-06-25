#include <stdio.h>

int main() {
    int vetor[5]; // Declaração de um vetor de 5 inteiros

    // Inicializando o vetor usando o loop 'for'
    for (int i = 0; i < 5; i++)
    {
        vetor[i] = i * 2; // Atribuindo valores ao vetor
    }

    // Exibindo o vetor usando o loop 'for'
    for (int i = 0; i < 5; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}