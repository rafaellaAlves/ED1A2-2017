#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 char vetor [20][10];
	 char endereco [30][10];
	 int i;
	 
	 for(i=0; i<10; i++){
	 	printf("\nInforme o %d nome: ", i);
	 	scanf("%s", &vetor[i]);
	 }
	 
	 for(i=0; i<10; i++){
	 	printf("\nInforme o %d endereco: ", i);
	 	scanf("%s", &endereco[i]);
	 }
	 
	 do{
	 	printf("Informe um  numero referente a lista (0 - 10): ");
		printf("\npara sair digite: '001'! ");
	 	scanf("%d", &i);
	 	
	 	if ((i < 0)||(i > 10))
	 	   printf("ERROR-Digite o indice novaente: ");
	 	else
		  printf("\n%s mora no endereco %s!", vetor[i], endereco[i]);
     }while (i != 001);{
	 }
	 
	system("pause");
	 
	return 0;
}
