#include <stdio.h>

int main() {
    // sizeof verifica o tamanho da variável
    printf("Tamanho de int: %u bytes\n", sizeof(int));     
    printf("Tamanho de long int: %u bytes\n", sizeof(long int));
    printf("Tamanho de long long int: %u bytes\n", sizeof(long long int));
    printf("Tamanho de double: %u bytes\n", sizeof(double));
    printf("Tamanho de long double: %u bytes\n", sizeof(long double)); 
    
    return 0;
}

/* 
Tamanho de int: 4 bytes
Tamanho de long int: 4 bytes
Tamanho de long long int: 8 bytes
Tamanho de double: 8 bytes
Tamanho de long double: 16 bytes 
*/