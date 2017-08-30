/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rafa-
 *
 * Created on 30 de Agosto de 2017, 14:15
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int soma(int num1, int num2){
    int r;
    
    r = num1 + num2;
    return r;
}
int main(int argc, char** argv) {
    int global1, global2, global3;
    
    printf("------------------RESULTADOS-------------------");
    printf("\n1°- A soma de 10 com 20 e: %d", soma(10,20));
    
    global1 = 100;
    global2 = 200;
    printf("\n2°- A soma da global 1 com a global 2 e: %d", soma(global1,global2));
    
    global3 = soma(1000,2000);
    printf("\n3°- A soma de 1000 com 2000 e: %d", global3);

    return (EXIT_SUCCESS);
}

