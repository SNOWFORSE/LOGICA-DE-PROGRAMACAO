#include <stdio.h>

//Programa para mostar a média de 4 valores reais

int main() {
    float v1, v2, v3, v4, media;
    printf("Digite 4 numeros: ");
    scanf("%f %f %f %f", &v1, &v2, &v3, &v4);
    media = (v1 + v2 + v3 + v4) / 4;
    printf("A media e: %.2f\n", media);
    return 0;
}