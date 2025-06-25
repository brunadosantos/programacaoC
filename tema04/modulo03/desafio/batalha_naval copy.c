#include <stdio.h>
#include <stdlib.h>

// declaração de constantes
#define tamanho_tabuleiro 10
#define tamanho_cone 5
#define tamanho_cruz 5
#define tamanho_octaedro 5
#define tamanho_navio 3

// declaração de matriz
int tabuleiro[tamanho_tabuleiro][tamanho_tabuleiro] = {0}; // define o tamanho da matriz em 10x10 e todos os indices recebem o valor 0.
int tabuleiro_cone[tamanho_cone][tamanho_cone] = {0}; // define o tamanho da matriz em 5x5 e todos os indices recebem o valor 0.
int tabuleiro_cruz[tamanho_cruz][tamanho_cruz] = {0}; // define o tamanho da matriz em 5x5 e todos os indices recebem o valor 0.
char tabuleiro_octaedro[tamanho_octaedro][tamanho_octaedro] = {0}; // define o tamanho da matriz em 5x5 e todos os indices recebem o valor 0.

// definição de funções
void matrizCone(){
    
    // definição do cone
    for (int i = 0; i < 3; i++)
    {
        for (int j = tamanho_cone / 2 - i; j <= tamanho_cone / 2 + i; j++)
        {
            if (j >= 0 && j < tamanho_cone)
            {
                tabuleiro_cone[i][j] = 5; // armazena os valores do cone
            }
        }
    }
}

void matrizCruz(){

    // declaração de variável para encontrar o meio do tabuleiro
    int meio = tamanho_cruz / 2;

    // definição da cruz
    for (int i = 0; i < tamanho_cruz; i++)
    {
        tabuleiro_cruz[i][meio] = 3; // linha vertical    
        tabuleiro_cruz[meio][i] = 3; // linha horizontal
    }
}

void matrizOctaedro() {

    // declaração de variável para encontrar o meio do tabuleiro
    int centro = tamanho_octaedro / 2;
    // definição do octaedro
    for (int i = 0; i <= centro; i++)
    {
        for (int j = centro - i; j <= centro + i; j++)
        {
            tabuleiro_octaedro[i][j] = 9; // parte superior
            tabuleiro_octaedro[tamanho_octaedro - i - 1][j] = 9; // parte inferior
        }
    }
}

void mesclarTabuleiro() {
    // declaração de variáveis
    int linha_cone = 0, coluna_cone = 0;
    int linha_cruz = 4, coluna_cruz = 0;
    int linha_octaedro = 0, coluna_octaedro = 5;
    int valores;

    // definição do cone
    for (int i = 0; i < 3; i++) {
        for (int j = tamanho_cone / 2 - i; j <= tamanho_cone / 2 + i; j++) {
            if (tabuleiro_cone[i][j] != 0) {
                tabuleiro[linha_cone + i][coluna_cone + j] = tabuleiro_cone[i][j];
            }
        }
    }

    // definição da cruz
    for (int i = 0; i < tamanho_cruz; i++) {
        for (int j = 0; j < tamanho_cruz; j++) {
            if (tabuleiro_cruz[i][j] != 0) {
                tabuleiro[linha_cruz + i][coluna_cruz + j] = tabuleiro_cruz[i][j];
            }
        }        
    }

    // definição do octaedro
    for (int i = 0; i < tamanho_octaedro; i++) {
        for (int j = 0; j < tamanho_octaedro; j++) {
            tabuleiro[linha_octaedro + i][coluna_octaedro + j] = tabuleiro_octaedro[i][j];
        }
    }

}

void exibirTabuleiro(){
    // declaração de vetor
    char cabecalho_horizontal[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int cabecalho_vertical[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    
    // adiciona o cabeçalho horizontal
    printf("   "); // cria um espaçamento para alinhar o cabeçalho a matriz
    for (int x = 0; x < tamanho_tabuleiro; x++)
    {
        printf("|%c|", cabecalho_horizontal[x]); // exibe o cabeçalho horizontal com caracteres |A|, |B|, |C|...
    }
    printf("\n");

    // exibição da matriz principal
    for (int i = 0; i < tamanho_tabuleiro; i++)
    {   
        printf("|%d| ", cabecalho_vertical[i]); // exibe o cabeçalho vertical com números |1|, |2|, |3|...
        for (int j = 0; j < tamanho_tabuleiro; j++)
        {   
            printf("%d  ", tabuleiro[i][j]); // imprime os valores da linha e coluna da matriz tabuleiro
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // chamada de função
    matrizCone();
    matrizCruz();
    matrizOctaedro();

    mesclarTabuleiro();
    exibirTabuleiro();

    return 0;
}