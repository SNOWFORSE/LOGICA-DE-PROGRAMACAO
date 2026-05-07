#include <stdio.h>

int main() {
    int n, i, j;
    printf("Digite o multiplicando (n): ");
    scanf("%d", &n);
    printf("Digite a quantidade de iterações (i): ");
    scanf("%d", &i);

    for (j = 1; j <= i; j++) {
        printf("%d x %d = %d\n", n, j, n * j);
    }
    return 0;
}
