#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "funciones.h"
#include "empleados.h"
#define CANTALM 20
#define CANTEMP 100
#define CANTSEC 3

int main()
{


    eEmpleado unEmpleado[CANTEMP];
    eSector sectores[CANTSEC] = {{1,"RRHH"},{2,"Laboratorio"},{3,"Gerencia"}};

    initEmployees(unEmpleado,CANTEMP);

    int op_menu;
    do{
            printf("\nDigite una opcion: ");
            printf("\n1)Dar de alta.\n2)Ordenar.\n3)Mostrar todos\n4)Salir.");
            scanf("%d",&op_menu);

            switch(op_menu){
            case 1:
                system("cls");
              addEmployee(unEmpleado,CANTEMP,sectores,CANTSEC);

                break;
            case 2:
                //ordenarEstructura(unaPersona,3);
                break;
            case 3:
                listarEmplados(unEmpleado,CANTEMP);
                break;

            case 4:
                printf("\nSaliendo.....");
                break;
            }
    }while(op_menu!=4);


    return 0;
}
