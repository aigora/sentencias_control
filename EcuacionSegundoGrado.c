/*
Autor: Diego Medina
Grupo:103
Descaripción: Este programa resuelve una ecuación de segundo grado a partir de introducir los terminos a,b y c. 
Ademas detecta si no existe resultado y te lo comunica 
*/
#include <stdio.h>
#include <math.h>

int main()

{
	int ascii;
	float a,b,c,resultado1,resultado2;
	
	printf("*RESOLVER ECUACIONES DE SEGUNDO GRADO*\n");
	printf("Escribe el termino a\n");
scanf("%f",&a);

	printf("Ahora escribe el termino b\n");
	
scanf("%f", &b);

	printf("Finalmente pon el termino c\n");
	
scanf("%f", &c);


resultado1= (-b+(sqrt(b*b-4*a*c)))/2*a;      //raiz positiva//
resultado2= (-b-(sqrt(b*b-4*a*c)))/2*a;     //raiz negativa//
ascii=resultado1*0;
if (ascii==0 )   	//un numero real multiplicado por 0 es siempre 0//
{

	printf("x1= %.1f\n", resultado1);
	printf("x2= %.1f\n", resultado2);
}
else
{
	printf("el resultado es una raiz de numero negativo\n\n");
	printf("no existe");
}
}
