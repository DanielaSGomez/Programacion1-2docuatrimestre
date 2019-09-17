#include <stdio.h>
#include <stdlib.h>
#include "persona.h"


void inicializarEstructura(ePersona per[], int tam)
{
    int i;

    for(i=0; i<tam;i++)
    {
        per[i].isEmpty  = 1;
    }


}


void alta(ePersona per[],int tam)
{
    int i;


    for(i=0;i<tam;i++)
    {
        if(per[i].isEmpty==1)
        {
            printf("\nApellido: ");
            fflush(stdin);
            gets(per[i].apellido);
            printf("\nNombre: ");
            fflush(stdin);
            gets(per[i].nombre);
            printf("\nEdad: ");
            scanf("%d",&per[i].edad);
            per[i].isEmpty = 0;
            printf("\n---------------------------------------------------");
        }

        else
        {
            printf("\nNo hay lugar");
        }

    }



}

void mostrar(ePersona per[],int tam)
{
    int i;
    printf("\nApellido\tNombre\tEdad\n");
    for(i=0;i<tam;i++)
    {
         printf("\n%s\t%s\t%d",per[i].apellido,per[i].nombre,per[i].edad);
    }

}
