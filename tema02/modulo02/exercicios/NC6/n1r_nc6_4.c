#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        if (numero % 2 == 0)
        {
            printf("Número é PAR!\n");
        } else {
            printf("Número é IMPAR!\n");
        }
    } else if(numero == 0) {
        printf("Número é zero\n");     
    } else {
        printf("negativo\n");
    }
    
    return 0;
}