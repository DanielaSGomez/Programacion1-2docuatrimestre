#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void main(void)
{
    system("COLOR 0A");
    int i;
    int suma = 0;
    int max; // constante definida en limits.h
    int min; // constante definida en limits.h
    int aux;

    for(i=0; i<10;i++)
    {

        scanf("%d",&aux);
        suma=suma+aux;

        if(i==0){
            max = aux;
            min = aux;
        }
        else
        {
            if(aux>max)
            {
                max = aux;
            }

            if(aux<min)
            {
                min = aux;
            }
        }

    }
    printf("la suma es:%d\n",suma);
    printf("El maximo es:%d\n",max);
    printf("El minimo es:%d\n",min);
}
