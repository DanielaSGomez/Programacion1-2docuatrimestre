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
    int retorno = -1;

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

void mostrarUnEmpleado(eEmpleado emp, eSector sec[],int tamSec)
{
    char descripcion[51];
    int i;

    for(i=0;i<tamSec;i++)
    {
        if(emp.idSector == sec[i].id)
        {
            strcpy(descripcion,sec[i].descripcion);
            break;
        }
    }

    if(emp.isEmpty == OCUPADO)
    {
        printf("\n%d\t%s\t\t%s\t\t%d/%d/%d\t\t%s",emp.legajo,emp.apellido,emp.nombre,emp.ingreso.dia,emp.ingreso.mes,emp.ingreso.anio,descripcion);
    }
}


void listarEmplados(eEmpleado emp[],int tam, eSector sec[], int tamSec)
{
    int i;

    printf("LEGAJO\tAPELLIDO\tNOMBRE\t\tFECHA NAC\t\tSECTOR");

    for(i=0;i<tam;i++)
    {
        if(emp[i].isEmpty == OCUPADO)
        {
            mostrarUnEmpleado(emp[i], sec,tamSec);
        }
    }
}


int deleteEmpleado(eEmpleado emp[], int tam,eSector sec[], int tamSec)
{
    int legajo;
    int idBuscar;
    int i;
    char respuesta;
    int retorno = -1;

    printf("-------------------BAJA DE EMPLEADOS-----------------------");

    for(i=0;i<tam;i++)
    {
        mostrarUnEmpleado(emp[i],sec,tamSec);
    }

    legajo = getValidInt("\nIngrese el legajo del empleado a eliminar: ",1,tam);

    idBuscar = buscarExisteId(emp,tam,legajo);

    if(idBuscar != -1 && emp[i].isEmpty != LIBRE)
    {
       respuesta = getChar("\nSeguro que desea eliminar el registro?(s/n)");

       if(respuesta == 's' || respuesta == 'S')
       {
           emp[idBuscar].isEmpty = LIBRE;
           printf("\nEmpleado eliminado");
           retorno = 0;
       }
       else
       {
        printf("No se elimino el registro.");
       }
    }
    else
    {
        printf("No se encontro el registro!");
    }
    return retorno;
}


int modifyEmpleado(eEmpleado emp[], int tam, eSector sec[], int tamSec)
{
    int legajo;
    int idBuscar;
    int i;
    char respuesta;
    int retorno = -1;
    int opcSubmenu;
    char auxApellido[51];
    char auxNombre[51];
    char auxSexo = 'x';
    int auxSector;
    float auxSalario;
    eFecha auxFecha;

    printf("\n-------------------MODIFICACION DE DATOS DE EMPLEADO------------------");

    for(i=0;i<tam;i++)
    {
        mostrarUnEmpleado(emp[i],sec,tamSec);
    }

    legajo = getValidInt("\nIngrese el legajo a modificar",1,tam);
    idBuscar = buscarExisteId(emp,tam,legajo);

    if(idBuscar != -1 && emp[idBuscar].isEmpty != LIBRE)
    {

        respuesta = getChar("\nEsta seguro que desea modificar el registro?");

        if(respuesta == 's' || respuesta == 'S')
        {
            do{
                opcSubmenu = getValidInt("\nDigite una opcion: \n1)Modificar apellido\n2)Modificar nombre\n3)Modificar Sexo\n4)Modificar Salario\n5)Modificar Fecha Ingreso\n6)Modificar Sector7)Volver",1,7);

                switch(opcSubmenu)
                {
                case 1:
                    myFgets(auxApellido,51,"Ingrese apellido:");
                    strcpy(emp[idBuscar].apellido,auxApellido);
                    break;
                case 2:
                    myFgets(auxNombre,51,"Ingrese nombre:");
                    strcpy(emp[idBuscar].nombre,auxNombre);
                    break;
                case 3:
                    getSex(auxSexo);
                    emp[idBuscar].sexo = auxSexo;
                    break;
                case 4:
                    auxSalario= getValidFloat("Ingrese salario: ","Error",1,999999999);
                    emp[idBuscar].salario = auxSalario;
                    break;
                case 5:
                    auxFecha = getFecha();
                    emp[idBuscar].ingreso =  auxFecha;
                    break;
                case 6:
                   auxSector = getSector(sec,tamSec);
                    emp[idBuscar].idSector = auxSector;
                    break;
                case 7:
                    printf("\nVolviendo al menu de empleados....\n");
                    break;
                default:
                    printf("\nOpcion invalida");
                }
            }while(opcSubmenu != 7);

            retorno = 0;
        }
        else
        {
            printf("\nSe cancelo la modificacion...");
        }
    }
    else
    {
        printf("\nEl legajo no existe...");
    }

    return retorno;
}


int orderEmpleadosDescendente(eEmpleado emp[], int tam, eSector sec[], int tamSec)
{
    int i;
    int j;
    eEmpleado aux;

    printf("\nOrdenando en orden ascendente.....\n");

    for(i=0;i<tam-1;i++)
    {
        for(j = i+1; j<tam;j++)
        {
            if(strcmp(emp[j].apellido,emp[i].apellido)<0)
            {
                aux = emp[i];
                emp[i] = emp[j];
                emp[j] = aux;
            }

            if(strcmp(emp[j].apellido,emp[i].apellido)==0&& strcmp(emp[j].nombre,emp[i].nombre)<0)
            {
                aux = emp[i];
                emp[i] = emp[j];
                emp[j] = aux;
            }
        }
    }

    listarEmplados(emp,tam,sec,tamSec);
    return 0;
}

