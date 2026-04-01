#include <stdio.h>

int main (){
	
	int mes;
	
	printf("Digite o número do Trimestre que você produra (1 a 12):");
	scanf("%d", &mes);
	
	switch (mes) {
		
		case 1: 
			case 2: 
				case 3:
					printf("1º - Trimestre! - Jan/Fev/Mar\n");
					break;
		case 4:
			case 5:
				case 6:
					printf("2º - Trimestre! - Abr/Mai/Jun\n");
					break;
		case 7:
			case 8:
				case 9:
					printf("3º - Trimestre! - Jul/Ago/Set\n");
					break;
		case 10:
			case 11:
				case 12:
					printf("4º - Trimestre! - Out/Nov/Dez\n");
					break;
		default: 
			printf("Não representa um mês do ano!\n");
		}
	return 0;
}
