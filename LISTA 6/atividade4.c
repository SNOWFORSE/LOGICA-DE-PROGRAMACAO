#include <stdio.h>

int main (){
	
	int n, i = 0, somaP = 0, somaI = 0;
	printf("Quantos números você quer digitar? ");
	scanf("%d", &n);
	
	while(i <= n) {
		if(i % 2 == 0) somaP = somaP + i;
		else somaI = somaI + i;
		i++;
		}
	printf("A soma dos números Pares é: %d\n", somaP);
	printf("A soma dos números Ímpares é: %d", somaI);

return 0;
}
