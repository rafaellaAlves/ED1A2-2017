/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rafa-
 *
 * Created on 6 de Setembro de 2017, 15:32
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dados.h"


/*
 * 
 */
void abrirConta ( struct Dados *p){
    
    printf("\nNome do cliente: ");
    scanf("%s", &p->nomeCliente);
    
    printf("\nNumero da Conta: ");
    scanf("%d", &p->numConta);
    
    p->saldo = 0;
}

void lancarCredito (struct Dados *p){
    float valor;
    
    printf("\nInforme o valor do credito: ");
    scanf("%f", &valor);
    
    p->saldo = p->saldo + valor;
  
}

void lancarDebito (struct Dados *p){
    float valor;
    
    printf("\nInforme o valor do credito: ");
    scanf("%f", &valor);
    
    p->saldo = p->saldo - valor;
  
}
void exibirSaldo(struct Dados *p){
    
    printf("-----------DADOS DA CONTA-----------");
    printf("\n%s ", p->nomeCliente);
    printf("\nConta: %d", p->numConta);
    printf("\n\nSALDO ATUAL: %f", p->saldo);
    printf("\n------------------------------------");
    
}
int main(int argc, char** argv) {
    struct Dados p;
    
    int n;
    do{
        printf("******MENU DE OPERAÇÕES******");
        printf("\n1 - Abrir conta;");
        printf("\n2 - Lancar Credito;");
        printf("\n3 - Lancar Debito;");
        printf("\n4 - Exibir Saldo.");
        printf("\n*****************************\n");
        scanf("%d", &n);
        
        switch(n){
            case 1:
                abrirConta(&p);
            break;
                
            case 2:
                lancarCredito(&p);
            break;
            
            case 3:
                lancarDebito(&p);
                
            break;
            
            case 4:
                exibirSaldo(&p);
            break;
            default:
                    printf("\nNumero invalido!!");
          
        }
        
    }while(n != 4);

    return (EXIT_SUCCESS);
}

