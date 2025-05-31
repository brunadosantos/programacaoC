#include <stdio.h>

int main() {
    short int numeroPequeno = 32767; // Valor máximo de short int
    printf("Número pequeno (short int): %d\n", numeroPequeno);
    
    numeroPequeno = 32768; // Valor maior que o máximo de short int
    printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);

    printf("\n *** Tamanho das variáveis ***\n");
    printf("short int: %lu B - int: %lu B - long int: %lu B\n", sizeof(short int), sizeof(int), sizeof( long long int));
    printf("Float: %lu B - Double: %lu B - long double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));

    return 0;
}

/* Quando usar modificadores

    Short -> Usar quando precisar de uma variável inteira que ocupa menos memória e o valor está dentro do permitido. Exemplo: Contador de laços de repetição que precisa ir até 32767
    Long -> Usar quando precisar de números inteiros muito grandes, fora de alcance de um inteiro normal
    Signed -> Padrão dos int e char, trabalha com números negativos e positivos
    Unsigned -> Quando nunca são números negativos. Exemplo: idade, estoque de um produto, quantidade de átomos, etc. 

*/