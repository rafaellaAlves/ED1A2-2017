#include <stdio.h>
 
/* Declara��o fun��o */
void func(void);
 
static int count = 5; /* variavel global */
 
main() {

   while(count--) {
      func();
   }
	
   return 0;
}

/*Defini��o da fun��o */
void func( void ) {

   static int i = 5; /*variavel local fixa */
   i++;

   printf("i e %d e a contagem e %d\n", i, count);
}
