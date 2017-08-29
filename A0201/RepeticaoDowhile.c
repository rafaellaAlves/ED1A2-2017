#include <stdio.h>
 
int main () {

   int a = 100;

   do {
      printf("valor de a: %d\n", a);
      a = a + 1;
   }while( a < 200 );
 
   return 0;
}
