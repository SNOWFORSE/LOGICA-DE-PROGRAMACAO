#include <stdio.h>
#include <string.h>

int main () {
	
	char str[100];
	int count = 0;
	
	printf("Entrada: ");
	fgets(str, 100, stdin);
	
	for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
		if(str[i] == 'o') { 
		count++;
		}
	}
	printf("Saída: %d\n", count);
	
return 0;	
}
