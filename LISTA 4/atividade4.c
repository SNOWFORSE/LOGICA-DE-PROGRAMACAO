#include <stdio.h>
#include <math.h>

int main() {
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num >= 0) {
        printf("O valor da Raiz quadrada é: %.2f\n", sqrt(num));
    } else {
        printf("O valor do Cubo é: %.2f\n", pow(num, 3));
    }
    return 0;
}
