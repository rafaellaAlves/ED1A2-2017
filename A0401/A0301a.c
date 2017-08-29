#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
     char vetor [20][10];
	 int i;
	 
	 for(i=0; i<10; i++){
	 	printf("\nInforme o %d nome: ", i);
	 	scanf("%s", &vetor[i]);
	 	
	 }
	 
	 for(i=0; i<10; i++){
	 	printf("\n%d - %s", i, vetor[i]);
	 }
	 system("pause");
	return 0;
}
