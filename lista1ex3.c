#include <stdio.h>

int main() {

    float vendas, comissao;

    printf("Programa para calcular a comissão dos vendedores:\n");
    printf("Digite o total de vendas:");
    scanf("%f", &vendas);

    comissao = vendas * 0.10;
    printf("O valor da comissão é: R$ %.2f", comissao);

return 0;
}