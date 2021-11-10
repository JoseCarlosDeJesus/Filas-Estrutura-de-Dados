#include<stdio.h>
#include<stdlib.h>

//define a estrutura de cada nó da lista
struct no{
    int info;
    struct no* prox;
};
typedef struct no No;

//define o tipo fila
struct fila{
       No*fim;
};
typedef struct fila Fila;

//cria a fila de lista circular
Fila* cria_fila_de_lista_circular();

//libera a memoria da fila de lista circular
void libera_fila_de_lista_circular(Fila*f);

//insere no final da fila circular
void insere_final_fila_circular(Fila*f,int i);

//verifica se a fila está vazia
int vazia(Fila*f);

//retira o ultimo elemento da fila circular e faz com que o penultimo elemento aponte para o inicio da fila
int retira_elementos_fila_circular(Fila*f);

//Função auxiliar: incrementa o contador da fila para ser usada para inserir ou retirar elementos
int incr(int i);
