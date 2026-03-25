#include <stdio.h>

int main() {
    
    char estado;
    
    printf("Digite a inicial do estado civil (S/C/D/V):");
    scanf(" %c", &estado);
    
    if (estado == 'S' || estado == 's') {
        printf("Seu Estado Civil é: Solteiro.\n");
    }
    else if (estado == 'C' || estado == 'c') {
        printf("Seu Estado Civil é: Casado.\n");
    }
    else if (estado == 'D' || estado == 'd') {
        ("Seu Estado Civil é: Divorciado.\n");
    }
    else if (estado == 'V' || estado == 'v') {
        printf("Seu Estado Civil é: Viúvo\n");
    }
    else {
        printf("Opção Invalida!\n");
    }
    
return 0;
}
