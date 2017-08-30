/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rafa-
 *
 * Created on 30 de Agosto de 2017, 14:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    char vetor [20][10];
    char endereco [30][10];
    int i;
    
    printf("-----------DADOS-----------");
    for(i=0;i<10;i++){
        printf("\nInforme o %d nome: ", i+1);
        scanf("%s", &vetor[i]);
    }
    
    for(i=0;i<10;i++){
        printf("\nInforme o %d endereco: ", i+1);
        scanf("%s", &endereco[i]);
    }
    
    do{
        printf("\n\n---------------PESQUISA--------------------");
        printf("\nInforme um numero refernete a lista de (0-10)!");
        printf("\nPara SAIR digite: s: ");
        scanf("%d", &i);
        
        if((i<0)||(i>10)){
            printf("\nERROR!");
            printf("Digite o numero novamene");
            scanf("%d", &i);
        }else{
            printf("\n%s mora no endereco %s !", vetor[i], endereco[i]);
        }
    }while(i != 's');

    return (EXIT_SUCCESS);
}

