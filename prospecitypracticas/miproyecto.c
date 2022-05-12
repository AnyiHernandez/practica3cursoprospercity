#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int a, b, aux;

    
    printf("ingresa el valor de a: "); 
    scanf("%i", &a);
    printf("ingresa el valor de b: ");
    scanf("%i", &b);

    aux=a;
    a=b;
    b=aux;

    printf("a: %i, b: %i",a, b);

    printf("GRACIAS: ");
    scanf("%i", &b);





    


    //printf("a: %i b: %i \n", a, b);   

    //aux=a;
    //a=b;
    //b=aux;

    //printf("a: %i b: %i \n", a, b);  
     

  

    /* code */
    return 0;
}
