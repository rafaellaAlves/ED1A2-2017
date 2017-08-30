/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rafa-
 *
 * Created on 30 de Agosto de 2017, 16:46
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int m[3][3];
    int mT[3][3];
    int i, j;
    
    printf("-----------------------MATRIZ ORIGINAL-----------------------");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nInforme valores para a posicao [%d,%d]: ", i, j);
            scanf("%d", &m[i][j]);
            mT[j][i] = m[i][j];
        }
    }
    printf("\n\nA matriz original e: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("| %d | ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n------------------------------------------------------------");
    printf("\n\n---------------MATRIZ TRANSPOSTA----------------\n");
    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            printf("| %d | ", mT[j][i]);
        }
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

