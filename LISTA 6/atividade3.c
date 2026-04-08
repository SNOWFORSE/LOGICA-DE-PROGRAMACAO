#include <stdio.h>

int main() {
	
	int i = 0, soma = 0;
	
	while (i <= 100){
		if(i%2 !=0){
			soma += i;
			}
		i++;
		}
		printf("A soma de todos os ímpares é: %d\n", soma);
		
return 0;
}
