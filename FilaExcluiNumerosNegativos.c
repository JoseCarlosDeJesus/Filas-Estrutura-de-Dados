#include<stdio.h>
#include<stdlib.h>

#define N 100

struct fila{
     int ini, fim;
     int vet[N];
};
typedef struct fila Fila;

int incr(int i){
   if(i==N-1)
     return 0;
   else
     return i+1;
}

Fila*cria(){
     Fila* novo=(Fila*)malloc(sizeof(Fila));
     f->ini=f->fim=0;
     return novo;
}

int vazia(Fila*f){
    return(f->ini==f->fim);
}

int retira(float*f){
    int v;
    if(vazia(f)){
      printf("Nao da para tirar um elemento de uma fila vazia\n");
      exit(1);
    }
    v=f->vet[f->ini];
    f->ini=incr(f->ini);
    return v;
}

void insere(Fila*f, int v){
    if(incr(f->fim)==f->ini){
       printf("Capacidade da fila estourou\n");
       exit(1);
    }
    f->vet[f->fim]=v;
    f->fim=incr(f->fim);
}

Fila* exclui_numeros_negativos_fila(Fila* f){
      Fila* novo;
      novo=cria();
      int i;
      for(i=f->ini;i!=f->fim;i=incr(i)){
          if(f->vet[i]<0){
             retira(f);
          }
          else{
             insere(novo,f->vet[i]);
          }
      }
      return novo;
}
