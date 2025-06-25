#include <stdio.h>

#define linha 10
#define coluna 10

int main() {
    int matriz[linha][coluna];
    int target = 90;
    int found = 0;
    int soma = 1;

    // busca condicional do elemento alvo
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (matriz[i][j] == target)
            {
                printf("O valor %d foi encontrado no índice (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (!found)
    {
        printf("Elemento %d não encontrado na matriz\n", target);
    }

    return 0;
}