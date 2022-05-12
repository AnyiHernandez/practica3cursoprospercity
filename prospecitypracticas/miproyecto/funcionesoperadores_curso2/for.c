#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{2

    printf("iteradores for \n");

int upperlim, bottonlim;

    printf("imprimir en orden descendiente \n"); 

    printf("ingresar limite superior \n"); 
    scanf("%i",&upperlim);

    printf("ingresar limite inferior\n"); 
    scanf("%i",&bottonlim);

for (int i = upperlim; i >= bottonlim; i--)
{
    printf("numero: %i \n", i);
}


return 0;
}