/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rafa-
 *
 * Created on 30 de Agosto de 2017, 16:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a[5];
    int b[5];
    int c[10];
    int i, d;
    d = 0;
    
    printf("-------------------DADOS---------------------");
    for(i=0;i<5;i++){
        printf("\nInforme um valor para o grupo A: ");
        scanf("%d", &a[i]);
    }
    
    for(i=0;i<5;i++){
        printf("\nInforme um valor para o grupo B: ");
        scanf("%d", &b[i]);
    }
    printf("\n-----------------------------------------------");
    
    for(i=0;i<5;i++){
        c[i+d] = a[i];
        d = d+1;
        c[d+i] = b[i];
    }
    
    printf("\n\n---------------------RESULTADO-----------------------------");
    
    for(i=0;i<10;i++){
        printf("\n%d,", c[i]);
    }        

    return (EXIT_SUCCESS);
}

