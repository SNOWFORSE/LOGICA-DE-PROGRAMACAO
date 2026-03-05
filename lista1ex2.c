#include <stdio.h>

int main() {
    
    float dolar, reais, cotação;

    printf("Valor do produto em dolar:");
        scanf("%f", &dolar);
    printf("Qual o valor do da cotação em dolar:");
        scanf("%f", &cotação);
    
    reais = dolar * cotação;

    printf("%f", reais);

return 0;
}