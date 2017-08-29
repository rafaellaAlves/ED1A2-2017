#include <stdio.h>

// Declaração externa de Variaveis:
extern int a, b;
extern int c;
extern float f;

int main () {

   /* Variaveis Declaradas: */
   int a, b;
   int c;
   float f;
 
   a = 10;
   b = 20;
  
   c = a + b;
   printf("O valor de c : %d \n", c);

   f = 70.0/3.0;
   printf("O valor de f : %f \n", f);
 
   return 0;
}
