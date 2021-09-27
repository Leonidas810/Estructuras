//Ejercicio 3. Escribir un programa que lea una arreglo bidimensional de M x N, e imprima su transpuesta.//
#include <stdio.h>
#include <stdlib.h>


int main(){

    int C,F;
    int i,j;

    printf("Columnas:");
    scanf("%d",&C);
    printf("Filas:");
    scanf("%d",&F);

    float Arr[F][C];
    //llenado//
    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            scanf("%f",&Arr[i][j]);
        }
    printf("\n");
        
    }

    //Traspuesta//
        for (i = 0; i < C; i++)
    {
        for (j = 0; j < F; j++)
        {
            printf("%f",Arr[j][i]);
        }
    printf("\n");
        
    }
    return 0;
}