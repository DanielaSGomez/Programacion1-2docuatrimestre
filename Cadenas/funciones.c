#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

void myFgets(char cadena[],int tamano)
{
    int cantidad;
    fflush(stdin);
    fgets(cadena,tamano-2,stdin);
    cantidad = strlen(cadena);
    cadena[cantidad-1]= '\0';

    cantidad = strlen(cadena);
    printf("Ingreso: %s",cadena);
    printf("\nTamanio de la cadena: %d",cantidad);

}

void first_Toupper(char cadena[])
{
    strlwr(cadena);

    cadena[0] = toupper(cadena[0]);

    int i = 0;

    while(cadena[i] !='\0')
    {
        if(cadena[i] == ' ')
        {
            cadena[i+1] = toupper(cadena[i+1]);
        }

        i++;
    }

}
