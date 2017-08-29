#include <stdio.h>

main() {

   int a = 21;
   int b = 10;
   int c ;

   c = a + b;
   printf("Linha 1 - Valor de c e %d\n", c );
	
   c = a - b;
   printf("Linha 2 - Valor de c e %d\n", c );
	
   c = a * b;
   printf("Linha 3 - Valor de c e %d\n", c );
	
   c = a / b;
   printf("Linha 4 - Valor de c e %d\n", c );
	
   c = a % b;
   printf("Linha 5 - Valor de c e %d\n", c );
	
   c = a++; 
   printf("Linha 6 - Valor de c e %d\n", c );
	
   c = a--; 
   printf("Linha 7 - Valor de c e %d\n", c );
}
