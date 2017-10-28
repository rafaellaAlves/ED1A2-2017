/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rafa-
 *
 * Created on 24 de Outubro de 2017, 21:39
 */

#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    struct Pilha minhaPilha;
    char result;
    
    printf("\n\nVERIFICA PILHA VAZIA*****************************************");
    iniciarPilha(&minhaPilha);/*inicializa uma lista fazia e verifica se esta mesmo vazia*/
    vazia(minhaPilha);
    /*inserção de elementos na pilha vazia*/
    inserir(&minhaPilha,'a');/*1°*/
    inserir(&minhaPilha,'r');/*2°*/
    inserir(&minhaPilha,'d');/*3°*/
    inserir(&minhaPilha,'n');/*4°*/
    listarElementos(minhaPilha);/*lista elementos e mostra se a pilha continua vazia ou não*/
    vazia(minhaPilha);
    printf("\n\nVERIFICA PILHA CHEIA*****************************************");
    cheia(minhaPilha);/*verifica se a pilha esta cheia*/
    /*preenchimento da pilha com 10 caracteres*/
    inserir(&minhaPilha,'a');/*5°*/
    inserir(&minhaPilha,'s');/*6°*/
    inserir(&minhaPilha,'s');/*7°*/
    inserir(&minhaPilha,'e');/*8°*/
    inserir(&minhaPilha,'l');/*9°*/
    inserir(&minhaPilha,'A');/*10°*/
    listarElementos(minhaPilha);/*lista os elementos e mostra lista cheia*/
    cheia(minhaPilha);
    /*tentativa de alocar mais 3 elemtos na lista cheia*/
    inserir(&minhaPilha,'s');/*11°*/
    inserir(&minhaPilha,'i');/*12°*/
    inserir(&minhaPilha,'m');/*13°*/
    printf("\n\nINSERIR ELEMENTOS NA PILHA***********************************");
    /*inicia uma pilha vazia e insere novos elementos*/
    iniciarPilha(&minhaPilha);
    inserir(&minhaPilha,'a');
    inserir(&minhaPilha,'f');
    inserir(&minhaPilha,'a');
    inserir(&minhaPilha,'r');
    listarElementos(minhaPilha);
    printf("\n\nOBTER ELEMENTO DO TOPO DA PILHA******************************");
    /*inicia uma lista vazia e tenta obter o caracter do topo da pilha*/
    iniciarPilha(&minhaPilha);
    result = obterTopo(minhaPilha);
    printf("\n%c", result);
    /*insere elementos na lista vazia e obtem o caracter no topo*/
    inserir(&minhaPilha,'a');
    inserir(&minhaPilha,'l');
    inserir(&minhaPilha,'a');
    inserir(&minhaPilha,'b');
    listarElementos(minhaPilha);
    result = obterTopo(minhaPilha);
    printf("\n\nO elemento do topo é : %c", result);
    printf("\n\nREMOVER ELEMENTOS DA PILHA***********************************");
    /*inicia um apilha vazia e verifica se ´pode remover elementos*/
    iniciarPilha(&minhaPilha);
    remover(&minhaPilha);
    /*insere elementos na pilha lista eles e remove o caracter do topo da pilha*/
    inserir(&minhaPilha,'i');
    inserir(&minhaPilha,'O');
    listarElementos(minhaPilha);
    remover(&minhaPilha);
    listarElementos(minhaPilha);
    
    return (EXIT_SUCCESS);
            
}

