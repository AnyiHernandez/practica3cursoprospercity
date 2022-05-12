#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rSum;
    float rRest;
    float rDiv;
    float rMult;
    int rModu;

    rSum= 7 + 3;
    rRest= 7.1 - 3.1;
    rDiv= 7.0 / 3.0;
    rMult= 7 * 3;
    rModu=7 % 3; 

    printf("resultado de la suma %i \n", rSum);
    printf("resultado de la resta %f \n", rRest );
    printf("resultado de la division %f \n", rDiv );
    printf("resultado de la multiplicacion %f \n", rMult);
    printf("resultado del modulo %i \n",rModu);
    

    return 0;
}