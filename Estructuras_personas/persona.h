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
ePersona alta(ePersona per);

void mostrar(ePersona per);


#endif // PERSONA_H_INCLUDED
