#include "Matriz_Ady_Dinamic.h"

void Crear(Grafo &g){
    for(int i=0;i<g.Cantv;i++){
        for(int j=0;j<g.Cantv;j++){
            g.DMatriz[i][j]=0;
        }
    }
}
//Precondicion V1 y V2 < N
void Agregar(Grafo &g, int v1, int v2){
    g.DMatriz[v1][v2]=1;
    g.DMatriz[v2][v1]=1;
}


int GradoV(Grafo g, int v);
void AdyacenteV(Grafo g, int v);
bool HayArista(Grafo g, int v1, int v2);
