#include <stdio.h>
#include <ctype.h>

int main() {
	
	char categoria;
	
	printf("Digite a categoria da CNH (A, B, C, D ou E):");
	scanf("%c", &categoria);
	
	switch (categoria) {
		case 'A': 
				printf("Você está habilitado para dirigir Moto\n");
				break;
		case 'B':
				printf("Você está habilitado para dirigir Carro\n");
				break;
		case 'C':
				printf("Você está habilitado para dirigir Caminhoẽs\n");
				break;
		case 'D':
				printf("Você está habilitado para dirigir Õnibus\n");
				break;
		case 'E':
				printf("Você está habilitado para dirigir Carretas\n");
				break;
		default: 
				printf("Categoria invalida!\n");
			}
	return 0;
	}

	

