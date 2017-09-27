/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.h
 * Author: rafa-
 *
 * Created on 26 de Setembro de 2017, 15:51
 */

#ifndef LISTA_H
#define LISTA_H
#define MAX_NUM 10
#define POS_FINAL -1

struct Lista{
    int n;
    char elem[MAX_NUM];
};

void iniciarLista(struct Lista*);
char acessarLista(struct Lista, int);
void alterarElemento(struct Lista *, int, char);
void inserirElemento(struct Lista*, int, char);
void removerElemento(struct Lista*, int, char);
void concatenarListas(struct Lista*, struct Lista*);
void inverterElementos(struct Lista*);
struct Lista sublista(struct Lista, int, int);
void inserirOrdenado(struct Lista*, char);
void mostrarLista(struct Lista);

#endif /* LISTA_H */

