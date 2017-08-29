#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valores [5][5];
	int vetC [5];
	int vetL [5];
	int i, j;


	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("\nInforme um valor para a matriz [%d,%d]: ", j, i);
			scanf("%d", &valores[j][i]);	
			vetC[j] = (vetC[j] + valores[j][i]);
         	vetL[i] = (vetL[i] + valores[j][i]);
		}	
	
	}
	
	printf("A matriz formada com os numeros digitados foi: \n\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("| %d | ", valores[i][j]);
		}	
		printf("\n");
	}
	
	system ("pause");
	return 0;
}
