#include <stdio.h>

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < 3; i++) { // loop externo para linhas
        for (int j = 0; j < 3; j++){ // loop interno para as colunas
            if (matriz[i][j] % 2 == 0)
            {
                evenCount++; // incrementa o contador de pares
            } else {
                oddCount++; // incrementa o contador de ímpares
            }
        }
    }
    // impressão dos resultados
    printf("Número de elementos pares: %d\n", evenCount);
    printf("Número de elementos ímpares: %d\n", oddCount);

    return 0;
}