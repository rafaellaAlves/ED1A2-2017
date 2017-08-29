#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int M[3][3];
	int MT[3][3];
	int i, j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nInforme um valor para [%d,%d]: ", j, i);
			scanf("%d", &M[j][i]);
			MT[i][j] = M[j][i];
		}
	}
	
	printf("\nA matriz original e: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("| %d | ", M[j][i]);
		}	
		printf("\n");
	}
	
	printf("\nA matriz transposta e: \n");
	for(j=0; j<3; j++){
		for(i=0; i<3; i++){
			printf("| %d | ", MT[i][j]);
		}	
		printf("\n");
	}
	
	system("pause");
	return 0;
}
