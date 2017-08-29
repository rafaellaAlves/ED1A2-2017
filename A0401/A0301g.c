#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int M1[3];
	int M2[3];
	float MT[3];
	int j, i, n;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nInforme um valor para a matriz 1 [%d,%d]: ", i, j);
			scanf("%d", &M1[j][i]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nInforme um valor para a matriz 2 [%d,%d]: ", i, j);
			scanf("%d", &M2[j][i]);
		}
	}
	
   printf("\n---INFORME UMA OPERACAO---");
   printf("\nDigite 1 para ADICAO");
   printf("\nDigite 2 para SUBTRACAO");
   printf("\nDigite 3 para MULTIPLICACAO");
   
   switch(n){
   	case 1
   		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				MT[j][i] = (M1[j][i] + M2[j][i]);
				printf("A adicao entre as matrizes!");
				printf("| %f | ", MT[j][i]);
			}
			printf("\n");
		}
		
	case 2
   		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				MT[j][i] = (M1[j][i] - M2[j][i]);
				printf("A subtracao entre as matrizes!");
				printf("| %f | ", MT[j][i]);
			}
			printf("\n");
		}
		
	case 3
   		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				MT[j][i] = (M1[j][i] * M2[j][i]);
				printf("A multiplicacao entre as matrizes!");
				printf("| %f | ", MT[j][i]);
			}
			printf("\n");
		}
   		
   }
   
   system("pause");
   return 0;
}
