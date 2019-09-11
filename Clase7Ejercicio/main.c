#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int numero;
    char str[6];
    int i;

    printf("Ingrese legajo: ");
    fflush(stdin);
    fgets(str,6,stdin);

    for(i=0;i<6;i++){
         if(isdigit(str[i])==1)
    {
        numero = atoi(str);
        printf("Legajo ingresado %d",numero);
    }
    else
    {
        printf("Error, no es un numero");
    }
    }




    return 0;
}
