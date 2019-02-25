/*
Nombre: Maria de la Fuente Fernandez
Grupo: Q103
Descripción: Programa que imprime el diccionario
*/
#include <stdio.h>

int main()
{
	char letra;
	printf("El abecedario: ");
	for (letra = 'a'; letra <= 'z'; letra++)
	{
		printf("%c", letra);
	}
	return 0;
}
