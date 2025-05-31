#include <stdio.h>

int main() {
    int nota1, nota2, nota3;
    float media;

    printf("----- Cálculo da Média -----\n");
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    media = (float) (nota1 + nota2 + nota3) / 3; // conversão explicita usando casting -> (float)

    printf("A média da nota é: %.1f\n", media);
    
    return 0;
}