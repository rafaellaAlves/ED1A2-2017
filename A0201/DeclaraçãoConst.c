#include <stdio.h>

int main() {
	/*Definição das constantes com diferentes tipos*/

   const int  LARGURA = 10;
   const int  ALTURA = 5;
   const char NOVALINHA = '\n';
   int area;  
   
   area = LARGURA * ALTURA;
   printf("Valor da area : %d", area);
   printf("%c", NOVALINHA);

   return 0;
}
