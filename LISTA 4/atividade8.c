#include <stdio.h>

int main() {
    char genero;
    float peso, altura, imc;

    printf("Gênero (M/F), Peso (kg) e Altura (m): ");
    scanf(" %c %f %f", &genero, &peso, &altura);
    
    imc = peso / (altura * altura);
    printf("IMC: %.2f - ", imc);

    if (genero == 'F' || genero == 'f') {
        if (imc < 19) printf("Abaixo do peso\n");
        else if (imc < 24) printf("Normal\n");
        else if (imc < 29) printf("Obesidade leve\n");
        else if (imc < 39) printf("Obesidade moderada\n");
        else printf("Obesidade morbida\n");
    } 
    
    else {
        if (imc < 20) printf("Abaixo do peso\n");
        else if (imc < 25) printf("Normal\n");
        else if (imc < 30) printf("Obesidade leve\n");
        else if (imc < 40) printf("Obesidade moderada\n");
        else printf("Obesidade morbida\n");
    }

    return 0;
}