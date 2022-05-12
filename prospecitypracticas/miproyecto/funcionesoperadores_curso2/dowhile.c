#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("iteradores do while\n");
    char answer = 'q';
    char value;

    do
    {
        printf("ingresa una letra \n");
        scanf("%c", &value);
    } while (value != answer);

    printf("coincide las letras %c == %c", value , answer);
    

return 0;
}