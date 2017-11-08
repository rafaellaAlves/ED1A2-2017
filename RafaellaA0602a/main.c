#include "filasestaticas.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    struct Fila minhaFila;
    
    printf("INICIAR FILA ****************************************************");
    /*inicia uma fila e mostra que ela esta vazia*/
    iniciarFila(&minhaFila);
    listarElementos(minhaFila);
    printf("\n\nINSERIR ELEMENTOS *******************************************");
    /*inserir elementos na fila e mostrar*/
    inserir(&minhaFila, 'r');
    inserir(&minhaFila, 'a');
    inserir(&minhaFila, 'f');
    inserir(&minhaFila, 'a');
    listarElementos(minhaFila);
    /*Preencher a fila e tentar inserir mais um elemento*/
    inserir(&minhaFila, 'e');
    inserir(&minhaFila, 'l');
    inserir(&minhaFila, 'l');
    inserir(&minhaFila, 'a');
    inserir(&minhaFila, 'A');
    inserir(&minhaFila, 'S');
    listarElementos(minhaFila);
    inserir(&minhaFila, 'x');
    printf("\n\nREMOVER ELEMENTOS *******************************************");
    /*iniciar uma fila vazia e tentar remover elemento*/
    iniciarFila(&minhaFila);
    remover(&minhaFila);
    /*inserir elementos na fila e remover o primeiro*/
    inserir(&minhaFila, 'r');
    inserir(&minhaFila, 'a');
    inserir(&minhaFila, 'f');
    inserir(&minhaFila, 'a');
    listarElementos(minhaFila);
    remover(&minhaFila);
    remover(&minhaFila);
    listarElementos(minhaFila);
    /*remover todos os elementos da FILA e tentar lista-los*/
    remover(&minhaFila);
    remover(&minhaFila);
    listarElementos(minhaFila);
    printf("\n\nFILA VAZIA **************************************************");
    /*Iniciar uma fila vazia e testar*/
    iniciarFila(&minhaFila);
    vazia(minhaFila);
    /*adicionar elementos e verificar se a fila esta vazia*/
    inserir(&minhaFila, 'r');
    inserir(&minhaFila, 'a');
    inserir(&minhaFila, 'f');
    inserir(&minhaFila, 'a');
    listarElementos(minhaFila);
    vazia(minhaFila);
    printf("\n\nFILA CHEIA **************************************************");
    /*Iniciar uma fila vazia e verificar se esta cheia*/
    iniciarFila(&minhaFila);
    cheia(minhaFila);
    /*preencher toda a fila e verificar se esta cheia*/
    inserir(&minhaFila, 'a');
    inserir(&minhaFila, 'b');
    inserir(&minhaFila, 'c');
    inserir(&minhaFila, 'd');
    inserir(&minhaFila, 'e');
    inserir(&minhaFila, 'f');
    inserir(&minhaFila, 'g');
    inserir(&minhaFila, 'h');
    inserir(&minhaFila, 'i');
    inserir(&minhaFila, 'j');
    listarElementos(minhaFila);
    cheia(minhaFila);
    
    return (EXIT_SUCCESS);
}

