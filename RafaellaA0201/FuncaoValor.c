#include <stdio.h>
 
void swap(int x, int y);
 
   int temp;

   temp = x; 
   x = y;    
   y = temp;
  
   return;
}

int main () {


   int a = 100;
   int b = 200;
 
   printf("Antes swap, valor de a : %d\n", a );
   printf("Antes swap, valor de b : %d\n", b );
 
   
   swap(a, b);
 
   printf("Depois swap, valor de a : %d\n", a );
   printf("Depois swap, valor de b : %d\n", b );
 
   return 0;
}
