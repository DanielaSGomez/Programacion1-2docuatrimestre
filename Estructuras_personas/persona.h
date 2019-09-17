#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

typedef struct{
    char apellido[31];
    char nombre[31];
    int edad;
    int isEmpty;

}ePersona;

/** \brief Funcion que da de alta un item
 *
 * \param persona ePersona
 * \return ePersona
 *
 */
void alta(ePersona per[], int tam);

/** \brief
 *
 * \param per ePersona
 * \return void
 *
 */
void mostrar(ePersona per[],int tam);

void inicializarEstructura(ePersona per[], int tam);


#endif // PERSONA_H_INCLUDED
