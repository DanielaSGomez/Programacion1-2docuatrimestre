#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

int main()
{
    ePersona unaPersona[3];

    inicializarEstructura(unaPersona,3);

    alta(unaPersona,3);

    mostrar(unaPersona,3);

    return 0;
}
