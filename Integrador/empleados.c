#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "funciones.h"
#define LIBRE 1
#define OCUPADO 0


static int generarId()
{
    static int id = 0;
    id++;
    return id;
}



void initEmployees(eEmpleado emp[], int tam)
{
    int i;

    for(i=0;i<tam;i++){
        emp[i].isEmpty = LIBRE;
    }
}

void addEmployee(eEmpleado emp[], int tam, eSector sec[], int tamSector)
{
    int i,j, op_sec = 0;


     for(i=0;i<tam;i++)
     {
        if(emp[i].isEmpty == 1)
        {
            emp[i].legajo = generarId();
            printf("\nApellido: ");
            fflush(stdin);
            gets(emp[i].apellido);
            printf("\nNombre: ");
            fflush(stdin);
            gets(emp[i].nombre);
            do{
                printf("\nSExo: ");
                fflush(stdin);
                scanf("%c",&emp[i].sexo);
            }while(emp[i].sexo!= 'f' && emp[i].sexo!='m');
             printf("\nSalario: ");
            scanf("%f",&emp[i].salario);
            printf("\nDia: ");
            scanf("%d",&emp[i].ingreso.dia);
            printf("\nMes: ");
            scanf("%d",&emp[i].ingreso.mes);
            printf("\nAnio: ");
            scanf("%d",&emp[i].ingreso.anio);
            do{
                for(j=0;j<tamSector;j++)
                {
                    printf("%d)%s",j+1,sec[j].descripcion);
                }

                scanf("%d",&emp[i].idSector);

            }while(op_sec!= sec[j].id);

            emp[i].isEmpty = 0;
        }
     }
}


void mostrarUnEmpleado(eEmpleado emp)
{
    printf("\n%s\t\t%s\t\t%d\t\t%d/%d/%d\t\t%d",emp.apellido,emp.nombre,emp.legajo,emp.ingreso.dia,emp.ingreso.mes,emp.ingreso.anio,emp.idSector);

}


void listarEmplados(eEmpleado emps[],int tam)
{
    int i;

    printf("APELLIDO\tNOMBRE\t\tLegajo\t\tFECHA NAC");
    for(i=0;i<tam;i++)
    {
        mostrarUnEmpleado(emps[i]);
    }
}


