/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rafa-
 *
 * Created on 30 de Agosto de 2017, 15:07
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int pares[10], impares[10];
    int i, n, qtValidos, qtPares, qtImpares;
    qtValidos = 0;
    qtPares = 0;
    qtImpares = 0;
    
    printf("---------------------MENU--------------------");
    printf("\nInforme 10 numero com valores de 0 a 100!");
    printf("\nPara sair digite : -1");
    printf("\n------------------------------------------");
    
    do{
        for(i=0;i<10;i++){
        scanf("\n%d", &n);
            if((n>=0)&&(n<=100)){
                qtValidos = qtValidos + 1;
                if((n%2==0)||(n = 0)){
                    qtPares = qtPares+ 1;
                    pares[i]=n;
                }else{
                    qtImpares=qtImpares+1;
                    impares[i]=n;
                }
            }else{
                printf("\nERROR - digite um numero novamente: ");
                scanf("%d", n);
            }
        }
    }while(qtValidos < 10);
    
    printf("\n\n------------------RESULTADO------------------");
    printf("\nA quantidade de numero diigitados foi de %d numeros!", qtValidos);
    printf("\nDentre os %d numero, %d sao paraes e %d sao impares", qtValidos, qtPares, qtImpares);
    printf("\n***************************************************");
    printf("\n\nOs numero PARES sao:");
    for(i=0;i<qtPares;i++){
        printf("\n%d,", pares[i]);
    }
    printf("\n- - - - - - - - - - - - - - - - ");
    printf("\nOs numero IMPARES sao: ");
    for(i=0;i<qtImpares;i++){
        printf("\n%d,", impares[i]);
    }
    printf("\n-------------------------------------------------------");
  
    return (EXIT_SUCCESS);
}

