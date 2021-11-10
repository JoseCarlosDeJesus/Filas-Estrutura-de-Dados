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

void insere(Fila*f, int v){
    if(incr(f->fim)==f->ini){
       printf("Capacidade da fila estourou\n");
       exit(1);
    }
    f->vet[f->fim]=v;
    f->fim=incr(f->fim);
}

Fila* concatena_filas(Fila* F1,Fila* F2){
    int i;
    //coloca F2 em F1
    for(i=F2->ini;i!=F2->fim;i=incr(i)){
        insere(F1,F2->vet[i]);
    }
    //torna F2 uma fila vazia
    for(i=F2->ini;i!=F2->fim;i=incr(i)){
        retira(F2);
    }
    return F1;
}
