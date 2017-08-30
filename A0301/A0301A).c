/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rafa-
 *
 * Created on 30 de Agosto de 2017, 14:48
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    char vetor[20][10];
    int i;
    
    for(i=0; i<10; i++){
        printf("\nInforme o %d nome: ", i+1);
        scanf("%s", &vetor[i]);
    }
    
    for(i=0; i<10; i++){
        printf("\n%d - %s,", i+1, vetor[i]);
    }

    return (EXIT_SUCCESS);
}

