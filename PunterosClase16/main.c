#include <stdio.h>
#include <stdlib.h>


void mostrarCadena(char* punteroCadena);

int main()
{
    char miCad[30] = "Daniela";
    char *miP;

    miP = miCad;

    mostrarCadena(miP);

    return 0;
}


void mostrarCadena(char* punteroCadena)
{
    while(*punteroCadena != '\0')
        {
            printf("%c",*punteroCadena);
            punteroCadena++;
        }
}
