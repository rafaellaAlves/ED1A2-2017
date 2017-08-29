#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A[5];
	int B[5];
	int C[10];
	int d,i;
	d = 0;
	
	for(i=0; i<5; i++){ /* Pede valores para o usuario ate o vetor ficar completo*/
		printf("\n\nInforme um valor para o grupo A: ");
		scanf("%d", &A[i]);
	}
	
	for(i=0; i<5; i++){ /* Pede valores para o usuario ate o vetor ficar completo*/
		printf("\n\nInforme um valor para o grupo B: ");
		scanf("%d", &B[i]);
	}
	
	for(i=1; i<=10; i++){ /* Pede valores para o usuario ate o vetor ficar completo*/
	  C[i+d] = A[i];
      d <- d + 1;
      C[d+i] = B[i];
	}
		
	printf("\n\nOs numeros intercalados sao: ");
	
	for(i=1; i<=10; i++){
		printf("\n %d,", C[i]);

	}
	system("pause");
	return 0;
}
