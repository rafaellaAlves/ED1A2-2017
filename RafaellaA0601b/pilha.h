
#ifndef PILHA_H
#define PILHA_H
#define SIM 1
#define NAO 0
#define SUCESSO 0
#define ERRO 1
#define MAX_ELEM 10
#define PILHA_VAZIA -1

struct Pilha{
    int topo;
    char elem[MAX_ELEM];
};

int vazia(struct Pilha);
int cheia(struct Pilha);
void iniciarPilha(struct Pilha*);
char obterTopo(struct Pilha);
void listarElementos(struct Pilha);
int inserir(struct Pilha*, char);
char remover(struct Pilha*);
int palindromo(struct Pilha);
#endif /* PILHA_H */

