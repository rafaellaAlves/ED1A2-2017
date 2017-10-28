#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

int vazia(struct Pilha p){
    if(p.topo < 0){
        printf("\nPilha vazia!");
        return SUCESSO;
    }else{
        printf("\nPilha não esta vazia!");
        return ERRO;
    }            
                
}

int cheia(struct Pilha p){
    if(p.topo == MAX_ELEM+1){
        printf("\nLista cheia!");
        return SUCESSO;
    }else{
        printf("\nA lista nao esta cheia!");
        return ERRO;
    }    
}

void iniciarPilha(struct Pilha* p){
    int i;
    
    for(i=p->topo; i > 0; i--){
        p->elem[i] = 0;
        p->topo++;
    }
    p->topo = PILHA_VAZIA;
}
char obterTopo(struct Pilha p){
    char dado;
    
    if(p.topo == PILHA_VAZIA)
        printf("\nPilha vazia! Nao ha elementos.");
    else
        dado = p.elem[p.topo];
    
    return dado;
}

void listarElementos(struct Pilha p ){
    int i;
    
    if(p.topo == PILHA_VAZIA)
        printf("\nPilha vazia! Nao e possivel listar a pilha.");
    else{
        printf("\n\nOs elementos da lista sao:");
        for(i= p.topo; i >= 0 ; i--){
            printf("\n%c", p.elem[i]);
        }
    }    
}

int inserir(struct Pilha* p, char dado){
    if(p->topo == MAX_ELEM-1)
        printf("\nNao e possivel inserir! PILHA CHEIA.");
    else{
        p->topo++;
        p->elem[p->topo] = dado;
    }
}

char remover(struct Pilha* p){
    if(p->topo == PILHA_VAZIA)
        printf("\nNao e possivel remover! PILHA vazia.");
    else{
        p->topo = 0;
        /*p->topo--;*/
    }
}
