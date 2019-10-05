#ifndef ALMUERZOS_H_INCLUDED
#define ALMUERZOS_H_INCLUDED
typedef struct{
    int codM;
    char descripcion[51];
    float importe;


}eMenu;


typedef struct{
    int codA;
    int codMenu;
    int legajo;
    eFecha fechaAlm;
    int isEmpty;
}eAlmuerzo;


#endif // ALMUERZOS_H_INCLUDED
