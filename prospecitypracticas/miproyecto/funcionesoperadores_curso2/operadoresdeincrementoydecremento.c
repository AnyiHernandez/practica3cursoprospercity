#include <stdio.h>
#include <stdlib.h>

int main( )     
{
    printf("operadores de incremento y decremento\n");

    int value, res;

    value= 25;
    res= value++;
    printf("resultado de value es: %i\n", value); 
    printf("resultado es: %i\n", res); 
    
    value= 25;
    res= ++value;

    printf("resultado es de value: %i\n", value); 
    printf("resultado es: %i\n", res); 

    value= 28;
    res= value--;

    printf("resultado es: %i\n", res); 

    value= 37;
    res= --value;
    printf("resultado es: %i\n", res);



    return 0;
}