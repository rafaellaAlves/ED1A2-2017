#include <stdio.h>
 
/* Declaração função */
void func(void);
 
static int count = 5; /* variavel global */
 
main() {

   while(count--) {
      func();
   }
	
   return 0;
}

/*Definição da função */
void func( void ) {

   static int i = 5; /*variavel local fixa */
   i++;

   printf("i e %d e a contagem e %d\n", i, count);
}
