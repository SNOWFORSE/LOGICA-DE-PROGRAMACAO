#include <stdio.h>
#include <math.h>

int main() {
    double num;
    printf("Digite um numero: ");
    scanf("%lf", &num);
    printf("Raiz quadrada: %.2f\n", sqrt(num));
    return 0;
}