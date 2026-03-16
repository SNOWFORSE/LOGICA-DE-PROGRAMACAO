#include <stdio.h>
#include <math.h>

int main() {
    double num;
    printf("Digite um numero real: ");
    scanf("%lf", &num);
    printf("Arredondamento para baixo (floor): %.0f\n", floor(num));
    printf("Arredondamento para cima (ceil): %.0f\n", ceil(num));
    return 0;
}