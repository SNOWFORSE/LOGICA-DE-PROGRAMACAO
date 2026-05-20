#include <stdio.h>
#include <string.h>

int main () {
	char str1[20] = "lua";
	char str2[] = "cheia";
	
	strcat(str1, str2);
	
	printf("string1: %s\n", str1);
	printf("string2: %s\n", str2);
	
return 0; 
}
