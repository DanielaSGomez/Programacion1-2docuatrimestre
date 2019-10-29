#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE  *bin;
    long int cant;

    if ((bin=fopen("bin.dat","rb"))==NULL)
    {
        printf("No se pudo abrir el archivo");
        exit(1);
    }

    fseek (bin , 0L , SEEK_END ); //Se envía la posición al final del archivo
    cant=ftell (bin);
    printf("\nEl archivo tiene %ld bytes",cant);
    fclose(bin);
    getch();

    return 0;
}
