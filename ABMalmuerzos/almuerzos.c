#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <time.h>
#include "input.h"
#include "empleados.h"
#include "almuerzos.h"
#define LIBRE 1
#define OCUPADO 0


//generar id automaticamente
static int getIdAlmuerzo()
{
    static int codigo = 0;
    codigo++;
    return codigo;
}
