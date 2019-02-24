/*
	Autor: Alejandro Martin Herreros
	Grupo:Q103
	Descripcion: Programa que dice a que dia de la semana corresponde un numero cualquiera introducido por el usuario, siendo 0 el domingo y 6 el sabado.
*/

#include <stdio.h>

int main ()
{
	int n;
	printf("Introduzca un numero de dia \n");
	scanf("%i", &n);
	switch (n)
	{
		case 0:
			printf("Hoy es domingo \n");
		break;
		case 1:
			printf("Hoy es lunes \n");
		break;
		case 2:
			printf("Hoy es martes \n");
		break;
		case 3:
			printf("Hoy es miercoles \n");
		break;
		case 4:
			printf("Hoy es jueves \n");
		break;
		case 5:
			printf("Hoy es viernes \n");
		break;
		case 6:
			printf("Hoy es sabado \n");
		break;
		default:
			printf("Numero incorrecto ");
	}
	return 0;
}
