
#ifndef FILA_H
#define FILA_H
#define MAX_ELEM 10
#define FILA_VAZIA -1
#define SUCESSO 0
#define ERRO 1

struct Fila {
    int inicio;
    int final;
    char elem[MAX_ELEM];
}; 

void iniciarFila(struct Fila*);
void listarElementos(struct Fila);
int inserir(struct Fila*, char);
char remover(struct Fila*);
int vazia(struct Fila);
int cheia(struct Fila);

#endif /* FILA_H */

