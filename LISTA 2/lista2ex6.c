#include <stdio.h>

//Programa para mostrar descontos (10%) e acrécimos de (5%)

int main() {
    float compra;
    printf("Valor da compra: ");
    scanf("%f", &compra);
    printf("Com 10%% de desconto: %.2f\n", compra * 0.90);
    printf("Com 5%% de acrescimo: %.2f\n", compra * 1.05);
    return 0;
}