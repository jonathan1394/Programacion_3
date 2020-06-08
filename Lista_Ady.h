#ifndef LISTA_ADY_H_INCLUDED
#define LISTA_ADY_H_INCLUDED

typedef struct nodoL{ int vert;
                    nodoL * sig;
}nodo;

typedef nodo * Lista;
const int NL=4;
typedef Lista ListaAdy[NL];

void crear_Lis(Lista &l);
bool esVacia(Lista l);
void InsertFront(Lista &l, int v);
bool Pertenece(Lista l, int v);
int Largo(Lista l);
void Desplegar(Lista l);

void Crear_Ady(ListaAdy &l);
//Precondicion V1 y V2 < NL
void Agregar(ListaAdy &l, int v1, int v2);
int GradoV(ListaAdy l, int v);
void AdyacenteV(ListaAdy l, int v);
bool HayArista(ListaAdy l, int v1, int v2);



#endif // LISTA_ADY_H_INCLUDED
