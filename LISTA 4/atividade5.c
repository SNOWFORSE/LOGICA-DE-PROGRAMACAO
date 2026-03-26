#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num > 10 && num < 100) {
        printf("O número esta entre 10 e 100 - intervalo permitido\n");
    }
    return 0;
}
