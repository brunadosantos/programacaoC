#include <stdio.h>

int main() {
    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long long int numeroGrande = 4000000000;
    int numero = 4000000000;

    printf("Número positivo grande: %lu\n", numeroGrandePositivo);
    printf("Número positivo: %u\n", numeroPositivo);    
    printf("Número grande: %lld\n", numeroGrande); // funciona usando long long int    
    printf("Número : %d\n", numero);

    return 0;
}