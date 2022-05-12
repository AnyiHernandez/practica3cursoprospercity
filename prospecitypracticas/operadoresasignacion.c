#include <stdio.h>
#include <stdlib.h>

int main( )     
{
    printf("operadores de asignacion");

    int value;

    value=30;
    printf("el valro de nuestra variable es: %i \n",value);

    value +=1;
    printf("el valro de nuestra variable es: %i \n",value);

    value -=2;
    printf("el valro de nuestra variable es: %i \n",value);

    value *=5;
    printf("el valro de nuestra variable es: %i \n",value);

    value /=4;
    printf("el valro de nuestra variable es: %i \n",value);

    value %=6;
    printf("el valro de nuestra variable es: %i \n",value);




 return 0;   
}