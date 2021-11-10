#include<stdio.h>
#include<stdlib.h>
#define N 500

struct fila{
     int ini,fim;
     int vet[N];
};
typedef struct fila Fila;

int incr(int i){
    if(i==N-1)
       return 0;
    else
       return i+1;
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

int valor_inicio_fila(Fila*f){
    int v;
    v=f->vet[f->ini];
    retira(f);//retira do inicio sempre por ser uma fila
    return v;
}
