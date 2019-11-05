#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "f.h"
#include "utn.h"

int preguntarSalir(void){
int aux;
aux=getChar("Desea salir? ingrese 'S': ");
aux=toupper(aux);
return aux;
}



