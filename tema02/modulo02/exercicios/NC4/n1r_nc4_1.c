#include <stdio.h>

int main() {
    int a = -10, b = -5;

    /* 
        if (a > 0 && b > 0)
        {
            printf("Os dois números são positivos\n");
        } else {
            printf("Pelo menos um dos números é negativo\n");
        } 
    */

    /* 
        if (a > 0 || b > 0)
        {
        printf("Pelo menos um dos números é positivo\n");
        } else {
            printf("Os dois números são negativos\n");
        } 
    */
    
    if (!a)
    {
        printf("a é zero.\n");
    } 

    return 0;
}