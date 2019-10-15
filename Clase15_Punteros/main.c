#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vec[5], *p,i;

  p = vec;
//CARGA DEL VECTOR
//  for(i=0;i<5;i++){
//    vec[i] = 5 * i;
//  }
//
//  //muestra los valores a los que apunta p
//  for(i=0;i<5;i++){
//    printf("%d\n", *(p+i));
//  }


//AL REVEZ
   for(i=0;i<5;i++){
    *(p + i) = 5 * i;
  }


  for(i=0;i<5;i++){
    printf("%d\n", vec[i]);
  }
    return 0;
}
