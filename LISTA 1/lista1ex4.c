#include <stdio.h>

int main (){

    float distancia, combustivel, consumo;

    printf("Digite a distância (km):");
    scanf("%f", &distancia);
    printf("Digite o combustivel gasto (litros): ");
    scanf("%f", &combustivel );

    consumo = distancia / combustivel;
    printf("O consumo medio é: %.2f km/L\n", consumo);

return 0;    

}