#include <stdio.h>

//Programa para mostrar a conversão de escalas termométricas.

int main() {
    float C, F, K;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);
    
    K = C + 273;
    F = 1.8 * (K - 273) + 32;
    
    printf("Escala de Temperaturas\n");
    printf("%.1fC = %.1fF = %.1fK\n", C, F, K);
    
    return 0;
}