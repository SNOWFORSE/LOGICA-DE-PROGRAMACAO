#include <stdio.h>

//Programa para calcular a área do retângulo

int main() {
    float base, altura;
    printf("Digite a base e a altura: ");
    scanf("%f %f", &base, &altura);
    printf("Area do retangulo: %.2f\n", base * altura);
    return 0;
}