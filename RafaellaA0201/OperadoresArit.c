#include <stdio.h>

main() {

   int a = 5;
   int b = 20;
   int c ;

   if ( a && b ) {
      printf("Linha 1 - Condicao e verdadeira\n" );
   }
	
   if ( a || b ) {
      printf("Linha 2 - Condicao e verdadeira\n" );
   }
   
   /* mudando o valor de a e b */
   a = 0;
   b = 10;
	
   if ( a && b ) {
      printf("Linha 3 - Condicao e verdadeira\n" );
   }
   else {
      printf("Linha 3 - Condicao nao e verdadeira\n" );
   }
	
   if ( !(a && b) ) {
      printf("Line 4 - Condition is true\n" );
   }
	
}
