/* 
Autor: Diego Gómez
Grupo:Q103
Descripcion: Copia de mal comportamiento mediante el bucle "for".
*/

#include<stdio.h>

int main()
{
	int i;
	
	printf("A continuacion se realizara la siguiente copia por mal comportamiento 100 veces: Debo estar atento en clase.\n");	
	for (i=1; i<=100; i++)
	{
		printf("%i Debo estar atento en clase.\n", i);
	}
	return 0;
}
