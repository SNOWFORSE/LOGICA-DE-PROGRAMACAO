#include <stdio.h>
#include <string.h>

int main () {

 char s1[50], s2[50], s3[100];
 
	printf("string 1: ");
	fgets(s1, 50, stdin);
	s1[strcspn(s1, "\n")] = 0;
	
	printf("string 2: ");
	fgets(s2, 50, stdin);
	s2[strcspn(s2, "\n")] = 0;
	
	strcpy(s3, s1);
	
	strcat(s3, " ");
	
	strcat(s3, s2);
	
	printf("string1: %s\n string2: %s\n string3: %s\n", s1, s2, s3);
	printf("Tamanhos: %zu %zu %zu\n", strlen(s1), strlen(s2), strlen(s3));
	

return 0;	
}
