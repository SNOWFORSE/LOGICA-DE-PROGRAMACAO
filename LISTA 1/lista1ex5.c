#include <stdio.h>

int main (){

    float comprimento, largura, precoMetro, area, custo;

    printf("Qual é o comprimento da Sala: ");
    scanf("%f", &comprimento);
    printf("Qual a largura da Sala (m): ");
    scanf("%f", &largura);
    printf("Qual o preço do metro do carpete:R$ ");
    scanf("%f", &precoMetro);

    area = comprimento * largura;
    custo = area * precoMetro;

    printf("A Area total é: %.2f m2\n", area);
    printf("O custo total para forar a sala toda foi de: R$ %2.f\n", custo);

return 0;
}