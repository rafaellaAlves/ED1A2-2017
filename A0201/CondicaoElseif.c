#include <stdio.h>
 
int main () {

   char grade = 'B';

   switch(grade) {
      case 'A' :
         printf("Excelente!\n" );
         break;
      case 'B' :
      case 'C' :
         printf("Bom!\n" );
         break;
      case 'D' :
         printf("Quase!\n" );
         break;
      case 'F' :
         printf("Melhor tentar denovo!\n" );
         break;
      default :
         printf("Grade invalida!\n" );
   }
   
   printf("Sua grade e  %c\n", grade );
 
   return 0;
}
