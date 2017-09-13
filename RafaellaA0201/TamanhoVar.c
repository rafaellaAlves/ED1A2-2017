#include <stdio.h>
#include <float.h>

int main() {
/*Tamanho maximo e minimo */
   printf("Tamanho de armazenamwento do float : %d bytes \n", sizeof(float));
   printf("Minimo valor positivo do float: %E\n", FLT_MIN );
   printf("Maximo valor positivo do float %E\n", FLT_MAX );
   printf("Valor de precisao: %d\n", FLT_DIG );
   
   return 0;
}
