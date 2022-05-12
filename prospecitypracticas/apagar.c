
#include <stdio.h>

int main(){
 
float horas, minutos, x,y;
double p;
int res;
x = 0;
y = 0;
p = 0;
horas = 0;
minutos = 0;

printf("\n\n Este es un programa para que en determinado tiempo se apague el computador\n Ideal para dejarla descargando un archivo y poderse ir, sabiendo que en cierto tiempo su pc se apagara");
system(" color 0A");
printf(" \n \n\n DISEÑADO POR: Rishar_XL\n\n");
system("pause");
system ("cls");
system("color 0C");
printf("\n\n\n (1) apagar pc ( con el programa, la pc se apaga mas rapido, en windows)");
printf("\n (2) reiniciar la pc");
printf("\n (3) suspender");
printf("\n (4) temporizador para apagar la pc");
printf(" \n\n \n Elige el numero de la opcion que quieras hacer: ");
scanf("%i",&res);
switch(res){
 
 case 1: system (" shutdown /s /f");break; //aqui va el primer codigo  que es reiniciar
 case 2: system (" shutdown /r ");break; //aqui va el codigo de reiniciar
 case 3: system (" shutdown /l ");break;// aqui va e codigo de suspender
 case 4: system("cls");
 printf("\n deja en 0 el valor para no marcar nada");
 printf (" \n\n Introduce un valor para las horas: ");
scanf("%f",&horas);
system("cls");
printf("\n deja en 0 el valor para no marcar nada");
printf("\n\n Introduce un valor para los minutos:  ");
scanf("%f",&minutos);
printf(" \n EL PRGOGRAMA YA ESTA INICIADO\n");
printf(" ADVERTENCIA:    MANTEN EL PROGRAMA ABIERTO, PRESIONA ENTER\n");
system("pause");
y = minutos * 60;
x = horas * 3600;
//operaciones
p = x + y;
p *= 16363;

 while(p > 0){
  printf("\n %f",p);
  p--;
  if(p == 0){
   system("shutdown /s /hybrid");
  }
}
break;// AQUI ACABA EL CODIGO DEL CRONOMETRO
 default: printf(" LA OPCION ELEGIDA NO ES CORRECTA\n");

 }
return 0;

}
