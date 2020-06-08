#ifndef MATRIZ_ADY_DINAMIC_H_INCLUDED
#define MATRIZ_ADY_DINAMIC_H_INCLUDED
typedef struct {int * * DMatriz;
                int Cantv;
}Grafo;
void Crear(Grafo &g);
//Precondicion V1 y V2 < N
void Agregar(Grafo &g, int v1, int v2);


int GradoV(Grafo g, int v);
void AdyacenteV(Grafo g, int v);
bool HayArista(Grafo g, int v1, int v2);

#endif // MATRIZ_ADY_DINAMIC_H_INCLUDED
