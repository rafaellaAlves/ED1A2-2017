/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rafa-
 *
 * Created on 30 de Agosto de 2017, 14:24
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void processaNumeros(int num1, int num2, int *num3){
    num1 = num1*10;
    num2 = num2*100;
    *num3 = (*num3)*1000;
    
    printf("--------------------RESULTADOS-----------------");
    printf("\nEm processaNumeros (global1 = num1) vale: %d", num1);
    printf("\nEm processaNumeros (global2 = num2) vale: %d", num2);
    printf("\nEm processaNumeros (global3 = num3) vale: %d", *num3);
}

int main(int argc, char** argv) {
    int global1, global2, global3;
    
    global1 = 1;
    global2 = 2;
    global3 = 3;
    
    processaNumeros(global1,global2,&global3);
    
    printf("\n\n-----------RESULTADOS DO PROCESSAMENTO---------");
    printf("\nValor da global 1: %d", global1);
    printf("\nValor da global 2: %d", global2);
    printf("\nValor da global 3: %d", global3);

    return (EXIT_SUCCESS);
}

