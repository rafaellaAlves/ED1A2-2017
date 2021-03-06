#include "listalinearesestaticas.h"
#include <stdio.h>
#include <stdlib.h>

void iniciarLista (struct Lista* lst){
    int i;
    lst->n = 0;
    
    for(i=0; i<MAX_NUM; i++){
        lst->elem[i] = 0;
    }
}

char acessarLista (struct Lista lst, int k){
    char dado = 0;
    
    if((k < 0 || k > (lst.n-1))){
        printf("\n\nErro ao acessar a lista! - (Lista vazia ou indice fora dos limites!)");
    }else{
        dado = lst.elem[k]; 
    }
    return dado;
}

void alterarElemento(struct Lista *lst, int k, char dado){
    
    if((k < 0 || k > (lst->n-1))){
        printf("\n\nErro ao alterar elemento da lista! - (Lista vazia ou indice fora dos limites!)");
    }else{
        lst->elem[k] = dado; 
    }
   
}

void inserirElemento(struct Lista *lst, int k, char dado){
    int i;
    
    if(lst->n >= MAX_NUM){
        printf("\n\nErro ao inserir elemento! - (Lista cheia)");
    }else{
        if(k == POS_FINAL || lst->n == 0 || k == lst->n){
            lst->elem[lst->n] = dado;
            lst->n++;
        }else{
            if((k < 0) || (k > (lst->n-1))){
                printf("\n\nErro ao inserir elemento na posicao k! - (Indice fora dos limites!)");
            }else{
                for(i = lst->n; i > k; i--){
                    lst->elem[i] = lst->elem[i-1];
                }
                lst->elem[k] = dado;
                lst->n++;
            }
            
        }
    }
}

void removerElemento(struct Lista* lst, int k, char dado){
    int i;
    
    if(k == POS_FINAL || lst->n == 0){
        lst->elem[lst->n-1] = 0;
        lst->n--;
    }else{
        if((k < 0) || (k > (lst->n-1))){
            printf("\n\nErro ao excluir elemento da lista! - (Lista vazia ou indice fora dos limites!)");
        }else{
            for(i = k; i < lst->n; i++){
                lst->elem[i] = lst->elem[i+1];
            }
            lst->n--;
            lst->elem[lst->n] = 0;
        }  
    }
}

void concatenarListas(struct Lista* lst1, struct Lista* lst2){
    int i, limite;
    
    if((lst1->n + lst2->n)<= MAX_NUM){
        limite = lst2->n;
    }else{
        limite = MAX_NUM - lst1->n;
    }
    for(i=1; i<=limite; i++){
        lst1->elem[lst1->n] = lst2->elem[i-1];
        lst1->n++;
    }
}

void inverterElementos(struct Lista* lst){
    int i;
    char aux;
    
    for(i=0; i<(lst->n-1)/2; i++){
        aux = lst->elem[i];
        lst->elem[i] = lst->elem[lst->n - (i+1)];
        lst->elem[lst->n - (i+1)] = aux;
    }
}

struct Lista  sublista (struct Lista lst, int k, int n){
    struct Lista result;
    int i, limite;
    
    iniciarLista(&result);
    
    if((k < 0) || (k > (MAX_NUM-1))){
            printf("\n\nErro ao criar sublista! - (Origem vazia ou indice fora dos limites!)");
    }else{
        if ((k+n)<= MAX_NUM){
            limite = n;
        }else{
            limite = MAX_NUM - k;
        }
        for(i=1; i<=limite; i++){
            inserirElemento(&result, POS_FINAL, lst.elem[k]);
            k++;
        }
    }        
    return result;
}

void inserirOrdenado(struct Lista *lst, char e){
    int i, k;
    k=0;
  
    while((e>=lst->elem[k])&&(k<lst->n)){
        k=k+1;
    }
    inserirElemento(lst, k, e);
}

void mostrarLista(struct Lista lst){
    int k;
    char dado;
    
    printf("\n\n------------Lista de Caracteres-------------");
    for(k=0; k<(lst.n); k++){
        printf("\nL[%d] = %c", k, lst.elem[k]);
    }
}

struct Lista intercalarListas(struct Lista lst1, struct Lista lst2){
    int i, p;
    p=0;
    
    struct Lista result;
    iniciarLista(&result);
    
    if((lst1.n + lst2.n)>= MAX_NUM){
        printf("\n\nErro ao intercalar as lista! - (Lista cheia)");
    }else{
        for(i=0; i<(lst1.n&+lst2.n); i++){
            inserirElemento(&result, p+i,lst1.elem[i]);
            p++;
            inserirElemento(&result, p+i,lst2.elem[i]);
        }
    }
 
    return result;
}

void ordenarLista(struct Lista* lst){
    int aux, x = 0, j = 0;
    for(x = 0; x < lst->n; x++){
        for(j = x + 1; j < lst->n; j++){
            if(lst->elem[x] > lst->elem[j]){
                aux = lst->elem[x];
                lst->elem[x] = lst->elem[j];
                lst->elem[j] = aux;
            }
        }
    }
}
int encontrar(struct Lista* lst, char encontrar, int dado[]){
    int n, i;
    n=0;
    
    if(lst->n == 0) { 
        printf("\nERRO ao encontrar o nó - (lista pode estar vazia).");       
    }
    else{
        for(i = 0;i < MAX_NUM; i++){
            dado[i] = 0;
        }
        for(i = 0; i < lst->n; i++){
            if(lst->elem[i] == encontrar){
                dado[n] = i;
                n++;
            }
        }
    }
    return n;
}

int palindromo(struct Lista lst){
    struct Lista lst2;
    int i;
    int r = SIM;
    
    iniciarLista(&lst2);

    for(i=lst.n-1; i >= 0; i--)
        lst2.elem[lst2.n++] = lst.elem[i];
    i =0;
  
    while(r == SIM && i < lst.n){
        if(lst.elem[i] == lst2.elem[i])
            i++;
        else
            r = NAO;
    }   
    return r;
}

