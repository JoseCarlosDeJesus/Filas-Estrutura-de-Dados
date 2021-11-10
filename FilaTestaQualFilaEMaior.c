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

int testa_F1_maiorQue_F2(Fila* F1, Fila*F2){
    int i,j;
    int numero_elementos_F1=0;
    int numero_elementos_F2=0;
    for(i=F1->ini;i!=F1->fim;i=incr(i)){
        numero_elementos_F1++;
    }
    for(j=F2->ini;j!=F2->fim;j=incr(j)){
        numero_elementos_F2++;
    }
    if(numero_elementos_F1 > numero_elementos_F2)
       return 0;
    else
       return 1;
}
