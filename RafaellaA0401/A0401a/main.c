/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rafa-
 *
 * Created on 12 de Setembro de 2017, 15:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int Fatorial(int n){
    if (n<=1)
        return 1;
    else
        return n * Fatorial(n-1);
}

int main(int argc, char** argv) {
    int num;
    
    printf("Informe um Numero: ");
    scanf("%d", &num);
    printf("\nO fatorial de %d = %d", num, Fatorial(num));
    
    return (EXIT_SUCCESS);
}

