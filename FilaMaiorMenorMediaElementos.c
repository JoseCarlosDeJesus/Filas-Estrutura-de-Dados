#include<stdio.h>
#include<stdlib.h>

#define N 100

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

int maior_elemento_fila(Fila*f){
    int i, maior;
    for(i=f->ini;i!=f->fim;i=incr(i)){
        if(i=f->ini) //inicializa o maior
           maior=f->vet[i];
        if(maior<(f->vet[i])){
            maior=f->vet[i];
        }
    }
    return maior;
}

int menor_elemento_fila(Fila*f){
    int i, menor;
    for(i=f->ini;i!=f->fim;i=incr(i)){
        if(i=f->ini) //inicializa o maior
           menor=f->vet[i];
        if(menor>(f->vet[i])){
            menor=f->vet[i];
        }
    }
    return menor;
}

double media_elementos_fila(Fila*f){
    int i,j=0;
    double media=0;
    for(i=f->ini;i!=f->fim;i=incr(i)){
        media=f->vet[i];
        j++;
    }
    media=media/j;
    return media;
}



