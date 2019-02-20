#include <stdio.h>
#include<math.h>

int main()
{
	char x;
	float b,h,r;
	const float pi=3.141592;
	printf("¿Desea calcular el area del triangulo (t) o del circulo (c)?\n");
	scanf("%c",&x);
		if (x=='t')
		{
			printf("Introduzca la base y la atura sucesivamente para calcular el area\n");
			scanf("%f %f",&b,&h);
			printf("El area del triangulo es: %f", 0.5*b*h);
		}
		else if (x=='c')
		{
			printf("Introduzca el radio para calcular el area del circulo\n");
			scanf("%f",&r);
			printf("El area del circulo es: %f \n", pi*pow(r,2));
		}
		else 
		{
			printf("El area de esa figura no se puede calcular\n");
		}
	printf("Fin del programa\n");
	return 0;
}
