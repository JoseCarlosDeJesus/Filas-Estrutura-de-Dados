#include<stdio.h>
#include<stdlib.h>

#define N 100

struct fila{
      int ini, fim;
      int vet[N];
};
typedef struct fila Fila;

Fila*cria(){
     Fila*novo=(Fila*)malloc(sizeof(Fila));
     novo->ini=novo->fim=0;
     return novo;
}

int incr(int i){
    if(i==N-1)
       return 0;
    else
       return i+1;
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

int retira(Fila*f){
     int v;
     if(vazia(f)){
         printf("Nao ha elemento para retirar da lista\n");
         exit(1);
     }
     v=f->vet[f->ini];
     f->ini=incr(f->ini);
     return v;
}

int decrement(int i){
    if(i==N-1)
       return 0;
    else
       return i-1;
}

Fila* inverte_ordem_fila(Fila*f){
    int i;
    Fila* novo=cria();
    for(i=f->fim;i!=f->ini;i=decrement(i)){
        insere(novo,f->vet[i]);
    }
    return novo;
}
