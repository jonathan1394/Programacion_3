#include <stdio.h>
#include "Matriz_Ady.h"

void Crear(Matriz m){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            m[i][j]=0;
        }
    }
}
void Agregar(Matriz m, int v1, int v2){
    m[v1][v2]=1;
    m[v2][v1]=1;
}
int GradoV(Matriz m, int v){
    int cont=0;
    for(int i=0;i<N;i++){
        if(m[v][i]==1)
            cont++;
    }
    return cont;
}

void AdyacenteV(Matriz m, int v){
    for(int i=0;i<N;i++){
        if(m[v][i]==1)
            printf("%d ",i);
    }
}

bool HayArista(Matriz m, int v1, int v2){
    if(m[v1][v2]==1)
        return true;
    return false;
}
