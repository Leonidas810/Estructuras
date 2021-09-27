//Ejercicio 1. Escriba un programa en C //
//que dada una matriz de flotantes de M renglones x N columnas,//
//calcule los promedios de los valores de cada columna de la matriz.//

#include <stdio.h>
#include <stdlib.h>


int main(){

    int C,F,Sum;
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
    //Suma y promedios//
       for (j = 0; j < C; j++)
    {
        for (i = 0; i < F; i++)
        {
            Sum=Sum+Arr[i][j];
        }
        printf("Promedio Columa %d=%d",j+1,(Sum/F));
        printf("\n");
        Sum=0;
    }
return 0;

}