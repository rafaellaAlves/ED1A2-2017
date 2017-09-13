/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rafa-
 *
 * Created on 12 de Setembro de 2017, 16:07
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int Multiplicacao(int m, int n){
   
    if(m == 0)
        return n;
    else
        return (m + Multiplicacao(m,n-1));
}
int main(int argc, char** argv) {
    int a,b;
    
    printf("Informe o numero A: ");
    scanf("%d", &a);
    printf("\nInforme o numero B: ");
    scanf("%d", &b);
    printf("\n\nA multiplicacao (%d x %d) = %d", a, b, Multiplicacao(a,b));

    return (EXIT_SUCCESS);
}

