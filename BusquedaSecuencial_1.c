//Ejercicio 1. Escriba un programa en C que lea un arreglo de enteros de tamaño N,
// pida un número al usuario, busque ese número dentro del arreglo, 
//si existe imprima su posición dentro del arreglo, si no lo encuentra imprimirá "El número no existe dentro del arreglo".


#include <stdio.h>
#include <stdlib.h>
#define N 10

int busqueda(int Arr[N],int X);

int main(){

    int X,i,posicion;
    int Arr[N];

    printf("Numero buscado? ");
    scanf("%d",&X);

        //llenado//
        for(i=0;i<N;i++)
        {
            scanf("%d",&Arr[i]);
        }

        //Funcion de Busqueda(posicion)
        posicion = busqueda(Arr,X);

        if(posicion==-1){
            printf("Elemento no encontrado");
        }
        else{
            printf("Elemento %d encontrado en la posicion %d",X,posicion);
        }
    return 0;
}

int busqueda(int Arr[N], int X)
{

    int pos;
    pos=-1;

    for(int i=0; i<=N ;i++)
    {
       
        if(X == Arr[i])
        {
            pos= i;
        }
    }
return pos;
}