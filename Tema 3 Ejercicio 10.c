/* Ejercicio 10
Se pide realizar un programa que calcule el máximo y el mínimo de dos datos tecleados por el
usuario y que deben estar en el rango [0.0 100.0]. Si alguno de los datos introducidos estuviera
fuera del rango se imprimirá un aviso de ERROR. */
#include <stdio.h>
int main(){
	float x1, x2;
	do{
		printf("Escribe el primer numero:\n");
		scanf("%f", &x1);
		printf("Escribe el segundo numero:\n");
		scanf("%f", &x2);
		
	if (x1<0 || x1>100)

			printf("Has elegido el primer numero mal:\n");

	else if (x2<0 || x2>100)
	
			printf("Has elegido el segundo numero mal:\n");
			
	else if((x1<0.0 || x1>100.00) && (x2<0.0 || x2>100.00 ))
	
			printf("Has elegido el primer numero mal y el segundo numero mal:\n");
	
	else
	
		printf("Has elegido bien los dos numeros:\n");
	}
	while((x1<0.0 || x1>100.00) || (x2<0.0 || x2>100.00 ));
	if(x1 > x2)
	{
			printf("El maximo sera %.2f\n", x1);
			printf("El minimo sera %.2f\n", x2);
	}
	else if(x1<x2)
	{
		printf("El maximo sera %.2f\n", x2);
		printf("El minimo sera %.2f\n", x1);

	}
	else
	printf("No se ha encontrado ni el maximo ni el minimo");
	
	return 0;
}
