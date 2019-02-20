/*
Autor: Diego Gómez
Curso: Q103
Descripcion: Se pretende calcular el volumen y el area de un cilindro. Se ofrece la posibilidad de indicar el numero de tapas para calcular el area total.
*/



#include <stdio.h>

int main()
{
	
	const float pi = 3.14159;
	float radio, altura, area_total, volumen;
	int tapas;
	
	printf("Bienvenido al programa.\n");
	printf("A continuacion se le pedira una serie de datos para calcular el volumen y el area total de un cilindro.\n");
	printf("Indique cuantas tapas tiene el cilindro mediante los numeros: 0, 1, 2.\n");
	scanf("%d", &tapas);
	
	if (tapas!=0&&tapas!=1&&tapas!=2)
	{
		printf("Error.\n");
		//return 0; 
	}
	else 
	{
	
	printf("Introduzca el radio del cilindro en metros\n");
	scanf("%f", &radio);
	
	printf("Introduzca la altura del cilindro en metros\n");
	scanf("%f", &altura);
	
	volumen = pi*radio*radio*altura;
	printf("El volumen es: %.3f metros cubicos.\n", volumen);
	
	if (tapas==0)
	{
		area_total = 2*pi*radio*altura;
	printf("El area total es: %.3f metros cuadrados.\n", area_total);
	}

	else if(tapas==1)
	{
		area_total = (2*pi*radio*altura)+(pi*radio*radio);
	printf("El area total es: %.3f metros cuadrados.\n", area_total);
	}
	
	else if (tapas==2)
	{
		area_total = 2*pi*radio*(altura+radio);
	printf("El area total es: %.3f metros cuadrados.\n", area_total);
	}
	
	printf("Si quiere introducir nuevos datos, reinicie el programa.\n");
	
}
	return 0;
	
}
