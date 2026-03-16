#include <stdio.h>

int main() {
    double tamanhoBits, velocidadeBps, tempoSegundos;

    printf(" Calculadora de Tempo de Download \n");

    printf("Digite o tamanho do arquivo (em bits): ");
    scanf("%lf", &tamanhoBits);

    printf("Digite a velocidade da conexao (em bits por segundo): ");
    scanf("%lf", &velocidadeBps);

    tempoSegundos = tamanhoBits / velocidadeBps;

    printf("\nO tempo necessario para o download e de %.2f segundos.\n", tempoSegundos);

    return 0;
}