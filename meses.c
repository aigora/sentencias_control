/*
Autora: Manuel Dégano
Grupo: Q103
Descripción: Este programa imprime los meses del año.
*/
#include <stdio.h>

void main()
{
int num;
printf("Escribe un numero correspondiente a un mes del año\n");
scanf("%i", &num);

if (num==1)
printf("El mes es enero\n");
else if(num==2)
printf("El mes es febrero\n");
else if(num==3)
printf("El mes es marzo\n");
else if(num==4)
printf("El mes es abril\n");
else if(num==5)
printf("El mes es mayo\n");
else if(num==6)
printf("El mes es junio\n");
else if(num==7)
printf("El mes es julio\n");
else if(num==8)
printf("El mes es agosto\n");
else if(num==9)
printf("El mes es septiembre\n");
else if(num==10)
printf("El mes es octubre\n");
else if(num==11)
printf("El mes es noviembre\n");
else if(num==12)
printf("El mes es diciembre\n");
}
