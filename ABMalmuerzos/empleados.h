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


#endif // EMPLEADOS_H_INCLUDED
