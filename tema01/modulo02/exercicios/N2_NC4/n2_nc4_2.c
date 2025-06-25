#include <stdio.h>

int main(){
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y ; // A divisão retorna um número decimal ou ponto flutuante

    printf("Soma: %.2f\n", soma);    
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente); 
    
    // .2f duas casas decimais após a vírgula
    // O double é mais preciso que o float

    return 0;
}