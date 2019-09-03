#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Bibliotecas/funciones.h"
#include "Input/input.h"

int main()
{
    system("COLOR DF");
    int op_1 = 0;
    int op_2 = 0;
    int suma,resta,division,multiplicacion,factorial = 0;
    int flagA,flagB = 0;
    int opcion;


    do{

        printf("\n------------------------MENU----------------------\n");
        printf("\nDigite una opcion: ");
        printf("\n1.Ingresar 1er operando: (A = %d)\n2.Ingresar 2do operando: (B = %d)\n3.Calcular todas las operaciones.\n4.Informar resultados.\n5.Salir\n",op_1,op_2);
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("\nIngrese el primer operando: ");
                scanf("%d",&op_1);
                flagA = 1;
                break;
            case 2:
                printf("\nIngrese el segundo operando: ");
                scanf("%d",&op_2);
                flagB = 1;
                break;
            case 3:
                if(flagA == 0 || flagB == 0)
                {
                    printf("\nError. Debe ingresar operandos para realizar los calculos ");
                }
                else
                {

                }

                break;
            case 4:
                if(flagA == 0 || flagB == 0)
                {
                    printf("\nError. Debe ingresar operandos para realizar los calculos ");
                }
                else
                {

                }

                break;
            case 5:
                printf("\n--------------------Saliendo de la calculadora-------------------\n");
                break;

            default:
                printf("\nOpcion invalida. Digite nuevamente una opcion: \n");
        }

   // system("pause");
    system("cls");

    }while(opcion != 5);



    return 0;
}
