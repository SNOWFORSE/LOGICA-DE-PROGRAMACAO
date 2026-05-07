#include <stdio.h>

int main() {
    float valor, max, min, somaAcima = 0;
    int contAcima = 0;

    for (int i = 1; i <= 30; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%f", &valor);

        if (i == 1) {
            max = min = valor;
        } else {
            if (valor > max) max = valor;
            if (valor < min) min = valor;
        }

        if (valor > 5.9) {
            somaAcima += valor;
            contAcima++;
        }
    }

    printf("Máximo: %.2f\nMínimo: %.2f\n", max, min);
    if (contAcima > 0)
        printf("Média dos valores > 5.9: %.2f\n", somaAcima / contAcima);
    
    return 0;
}