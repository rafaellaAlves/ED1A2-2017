#include "filasestaticas.h"
#include <stdio.h>
#include <stdlib.h>

void iniciarFila (struct Fila* f){
    int i;

    f->inicio = 0;
    
    for(i=f->inicio; i <= MAX_ELEM; i++){
        f->inicio++;
        f->elem[i] = 0;
    }
    
    f->inicio = FILA_VAZIA;
    f->final = MAX_ELEM - 1;
}

int vazia(struct Fila f){
    if(f.inicio < 0){
        printf("\nFila vazia!");
        return SUCESSO;
    }else{
        printf("\nA fila não esta vazia!");
        return ERRO;
    }            
                
}

int cheia(struct Fila f){
    if(f.inicio == f.final){
        printf("\nFila cheia!");
        return SUCESSO;
    }else{
        printf("\nA fila nao esta cheia!");
        return ERRO;
    }    
}

void listarElementos (struct Fila f){
    int i;
    
    if (f.inicio == FILA_VAZIA)
        printf("\nFila vazia! Nao e possivel listar os elementos.");
    else{
        printf("\n\nOs elementos da lista sao:\n");
        for(i=0; i <= f.inicio ; i++){
            printf("%c ", f.elem[i]);
        }
    }    
}

int inserir (struct Fila* f, char dado){
    if(f->inicio == f->final)
        printf("\nNao e possivel inserir! FILA CHEIA.");
    else{
        f->inicio++;
        f->elem[f->inicio] = dado;
    }
}

char remover (struct Fila* f){
    int i =0;
    
    if(f->inicio == FILA_VAZIA)
        printf("\nNao e possivel remover! FILA VAZIA.");
    else{
        for(i =0; i < f->inicio; i++){
            f->elem[i] = f->elem[i+1];
        }    
        f->inicio--;
        f->elem[i] = 0;
    }
}
