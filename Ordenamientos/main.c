#include <stdio.h>
#include <stdlib.h>


/////////////////////////////////////////////7METODO DE BURBUJEO//////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int v[5] = {7,5,6,3,2};
    int i,j,aux;

    //ORDENAMIENTO ASCENDENTE
    for(i=0;i<5-1;i++)
    {
        for(j=i+1;j<5;j++)
        {
           if(v[i]>v[j])
           {
               aux = v[i];
               v[i] = v[j];
               v[j] = aux;
           }
        }
    }

    for(i=0;i<5;i++)
    {
        printf("%d",v[i]);
    }

    return 0;
}
