#include "listaslinearesestaticas.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    struct Lista minhaLista;
    struct Lista minhaLista2;
    struct Lista result;
   
     printf("\n\nINICIAR LISTA **********************************************");
    iniciarLista(&minhaLista);
    mostrarLista(minhaLista);/*mostrar lista vazia*/
    printf("\n\n*************************************************************");
    acessarLista(minhaLista, 2);/*acessar elemento da lista vazia*/
    printf("\n\nINSERIR *****************************************************");
    /*inserir elementos na lista vazia*/
    inserirElemento(&minhaLista, POS_FINAL, 'A');
    inserirElemento(&minhaLista, POS_FINAL, 'B');
    inserirElemento(&minhaLista, POS_FINAL, 'C');
    inserirElemento(&minhaLista, 1, 'X');
    mostrarLista(minhaLista);/*mostrar lista preenchida*/
    printf("\n\n*************************************************************");
    /*Inserir elemento fora dos limites*/
    inserirElemento(&minhaLista, 33, 'X');
    mostrarLista(minhaLista);/*mostrar lista preenchida*/
    printf("\n\n*************************************************************");
    /*Preencher toda a lista com elementos*/
    inserirElemento(&minhaLista, POS_FINAL, 'E');
    inserirElemento(&minhaLista, POS_FINAL, 'F');
    inserirElemento(&minhaLista, POS_FINAL, 'G');
    inserirElemento(&minhaLista, 6, 'Z');
    inserirElemento(&minhaLista, POS_FINAL, 'H');
    inserirElemento(&minhaLista, POS_FINAL, 'I');
    mostrarLista(minhaLista);/*mostrar lista cheia*/
    printf("\n\n*************************************************************");
    /*inserir um elemento com a lista cheia*/
    inserirElemento(&minhaLista, POS_FINAL, 'U');
    printf("\n\nREMOVER *****************************************************");
    removerElemento(&minhaLista, 3, 'C');/*remove o terceiro elemento da lista*/
    mostrarLista(minhaLista);
    printf("\n\nINVERTER ****************************************************");
    /*inverter os elementos da lista*/
    inverterElementos(&minhaLista);
    mostrarLista(minhaLista);
    printf("\n\nSUBLISTA ****************************************************");
    /*cria sublista de 3 elementos apartir da posicao 6 */
    result = sublista(minhaLista, 6, 3);
    mostrarLista(result);
    printf("\n\nINSERIR ORDENADO ********************************************");
    /*insere o elemento Y ordenado antes do Z*/
    iniciarLista(&minhaLista);
    inserirElemento(&minhaLista, POS_FINAL, 'a');
    inserirElemento(&minhaLista, POS_FINAL, 'b');
    inserirElemento(&minhaLista, POS_FINAL, 'c');
    inserirElemento(&minhaLista, POS_FINAL, 'e');
    inserirOrdenado(&minhaLista, 'd');
    mostrarLista(minhaLista);
    printf("\n\nCONCATENAR **************************************************");
    /*remove elementos da lista 1 mostra a lista 1 / insere elementos na lista 2 e mostra/ e concatena elementos da lista 1 e 2*/
    removerElemento(&minhaLista, 2, 'C');
    removerElemento(&minhaLista, 3, 'C');
    mostrarLista(minhaLista);
    iniciarLista(&minhaLista2);
    inserirElemento(&minhaLista2, POS_FINAL, 'p');
    inserirElemento(&minhaLista2, POS_FINAL, 'r');
    mostrarLista(minhaLista2);
    concatenarListas(&minhaLista, &minhaLista2);
    mostrarLista(minhaLista);
    printf("\n\nINTERCALAR **************************************************");
    /*iniciar duas listas 1 e 2 inserir elementos distintitos e intercalar as duas lista resultando em uma Lista 3*/
    iniciarLista(&minhaLista);
    iniciarLista(&minhaLista2);
    inserirElemento(&minhaLista, POS_FINAL, 'A');
    inserirElemento(&minhaLista2, POS_FINAL, 'B');
    inserirElemento(&minhaLista, POS_FINAL, 'C');
    inserirElemento(&minhaLista2, POS_FINAL, 'D');
    inserirElemento(&minhaLista, POS_FINAL, 'E');
    inserirElemento(&minhaLista2, POS_FINAL, 'F');
    /*inserirElemento(&minhaLista, POS_FINAL, 'g');
    inserirElemento(&minhaLista2, POS_FINAL, 'H');*/
    mostrarLista(minhaLista);
    mostrarLista(minhaLista2);
    result = intercalarListas(minhaLista, minhaLista2);
    mostrarLista(result);
    printf("\n\nORDENAR ALFABETICO ******************************************");
    /*Inserir elementos desordenados e ordenar em ordem alfabetica*/
    iniciarLista(&minhaLista);
    inserirElemento(&minhaLista, POS_FINAL, 'e');
    inserirElemento(&minhaLista, POS_FINAL, 'x');
    inserirElemento(&minhaLista, POS_FINAL, 'j');
    inserirElemento(&minhaLista, POS_FINAL, 'r');
    inserirElemento(&minhaLista, POS_FINAL, 'b');
    inserirElemento(&minhaLista, POS_FINAL, 'z');
    inserirElemento(&minhaLista, POS_FINAL, 'p');
    inserirElemento(&minhaLista, POS_FINAL, 'l');
    inserirElemento(&minhaLista, POS_FINAL, 'n');
    inserirElemento(&minhaLista, POS_FINAL, 'c');
    mostrarLista(minhaLista);
    ordenarLista(&minhaLista);
    mostrarLista(minhaLista);
    printf("\n\nLOCALIZAR INDICE ********************************************");
    /*encontrar indice de um caracter da lista anterior*/
    int n[MAX_NUM], cont;
    cont = encontrar(&minhaLista, 'z', n);
    printf("\n\nO Z se encontra no indice:");
    for(int i = 0; i < cont; i++){
        printf("%d", n[i]);
    }
    printf("\n\nPALINDROMO **************************************************");
    iniciarLista(&minhaLista);
    inserirElemento(&minhaLista, POS_FINAL, 'o');
    inserirElemento(&minhaLista, POS_FINAL, 'v');
    inserirElemento(&minhaLista, POS_FINAL, 'o');
    mostrarLista(minhaLista);
    if(palindromo(minhaLista) == SIM){
        printf("\n\nE palindromo!");
    }else{
        printf("\n\nNao e palindromo!");
    }
    
    iniciarLista(&minhaLista);
    inserirElemento(&minhaLista, POS_FINAL, 'r');
    inserirElemento(&minhaLista, POS_FINAL, 'a');
    inserirElemento(&minhaLista, POS_FINAL, 'f');
    inserirElemento(&minhaLista, POS_FINAL, 'a');
    mostrarLista(minhaLista);
    if(palindromo(minhaLista) == SIM){
        printf("\n\nE palindromo!");
    }else{
        printf("\n\nNao e palindromo!");
    }
    
    iniciarLista(&minhaLista);
    inserirElemento(&minhaLista, POS_FINAL, 'a');
    inserirElemento(&minhaLista, POS_FINAL, 'm');
    inserirElemento(&minhaLista, POS_FINAL, 'a');
    inserirElemento(&minhaLista, POS_FINAL, 'e');
    inserirElemento(&minhaLista, POS_FINAL, 't');
    inserirElemento(&minhaLista, POS_FINAL, 'e');
    inserirElemento(&minhaLista, POS_FINAL, 'a');
    inserirElemento(&minhaLista, POS_FINAL, 'm');
    inserirElemento(&minhaLista, POS_FINAL, 'a');
    mostrarLista(minhaLista);
    if(palindromo(minhaLista) == SIM){
        printf("\n\nE palindromo!");
    }else{
        printf("\n\nNao e palindromo!");
    }
    printf("\n\nREPETIDOS ***************************************************");
    /*1° teste*/
    iniciarLista(&minhaLista);
    inserirElemento(&minhaLista, POS_FINAL, 'a');
    inserirElemento(&minhaLista, POS_FINAL, 'b');
    inserirElemento(&minhaLista, POS_FINAL, 'a');
    inserirElemento(&minhaLista, POS_FINAL, 's');
    mostrarLista(minhaLista);
    result = repetidos(&minhaLista);
    printf("\n\nElementos repetidos da lista abaixo!");
    mostrarLista(result);
    /*2° teste*/
    iniciarLista(&minhaLista);
    inserirElemento(&minhaLista, POS_FINAL, 'd');
    inserirElemento(&minhaLista, POS_FINAL, 'r');
    inserirElemento(&minhaLista, POS_FINAL, 'e');
    inserirElemento(&minhaLista, POS_FINAL, 'r');
    inserirElemento(&minhaLista, POS_FINAL, 'p');
    inserirElemento(&minhaLista, POS_FINAL, 'x');
    inserirElemento(&minhaLista, POS_FINAL, 'd');
    inserirElemento(&minhaLista, POS_FINAL, 'p');
    mostrarLista(minhaLista);
    result = repetidos(&minhaLista);
    printf("\n\nElementos repetidos da lista abaixo!");
    mostrarLista(result);
    printf("\n\nLista sem repeticao: ");
    mostrarLista(minhaLista);
    return (EXIT_SUCCESS);
}
