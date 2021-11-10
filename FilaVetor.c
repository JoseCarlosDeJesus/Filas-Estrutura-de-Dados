#include<stdio.h>
#include<stdlib.h>

#define N 100

//incrementa o valor de um indice e retorna o indice incrementado
int incr(int i){
    if(i==N-1)
       return 0;
    else
       return i+1;
}

struct fila{
    int ini, fim;
    float vet[N];
};
typedef struct fila Fila;

Fila*cria(){
    Fila*f=(Fila*)malloc(sizeof(Fila));
    f->ini=f->fim=0;//inicializa fila vazia
    return f;
}

void insere(Fila*f,float v){
    if(incr(f->fim)==f->ini){//fila cheia
       printf("Capacidade da fila estourou\n");
       exit(1);
    }
    //insere elemento na proxima posicao livre
    f->vet[f->fim]=v;
    f->fim=incr(f->fim);
}

float retira(Fila*f){
    float v;
    if(vazia(f)){
       printf("Fila vazia\n");
       exit(1);
    }
    //retira elemento do inicio
    v=f->vet[f->ini];
    f->ini=incr(f->ini);
    return v;
}

int vazia(Fila*f){
    return(f->ini==f->fim);
}

void libera(Fila*f){
    free(f);
}

void imprime(Fila*f){
    int i;
    for(i=f->ini;i!=f->fim;i=incr(i))
        printf("%f\n",f->vet[i]);
}
