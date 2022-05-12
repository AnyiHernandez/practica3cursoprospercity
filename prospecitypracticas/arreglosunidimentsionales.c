#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("arreglos unidimensionales\n");

    int integerlist[3];
    integerlist [0] = 4;
    integerlist [1] = 5;
    integerlist [2] = 6;

    float floatlist[] = {23.4, 34.5, 45.6, 21.8, 56.7};

    char charlist[4];
    charlist[0] = 'd';
    charlist[1] = 'a';
    charlist[2] = 'n';
    charlist[3] = 'i';
    
    printf(" \n mi primer entero va a ser igual a: \t \t %i ", integerlist [0]);
    printf(" \n mi ultimo flotante va a  ser igual a: \t \t %f ", floatlist [4]);
    printf(" \n lista de caracteres es: \t %c %c %c %c .\n ", charlist [0],charlist [1],charlist [2],charlist [3]);
 
    

return 0;
}