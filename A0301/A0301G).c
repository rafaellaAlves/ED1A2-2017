/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rafa-
 *
 * Created on 30 de Agosto de 2017, 17:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
        int M1[3][3];
    int M2[3][3];
    int MT[3][3];
    int mult[3][3];
    int j, i, n, p, m, k, op;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            M1[i][j] = 0;
            M2[i][j] = 0;
            MT[i][j] = 0;
            mult[i][j] = 0;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nInforme um valor para a matriz 1 [%d,%d]: ", i + 1, j + 1);
            scanf("%d", &M1[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nInforme um valor para a matriz 2 [%d,%d]: ", i + 1, j + 1);
            scanf("%d", &M2[i][j]);
        }
    }

    printf("\n---INFORME UMA OPERACAO---");
    printf("\nDigite 1 para ADICAO");
    printf("\nDigite 2 para SUBTRACAO");
    printf("\nDigite 3 para MULTIPLICACAO");
    scanf("%d", &n);
    switch (n) {
        case 1:
            printf("A adicao entre as matrizes!");
            printf("\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    MT[i][j] = (M1[i][j] + M2[i][j]);

                    printf("| %d | ", MT[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("A subtracao entre as matrizes!");
            printf("\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    MT[i][j] = (M1[i][j] - M2[i][j]);

                    printf("| %d | ", MT[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("A multiplicacao entre as matrizes!");
            printf("\n");
            for (p = 0; p < 3; p++) {
                for (m = 0; m < 3; m++) {
                    for (n = 0; n < 3; n++) {
                        k = M1[n][p] * M2[m][n];
                        mult[m][p] = mult[m][p] + k;
                    }
                }
            }
            for (m = 0; m < 3; m++) {
                for (n = 0; n < 3; n++) {
                    MT[m][n] = mult[m][n];
                }
            }
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    printf("| %d | ", MT[i][j]);
                }
                printf("\n");
            }
            break;
    }

    return (EXIT_SUCCESS);
}

