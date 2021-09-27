//Ejercicio 5. Escribir un programa que lea una matriz de N x N, //
//e indique si la matriz es simétrica o no. Una matriz es simétrica si// 
//matriz[i][j] es igual a matriz[j][i], para todo i, j < N.//
#include <stdio.h>
#include <stdlib.h>


int main(){

   int i,j,N;

    printf("Matriz NxN:");
    scanf("%d",&N);
    float Arr[N][N];

    //llenado//
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%f",&Arr[i][j]);
        }
    printf("\n");
        
    }
    //Es simetrica//
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if(Arr[i][j]!=Arr[j][i]){
                printf("No es Simetrica");
                return 0;
            }
        }
        
    }
       printf("Es simetrica");


    return 0;
}