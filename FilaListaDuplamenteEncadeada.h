#include<stdio.h>
#include<stdlib.h>

//fila de lista duplamente encadeada é como se tivessemos duas filas dispostas em ordem inversa uma da outra.
struct no{
    int info;
    struct no*ant;
    struct no*prox;
};
typedef struct no No;

struct fila2{
    No*ini;
    No*fim;
};
typedef struct fila2 Fila2;

//insere no inicio da fila dupla
void insere_inicio(Fila2*f,int v);

//insere no final da fila dupla
void insere_fim(Fila2*f,int v);

//retira do inicio da fila dupla
int retira_inicio(Fila2*f);

//retira do fim da fila dupla
int retira_fim(Fila2* f);

//verifica se a fila está vazia
int vazia(Fila2* f);

//libera a memoria alocada da fila
void libera(Fila2* f);
