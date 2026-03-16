#include <stdio.h>
int main() {
    float valor;
    printf("Valor da compra: ");
    scanf("%f", &valor);
    printf("Compra parcelada\n5 x %.2f = %.2f\n", valor/5, valor);
    return 0;
}