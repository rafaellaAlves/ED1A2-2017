/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listalinearesestaticas.h
 * Author: rafa-
 *
 * Created on 27 de Setembro de 2017, 13:48
 */

#ifndef LISTALINEARESESTATICAS_H
#define LISTALINEARESESTATICAS_H
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
struct Lista intercalarListas(struct Lista, struct Lista);
void ordenarLista(struct Lista*);
int encontrar(struct Lista*, char ,int[]);

#endif /* LISTALINEARESESTATICAS_H */

