#include <stdio.h>
/* Definin��o do valor das constantes*/
#define LARGURA 10   
#define ALTURA  5
#define NOVALINHA '\n'

int main() {

   int area;  
  
   area = LARGURA * ALTURA;
   printf("Valor da area : %d m�", area);
   printf("%c", NOVALINHA);

   return 0;
}
