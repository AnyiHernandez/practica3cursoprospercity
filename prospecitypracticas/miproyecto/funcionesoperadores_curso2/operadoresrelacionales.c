#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("operadores relacionales \n");

    float valora=5, valorb=10;

    if (valora < valorb)
        printf("pregunta 1: cierto \n");   

    else 
        printf("pregunta 1: false \n");
    
    if (valora <= valorb)
        printf("pregunta 2: cierto \n");   

    else 
        printf("pregunta 2: false \n");

    if (valora > valorb)
        printf("pregunta 3: cierto \n");   

    else 
        printf("pregunta 3: false \n");

    if (valora >= valorb)
        printf("pregunta 4: cierto \n");   

    else 
        printf("pregunta 4: false \n");

    if (valora == valorb)
        printf("pregunta 5: cierto \n");   

    else 
        printf("pregunta 5: false \n");

    if (valora != valorb)
        printf("pregunta 6: cierto \n");   

    else 
        printf("pregunta 6: false \n");



    return 0;
}