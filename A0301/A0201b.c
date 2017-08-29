#include <stdio.h>
#include <stdlib.h>
/*procedimento com passagem de parametros*/
void processaNumeros(int num1, int num2, int *num3){
   
	num1 = (num1*10);
	num2 = (num2*100);
	(*num3)= (*num3) * 1000;

	
	printf("Em processaNumero (global1 -> num1) vale: %d\n", num1);
	printf("Em processaNumero (global2 -> num2) vale: %d\n", num2);
	printf("Em processaNumero (global3 -> num3) vale: %d\n", *num3);
	return; 	
}


int main(int argc, char *argv[]) 
{
	int global1, global2, global3;
	
	global1 = 1;
	global2 = 2;
	global3 = 3;
	
	processaNumeros(global1,global2,&global3);
	
	printf("Valor da global1 apos processaNumeros e: %d\n", global1);
	printf("Valor da global2 apos processaNumeros e: %d\n", global2);
	printf("Valor da global3 apos processaNumeros e: %d\n", global3);
	
	return 0;
}
