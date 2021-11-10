#include<stdio.h>
#include<stdlib.h>

#define N 200

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

int numero_impar_fila(Fila*f){
    int par=0;
    for(i=f->ini;i!=f->fim;i=incr(i)){
        if(f->vet[i]%2==0)
           par++;
    }
    return par;
}
