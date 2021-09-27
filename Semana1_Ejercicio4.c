//Ejercicio 4. Escribir un programa que lea una arreglo bidimensional //
//de M x N en una función y en otra función encuentre el elemento mayor de //
//la matriz indicando en que posición (renglon - columna) lo encontró.//

//Ejercicio 3. Escribir un programa que lea una arreglo bidimensional de M x N, e imprima su transpuesta.//
#include <stdio.h>
#include <stdlib.h>


int main(){

    int C,F;
    int i,j,PosX,PosY;
    float M;

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

    //Busqueda del mayor//
    M=Arr[0][0];

        for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            if(M<Arr[i][j]){
                M=Arr[i][j];
                PosX=j;
                PosY=i;
            }
        }
        
    }

    printf("El número mayor es %f y se encuentra en la posición [%d][%d]",M,PosY,PosX);
    return 0;
}