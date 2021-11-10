#include<stdio.h>
#include<stdlib.h>

struct no{
    float info;
    struct no*prox;
};
typedef struct no No;

struct fila{
   No*ini;
   No*fim;
};
typedef struct fila Fila;

Fila*cria(){
    Fila*f=(Fila*)malloc(sizeof(Fila));
    f->ini=f->fim=NULL;
    return f;
}

//função auxiliar:insere no fim da fila

No* ins_fim(No*fim,float v){
     No*p=(No*)malloc(sizeof(No));
     p->info=v;
     p->prox=NULL;
     if(fim!=NULL)//verifica se a lista não estava vazia
        fim->prox=p;
     return p;
}

//função auxiliar: retira do inicio
No*ret_ini(No*ini){
     No*p=ini->prox;
     free(ini);
     return p;
}

//função que insere na fila

void insere(Fila*f,float v){
     f->fim=ins_fim(f->fim,v);
     if(f->ini==NULL)//fila antes vazia?
        f->fim=NULL;
}

int vazia(Fila*f){
    return(f->ini==NULL);
}

void libera(Fila*f){
     No*q=f->ini;
     while(q!=NULL){
         No*t=q->prox;
         free(q);
         q=t;
     }
     free(f);
}

void imprime(Fila*f){
    No*q;
    for(q=f->ini;q!=NULL;q=q->prox)
        printf("%f\n",q->info);
}
