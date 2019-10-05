#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <time.h>
#include "input.h"
#include "empleados.h"
#include "almuerzos.h"
#define LIBRE 1
#define OCUPADO 0


//generar id automaticamente
static int getIdAlmuerzo()
{
    static int codigo = 0;
    codigo++;
    return codigo;
}

//FUNCION INICIALIZAR ARRAY EN LIBRE
int initAlmuerzos(eAlmuerzo alm[], int tam)
{
    int i;
    int retorno = -1;

    for(i=0; i<tam; i++)
    {
        alm[i].isEmpty= LIBRE; //LIBRE DEFINIDO COMO ENTERO 1 OCUPADO DEFINIDO COMO ENTERO 0
        retorno = 0;
    }
    return retorno;
}

//FUNCION BUSCAR LUGAR LIBRE PARA NUEVO ALTA
int buscarLugarLibreAlmuerzo(eAlmuerzo alm[], int tam)
{
    int i;
    int retorno = -1;

    for(i=0; i<tam; i++)
    {
        if(alm[i].isEmpty == LIBRE)
        {
            retorno = i;
            break;
        }
    }
    return retorno;
}

//FUNCION BUSCAR SI EXISTE EL ELEMENTO SEGUN EL ID
int buscarExisteIdAlmuerzo(eAlmuerzo alm[], int tam, int idAlm)
{
    int i;
    int retorno = -1;

    for(i=0; i<tam; i++)
    {
        if(alm[i].isEmpty == OCUPADO && (alm[i].codA == idAlm))
        {
            retorno = i;
            break;
        }
    }
    return retorno;
}

int elegirMenu(eMenu menues[], int tam)
{
    int idMenu;
    int retorno = -1;

    int i;

    idMenu = getMenu(menues,tam);

    for(i=0;i<tam;i++)
    {
        if(menues[i].codM == idMenu)
        {
            retorno = idMenu;
            break;
        }
    }

    return retorno;
}


int elegirEmpleado(eEmpleado emp[], int tam, eSector sec[], int tamSec)
{
    int idEmp;
    int retorno = -1;
    int i;

    idEmp = getEmpleadosSolo(emp,tam,sec,tamSec);

    for(i=0;i<tam;i++)
    {
        if(emp[i].legajo == idEmp && emp[i].isEmpty == OCUPADO)
        {
            retorno = idEmp;
            break;
        }
    }

    return retorno;
}

int addAlmuerzo(eAlmuerzo alm[], int tamA, eEmpleado emp[], int tamE, eSector sec[], int tamSec, eMenu menues[], int tamMenu)
{
    int retorno = -1;
    int indice;
    int i = 0;

    system("cls");
    printf("--------------ALMUERZOS-----------------");

    indice = buscarLugarLibreAlmuerzo(alm,tamA);

    if(indice ==  -1)
    {
        printf("\nNo hay lugar...");
    }
    else
    {
        alm[indice].codMenu = elegirMenu(menues,tamMenu);
        if(alm[indice].codMenu == -1)
        {
            printf("menu incorrecto");
        }
        else
        {
            alm[indice].legajo = getEmpleadosSolo(emp,tamE,sec,tamSec);
            //emp[i].legajo= alm[indice].legajo;
            if(alm[indice].legajo == -1)
            {
                printf("\nEl empleado no existe...");
            }
            else
            {
                alm[indice].fechaAlm = getFecha();
                if(alm[indice].fechaAlm.anio<emp[i].ingreso.anio&&alm[indice].fechaAlm.mes<emp[i].ingreso.mes&&alm[indice].fechaAlm.dia<emp[i].ingreso.dia)
                {
                    printf("Error, la fecha no puede er anterior al ingreso del empleado.");
                    alm[indice].fechaAlm = getFecha();
                }
                alm[indice].codA = getIdAlmuerzo();
                alm[indice].isEmpty = OCUPADO;

                printf("\nSe agrego el almuerzo....");
                retorno = 0;

            }
        }

    }

    return retorno;
}

void mostraUnAlmuerzo(eAlmuerzo alm, int tamA, eEmpleado emp[], int tamE, eSector sec[],int tamSec, eMenu menues[], int tamMenu)
{
    char descripcionMenu[51];
    float importemenu =0 ;
    char apellido[51];
    char nombre[51];
    int i;


    for(i=0;i<tamMenu;i++)
    {
        if(alm.codMenu==menues[i].codM)
        {
            strcpy(descripcionMenu,menues[i].descripcion);
           //importemenu = menues[i].importe;
            break;
        }
    }
    for(i=0;i<tamMenu;i++)
    {
        if(alm.codMenu==menues[i].codM)
        {
            //strcpy(descripcionMenu,menues[i].descripcion);
           importemenu = menues[i].importe;
            break;
        }
    }

    for(i=0;i<tamE;i++)
    {
        if(alm.legajo == emp[i].legajo)
        {
            strcpy(apellido,emp[i].apellido);
            strcpy(nombre,emp[i].nombre);
            break;
        }
    }

       for(i=0;i<tamE;i++)
    {
        if(alm.legajo == emp[i].legajo)
        {
            //strcpy(apellido,emp[i].apellido);
            strcpy(nombre,emp[i].nombre);
            break;
        }
    }
    if(alm.isEmpty == OCUPADO)
    {
        printf("\n%d\t%s\t%s\t%s\t%d/%d/%d\t%f",alm.codA,descripcionMenu,apellido,nombre,alm.fechaAlm.dia,alm.fechaAlm.mes,alm.fechaAlm.anio,importemenu);

    }



}

void mostrarListaAlmuerzos(eAlmuerzo alm[], int tamA, eMenu menues[], int tamM, eEmpleado emp[], int tamE, eSector sec[], int tamSec)
{
    int i;

    printf("\n---------------------ALMUERZOS----------------------------");
    printf("\nID\tMENU\tAPELLIDO\tNOMBRE\tFECHA DE PEDIDO\tIMPORTE");

    for(i=0;i<tamA;i++)
    {
        if(alm[i].isEmpty == OCUPADO)
        {
            mostraUnAlmuerzo(alm[i],tamA,emp,tamE,sec,tamSec,menues,tamM);
        }

    }

}

//void cargarEmpleado(eEmpleado emp[], int tamE)
//{
//    int i;
//    int idEmp;
//    char auxApellido[51];
//    char auxNombre[51];
//
//    for(i=0;i<tamE;i++)
//    {
//        if(emp[i].legajo == idEmp)
//        {
//            strcpy(auxApellido,emp[i].apellido);
//            strcpy(auxNombre,emp[i].nombre);
//            break;
//        }
//    }
//}
//
//void cargarMenu(eMenu menu[], int tamMenu)
//{
//    int i;
//    int idMenu;
//    char descripcion[51];
//    float importe;
//
//    for(i=0;i<tamMenu;i++)
//    {
//        if(menu[i].codM == idMenu)
//        {
//            strcpy(descripcion,menu[i].descripcion);
//            importe = menu[i].importe;
//            break;
//        }
//    }
//}

