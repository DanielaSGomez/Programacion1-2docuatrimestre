#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("COLOR 5F");
    int legajo;
    char nombre[31];
    float salario;
    char sexo;


    printf("Ingrese su numero de legajo: ");
    scanf("%d",&legajo);
    printf("\nIngrese su nombre: ");
    fflush(stdin);
    scanf("%s",nombre);
    printf("\nIngrese salario: ");
    scanf("%f",&salario);
    printf("\nIngrese su sexo(f/m): ");
    fflush(stdin);
    scanf("%c",&sexo);

    system("cls");

    printf("Legajo\t\tNombre\t\tSalario\t\tSexo");
    printf("\n%d\t\t%s\t\t%.2f\t\t%c",legajo,nombre,salario,sexo);

    return 0;
}
