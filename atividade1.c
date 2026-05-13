#include <stdio.h>

int main() {
	
	int m[3][3], maior, menor, i, j; 
	int pos[2][2];
	
	for(i = 0; i<3; i++){
		for(j = 0; j<3; j++){
			printf("Digite o valor de M[%d][%d]", i, j);
			scanf("%d", &m[i][j]);
			
			if(i==0 && j==0) {
				menor = m[i][j];
				maior = m[i][j];
				pos[0][0] = i;
				pos[0][1] = j;
				
				pos[1][0] = i;
				pos[1][1] = j;
			}else {
					
				if (m[i][j] > maior) {
					maior = m[i][j];
					pos[0][0] = i;
					pos[0][1] = j;
			}
				if (m[i][j] < menor) {
					menor = m[i][j];
					pos[1][0] = i;
					pos[1][1] = j;
			}
		}
	}
}	

	printf("\nMaior valor: %d, posição no vetor m[%d][%d]", maior, pos[0][0], pos[0][1]);
	printf("\nMenor valor: %d, posição no vetor m[%d][%d]\n", menor, pos[1][0], pos[1][1]);

return 0;	
}
