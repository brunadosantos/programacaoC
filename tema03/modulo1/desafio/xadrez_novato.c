#include <stdio.h>

int main() {
    // Declaração das variáveis
    int torre = 1;
    int bispo = 1;

    // Movimentação torre
    // Cabeçalho movimento torre
    printf("Movimentação da Torre\n");
    printf("=====================\n");
    while (torre <= 5) // Executa o comando enquanto a variável torre for menor ou igual a 5
    { 
        printf("Direita \n", torre); // Imprime "Direita" no terminal até que "torre" se torne menor ou igual a 5 e finalizar o loop
        torre++; // incrementa 1 a variável torre
    }
    
    // Movimentação bispo
    // Cabeçalho movimento bispo
    printf("\n");
    printf("Movimentação do Bispo\n");
    printf("=====================\n");
    do // Faz o comando até que a condição se torne verdadeira
    {
        printf("Cima, Direita \n", bispo); // Imprime "Cima, Direita" no terminal até que "bispo" se torne menor ou igual a 5
        bispo++; // incrementa 1 a variável bispo para que ela possa se tornar maior ou igual a 5 e finalizar o loop
    } while (bispo <= 5); // Executa o comando enquanto a variável bispo for menor ou igual a 5
    
    // Movimentação rainha
    // Cabeçalho movimento rainha
    printf("\n");
    printf("Movimentação da Rainha\n");
    printf("=====================\n");
    for (int rainha = 1; rainha <= 8; rainha++) // Executa o comando enquanto a variável rainha seja menor ou igual a 8
    {
        printf("Esquerda \n", rainha); // Imprime "Esquerda" no terminal até que "rainha" se torne menor ou igual a 8
    }
    
    printf("\n"); // pula uma linha para organização do programa no terminal 
    return 0;
}

// Bispo = Se movimenta na diagonal
// Rainha = Se movimenta para qualquer direção
// Torre =  Se movimenta na horizontal ou na vertical