#include <stdio.h>
#include <math.h>

int main() {
    double n;
    printf("Digite um numero: ");
    scanf("%lf", &n);
    printf("numero\tquadrado\tcubo\n");
    printf("%.0f\t%.0f\t\t%.0f\n", n, pow(n, 2), pow(n, 3));
    return 0;
}