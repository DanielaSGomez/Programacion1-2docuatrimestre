#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD 3

struct alumno
{
    char nombre[50];
    int nota;
};

void ordenar(struct alumno* arrayPunterosAlumnos[3], int longitudArray);

int main()
{
    int i,auxiliarNota;
    char auxiliarNombre[50];
    struct alumno arrayAlumnos[CANTIDAD];
    struct alumno* arrayPunterosAlumnos[CANTIDAD];

    for(i=0; i<CANTIDAD; i++)
    {
        // Copiamos la posición de memoria de cada elemento
        arrayPunterosAlumnos[i] = &arrayAlumnos[i];
        printf("\nIngrese el nombre: ");
        scanf("%s",auxiliarNombre);
        strcpy(arrayAlumnos[i].nombre, auxiliarNombre); //FALTARIA VALIDAR
        printf("\nIngrese la Nota: ");
        scanf("%i",&auxiliarNota);
        arrayAlumnos[i].nota = auxiliarNota; //FALTA VALIDAR
    }

        printf("\n-MOSTRAMOS EL SIN ORDENAR ARRAY-");

        for(i=0; i<CANTIDAD; i++)
        {
            printf("\n%s", arrayPunterosAlumnos[i]->nombre);
            printf("-%i",arrayPunterosAlumnos[i]->nota);
        }


            ordenar(arrayPunterosAlumnos , CANTIDAD);
            printf("\n-MOSTRAMOS EL ARRAY ORDENADO-");

            for(i=0; i<CANTIDAD; i++)
            {
                printf("\n%s", arrayPunterosAlumnos[i]->nombre);
                printf("-%i",arrayPunterosAlumnos[i]->nota);
            }

    return 0;
}



void ordenar(struct alumno* arrayPunterosAlumnos[], int longitudArray)
{
    struct alumno* punteroAuxiliarAlumno;
    int i,j;

    for(i = 0; i < longitudArray -1 ; i++)
    {
        for(j = i+1; j < longitudArray ; j++)
        {
            if(arrayPunterosAlumnos[i]->nota > arrayPunterosAlumnos[j]->nota)
            {
                    punteroAuxiliarAlumno =  arrayPunterosAlumnos[i];
                    arrayPunterosAlumnos[i] =  arrayPunterosAlumnos[j];
                    arrayPunterosAlumnos[j] =  punteroAuxiliarAlumno;
            }
        }
    }
}



