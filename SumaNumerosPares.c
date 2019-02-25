
// Autora: Wasima Simouh Majid
// Grupo:Q103
// Descripción: Este programa suma los numeros pares que existan hasta el numero 100

#include<stdio.h>
int main()
{
	int i, par=0;
	for(i=2;i<=100;i+=2)
	{
		par+=i;
	}
	printf("La suma de numeros pares es %i\n", par);
	
	return 0;
}
