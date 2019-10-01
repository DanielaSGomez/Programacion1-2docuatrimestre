#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <time.h>
#include "input.h"
#include "empleados.h"
#define LIBRE 1
#define OCUPADO 0

//generar id automaticamente
static int getLegajo()
{
    static int legajo = 0;
    legajo++;
    return legajo;
}

//FUNCION INICIALIZAR ARRAY EN LIBRE
int initEmpleados(eEmpleado emp[], int tam)
{
    int i;
    int retorno = -1;

    for(i=0; i<tam; i++)
    {
        emp[i].isEmpty= LIBRE; //LIBRE DEFINIDO COMO ENTERO 1 OCUPADO DEFINIDO COMO ENTERO 0
        retorno = 0;
    }

    return retorno;
}

//FUNCION BUSCAR LUGAR LIBRE PARA NUEVO ALTA

int buscarLugarLibre(eEmpleado emp[], int tam)
{
    int i;
    int retorno = -1;

    for(i=0; i<tam; i++)
    {
        if(emp[i].isEmpty == LIBRE)
        {
            retorno = i;
            break;
        }
    }

    return retorno;
}

//FUNCION BUSCAR SI EXISTE EL ELEMENTO SEGUN EL ID
int buscarExisteId(eEmpleado emp[], int tam, int legajo)
{
    int i;

    int retorno = -1;

    for(i=0; i<tam; i++)
    {
        if(emp[i].isEmpty == OCUPADO && (emp[i].legajo == legajo))
        {
            retorno = i;
            break;
        }
    }

    return retorno;
}




eFecha getFecha(void)
{
   eFecha ingreso;
   ingreso.dia= getValidInt("Dia", 0, 31);
   ingreso.mes= getValidInt("Mes", 0, 12);
   ingreso.anio= getValidInt("Anio", 1900, 2019);

   return ingreso;
}

int getSector(eSector sec[], int tamSec)
{
    int i;
    int idSector;


    do
    {
        for(i = 0; i<tamSec;i++)
        {
            printf("\nID: %d: %s", sec[i].id,sec[i].descripcion);
        }

        idSector = getValidInt("Digite una opcion de sector",1,tamSec);



    }while(idSector<=0 || idSector >3);

    return idSector;
}

int addEmpleado(eEmpleado emp[], int tam, eSector sec[], int tamSec)
{

    int hayLugar;
    //int idAnterior;
    int retorno = -1;
    //int i;

    hayLugar = buscarLugarLibre(emp,tam);

    if(hayLugar == -1)
    {
        printf("\nNo hay lugar!!");

    }
    else
    {
        emp[hayLugar].legajo = getLegajo();
        myFgets(emp[hayLugar].apellido,51,"Ingrese apellido:");
        myFgets(emp[hayLugar].nombre,51,"Ingrese nombre:");
        getSex(emp[hayLugar].sexo);
        emp[hayLugar].salario = getValidFloat("Ingrese salario: ","Error",0,999999999);
        emp[hayLugar].ingreso = getFecha();
        emp[hayLugar].idSector = getSector(sec,tamSec);
        emp[hayLugar].isEmpty = OCUPADO;


        retorno = 0;

    }

    return retorno;
}

void mostrarUnEmpleado(eEmpleado emp, eSector sec)
{
    printf("\n%s\t\t%s\t\t%d\t\t%d/%d/%d\t\t%s",emp.apellido,emp.nombre,emp.legajo,emp.ingreso.dia,emp.ingreso.mes,emp.ingreso.anio,sec.descripcion);

}


void listarEmplados(eEmpleado emp[],int tam, eSector sec[], int tamSec)
{
    int i;

    printf("APELLIDO\tNOMBRE\t\tLegajo\t\tFECHA NAC\ttSECTOR");
    for(i=0;i<tam;i++)
    {
        mostrarUnEmpleado(emp[i], sec[i]);
    }
}

