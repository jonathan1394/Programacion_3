#ifndef MATRIZ_ADY_H_INCLUDED
#define MATRIZ_ADY_H_INCLUDED

const int N=4;
typedef int Matriz [N][N];

void Crear(Matriz m);
//Precondicion V1 y V2 < N
void Agregar(Matriz m, int v1, int v2);


int GradoV(Matriz m, int v);
void AdyacenteV(Matriz m, int v);
bool HayArista(Matriz m, int v1, int v2);

#endif // MATRIZ_ADY_H_INCLUDED
