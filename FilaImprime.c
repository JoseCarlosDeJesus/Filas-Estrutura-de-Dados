#include<stdio.h>
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

void imprime(Fila*c){
     int i;
     for(i=f->ini;i!=f->fim;i=incr(i)){
         printf("%d\n", f->vet[i]);
     }
}
