#include <stdio.h>

int main(){
    int idade;
    float renda;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal: ");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60) 
    {
        if (renda < 2000) {
            printf("Você tem direito ao desconto!\n");
        } else {
            printf("Você não tem direito ao desconto devido à renda!\n");
        }
    } else {
        printf("Você não atende aos critérios devido à idade!");
    }
    
    return 0;
}