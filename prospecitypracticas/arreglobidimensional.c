#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("arreglos bidimensionales\n");

    int bidimensionalarray [4][4];
    bidimensionalarray [0][0] =11;
    bidimensionalarray [0][1] =12;
    bidimensionalarray [0][2] =13;
    bidimensionalarray [0][3] =14;

    bidimensionalarray [1][0] = 29;
    bidimensionalarray [1][1] = 28;
    bidimensionalarray [1][2] = 27;
    bidimensionalarray [1][3] = 26;

    bidimensionalarray [2][0] = 36;
    bidimensionalarray [2][1] = 35;
    bidimensionalarray [2][2] = 34;
    bidimensionalarray [2][3] = 33;

    bidimensionalarray [3][0] = 45;
    bidimensionalarray [3][1] = 46;
    bidimensionalarray [3][2] = 47;
    bidimensionalarray [3][3] = 48;

    printf("valor en (0,1) %i \n", bidimensionalarray [0][0]);
    printf("valor en (0,1) %i \n", bidimensionalarray [0][1]);
    printf("valor en (0,1) %i \n", bidimensionalarray [0][2]);
    printf("valor en (0,1) %i \n", bidimensionalarray [0][3]);

     

return 0;
}