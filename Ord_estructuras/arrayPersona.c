#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayPersona.h"

void inicializarEstructura(ePersona per[], int tam)
{
    int i;

    for(i=0; i<tam;i++)
    {
        per[i].isEmpty  = 1;
    }
}


void alta(ePersona per[],int tam,ePais pais[], int tamPais)
{
    int i;
    int j;
    int opPais;
    int opElegida;
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
            printf("\nDia de nacimiento: ");
            scanf("%d",&per[i].fechaNac.dia);
            printf("\nMes de nacimiento: ");
            scanf("%d",&per[i].fechaNac.mes);
            printf("\nAnio de nacimiento: ");
            scanf("%d",&per[i].fechaNac.anio);
            printf("Elija un pais: ")
            do{
                for(j=0;j<tamPais;j++)
                {
                    printf("%d)%s",i+1,pais[i].pais);
                    scanf("%d",&opPais);
                }

            }while(opPais>tamPais);


            per[i].isEmpty = 0;
            printf("\n---------------------------------------------------");
            break;
        }

    }
}



void mostrarUno(ePersona per)
{
    printf("\n%s\t\t%s\t\t%d\t\t%d/%d/%d",per.apellido,per.nombre,per.edad,per.fechaNac.dia,per.fechaNac.mes,per.fechaNac.anio);

}

void mostrarTodos(ePersona pers[],int tam)
{
    int i;

    printf("APELLIDO\tNOMBRE\t\tEDAD\t\tFECHA NAC");
    for(i=0;i<tam;i++)
    {
        mostrarUno(pers[i]);
    }
}


void ordenarEstructura(ePersona per[], int tam)
{
    ePersona aux;
    int i,j;


    for(i=0;i<tam-1;i++)
    {
        for(j = i+1;j<tam;j++)
        {
            if((strcmp(per[j].apellido,per[i].apellido)<0))//ORDENA DE MENOR A MAYOR LOS APELLIDOS
            {
                aux = per[i];
                per[i] = per[j];
                per[j] = aux;
            }
            else
            {
                if((strcmp(per[j].apellido,per[i].apellido)==0 && per[i].nombre>per[j].nombre))//SI ESTAN ORDENADOS LOS APELLIDOS Y HAY DOS IGUALES LOS ORDENA POR NOMBRE
                {
                    aux = per[i];
                    per[i] = per[j];
                    per[j] = aux;
                }
                else
                {
                    if(strcmp(per[j].nombre,per[i].nombre)==0 && per[i].edad>per[j].edad)//SI LOS NOMBRES Y LOS APELLIDOS SON IGUALES LOS ORDENA POR EDAD
                    {
                        aux = per[i];
                        per[i]=per[j];
                        per[j] = aux;

                    }
                }
            }
        }
    }
}


void filtrar(ePersona per[],int tamP,ePais pais[],int tamPais)
{
    int i,j;
    int auxPais;


    for(i=0;i<tamPais;i++)
    {
        if(pais[i].id == auxPais){
            for(j=0;j<tamP;j++)
            {
                if(per[j].ePaisId == auxPais)
                {
                    printf("\n%s\t%s",per[j].nombre,pais[i].pais);
                }
            }
            break;
        }
    }

}
