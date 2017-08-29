#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int pares [10], impares[10];
	 int i,n, qtValidos, qtImpares, qtPares;
	 qtValidos = 0;
	 qtImpares = 0;
	 qtPares = 0;
	 
	printf("\nDigite valores entre 0 e 100!");
	printf("\nPara sair digite (-1)!");

	do{
	 for(i=0;i<10; i++){
	 	printf("\n\nInforme um numero: ");
	 	scanf("%d", &n);
	 	if ((n >=0 ) && (n <= 100)){
	 		qtValidos = qtValidos +1;
	 		if ((n%2 ==0)||(n=0)){
	 			qtPares =qtPares +1;
	 			pares[i]=pares[i]+n;
			 }else{
			 	qtImpares + qtImpares+1;
			 	impares[i]=impares[i]+n;
			 }
		 }else{
		 	printf("\nERROR-Digite um numero novamente: ");
		 	scanf("%d", &n);
		 }
	 		
	 }
    }while ((qtValidos = 10)||(n = -1));
	 	
	printf("\nA quantidade de numero digitados foram: %d ", qtValidos);
	printf("\nDentre os %d numeros %d sao pares e %d sao impares!", qtValidos, qtPares, qtImpares);
	
	printf("\nOs numero pares sao: ");
	for(i=0;i<qtPares; i++){
		printf("\n%d,", pares[i]);
	}
	
	printf("\n\nOs numero impares sao: ");
	for(i=0;i<qtImpares; i++){
		printf("\n%d,", impares[i]);
	}

	 

	return 0;
}
