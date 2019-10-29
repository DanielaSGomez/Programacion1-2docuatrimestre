#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *parch;
    char texto[ ]="Prueba de escritura";
     int cant , longi;

      if((parch=fopen("prueba.txt","w"))==NULL) //Se abre en modo escritura
        { printf("\nEl archivo no puede ser abierto");
      exit (1);
      }
      longi=strlen (texto );
      cant=fwrite ( texto , sizeof ( char ) , longi , parch ); //Se escribe al archivo

      if (cant<longi)
        printf("\nError al escribir el archivo");
      else
        printf("\nSe escribieron %d caracteres", cant);
      fclose(parch);


    return 0;
}
