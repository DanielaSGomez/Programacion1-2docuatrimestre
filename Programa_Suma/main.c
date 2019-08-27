#include <stdio.h>
#include <stdlib.h>

//DECLARACION DEL PROTOTIPO DE LA FUNCION SUMAR
int sumar(int, int);

int main()
{
    int numA;
    int numB;
    int suma;

    printf("Ingrese operando 1: ");
    scanf("%d",&numA);
    printf("\nIngrese operando 2: ");
    scanf("%d",&numB);

    //LLAMADA A LA FUNCION SUMAR Y PASAJE DE ARGUMENTOS
    suma = sumar(numA,numB);
    printf("La suma es: %d",suma);






    return 0;
}

//DEFINICION DE LA FUNCION
int sumar(int a, int b)//LOS VALORES QUE SE LE PASAN SON VALORES LOCALES DE ESTA FUNCION(QUE VIENEN DE LOS VALORES DE LAS VARIABLES DEL MAIN)
{
    int resultado;

    resultado = a + b;

    return resultado;

}
