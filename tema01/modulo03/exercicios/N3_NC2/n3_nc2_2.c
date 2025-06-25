#include <stdio.h>

int main() {
    int x = 5;
    float y = 5.0;
    char c = 'a'; // char está armazenando o valor do caractere na tabela ASCII

    printf("x >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d\n", x >= c);    
    printf("O valor ASCII de %c é %d: \n", c, c);

    return 0;
}