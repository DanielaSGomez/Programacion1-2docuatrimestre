#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nombre[31];
    int edad;
    char dni[31];

}ePersona;

int loadPerson(ePersona *pPerson);
void printPerson(ePersona *pPerson);

int main()
{

    ePersona unaPersona;

    if(loadPerson(&unaPersona)){
        printPerson(&unaPersona);

    }
    else
    {
        printf("Error\n");

    }


    return 0;
}


int loadPerson(ePersona *pPerson)
{
    int retorno = 0;

    if(pPerson->edad >0 && pPerson->dni >0 )
    {
        printf("Ingrese nombre:\n");
        scanf("%s", pPerson->nombre);
        printf("Ingrese edad: \n");
        scanf("%d",pPerson->edad);
        printf("Ingrese dni: \n");
        scanf("%s", pPerson->dni);
        retorno = 1;
    }


    return retorno;
}

void printPerson(ePersona *pPerson)
{
    printf("Nombre:%s Edad:%d DNI:%s",pPerson->nombre,pPerson->edad,pPerson->dni);
}
