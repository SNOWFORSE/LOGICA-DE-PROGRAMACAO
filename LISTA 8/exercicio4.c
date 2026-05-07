#include <stdio.h>

int main() {
    double A = 0;
    double numerador = 1;

    for (double denominador = 1; denominador <= 25; denominador++) {
        A += numerador / denominador;
        numerador += 2;
    }

    printf("Valor de A: %.6f\n", A);
    return 0;
}