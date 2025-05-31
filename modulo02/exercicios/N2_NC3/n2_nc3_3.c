#include <stdio.h>

int main() {
    /*
        Incremento (++)
        Pré-Incremento ++a
        Pós-Incremento a++
        Decremento
        Pré-Decremento --a
        Pós-Decremento a--
    */

    int numero1 = 5, resultado;

    /*  Representações alternativas INCREMENTO

        numero1 += 1;
        numero1 = numero1 + 1
    
    */

    /* Pós-incremento 
    
        resultado = numero1;
        numero1++;
    
    */ 

    printf("Antes do INCREMENTO: %d\n", numero1);

    numero1++; // Incrementa em 1 unidade
    printf("Após incremento: %d\n", numero1);
    
    resultado = numero1++; // Primeiro atribui e depois incrementa
    printf("Após Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado); 
 
    resultado = ++numero1; // Primeiro incrementa e depois atribui
    printf("Após Pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado); 

    printf("\n");

    printf("Antes do DECREMENTO: %d\n", numero1); 
    
    /*  Representações alternativas DECREMENTO

        numero1 -= 1; 
        numero1 = numero1 - 1
        
    */

    numero1--; // Decrementa em 1 unidade
    printf("Após decremento: %d\n", numero1); 

    resultado = numero1--; // Primeiro atribui e depois decrementa
    printf("Após Pós-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado); 

    resultado = --numero1; // Primeiro decrementa e depois atribui
    printf("Após Pré-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
    
    printf("\n");

    return 0;
}