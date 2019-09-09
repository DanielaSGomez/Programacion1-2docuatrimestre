#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[51];
    int largo_Cadena;

    printf("Nombre: ");
    //scanf("%s",nombre);
    fflush(stdin);
    //setbuff(stdin,NULL);

    fgets(nombre,51,stdin);
    printf("Nombre: %s",nombre);

    largo_Cadena = strlen(nombre);
    printf("Largo: %d",largo_Cadena);

    nombre[largo_Cadena-1]= '\0';
    printf("\nNombre:%s" , nombre);

    largo_Cadena = strlen(nombre);
    printf("\nNuevo Largo: %d",largo_Cadena);


    return 0;
}
