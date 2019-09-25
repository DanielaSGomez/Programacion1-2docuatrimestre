#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

typedef struct{
    int dia,mes,anio;

}eFecha;

typedef struct{
    int id;
    char descripcion[51];
}eSector;

typedef struct{
    int cod;
    char descripcion[51];
    float importe;
}eMenu;

typedef struct{
    int legajo;
    char nombre[51];
    char apellido[51];
    char sexo;
    float salario;
    eFecha ingreso;
    int idSector;
    int isEmpty;
}eEmpleado;

typedef struct{
    int codAlm;
    int codMn;
    int legEmp;
    eFecha fecha;


}eAlmuerzo;

#endif // MENU_H_INCLUDED
