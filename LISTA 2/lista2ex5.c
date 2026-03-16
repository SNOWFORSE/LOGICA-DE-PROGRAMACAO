#include <stdio.h>

//Programa para calcular o troco

int main() {
    float pago, preco;
    printf("Valor pago e preco do produto: ");
    scanf("%f %f", &pago, &preco);
    printf("Seu troco e: %.2f\n", pago - preco);
    return 0;
}