#include<stdio.h>
#include<stdlib.h>

struct no2{
     float info;
     struct no2* ant;
     struct no2* prox;
};
typedef struct no2 No2;

struct fila2{
    No2* ini;
    No2* fim;
};
typedef struct fila2 Fila2;

//retirando as funções de inserir e retirar, todas as outras funções são idênticas às de filas simples

//função auxiliar:insere no inicio
No2* ins2_ini(No2*ini,float v){
     No2* p=(No2*)malloc(sizeof(No2));
     p->info=v;
     p->prox=ini;
     p->ant=NULL;
     if(ini!=NULL)//verifica se a lista não estava vazia
        ini->ant=p;
     return p;
}

//função auxiliar:insere no fim

No2*ins2_fim(No2*fim, float v){
     No2*p=(No2*)malloc(sizeof(No2));
     p->info=v;
     p->prox=NULL;
     p->ant=fim;
     if(fim!=NULL)//verifica se a lista não estava vazia
        fim->prox=p;
     return p;
}

//função auxiliar: retira do inicio

No2*ret2_ini(No2*ini){
    No2*p=ini->prox;
    if(p!=NULL)//verifica se a lista não ficou vazia
       p->ant=NULL;
    free(ini);
    return p;
}
//função auxiliar: retira do fim

No2*ret2_fim(No2*fim){
    No2*p=fim->ant;
    if(p!=NULL)//verifica se a lista não ficou vazia
       p->prox=NULL;
    free(fim);
    return p;
}

//função que insere no inicio da fila dupla

void insere_ini(Fila2*f,float v){
    f->ini=ins2_ini(f->ini,v);
    if(f->fim==NULL)//fila antes vazia
       f->fim=f->ini;
}

//função que insere no fim da fila dupla

void insere_fim(Fila2*f,float v){
     f->fim=ins2_fim(f->fim,v);
     if(f->ini==NULL)//fila antes vazia
        f->ini=f->fim;
}

//função que retira do inicio da fila dupla

float retira_ini(Fila2*f){
    float v;
    if(vazia(f)){
       printf("Fila vazia\n");
       exit(1);
    }
    v=f->ini->info;
    f->ini=ret2_ini(f->ini);
    if(f->ini==NULL)//fila ficou vazia?
       f->fim=NULL;
    return v;
}

//função que retira do fim da fila dupla

float retira_fim(Fila2*f){
    float v;
    if(vazia(f)){
       printf("Fila vazia\n");
       exit(1);
    }
    v=f->fim->info;
    f->fim=ret2_fim(f->fim);
    if(f->fim==NULL)//fila ficou vazia?
        f->ini=NULL;
    return v;
}

int vazia(Fila2*f){
    return(f->ini==NULL);
}
