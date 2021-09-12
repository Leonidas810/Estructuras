#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


void for1(){


    int x,y;

    printf("Primer numero:");
    scanf("%d",&x);
    printf("Ultimo numero");
    scanf("%d",&y);
    printf("Numeros entre medias\n");
    for (int i = x+1 ; i < y; i++)
    {
        printf("%d ",i);
    }
    
}

void while1(){


    int x,y,i=0;

    printf("\nPrimer numero:");
    scanf("%d",&x);
    printf("Ultimo numero");
    scanf("%d",&y);
    printf("Numeros entre medias\n");
    i=x+1;

    while (i < y)
    {
        printf("%d ",i);
        i++;
    }
    
    


}

void Dowhile1(){


    int x,y,i=0;

    printf("\nPrimer numero:");
    scanf("%d",&x);
    printf("Ultimo numero");
    scanf("%d",&y);
    printf("Numeros entre medias\n");
    i=x+1;

    do
    {
        printf("%d ",i);
        i++;
    } while (i < y);
    
    


}

int main(){

    
    for1();
    while1();
    Dowhile1();



     system("pause");
}