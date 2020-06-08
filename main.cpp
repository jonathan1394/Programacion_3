#include <stdio.h>
#include "Matriz_Ady.h"
#include "Lista_Ady.h"
#include "Matriz_Ady_Dinamic.h"

int main()
{
    /*Matriz m;
    Crear(m);
    Agregar(m,2,3);
    Agregar(m,2,1);
    printf("%d \n",GradoV(m,2));
    AdyacenteV(m,2);
    if(HayArista(m,2,1))
        printf("\nhay arista");
*/
    /*Lista l;
    crear_Lis(l);
    if(esVacia(l))
        printf("Vacia");
    InsertFront(l,2);
    InsertFront(l,3);
    if(esVacia(l))
        printf("Vacia");
    else
        printf("\nNo Vacia");

    if(Pertenece(l,2))
        printf("\nPertenece");

    printf("\n%d",Largo(l));
    Desplegar(l);
*/
   /* ListaAdy l;
    Crear_Ady(l);
    Agregar(l,1,2);
    Agregar(l,1,3);
    Agregar(l,3,2);
    Agregar(l,0,1);
    printf("%d",GradoV(l,0));
    AdyacenteV(l,1);
    if(HayArista(l,3,1))
        printf("\nHay arista");
*/

    Grafo g;
    g.Cantv=5;
    printf("%d",g.Cantv);
    g.DMatriz[0][0]=1;
    printf(" %d",g.DMatriz[0][0]);
    Crear(g);
}
