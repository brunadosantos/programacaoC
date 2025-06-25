#include <stdio.h>

int main() {
    int a = -10;
    
    if (!(a > 0))
    {
        printf("A variável é negativa.\n");
    } else {
        printf("A variável é positiva.\n");
    }

    return 0;
}

/* ordem de precedência

    Operadores                          Associatividade
    ()  []                              Esquerda -> Direita
    --  ++  -  !                        Esquerda -> Direita
    *  /  %                             Esquerda -> Direita
    +  -                                Esquerda -> Direita
    <  <=  >  >=                        Esquerda -> Direita
    ==  !=                              Esquerda -> Direita
    &&                                  Esquerda -> Direita
    ||                                  Esquerda -> Direita
    %=  /=  *=  -=  +=  =               Esquerda -> Direita
    ,                                   Esquerda -> Direita
*/