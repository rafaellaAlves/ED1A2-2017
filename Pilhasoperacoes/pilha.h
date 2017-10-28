/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pilha.h
 * Author: rafa-
 *
 * Created on 24 de Outubro de 2017, 21:39
 */

#ifndef PILHA_H
#define PILHA_H
#define SUCESSO 0
#define ERRO 1
#define MAX_ELEM 10
#define PILHA_VAZIA -1

struct Pilha{
    int topo;
    char elem[MAX_ELEM];
};

int vazia(struct Pilha);
int cheia(struct Pilha);
void iniciarPilha(struct Pilha*);
char obterTopo(struct Pilha);
void listarElementos(struct Pilha);
int inserir(struct Pilha*, char);
char remover(struct Pilha*);
#endif /* PILHA_H */

