/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   filas.h
 * Author: rafa-
 *
 * Created on 21 de Novembro de 2017, 20:39
 */

#ifndef FILAS_H
#define FILAS_H

#define MAX_ELEM 10
#define SUCESSO 0
#define ERRO 1

struct Fila {
    int tamanho;
    char elem[MAX_ELEM];
}; 

void iniciarFila(struct Fila*);
void listarElementos(struct Fila);
int inserir(struct Fila*, char);
char remover(struct Fila*);
int vazia(struct Fila);
int cheia(struct Fila);
char obterInicio(struct Fila);

#endif /* FILAS_H */

