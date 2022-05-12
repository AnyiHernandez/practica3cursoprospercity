#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("condicional switch\n");

    int option;

    scanf("%i", &option);


switch (option)
{
case 1:
    printf("elegiste el nuemro 1 \n");
    break;

case 2:
    printf("elegiste el numero 2 \n");
    
    break;

case 3:
    printf("elegiste el numero 3 \n");
    break;

default:
    printf("elegiste una opcion invalida\n");
    break;
}








return 0;
}
