#include<stdio.h>
#include<stdlib.h>

#define N 100

struct fila{
    int ini,fim;
    int vet[N];
};
typedef struct fila Fila;

int vazia(Fila*f){
    return(f->ini==f->fim);
}

int incr(int i){
    if(i==N-1)
       return 0;
    else
       return i+1;
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

//recebe uma fila de vetores e devolve ela de forma inversa
Fila* reverso(Fila* f){
      int fim_original_da_fila;
      Fila*p=f;
      fim_original_da_fila=f->fim;
      int i=0;
      int elemento_deslocando;
      while(i!=fim_original_da_fila){
            elemento_deslocando=retira(p);//retira o elemento do inicio
            insere(p,elemento_deslocando); //coloca o elemendo do inicio no fim
      }
      return p;
}
