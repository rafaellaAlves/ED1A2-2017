#include "filas.h"
#include <stdio.h>
#include <stdlib.h>

void iniciarFila (struct Fila* f){
    int i;

    for(i=0; i <MAX_ELEM; i++){
        f->elem[i] = 0;
    }
    f->tamanho = 0;
}

int vazia(struct Fila f){
    if(f.tamanho == 0){
        printf("\nFila vazia!");
        return SUCESSO;
    }else{
        printf("\nA fila não esta vazia!");
        return ERRO;
    }            
                
}

int cheia(struct Fila f){
    if(f.tamanho == MAX_ELEM){
        printf("\nFila cheia!");
        return SUCESSO;
    }else{
        printf("\nA fila nao esta cheia!");
        return ERRO;
    }    
}

void listarElementos (struct Fila f){
    int i;
    
    if (f.tamanho == 0)
        printf("\nFila vazia! Nao e possivel listar os elementos.");
    else{
        printf("\n\nOs elementos da lista sao:\n");
        for(i=0; i < f.tamanho ; i++){
            printf("%c ", f.elem[i]);
        }
    }    
}

int inserir (struct Fila* f, char dado){
    if(f->tamanho == MAX_ELEM)
        printf("\nNao e possivel inserir! FILA CHEIA.");
    else{
        f->elem[f->tamanho] = dado;
        f->tamanho++;
    }
}

char remover (struct Fila* f){
    int i =0;
    char e = 0;
    
    if(f->tamanho == 0)
        printf("\nNao e possivel remover! FILA VAZIA.");
    else{
        for(i =0; i < (f->tamanho-1); i++){
            f->elem[i] = f->elem[i+1];
        }    
        f->elem[f->tamanho-1] = 0;
        f->tamanho--;
    }
    /*e = obterInicio(f);
    return e;*/
}

char obterInicio (struct Fila f){
    char dado = 0;
    
    if(f.tamanho == 0){
        printf("\nNao e possivel obter o elemento. FILA VAZIA.");
    }else{
        dado = f.elem[0];
        return dado;
    }    
}
