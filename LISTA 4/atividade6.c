#include <stdio.h>

int main() {
    float salario, novoSalario;
    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);

    if (salario <= 990.00) novoSalario = salario * 1.20;
    else if (salario <= 1480.00) novoSalario = salario * 1.10;
    else if (salario <= 2000.00) novoSalario = salario * 1.05;
    else novoSalario = salario;

    printf("Novo salario: R$ %.2f\n", novoSalario);
    return 0;
}