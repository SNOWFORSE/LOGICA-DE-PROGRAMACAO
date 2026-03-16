#include <stdio.h>
int main() {
    int n, milhar, centena, dezena, unidade;
    printf("Digite um numero de 4 algarismos: ");
    scanf("%d", &n);
    
    milhar = n / 1000;
    centena = (n % 1000) / 100;
    dezena = (n % 100) / 10;
    unidade = n % 10;
    
    printf("Soma: %d + %d + %d + %d = %d\n", milhar, centena, dezena, unidade, milhar+centena+dezena+unidade);
    return 0;
}