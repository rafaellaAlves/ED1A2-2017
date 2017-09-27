#include "listalinearestatica.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    struct Lista minhaLista;
    struct Lista minhaLista2;
    struct Lista result;
    
    iniciarLista(&minhaLista);
    mostrarLista(minhaLista);/*mostrar lista vazia*/
    printf("\n\n*****************************************************************************");
    acessarLista(minhaLista, 2);/*acessar elemento da lista vazia*/
    printf("\n\n*****************************************************************************");
    /*inserir elementos na lista vazia*/
    inserirElemento(&minhaLista, POS_FINAL, 'A');
    inserirElemento(&minhaLista, POS_FINAL, 'B');
    inserirElemento(&minhaLista, POS_FINAL, 'C');
    inserirElemento(&minhaLista, 1, 'X');
    mostrarLista(minhaLista);/*mostrar lista preenchida*/
    printf("\n\n*****************************************************************************");
    /*Inserir elemento fora dos limites*/
    inserirElemento(&minhaLista, 33, 'X');
    mostrarLista(minhaLista);/*mostrar lista preenchida*/
    printf("\n\n*****************************************************************************");
    /*Preencher toda a lista com elementos*/
    inserirElemento(&minhaLista, POS_FINAL, 'E');
    inserirElemento(&minhaLista, POS_FINAL, 'F');
    inserirElemento(&minhaLista, POS_FINAL, 'G');
    inserirElemento(&minhaLista, 6, 'Z');
    inserirElemento(&minhaLista, POS_FINAL, 'H');
    inserirElemento(&minhaLista, POS_FINAL, 'I');
    mostrarLista(minhaLista);/*mostrar lista cheia*/
    printf("\n\n*****************************************************************************");
    /*inserir um elemento com a lista cheia*/
    inserirElemento(&minhaLista, POS_FINAL, 'U');
    printf("\n\n*****************************************************************************");
    removerElemento(&minhaLista, 3, 'C');/*remove o terceiro elemento da lista*/
    mostrarLista(minhaLista);
    printf("\n\n*****************************************************************************");
    /*inverter os elementos da lista*/
    inverterElementos(&minhaLista);
    mostrarLista(minhaLista);
    printf("\n\n*****************************************************************************");
    /*cria sublista de 3 elementos apartir da posicao 6 */
    result = sublista(minhaLista, 6, 3);
    mostrarLista(result);
    printf("\n\n*****************************************************************************");
    /*insere o elemento Y ordenado antes do Z*/
    inserirOrdenado(&minhaLista, 'y');
    mostrarLista(minhaLista);
    printf("\n\n*****************************************************************************");
    /*remove elementos da lista 1 mostra a lista 1 / insere elementos na lista 2 e mostra/ e concatena elementos da lista 1 e 2*/
    removerElemento(&minhaLista, 1, 'C');
    removerElemento(&minhaLista, 2, 'C');
    removerElemento(&minhaLista, 7, 'C');
    mostrarLista(minhaLista);
    iniciarLista(&minhaLista2);
    inserirElemento(&minhaLista2, POS_FINAL, 'p');
    inserirElemento(&minhaLista2, POS_FINAL, 'r');
    mostrarLista(minhaLista2);
    concatenarListas(&minhaLista, &minhaLista2);
    mostrarLista(minhaLista);
    printf("\n\n*****************************************************************************");
    
    return (EXIT_SUCCESS);
}

