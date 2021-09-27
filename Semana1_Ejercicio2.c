//Ejercicio 2. Escribir un programa en C que genere una matriz de N x N //
//y la llene con 0 excepto la diagonal principal que deberá tener 1. Ejemplo://

#include <stdio.h>
#include <stdlib.h>


int main(){

    int i,j,N,X=0;

    printf("Matriz NxN:");
    scanf("%d",&N);
    float Arr[N][N];

    //llenado//
    for (i = 0; i < N; i++)
    {
        
        for (j = 0; j < N; j++)
        {
           if(i==X & j==X){
               Arr[i][j]=1;
           }
           else{
               Arr[i][j]=0;
           }
        }
    X++;
    printf("\n");
    }
    //impresion Matriz//
    for (i = 0; i < N; i++)
    {
        
        for (j = 0; j < N; j++)
        {
            printf("%f ",Arr[i][j]);
        }
    printf("\n");
    }


return 0;

}