#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

static int generarCodigo()
{
    static int cod = 0;
    cod++;
    return cod;
}


