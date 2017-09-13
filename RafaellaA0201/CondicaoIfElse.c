#include <stdio.h>
 
int main () {

   int a = 10;
 
   if( a == 10 ) {
      printf("Valor de a e 10\n" );
   }
   else if( a == 20 ) {
      printf("Valor de a e 20\n" );
   }
   else if( a == 30 ) {
      printf("Valor de a e 30\n" );
   }
   else {
      printf("Nenhum dos valores esta correspondendo\n" );
   }
   
   printf("Exato valor de a: %d\n", a );
 
   return 0;
}
