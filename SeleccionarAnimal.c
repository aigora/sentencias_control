/*
	Autor: Alejandro Martin Herreros
	Grupo:Q103
	Descripcion: Programa que indica un animal según la letra que presiones (r,l,t o p).
*/

#include <stdio.h>

int main ()
{
	char letra;
	printf("Introduzca una letra(r,l,t o p) \n");
	scanf("%c", &letra);
	switch (letra)
	{
		case 'r':
			printf("Su animal es el rinoceronte");
			break;
		case 'l':
			printf("Su animal es el leon");
			break;
		case 't':
			printf("Su animal es el tiburon");
			break;
		case 'p':
			printf("Su animal es el perro");
			break;
		default:
			printf("Su letra no corresponde a ningun animal");
		}
		return 0;
	
}
