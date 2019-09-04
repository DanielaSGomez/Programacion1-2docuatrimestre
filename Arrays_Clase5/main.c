#include <stdio.h>
#include <stdlib.h>
#define TAM 5
//////////////////////////////////////////CARGA SECUENCIAL/////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int legajo[TAM],edad[TAM],i;
    float prom, suma = 0,salario[TAM];


    for(i=0;i<TAM;i++){
        legajo[i]= i+1;//LEGAJO AUTOINCREMENTAL QUE AUMENTA CON EL INDICE DEL ARRAY
        printf("\nEdad %d: ",i+1);
        scanf("%d",&edad[i]);
        printf("\nSalario %d: ",i+1);
        scanf("%f",&salario[i]);
    }

    printf("\nLEGAJO\tEDAD\tSALARIO\n");

    for(i=0;i<TAM;i++){

        suma = suma + salario[i];
        printf("\n%d\t%d\t%f\n",legajo[i],edad[i],salario[i]);
    }

    prom = (float)suma/TAM;

    printf("\nPromedio sueldos: %.2f",prom);
    return 0;
}
