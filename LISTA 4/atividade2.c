#include <stdio.h>

int main() {
    
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if (num % 3 == 0) printf("Esse número é multiplo de 3\n");
    else printf("Esse número não é multiplo de 3\n");
    
return 0;
}
