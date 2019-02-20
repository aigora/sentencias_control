/*
	Autora: Ines Reviejo Vaillo
	Grupo:Q103
	Descripcion: Programa que dice a que dia de la semana corresponde un numero cualquiera introducido por el usuario, siendo 1 el lunes y 7 el domingo.
*/

#include <stdio.h>
int main()
{
	int x,y;
	printf("Introduce cualquier numero.\n");
	scanf("%d",&x);
	y=x%7;
	switch(y)
	{
		case 1:
			printf("Lunes\n");
			break;
		case 2:
			printf("Martes\n");
			break;
		case 3:
			printf("Miercoles\n");
			break;
		case 4:
			printf("Jueves\n");
			break;
		case 5:
			printf("Viernes\n");
			break;
		case 6:
			printf("Sabado\n");
			break;
		case 0:
			printf("Domingo\n");
			break;
		default:
			printf("No es nada\n");
	}

return 0;
}
