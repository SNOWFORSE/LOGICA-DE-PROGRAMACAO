#include <stdio.h>

int main (){
	
	int mes, ano;
	
	printf("Digite um número de 1 a 12:");
	scanf("%d", &mes);
	
	switch (mes) {
		
		case 1:
			case 3:
				case 5:
					case 7:
						case 8: 
							case 10:
								case 12:
									printf("Este mês tem 31 dias!\n");
									break;
		case 4:
			case 6:
				case 9:
					case 11:
						printf("Este mês tem 30 dias!\n");
						break;
		case 2:
			printf("Digite o ano:");
			scanf("%d", &ano);
			
			if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
				printf("%d é um ano bissexto - Este mês tem 29 dias!.\n", ano);
			} else {
				printf("%d não é um ano bissexto - Este mês tem 28 dias.\n", ano);
			}
			break;
		
		default:
			printf("Mês Invalido!\n");
		}
	return 0;	
}
