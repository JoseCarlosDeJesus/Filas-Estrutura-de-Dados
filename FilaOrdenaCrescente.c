#include<stdio.h>
#include<stdlib.h>

struct No{
    int info;
    struct no* prox;
};
typedef struct no No;

struct fila{
    No* ini;
    No* fim;
};
typedef struct fila Fila;

Fila*cria(){
     Fila*f=(Fila*)malloc(sizeof(fila));
     f->ini=f->fim=NULL;
     return f;
}

int vazia(Fila* f){
    return(f->ini==NULL);
}

No*insere_fim(No*fim,int v){
   No*p=(No*)malloc(sizeof(No));
   p->info=v;
   p->prox=NULL;
   if(fim!=NULL)
      fim->prox=p;
   return p;
}

No* retira_ini(No*ini){
    No*p=ini->prox;
    free(ini);
    return p;
}
void insere(Fila*f,int v){
     f->fim=insere_fim(f->fim,v);
     if(f->ini==NULL)
         f->ini=f->fim;
}

int retira(Fila*f){
    int v;
    if(vazia(f)){
       printf("Fila vazia\n");
       exit(1);
    }
    v=f->ini->info;
    f->ini=retira_ini(f->ini)
    if(f->ini==NULL)
         f->fim=NULL;
    return v;
}

Fila* ordena_crescente_fila(Fila*f){
      Fila*novo=cria(novo);
      Fila*p=f;
      int ordenador;
      int ponderador;
      No* fim_original=f->fim;
      while(p->ini->prox!=NUll){//enquanto ainda haver elementos da fila original
           ordenador=retira(p);
           if(vazia(novo))
              insere(novo,ordenador);
           else{
               if((novo->ini->info)>ordenador){
                  ponderador=retira(novo);
                  insere(novo,ordenador);
                  insere(novo,ponderador);
               }
           }
      }
}
