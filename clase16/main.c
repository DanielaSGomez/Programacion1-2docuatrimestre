#include <stdio.h>
#include <stdlib.h>
#define CANT 3


typedef struct{
    char nombre[30];
    int edad;
}eAlumno;

int main()
{
    eAlumno alu;
    eAlumno *ptrAlu;
    //con estructuras
    eAlumno alus[CANT];
    eAlumno *ptrAlus;
    int i;


    ptrAlu = &alu;
    //con estructuras
    ptrAlus = alus;

    printf("Ingrese nombre:\n");
    fflush(stdin);
    scanf("%s", ptrAlu->nombre);
    printf("Ingrese edad: \n");
    scanf("%d", &ptrAlu->edad);

    printf("Nombre: %s\n", ptrAlu->nombre);
    printf("Edad: %d\n",ptrAlu->edad);


    //con estructuras
    printf("\nESTRUCTURA--------------\n");

    for(i=0;i<CANT;i++)
    {
        printf("Ingrese nombre:\n");
        fflush(stdin);
        scanf("%s", (*(ptrAlus+i)).nombre);
        printf("Ingrese edad: \n");
        scanf("%d", &(*(ptrAlus+i)).edad);

    }

    for(i=0;i<CANT;i++)
    {
        printf("Nombre: %s\n",(ptrAlus+i)->nombre);
        printf("Edad: %d\n",(ptrAlus+i)->edad);

    }

    return 0;
}




