#include <stdio.h>
int main() {
    int n1, n2, n3;
    printf("Digite 3 notas inteiras: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    float media = (float)(n1 + n2 + n3) / 3;
    printf("Media: %.2f\n", media);
    return 0;
}