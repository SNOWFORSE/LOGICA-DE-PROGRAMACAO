#include <stdio.h>

int main() {
    int inicio, fim, totalPositivos = 0, totalPares = 0, totalImpares = 0, totalEspecial = 0;
    float somaPos = 0, somaPar = 0, somaImpar = 0, somaEsp = 0;

    printf("Valor inicial: ");
    scanf("%d", &inicio);
    printf("Valor final: ");
    scanf("%d", &fim);

    for (int i = inicio; i <= fim; i++) {
        if (i > 0) {
            totalPositivos++;
            somaPos += i;
        }
        if (i % 2 == 0) {
            totalPares++;
            somaPar += i;
        } else {
            totalImpares++;
            somaImpar += i;
            if (i % 3 == 0 && i % 4 == 0) {
                totalEspecial++;
                somaEsp += i;
            }
        }
    }

    printf("Positivos: %d (Média: %.2f)\n", totalPositivos, totalPositivos > 0 ? somaPos / totalPositivos : 0);
    printf("Pares: %d (Média: %.2f)\n", totalPares, totalPares > 0 ? somaPar / totalPares : 0);
    printf("Ímpares: %d (Média: %.2f)\n", totalImpares, totalImpares > 0 ? somaImpar / totalImpares : 0);
    printf("Ímpares div 3 e 4: %d (Média: %.2f)\n", totalEspecial, totalEspecial > 0 ? somaEsp / totalEspecial : 0); // [cite: 20]

    return 0;
}