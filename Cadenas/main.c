#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
int main()
{
    char cad_1[51];
    char cad_2[51];
    char cad_21[102];

    //PARA QUE TOME EL \O EL STRCAT Y LO PUEDA COPIAR PRIMERO LO INCIALIZO EN 0 SINO VA A TIRAR CUALQUIER COSA
    cad_21[0] = '\0';

    printf("Cadena1:");

    myFgets(cad_1,51);
    first_Toupper(cad_1);

    printf("\nCadena2: ");
    myFgets(cad_2,51);
    first_Toupper(cad_2);
    if(strcmp(cad_1,cad_2)==0)
    {
        printf("\nSon iguales");
    }
    else{
        if(strcmp(cad_1,cad_2)>0)
        {
            printf("\nCadena 1 es mayor que cadena 2");
        }
        if(strcmp(cad_1,cad_2)<0)
        {
            printf("\nCadena 1 es menor que cadena 2");
        }
    }

    strcat(cad_21,cad_2);
    strcat(cad_21," ");
    strcat(cad_21,cad_1);

    printf("\nNombre ingresado Final: %s",cad_21);

    return 0;
}
