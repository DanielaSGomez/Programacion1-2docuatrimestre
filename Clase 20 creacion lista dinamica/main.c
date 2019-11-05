#include <stdio.h>
#include <stdlib.h>
#include "f.h"
#include "utn.h"

int main(){

int size = 10;
int index=0;
int i;


Persona** lista = (Persona**)malloc(sizeof(Persona* )*size);
if (lista==NULL){
    printf("\nNo hay lugar en memoria\n");
}
Persona ** auxLista;
do {
    Persona* persona = (Persona*)malloc(sizeof(Persona));

    printf("\nIngrese nombre: ");
    scanf("%s",persona->nombre);

    persona->edad = getIn("\nIngrese edad: ");
    lista[index] = persona; // Ver explicacion sobre esta línea
    index++;
    if(index>=size){
// incrementamos el tamaño del array
    size+=10;
    auxLista = realloc(lista,sizeof(Persona*)*size);
    if (auxLista == NULL){
        printf("\nNo hay lugar en memoria\n");
        }else {
        lista=auxLista;
        }
    }
}while(preguntarSalir()!='S');

for(i=0;i<index;i++){
    printf("\nNombre: %s",lista[i]->nombre);
    printf("\t - Edad: %d",lista[i]->edad);
}
    return 0;
}
