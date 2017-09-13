/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rafa-
 *
 * Created on 12 de Setembro de 2017, 15:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int Fibonacci (int n){
    if (n == 0)
        return 0;
    else{
        if (n == 1)
            return 1;
        else
            return (Fibonacci(n-1)+Fibonacci(n-2));
        
    } 
}
int main(int argc, char** argv) {
    int num;
    
    printf("Informe um Numero: ");
    scanf("%d", &num);
    printf("\nO valor na sequencia de Fibonacci do numero %d = %d", num, Fibonacci(num));

    return (EXIT_SUCCESS);
}

