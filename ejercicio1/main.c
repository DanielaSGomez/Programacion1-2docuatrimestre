#include <stdio.h>
#include <stdlib.h>

int main()
{
//
//    int i;
//    int num = 1;
//
//    for(i=1; i<11;i++)
//    {
//        printf("%d",num);
//        num++;
//    }

//int i
//for(i=0;i<10;i++){
//printf("%d",(i+1));}

//        int edad;
//
//        printf("Ingrese su edad: \n");
//        scanf("%d",&edad);
//
//        while(edad<0)
//        {
//            printf("Reingrese su edad: \n");
//            scanf("%d",&edad);
//        }

        int num;
        int suma = 0;
        float promedio;
        int contador = 0;

        while(contador<5)
        {
            printf("Ingrese un numero: \n");
            scanf("%d",&num);
            suma += num;
            contador++;
        }

        promedio = (float)suma/contador;
        printf("\nEl promedio es: %f",promedio);


    return 0;
}
