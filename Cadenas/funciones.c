#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "funciones.h"

void myFgets(char cadena[])
{
    int cantidad;
    fgets(cadena,sizeof(cadena)-2,stdin);
    cantidad = strlen(cadena);
    cadena[cantidad-1]= '\0';

}
