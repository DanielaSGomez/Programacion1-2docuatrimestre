#include <stdio.h>
#include <stdlib.h>

int factorial(int );

int main(void)
{
    int valor,result = 1;
    int i;

    printf("\nIngrese numero: ");
    scanf("%d",&valor);

    //FACTORIAL SIN RECURSIVIDAD USANDO WHILE
//    i = valor;
//    while(i>0)
//    {
//        result = result * i;
//        i--;
//    }

    //USANDO FOR
    for(i=1;i<=valor;i++){
        result *= i;
    }

//    result=factorial(valor);
    printf("\nEl factorial de %d es %d",valor,result);
    return 0;
}



//int factorial(int n)
//{
//    int resp;
//
//    if(n==1){
//        return 1;
//    }
//
//    resp=n* factorial(n-1);
//    return (resp);
//}
