#include <stdio.h>
 
/* declaracao da variavel global */
int a = 20;
 
int main () {

  int a = 10;
  int b = 20;
  int c = 0;

  printf ("valor de a em main() = %d\n",  a);
  c = sum( a, b);
  printf ("valor de c em main() = %d\n",  c);

  return 0;
}

int sum(int a, int b) {

   printf ("valor de a em sum() = %d\n",  a);
   printf ("valor de b em sum() = %d\n",  b);

   return a + b;
}
