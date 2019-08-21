//1)ARCHIVOS DE CABECERA QUE INCLUYEN LAS BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
//2)DIRECTIVAS DE PREPROCESADOR NO LLEVAN ; , LAS CONSTANTES #DEFINE VAN EN MAYUS
#define PI 3.14//constante de tipo flotante
#define LETRA 'A'//constante de tipo char va entre comillas simples
#define PALABRA "Algo" //constante de tipo string va entre comillas dobles
#define VERDADERO 1//constante de tipo entreo
#define FALSO 0//constante de tipo entero

//3)ESTRUCTURAS DE DATOS
//
//

//4)DECLARACION DE PROTOTIPOS
void imprimoMensaje(void); //PROTOTIPO

//5)VARABLES GLOBALES
//


//6)DESARROLLO DE LA FUNCION MAIN
int main()
{
//    int valorA;
//
//    printf("Ingrese un numero: ");
//    scanf("%d",&valorA);
//    printf("\nIngreso: %d\n",valorA);
//    int edad;
//    char nombre[31];
//
//    printf("Ingrese la edad: \n");
//    scanf("%d",&edad);
//    printf("Ingrese el nombre: \n");
//    scanf("%s",nombre);
//
//    printf("Nombre: %s\nEdad: %d",nombre,edad);

      imprimoMensaje();//LLAMADA A LA FUNCION

    return 0;//EL RETORNO 0 SIGNIFICA QUE FUE UNA SALIDA EXITOSA
}


//7)DESARROLLO DE OTRAS FUNCIONES
void imprimoMensaje(void)//DECLARACION
{
    printf("Hola...");
}
