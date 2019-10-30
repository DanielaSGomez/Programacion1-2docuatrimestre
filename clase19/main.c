#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE * miArchivo;
   char var1[50],var3[50],var2[50],var4[50];

   miArchivo = fopen("datas.csv", "w");

   fprintf(miArchivo, "%s,%s,%s,%s",var1,var2,var3, var4);


    return 0;
}
