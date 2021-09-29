//Ejercicio 2. Escriba un programa en C que lea un arreglo de enteros de tamaño N
// y busque el menor valor del arreglo, e imprima su posición y el número menor.

#include <stdio.h>
#include <stdlib.h>
#define N 10

int busqueda(int Arr[N]);

int main(){

    int i,posicion;
    int Arr[N];

        //llenado//
        for(i=0;i<N;i++)
        {
            scanf("%d",&Arr[i]);
        }

        //Funcion de Busqueda(posicion)
        posicion = busqueda(Arr);

        printf("El elemento menor es %d en la posicion %d",Arr[posicion],posicion);
      
    return 0;
}

int busqueda(int Arr[N])
{

    int pos;
    pos=0;

    for(int i=0; i<N ;i++)
    {
        if(Arr[i]<pos)
        {
            pos= Arr[i];
        }
    }
return pos;
}