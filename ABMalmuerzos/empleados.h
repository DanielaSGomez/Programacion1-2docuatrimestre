#ifndef EMPLEADOS_H_INCLUDED
#define EMPLEADOS_H_INCLUDED

typedef struct{
    int dia, mes, anio;
}eFecha;

typedef struct{
    int id;
    char descripcion[51];
}eSector;

typedef struct{
    int legajo;
    char apellido[51];
    char nombre[51];
    char sexo;
    float salario;
    eFecha ingreso;
    int idSector;
    int isEmpty;

}eEmpleado;


eFecha getFecha(void);
int getSector(eSector sec[], int tamSec);
int initEmpleados(eEmpleado emp[], int tam);
int buscarLugarLibre(eEmpleado emp[], int tam);
int buscarExisteId(eEmpleado emp[], int tam, int legajo);
int addEmpleado(eEmpleado emp[], int tam, eSector sec[], int tamSec);
void mostrarUnEmpleado(eEmpleado emp, eSector sec[], int tamSec);
void listarEmplados(eEmpleado emp[],int tam, eSector sec[], int tamSec);
int deleteEmpleado(eEmpleado emp[], int tam,eSector sec[], int tamSec);
int modifyEmpleado(eEmpleado emp[], int tam, eSector sec[], int tamSec);
int orderEmpleadosDescendente(eEmpleado emp[], int tam, eSector sec[], int tamSec);

#endif // EMPLEADOS_H_INCLUDED
