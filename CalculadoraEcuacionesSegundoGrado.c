/* AUTOR: PAULA CASTRO JIMÉNEZ
GRUPO: Q-103
DESCRIPCIÓN: CALCULADORA ECUACIONES SEGUNDO GRADO
*/


#include <math.h>
#include <stdio.h> 

int main(){



int a,b,c;
float x1,x2,x3;

printf("Calculadora de ecuaciones de segundo grado:\n");

printf("Introduce el valor de a:\n");
scanf("%d",&a);

printf("Introduce el valor de b:\n");
scanf("%d",&b);

printf("Introduce el valor de c:\n");
scanf("%d",&c);

x3=sqrt((b*b)-(4*a*c));
x1=(-b-x3)-4*a*c/(2*a);
x2=(-b+x3)-4*a*c/(2*a);

printf("El valor de x1 es igual a %.2f",x1);
printf("\nEl valor de x2 es igual a %.2f",x2);

if(x3<0)
printf("\nLa ecuación es imaginaria");
else
printf("\nLa ecuación es real");
if(x3==0)
printf("\nLa ecuación es compleja");


return 0;
}


