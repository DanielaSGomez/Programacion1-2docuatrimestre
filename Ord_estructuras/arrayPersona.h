#ifndef ARRAYPERSONA_H_INCLUDED
#define ARRAYPERSONA_H_INCLUDED

typedef struct{
    int dia,mes,anio;
}eFecha;

typedef struct{
    int id;
    char pais[31];
}ePais;


typedef struct{
    char apellido[31];
    char nombre[31];
    int edad;
    int isEmpty;
    eFecha fechaNac;
    int ePaisId;
}ePersona;


void inicializarEstructura(ePersona per[], int tam);
void alta(ePersona per[],int tam);
void mostrarUno(ePersona per);
void mostrarTodos(ePersona pers[],int tam);
void ordenarEstructura(ePersona[], int tam);

#endif // ARRAYPERSONA_H_INCLUDED
