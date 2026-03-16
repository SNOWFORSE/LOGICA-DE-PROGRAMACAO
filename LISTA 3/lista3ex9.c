#include <stdio.h>
int main() {
    int v1, v2, aux;
    printf("Digite v1 e v2: ");
    scanf("%d %d", &v1, &v2);
    
    printf("Iniciais: v1=%d, v2=%d\n", v1, v2);
    
    aux = v1;
    v1 = v2;
    v2 = aux;
    
    printf("Finais: v1=%d, v2=%d\n", v1, v2);
    return 0;
}