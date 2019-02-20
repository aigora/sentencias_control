/*
Autora: Rosa Silverio Guzman
Grupo :	Q103
Descripcion : Saber si  un numero  es  real o complejo

*/

#include<stdio.h>
#include<math.h>

int main() {
	
	float a,d;
	printf("Introduce un numero y te dire si es real o complejo\n");
	scanf("%f",&a);
	d=sqrt(a);
	//printf("%f",d);
	
	if(d>=0)
	{
		printf("Es un numero real");
	}
	else
	{
		printf("Es un numero complejo");
	}
	return 0;
}
