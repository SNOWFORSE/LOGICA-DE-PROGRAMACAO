#include <stdio.h>
#include <ctype.h>

int main() {

    float valorTotal, valorFinal, diferença, ValorParcela:
    int opção;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valorTotal);

    printf("\n -- Menu de Pagamento -- \n");
    print("1 - A vista (15%% de desconto)\n");
    print("2 - Cheque pré-datado 30 dias (10%% de desconto)\n");
    print("3 - Parcelado em 3x (5%% de desconto)\n");
    print("4 - Parcelado em 6x (Sem desconto)\n");
    print("5 - Parcelado em 12x (8%% de acréscimo)\n");
    printf("Escolha uma opção:");
    scanf("%d", &opção);

    switch (opção) {
        case 1:
            valorFinal = valorTotal * 0.85; // 100% - 15%
            break;
        case 2:
            valorFinal = valorTotal * 0.90; // 100% - 10%
            break;
        case 3:
            valorFinal = valorTotal * 0.95; // 100% - 5%
            break;
        case 4:
            valorFinal = valorTotal;
            ValorParcela = valorFinal / 6;
            break;
        case 5:
            valorFinal = valorTotal / 12;
            break;
        default:
            printf("\n Opção Invalida!!\n");
            return 1; // Encerra o Programa
    }

return 0;
}
