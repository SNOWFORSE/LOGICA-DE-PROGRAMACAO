#include <stdio.h>

int main() {
    int codigo, cont[5] = {0,0,0,0,0}; // A, B, C, D, E
    float nota, soma[5] = {0,0,0,0,0};

    for (int i = 1; i <= 40; i++) {
        printf("Aluno %d - Código: ", i);
        scanf("%d", &codigo);
        printf("Nota: ");
        scanf("%f", &nota);

        if (nota >= 9.0) { cont[0]++; soma[0] += nota; }
        else if (nota >= 7.0) { cont[1]++; soma[1] += nota; }
        else if (nota >= 5.0) { cont[2]++; soma[2] += nota; }
        else if (nota >= 3.0) { cont[3]++; soma[3] += nota; }
        else { cont[4]++; soma[4] += nota; }
    }

    char conceitos[] = {'A', 'B', 'C', 'D', 'E'};
    for (int i = 0; i < 5; i++) {
        printf("Conceito %c: %d alunos, Média: %.2f\n", conceitos[i], cont[i], cont[i] > 0 ? soma[i] / cont[i] : 0); // [cite: 23]
    }

    return 0;
}