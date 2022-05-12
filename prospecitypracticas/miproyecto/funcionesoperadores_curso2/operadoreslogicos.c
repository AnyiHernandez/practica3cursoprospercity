#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("operadores logicos \n");

    float valora,valorb,valorc;

    valora=5;
    valorb=valorc =10;

    if ((valora<valorb) && (valorb==valorc))
        printf("se cumplieron las dos condiciones \n");

    else
        printf("no se cumplieron las dos condiciones \n");

    if ((valora>valorb) || (valorb<=valorc))
        printf("se cumplieron por lo menos una de las dos condiciones \n");

    else
        printf("no se cumplieron las dos condiciones \n");
    

    




return 0;
}