#include<stdio.h>
#include<stdlib.h>

#define N 300

struct fila{
    int ini,fim;
    int vet[N]
};
typedef struct fila Fila;

Fila*cria(){
     Fila*novo=(Fila*)malloc(sizeof(Fila));
     novo->ini=novo->fim=0;
     return novo;
}

int vazia(Fila*f){
    return(f->ini==f->fim);
}

void insere(Fila* f,int v){
     if(incr(f->fim)==f->ini){
        printf("Capacidade da fila estourou.\n");
        exit(1);
     }
     f->vet[f->fim]=v;
     f->fim=incr(f->fim);
}

int incr(int i){
    if(i==N-1)
       return 0;
    else
       return i+1;
}

Fila* intercala(Fila*a,Fila* b){
      Fila* fila_intercalada=cria();

      if(vazia(a)==0|| vazia(b)==0){
         printf("Nao ha como intercalar com fila vazia\n");
      }

      for(i=a->ini;i!=a->fim;i=incr(i)){
          insere(fila_intercalada,a->vet[i]);
          if(i<(b->fim)){
             insere(fila_intercalada, b->vet[i]);
          }
          else{
             continue;
          }
      }
      return fila_intercalada;
}

