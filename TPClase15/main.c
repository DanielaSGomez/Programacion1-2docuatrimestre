#include <stdio.h>
#include <stdlib.h>

void funcion_1(int array[], int tam);
void funcion_2(int array[], int tam);
void funcion_3(int *array, int tam);
void funcion_4(int *array, int tam);

int main()
{
    int array[5];

    //funcion_1(array,5);

    //funcion_2(array,5);

    funcion_3(array,5);

    funcion_4(array,5);


    return 0;
}

void funcion_1(int array[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("Ingrese un entero: \n");
        scanf("%d",&array[i]);
    }

    for(i=0;i<tam;i++)
    {
        printf("%d\n",array[i]);
    }

}

void funcion_2(int array[], int tam)
{
    int i;
    int *p;

    p= array;

    for(i=0;i<tam;i++)
    {
        printf("Ingrese un entero: \n");
        scanf("%d",&array[i]);
    }

    for(i=0;i<5;i++){
        printf("%d\n", *(p+i));
     }

}

void funcion_3(int *array, int tam)
{
    int i;


    for(i=0;i<5;i++){
        printf("Ingrese un numero: \n");
        scanf("%d", &array[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("%d",array[i]);
    }

}

void funcion_4(int *array, int tam)
{
    int i;
    int *p;
    p= array;

      for(i=0;i<5;i++){
        printf("Ingrese un numero: \n");
        scanf("%d", &array[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("%d",*(p+i));
    }

}
