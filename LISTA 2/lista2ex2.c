#include <stdio.h>

//Programa para mostras o Antrcessor  e Sucessor de um numero 

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("Antecessor: %d, Sucessor: %d\n", num - 1, num + 1);
    return 0;
}