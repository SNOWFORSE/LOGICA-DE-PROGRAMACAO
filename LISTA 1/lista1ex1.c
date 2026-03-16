#include <stdio.h>

int main(){
	
	int valor1, valor2, resSoma, resSub, resMult;
	float resDivisao;
	
	printf("Progama para calcular as 4 operações basicas \n");
	printf("Digite o valor de A:");
		scanf("%d", &valor1);
	printf("Digite o valor de B:");
		scanf("%d", &valor2);
		
	resSoma = valor1 + valor2;
	resSub = valor1 - valor2;
	resMult = valor1 * valor2;
	resDivisao = valor1 / valor2;
	
	printf("Soma = %d\n", resSoma);
	printf("Subtração = %d\n", resSub);
	printf("Multiplicação = %d\n", resMult);
	printf("Divisão = %f\n", resDivisao);
	
return 0;	
}
