#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

ePersona alta(ePersona per)
{
    printf("\nApellido: ");
    fflush(stdin);
    gets(per.apellido);
    printf("\nNombre: ");
    fflush(stdin);
    gets(per.nombre);
    printf("\nEdad: ");
    scanf("%d",&per.edad);
    per.isEmpty = 0;

    return per;

}

void mostrar(ePersona per)
{
    printf("Apellido\tNombre\tEdad\n");
    printf("%s\t%s\t%d",per.apellido,per.nombre,per.edad);
}
