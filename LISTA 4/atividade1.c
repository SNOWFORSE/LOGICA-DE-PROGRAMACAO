#include <stdio.h>

int main() {
    float num;
    
    printf("Digite um número: ");
    scanf("%f", &num);
    
    if(num > 0) printf("Esse número é Positivo\n");
    else if(num < 0) printf("Esse número é Negativo\n");
    else printf("Esse número é Nulo\n");

return 0;
}
