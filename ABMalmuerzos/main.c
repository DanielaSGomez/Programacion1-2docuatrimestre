#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "empleados.h"
#include "almuerzos.h"
#define CANTEMP 3
#define CANTSEC 3
#define CANTMENU 2
#define CANTALM 20


int main()
{
    eEmpleado unEmpleado[CANTEMP];
    eMenu menues[CANTMENU] = {{1,"Ensalada",60.50},{2,"Milanesa",150.50}};
    eSector sectores[CANTSEC] = {{1,"RRHH"},{2,"Laboratorio"},{3,"Gerencia"}};
    initEmpleados(unEmpleado,CANTEMP);
    eAlmuerzo almuerzo[CANTALM];
    initAlmuerzos(almuerzo,CANTALM);

    int op_menu;
    do{
            printf("\nDigite una opcion: ");
            printf("\n1)Dar de alta empleado.\n2)Eliminar empleado.\n3)Mostrar todos empleados\n4)Modificar empleado\n5)Ordenar empleados\n6)Añadir almuerzo\n9)Salir.");
            scanf("%d",&op_menu);

            switch(op_menu){
            case 1:
                system("cls");
              addEmpleado(unEmpleado,CANTEMP,sectores,CANTSEC);
                break;
            case 2:
                deleteEmpleado(unEmpleado,CANTEMP,sectores,CANTSEC);
                break;
            case 3:
                listarEmplados(unEmpleado,CANTEMP,sectores,CANTSEC);
                break;
            case 4:
                modifyEmpleado(unEmpleado,CANTEMP,sectores,CANTSEC);
                break;
            case 5:
                orderEmpleadosDescendente(unEmpleado,CANTEMP,sectores,CANTSEC);
                break;
            case 6:
                addAlmuerzo(almuerzo,CANTALM,unEmpleado,CANTEMP,sectores,CANTSEC,menues,CANTMENU);
                break;
            case 7:
                mostrarListaAlmuerzos(almuerzo,CANTALM,unEmpleado,CANTEMP,sectores,CANTSEC,menues,CANTMENU);
                break;
            }
    }while(op_menu!=9);


    return 0;
}
