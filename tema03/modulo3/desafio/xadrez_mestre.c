#include <stdio.h>

void torre(int movimento){
    // Movimentação torre
    // Cinco casas para direita    
    if (movimento > 0) // executa o código se movimento for maior que 0 
    {
        printf("Direita\n"); // imprime "Direita" no terminal até que movimento se torne menor que 0
        torre(movimento - 1); // subtrai 1 de movimento para que ele se torne menor que 0
    }
}

void bispo(int movimento){
    // Movimentação bispo
    // Cinco casas para cima e para direita

    for (movimento = 1; movimento <= 5; movimento++) // executa o código até que movimento seja maior ou igual a 5 
    {
        printf("Cima, ", movimento); // imprime "Cima" no terminal até que movimento seja maior ou igual a 5
        for (int i = 1; i <= 5; i++){ // executa o código até que "i" seja meior ou igual a 5
            printf("Direita\n", i); // imprime "Direita" no terminal até que "i" seja maior ou igual a 5
            break; // quebra o fluxo da repetição evitando que "Direita" seja impresso mais vezes que "Cima".
        }
    }
}

void rainha(int movimento){
    // Movimentação rainha
    // Oito casas para esquerda
    if (movimento > 0) // executa o código se movimento for maior que 0 
    {
        printf("Esquerda\n"); // imprime "Esquerda" no terminal até que movimento se torne menor que 0
        rainha(movimento - 1); // subtrai 1 de movimento para que ele se torne menor que 0
    }
}


int main(){
    // Declaração de variáveis
    int cavalo = 1;
    int casas;
    // Chamada da função

    // Cabeçalho torre
    printf("Movimentação da Torre\n");
    printf("=====================\n");
    torre(5); // chama a função recursiva torre

    // Cabeçalho bispo
    printf("\n"); // pula uma linha para organização do programa no terminal
    printf("Movimentação do Bispo\n");
    printf("=====================\n");
    bispo(casas); // chama a função recursiva bispo

    // Cabeçalho rainha
    printf("\n"); // pula uma linha para organização do programa no terminal
    printf("Movimentação da Rainha\n");
    printf("=====================\n");
    rainha(8); // chama a função recursiva rainha
    
    // Movimentação cavalo
    // Duas casas para cima e uma para direita
    // Cabeçalho cavalo
    printf("\n"); // pula uma linha para organização do programa no terminal
    printf("Movimentação do Cavalo\n");
    printf("=====================\n");
    while (cavalo == 1) // enquanto "cavalo" for igual a 1 executa o código
    {
        cavalo--; // subtrai 1 de cavalo para que se torne menor que 1 e assim o código não entre em loop infinito
        for (int i = 0; i < 2; i++) // enquanto "i" for menor que 2 ele executa o comando e soma mais 1 para que "i" se torne maior que 2
        {
            printf("Cima\n"); // imprime "Cima" no terminal até que "i" se torne maior que 2
        }
        printf("Direita\n"); // imprime "Direita" no terminal até que a estrutura de repetição for execute "Cima" duas vezes
    }

    return 0;
}

// Bispo = Se movimenta na diagonal
// Rainha = Se movimenta para qualquer direção
// Torre =  Se movimenta na horizontal ou na vertical
// Cavalo = Se movimenta em L