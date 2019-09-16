#include <stdio.h>
#include <stdlib.h>

struct Persona{
    char apellido[31];
    char nombre[31];
    int edad;
    int isEmpty;

};

int main()
{

   // int nro;
    struct Persona unaPersona[5];
    int i;

    for(i=0;i<5;i++)
    {



        printf("\nNombre: ");
        fflush(stdin);
        gets(unaPersona[i].nombre);

        //SIE ES DE TIPO INT O FLOAT VA EL &
        printf("\nEdad: ");
        scanf("%d",&unaPersona[i].edad);


    }


    printf("DNI\t\tNombre\t\tEdad\n");

    for(i=0;i<5;i++)
    {
        printf("\n%s%20s%10d",unaPersona[i].apellido,unaPersona[i].nombre,unaPersona[i].edad);
    }



    return 0;
}
