#include <stdio.h>
#include "Lista_Ady.h"

void crear_Lis(Lista &l){
    l=NULL;
}

bool esVacia(Lista l){
    if(l==NULL)
        return true;
    return false;
}
void InsertFront(Lista &l, int v){
    Lista aux;
    aux=new nodo;
    aux->vert=v;
    aux->sig=l;
    l=aux;
}
bool Pertenece(Lista l, int v){
    bool pert=false;
    Lista aux=l;
    while(!pert && aux!=NULL){
        if(aux->vert==v)
            pert=true;
        else
            aux=aux->sig;
    }
    return pert;
}
int Largo(Lista l){
    int cont=0;
    Lista aux=l;
    while(aux!=NULL){
        cont++;
        aux=aux->sig;
    }
    return cont;
}
void Desplegar(Lista l){
    Lista aux=l;
    while(aux!=NULL){
        printf("\n %d",aux->vert);
        aux=aux->sig;
    }
}
void Crear_Ady(ListaAdy &l){
    for(int i=0;i<NL;i++){
        crear_Lis(l[i]);
    }
}
//Precondicion V1 y V2 < NL
void Agregar(ListaAdy &l, int v1, int v2){
    InsertFront(l[v1],v2);
    InsertFront(l[v2],v1);
}

int GradoV(ListaAdy l, int v){
    return(Largo(l[v]));
}

void AdyacenteV(ListaAdy l, int v){
        Desplegar(l[v]);
}
bool HayArista(ListaAdy l, int v1, int v2){
    return Pertenece(l[v1],v2);
}
