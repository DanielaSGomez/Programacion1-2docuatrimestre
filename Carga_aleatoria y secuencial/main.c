#include <stdio.h>
#include <stdlib.h>
#define MAX 5
//ESTA MAL ARREGLARLO TIENE QUE USAR EL ISEMPTY
int main()
{
    int edad[MAX],i,leg;
    float sueldo[MAX],suma=0,prom;
    char seguir;
    int cont = 0;
    int isEmpty[MAX];

    for(i=0;i<MAX;i++)
    {
        edad[i]=0;
        sueldo[i]=0;
        isEmpty[i] = 1;
    }


  do{
        printf("Desea ingresar otro dato S/N?");
        fflush(stdin);
        scanf("%c",&seguir);

        for(i=0;i<MAX;i++){
        if(isEmpty[i]==1){

        printf("Ingrese Legajo");
        scanf("%d",&leg);
        printf("Ingrese Edad");
        scanf("%d",&edad[leg-1]);
        printf("Ingrese el sueldo");
        scanf("%f",&sueldo[leg-1]);
        isEmpty[i]=0;
        break;


        }

    }


    }while(seguir == 's');





    for(i=0;i<MAX;i++){
        suma=suma+sueldo[i];
        cont++;
    }

    prom=suma/cont;
    printf("El sueldo promedio es %.2f",prom);

    return 0;
}
