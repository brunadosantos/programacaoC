#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    float quociente = (float) /*casting*/ a / b; // 'a' é explicitamente convertido para float

    printf("Quociente: %.2f\n", quociente);

    // O double é mais preciso que o float

    return 0;
}