#include <stdio.h>
#include <stdlib.h>
#include "arrayPersona.h"

int main()
{



    ePersona unaPersona[3] = {{"ape1","nom1",1,0,1,1,1900},{"ape2","nom2",1,0,1,1,1901},{"ape3","nom3",1,0,1,1,1903}};
    ePais pais[5] = {{1,"Argentina"},{2,"Chile"},{3,"Brasil"},{4,"EEUU"},{4,"Japon"}};
    int op_menu;
    inicializarEstructura(unaPersona,3);


    do{
            printf("\nDigite una opcion: ");
            printf("\n1)Dar de alta.\n2)Ordenar.\n3)Mostrar todos\n4)Salir.");
            scanf("%d",&op_menu);

            switch(op_menu){
            case 1:
                system("cls");
                alta(unaPersona,3);
                system("cls");
                break;
            case 2:
                ordenarEstructura(unaPersona,3);
                break;
            case 3:
                mostrarTodos(unaPersona,3);
                break;

            case 4:
                printf("\nSaliendo.....");
                break;
            }
    }while(op_menu!=4);


    return 0;
}
