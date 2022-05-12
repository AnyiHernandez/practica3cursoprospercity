#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("condicion if, else, else if \n");
    float valora=25, valorb=25, valorc=30,valord=80;


    printf("condicion: \n");
    if(valora == valorb)
    {
        printf("va a cumplir esta condicion \n");
    }
    else if(valora == valord)
    {
        printf("el valor a es igual al valor c");
    }
    else if(valora == valorc)
    {
        printf("es ideal");
    }

    else
    {
        printf("ninguna condicion se cumplio \n");
        printf("despues de esta linea puedo terminar");
    }

    return 0;
}