/*Autor : Paula Alejandra Mantilla Ruiz
 Grupo : Q103
Descripción :programa que calcule para los 10 primeros numero naturales la siguiemte operaciom de raiz cuadrada
*/
#include <stdio.h>
#include <math.h>
//programa que calcule para los 10 primeros numero naturales la siguiemte operaciom de raiz cuadrada
int main()
{
	int i ;
	float raiz ;
	for (i=1 ; i<=10 ; i++)
	{
		raiz=sqrt(i)*1.0;
		printf ("La raiz del numero %d es %f\n",i,raiz);
	}
}

